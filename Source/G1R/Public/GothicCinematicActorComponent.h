#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilityTaskCameraFadeSetup.h"
#include "Templates/SubclassOf.h"
#include "GothicCinematicActorComponent.generated.h"

class AGothicCharacter;
class AGothicPlayerControllerBase;
class UCameraFadeManager;
class UGothicCinematicManagerSubsystem;
class UHUDCinematicController;
class UUserWidget;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicCinematicActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AGothicCharacter* m_Character;
    
    UPROPERTY()
    AGothicPlayerControllerBase* m_Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UUserWidget> m_TransitionWidgetClass;
    
private:
    UPROPERTY()
    UGothicCinematicManagerSubsystem* m_CinematicManagerSubsystem;
    
    UPROPERTY()
    UCameraFadeManager* m_CameraFade;
    
    UPROPERTY()
    UHUDCinematicController* m_HUDCinematicController;
    
public:
    UGothicCinematicActorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnSequencerFinished();
    
    UFUNCTION()
    void OnFadeOutFinished();
    
    UFUNCTION()
    void OnFadeInFinished();
    
    UFUNCTION(Client, Reliable)
    void Client_PlayCinematic();
    
    UFUNCTION(Client, Reliable)
    void Client_LastFadeOut(const FAbilityTaskCameraFadeSetup& FadeConfiguration);
    
    UFUNCTION(Client, Reliable)
    void Client_FirstFadeIn(const FAbilityTaskCameraFadeSetup& FadeConfiguration);
    
};


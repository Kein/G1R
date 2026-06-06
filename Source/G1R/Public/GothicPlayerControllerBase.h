#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Components/SlateWrapperTypes.h"
#include "BehaviorModuleOwner.h"
#include "CharacterStateProvider.h"
#include "ClientAuthoritativePlayerController.h"
#include "EInventoryTypes.h"
#include "Templates/SubclassOf.h"
#include "GothicPlayerControllerBase.generated.h"

class AGothicCharacter;
class AGothicCharacterState;
class AGothicHUDBase;
class APawn;
class UAudioEnvironmentRegionTrait;
class UAudioRegionTrait;
class UBehaviorModuleComponent;
class UControlCharacterComponent;
class UDebugPlayerWidget;
class UGothicAudioComponent;
class UGothicAudioOcclusionComponent;
class UGothicInputConfig;
class UGothicInputContextController;
class UGothicWeatherAudioComponent;
class UIndoorDetectionComponent;
class UPathFollowingComponent;
class UPlayerWidget;
class UPostProcessingRegionTrait;
class UQuest;
class UTransitionWidget;
class UUserWidget;

UCLASS()
class G1R_API AGothicPlayerControllerBase : public AClientAuthoritativePlayerController, public IBehaviorModuleOwner, public ICharacterStateProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UPathFollowingComponent* m_PathfollowingComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UIndoorDetectionComponent* m_IndoorDetectionComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UGothicAudioOcclusionComponent* m_AudioOcclusionComponent;
    
    UPROPERTY(Instanced)
    UBehaviorModuleComponent* m_BehaviorModuleComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGothicWeatherAudioComponent* m_WeatherAudioComponent;
    
    UPROPERTY()
    AGothicCharacter* m_GothicCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UUserWidget> m_WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UUserWidget> m_TransitionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UUserWidget> m_WidgetDebugClass;
    
    UPROPERTY(Instanced)
    UPlayerWidget* m_Widget;
    
    UPROPERTY(Instanced)
    UTransitionWidget* m_TransitionWidget;
    
    UPROPERTY(Instanced)
    UDebugPlayerWidget* m_DebugWidget;
    
    UPROPERTY(EditDefaultsOnly)
    UGothicInputConfig* m_GothicInputConfig;
    
    UPROPERTY()
    bool m_InvertedVerticalCamera;
    
    UPROPERTY()
    bool m_InvertedHorizontalCamera;
    
    UPROPERTY()
    float m_GeneralCameraSensitivity;
    
    UPROPERTY()
    float m_LeftStickYAxis;
    
    UPROPERTY()
    float m_LeftStickXAxis;
    
    UPROPERTY()
    float m_RightStickYAxis;
    
    UPROPERTY()
    float m_RightStickXAxis;
    
    UPROPERTY(Export)
    TSet<UAudioRegionTrait*> ActiveAudioRegionTraits;
    
    UPROPERTY(Export)
    TSet<UAudioEnvironmentRegionTrait*> ActiveAudioEnvironmentRegionTraits;
    
    UPROPERTY(Export)
    TSet<UGothicAudioComponent*> ActiveAudioComponents;
    
public:
    UPROPERTY(Export, Transient)
    TSet<UPostProcessingRegionTrait*> m_ActivePostProcessingRegions;
    
    UPROPERTY(Instanced)
    UControlCharacterComponent* m_ControlCharacterComponent;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGothicInputContextController> m_InputContextControllerClass;
    
    UPROPERTY()
    UGothicInputContextController* m_GothicInputContextController;
    
    AGothicPlayerControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void UpdateControllerModifiers(bool InvertedHorizontalCamera, bool InvertedVerticalCamera, float CameraSensitivity);
    
    UFUNCTION(Exec)
    void ToggleHUD();
    
    UFUNCTION(BlueprintCallable)
    void SetHudVisibility(ESlateVisibility Visibility);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveAudioComponentsPaused(bool bPaused);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, BlueprintPure=false)
    void Server_NotifyPlayerViewedQuest(TSubclassOf<UQuest> QuestClass) const;
    
    UFUNCTION(Reliable, Server)
    void Server_EquipItemToCharacter(const AGothicCharacter* characterToEquip, int32 ID, EInventoryTypes InventoryType);
    
protected:
    UFUNCTION()
    void OnNoMotionController(const FGameplayTag CallbackTag, int32 NewCount) const;
    
    UFUNCTION()
    void OnNoMotionCharacter(const FGameplayTag CallbackTag, int32 NewCount);
    
    UFUNCTION()
    void OnNoMotionAll(const FGameplayTag CallbackTag, int32 NewCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void ModifyTextForSubtitle(FText& TextToBeDisplayed, FText& SecondaryTextToBeDisplayed);
    
    UFUNCTION(BlueprintPure)
    UGothicWeatherAudioComponent* GetWeatherAudioComponent() const;
    
    UFUNCTION(BlueprintPure)
    UPlayerWidget* GetPlayerWidget() const;
    
    UFUNCTION(BlueprintPure)
    UIndoorDetectionComponent* GetIndoorDetectionComponent() const;
    
    UFUNCTION(BlueprintPure)
    AGothicHUDBase* GetGothicHUD() const;
    
    UFUNCTION(BlueprintPure)
    UAudioEnvironmentRegionTrait* GetCurrentAudioEnvironment() const;
    
    UFUNCTION(Client, Reliable)
    void ClientSetSpectatorCamera(const FVector cameraLocation, const FRotator cameraRotation);
    
    UFUNCTION(Client, Reliable)
    void ClientOnPossess(APawn* aPawn);
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* BP_GetCharacterState() const;
    

    // Fix for true pure virtual functions not being implemented
};


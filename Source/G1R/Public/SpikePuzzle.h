#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "SpikePuzzle.generated.h"

class AActor;
class AGothicCharacter;

UCLASS()
class G1R_API ASpikePuzzle : public ATriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AGothicCharacter*> m_Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DamageTimeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DisabledTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_FirstStageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_FirstButtonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_SecondButtonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_FinalLeverName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* m_FinalBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_ButtonResetName;
    
protected:
    UPROPERTY()
    TArray<FGameplayMessageListenerHandle> m_Listeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DamageEventDelay;
    
public:
    ASpikePuzzle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintNativeEvent)
    void BP_DoDamage(AGothicCharacter* Character);
    
};


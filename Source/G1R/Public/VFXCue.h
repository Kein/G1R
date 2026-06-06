#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayEffectTypes.h"
#include "VFXCue.generated.h"

UCLASS(Abstract)
class G1R_API AVFXCue : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AActor* m_removeTarget;
    
    UPROPERTY()
    AActor* m_Instigator;
    
public:
    AVFXCue(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    bool WhileActive(AActor* MyTarget, const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintNativeEvent)
    bool OnRemove(const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintNativeEvent)
    bool OnExecute(AActor* MyTarget, const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCastSpellLevelChanged(int32 spellLevel);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCancel(float totalCastingTime);
    
    UFUNCTION(BlueprintNativeEvent)
    bool OnActive(AActor* MyTarget, const FGameplayCueParameters& Parameters);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MarkAsAbleToRemove();
    
};


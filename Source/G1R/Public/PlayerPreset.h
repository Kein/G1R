#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "PlayerPreset.generated.h"

class UScriptGameplayEffect;

UCLASS(Abstract)
class G1R_API UPlayerPreset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer TagsToRemove;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UScriptGameplayEffect>> effectsToApply;
    
    UPROPERTY(EditAnywhere)
    int32 MaxHealth;
    
    UPROPERTY(EditAnywhere)
    int32 MaxMana;
    
    UPROPERTY(EditAnywhere)
    int32 Strength;
    
    UPROPERTY(EditAnywhere)
    int32 Dexterity;
    
    UPROPERTY(EditAnywhere)
    int32 Toughness;
    
    UPROPERTY(EditAnywhere)
    int32 Experience;
    
    UPROPERTY(EditAnywhere)
    int32 Level;
    
    UPROPERTY(EditAnywhere)
    int32 SkillPoints;
    
    UPROPERTY(EditAnywhere)
    int32 MaxSuperArmor;
    
    UPlayerPreset();

};


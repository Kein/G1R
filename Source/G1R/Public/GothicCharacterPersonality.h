#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GothicCharacterPersonality.generated.h"

UCLASS(BlueprintType)
class G1R_API UGothicCharacterPersonality : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, float> WeaponPreferenceByType;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, float> WeaponPreferenceBySpec;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer OwnedPersonalityTags;
    
    UGothicCharacterPersonality();

    UFUNCTION(BlueprintPure)
    float GetPreferenceOfWeaponType(const FGameplayTag& WeaponType) const;
    
    UFUNCTION(BlueprintPure)
    float GetPreferenceOfWeaponSpecs(const FGameplayTagContainer& WeaponSpecs) const;
    
};


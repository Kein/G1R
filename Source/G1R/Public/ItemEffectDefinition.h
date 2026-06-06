#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "ItemEffectDefinition.generated.h"

class UGameplayEffect;
class UItemEffectDefinition;

UCLASS(BlueprintType)
class G1R_API UItemEffectDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> m_Effect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, float> m_Magnitudes;
    
    UItemEffectDefinition();

    UFUNCTION(BlueprintCallable)
    UItemEffectDefinition* AddMag(const FGameplayTag Tag, const float Amount);
    
};


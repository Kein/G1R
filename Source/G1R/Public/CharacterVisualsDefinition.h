#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterVisualsDefinition.generated.h"

class UAnimSequence;

UCLASS(Abstract, BlueprintType)
class G1R_API UCharacterVisualsDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> m_WeaponHolderOffsets;
    
    UCharacterVisualsDefinition();

};


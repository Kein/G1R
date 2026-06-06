#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "CharacterBloodSettings.generated.h"

UCLASS(BlueprintType)
class G1R_API UCharacterBloodSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_HasBlood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_CanDecompose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor m_BloodColor;
    
    UCharacterBloodSettings();

};


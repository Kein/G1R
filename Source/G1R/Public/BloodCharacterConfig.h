#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BloodCharacterContainer.h"
#include "BloodCharacterData.h"
#include "EBloodType.h"
#include "Templates/SubclassOf.h"
#include "BloodCharacterConfig.generated.h"

class AGothicCharacter;

UCLASS(BlueprintType, Const)
class G1R_API UBloodCharacterConfig : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EBloodType, FBloodCharacterData> BloodDataLookup;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EBloodType, FBloodCharacterContainer> BloodCharactersLookup;
    
public:
    UBloodCharacterConfig();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static AGothicCharacter* GetGothicCharacterReference(TSubclassOf<AGothicCharacter> Character);
    
};


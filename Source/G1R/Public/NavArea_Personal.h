#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "NavArea_Personal.generated.h"

class AGothicCharacter;

UCLASS()
class G1R_API UNavArea_Personal : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSet<FName> OwnedByCharacterUniqueNames;
    
    UPROPERTY(EditDefaultsOnly)
    TSet<TSubclassOf<AGothicCharacter>> OwnedByCharacters;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer OwnedByCharactersWithTag;
    
public:
    UNavArea_Personal();

};


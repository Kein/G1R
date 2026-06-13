#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EGothicSaveGameVersion.h"
#include "Templates/SubclassOf.h"
#include "GothicSavegameMigrationScript.generated.h"

class UGothicPersistentDataGame;
class UItemDefinition;

UCLASS(Abstract, Blueprintable)
class G1R_API UGothicSavegameMigrationScript : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGothicSaveGameVersion ApplyToVersionsAfterIncluding;
    
    UPROPERTY(EditAnywhere)
    EGothicSaveGameVersion ApplyToVersionsBefore;
    
    UPROPERTY(EditAnywhere)
    int32 Order;
    
    UGothicSavegameMigrationScript();

    UFUNCTION(BlueprintCallable)
    void SetItemCountForNPCsByUniqueName(FName UniqueName, TSubclassOf<UItemDefinition> ItemDefinitionm, int32 Count);
    
    UFUNCTION(BlueprintNativeEvent)
    bool Migrate(UGothicPersistentDataGame* SaveGame) const;
    
};


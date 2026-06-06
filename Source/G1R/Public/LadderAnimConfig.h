#pragma once
#include "CoreMinimal.h"
#include "ItemAnimConfig.h"
#include "Templates/SubclassOf.h"
#include "LadderAnimConfig.generated.h"

class UComboAttackConfig;

UCLASS(Abstract, Const, EditInlineNew)
class G1R_API ULadderAnimConfig : public UItemAnimConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UComboAttackConfig> m_Kick;
    
public:
    ULadderAnimConfig();

};


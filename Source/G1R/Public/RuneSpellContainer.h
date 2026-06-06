#pragma once
#include "CoreMinimal.h"
#include "SpellContainer.h"
#include "Templates/SubclassOf.h"
#include "RuneSpellContainer.generated.h"

class UUserWidget;
class UWeaponDefinition;

UCLASS(Abstract, EditInlineNew)
class G1R_API URuneSpellContainer : public USpellContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UUserWidget> m_CrosshairWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsTargetingIndicatorEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_CanEquipAfterUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RequiredMagicCircleLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UWeaponDefinition>> m_WeaponsDefinitions;
    
    URuneSpellContainer();

};


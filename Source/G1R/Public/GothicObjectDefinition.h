#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "GothicObjectDefinition.generated.h"

class UTexture2D;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class UGothicObjectDefinition : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText m_Name;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> m_Icon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText m_Description;
    
protected:
    UPROPERTY()
    FName m_UniqueName;
    
public:
    UGothicObjectDefinition();

};


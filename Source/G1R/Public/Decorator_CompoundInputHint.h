#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "Decorator_CompoundInputHint.generated.h"

class UDataTable;
class URichTextBlock;

UCLASS(Abstract)
class G1R_API UDecorator_CompoundInputHint : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_FlattenRows;
    
    UPROPERTY(EditAnywhere)
    float m_CompoundScale;
    
protected:
    UPROPERTY(Instanced, Transient)
    URichTextBlock* m_Owner;
    
    UPROPERTY(EditAnywhere)
    UDataTable* m_DataTable;
    
public:
    UDecorator_CompoundInputHint();

};


#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_Prop.generated.h"

class UStaticMesh;

UCLASS(Abstract, CollapseCategories, Deprecated, NotPlaceable)
class UDEPRECATED_AnimNotify_Prop : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_SocketName;
    
    UPROPERTY(EditAnywhere)
    FName m_PropName;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* m_StaticMesh;
    
public:
    UDEPRECATED_AnimNotify_Prop();

};


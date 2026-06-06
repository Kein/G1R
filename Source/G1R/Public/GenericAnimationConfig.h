#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "GenericAnimationConfig.generated.h"

class UAnimInstance;
class UAnimSequence;

UCLASS(BlueprintType, Const, EditInlineNew)
class G1R_API UGenericAnimationConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* m_WalkAnimSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* m_WalkLeftAnimSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* m_WalkRightAnimSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* m_RunAnimSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* m_RunLeftAnimSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* m_RunRightAnimSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* m_SprintAnimSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* m_SprintLeftAnimSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* m_SprintRightAnimSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* m_IdleAnimSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequence* m_IdleAnimSequence2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UAnimInstance> m_IKLinkedLayer;
    
public:
    UGenericAnimationConfig();

};


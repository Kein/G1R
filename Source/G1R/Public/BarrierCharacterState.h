#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GothicFXInstanceHandle.h"
#include "BarrierCharacterState.generated.h"

class AGothicCharacter;
class UGothicFXComponent;

UCLASS()
class UBarrierCharacterState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FGothicFXInstanceHandle m_SFXHandle;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AGothicCharacter> Character;
    
    UPROPERTY()
    FGameplayTag m_FX_Tag;
    
private:
    UPROPERTY(Instanced)
    UGothicFXComponent* m_FXComp;
    
public:
    UBarrierCharacterState();

};


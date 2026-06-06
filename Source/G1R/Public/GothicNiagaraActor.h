#pragma once
#include "CoreMinimal.h"
#include "NiagaraActor.h"
#include "GothicNiagaraActor.generated.h"

class UGothicNiagaraAudioComponent;

UCLASS()
class G1R_API AGothicNiagaraActor : public ANiagaraActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UGothicNiagaraAudioComponent* AudioComponent;
    
public:
    AGothicNiagaraActor(const FObjectInitializer& ObjectInitializer);

};


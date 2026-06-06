#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceExport.h"
#include "GothicAudioComponent.h"
#include "GothicNiagaraAudioComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicNiagaraAudioComponent : public UGothicAudioComponent, public INiagaraParticleCallbackHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float AudioCooldown;
    
public:
    UGothicNiagaraAudioComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


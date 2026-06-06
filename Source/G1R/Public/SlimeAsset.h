#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SlimeAsset.generated.h"

class UAnimMontage;
class UMaterialInstanceDynamic;
class USkeletalMeshComponent;

UCLASS()
class USlimeAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* m_Montage;
    
    UPROPERTY(Instanced)
    USkeletalMeshComponent* m_SkeletalMeshInstantiated;
    
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> m_SlimeMaterials;
    
    USlimeAsset();

    UFUNCTION()
    void SlimeBreakEffect(float BlendIn);
    
    UFUNCTION()
    void FadeOut(float DeltaOpacity);
    
};


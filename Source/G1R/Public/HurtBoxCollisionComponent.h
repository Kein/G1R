#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "HurtCollisionInterface.h"
#include "HurtBoxCollisionComponent.generated.h"

class UGothicBloodComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UHurtBoxCollisionComponent : public UBoxComponent, public IHurtCollisionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ForcePitchAtZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, float> m_PrioritiesByWeapon;
    
    UPROPERTY(Instanced)
    UGothicBloodComponent* GothicBloodComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer m_tags;
    
public:
    UHurtBoxCollisionComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


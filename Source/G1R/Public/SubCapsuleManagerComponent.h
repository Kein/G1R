#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GothicActorComponentInterface.h"
#include "SubCapsuleManagerComponent.generated.h"

class UCapsuleComponent;
class UGothicCharacterSubCapsuleComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API USubCapsuleManagerComponent : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    TArray<UGothicCharacterSubCapsuleComponent*> m_SubCapsuleComponents;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UCapsuleComponent> m_MainCapsuleComponent;
    
public:
    USubCapsuleManagerComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


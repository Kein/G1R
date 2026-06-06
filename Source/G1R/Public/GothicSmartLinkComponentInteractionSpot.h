#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ENavLinkState.h"
#include "GothicSmartLinkComponentGeneric.h"
#include "InteractionSpotHandle.h"
#include "InteractionSpotOwner.h"
#include "GothicSmartLinkComponentInteractionSpot.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicSmartLinkComponentInteractionSpot : public UGothicSmartLinkComponentGeneric, public IInteractionSpotOwner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer InteractionAllowedSpecies;
    
    UPROPERTY(EditAnywhere)
    bool bUseInteractionAnchors;
    
    UPROPERTY(EditAnywhere)
    bool bUseTaskForOpen;
    
    UPROPERTY(EditAnywhere)
    bool bUseTaskForClose;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag OpenTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag CloseTag;
    
    UPROPERTY(EditAnywhere)
    bool bTraverseWalkingWhenIsOpenUponArrival;
    
    UPROPERTY()
    ENavLinkState State;
    
    UPROPERTY()
    float InteractionSpotRadius;
    
    UPROPERTY()
    FInteractionSpotHandle LinkSpotHandleStart;
    
    UPROPERTY()
    FInteractionSpotHandle LinkSpotHandleEnd;
    
    UPROPERTY()
    float OffsetLinkFromAnchor;
    
public:
    UGothicSmartLinkComponentInteractionSpot(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


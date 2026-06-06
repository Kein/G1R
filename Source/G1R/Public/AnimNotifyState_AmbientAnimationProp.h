#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AnimNotifyState_Base.h"
#include "Templates/SubclassOf.h"
#include "AnimNotifyState_AmbientAnimationProp.generated.h"

class AActor;
class ASkeletalMeshActor;
class AStaticMeshActor;
class UAnimMontage;
class USkeletalMesh;
class UStaticMesh;

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UAnimNotifyState_AmbientAnimationProp : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AttachToSocket;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* StaticMesh;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* AnimationMontage;
    
    UPROPERTY(EditAnywhere)
    bool bFollowCharacterAnimation;
    
    UPROPERTY(EditAnywhere)
    FTransform RelativeTransform;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FName PropActorTag;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TSubclassOf<AStaticMeshActor> StaticMeshActorClass;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TSubclassOf<ASkeletalMeshActor> SkeletalMeshActorClass;
    
    UAnimNotifyState_AmbientAnimationProp();

private:
    UFUNCTION()
    void OnOwnerEndPlay(AActor* InOwner, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) const;
    
    UFUNCTION()
    void OnOwnerDestroyed(AActor* InOwner) const;
    
};


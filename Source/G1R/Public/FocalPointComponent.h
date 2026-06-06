#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EGothicFocalPointMode.h"
#include "EGothicFocusPriority.h"
#include "FocalPointComponent.generated.h"

class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, Within=GothicCharacter, meta=(BlueprintSpawnableComponent))
class G1R_API UFocalPointComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFocalPointComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFocalPointComponent(const USceneComponent* NewFocalComponent, EGothicFocusPriority Priority, EGothicFocalPointMode Mode, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    void SetFocalPoint(const FVector& NewFocalPoint, EGothicFocusPriority Priority, EGothicFocalPointMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void ClearFocalPoint(EGothicFocusPriority Priority);
    
    UFUNCTION(BlueprintPure)
    bool BP_GetFocalPoint(FVector& OutFocalPoint) const;
    
};


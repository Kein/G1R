#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAllAxis.h"
#include "MotionTraitField.h"
#include "Trajectory.h"
#include "MMBlueprintFunctionLibrary.generated.h"

class UCameraComponent;

UCLASS(BlueprintType)
class MOTIONSYMPHONY_API UMMBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMMBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void TransformFromUpForwardAxis(UPARAM(Ref) FTransform& OutTransform, const EAllAxis UpAxis, const EAllAxis ForwardAxis);
    
    UFUNCTION(BlueprintCallable)
    static void SetTrajectoryPoint(UPARAM(Ref) FTrajectory& OutTrajectory, const int32 Index, const FVector Position, const float RotationZ);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveTraits(const TArray<FString>& TraitNames, UPARAM(Ref) FMotionTraitField& OutTraitField);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveTraitField(const FMotionTraitField TraitsToRemove, UPARAM(Ref) FMotionTraitField& OutTraitField);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveTrait(const FString& TraitName, UPARAM(Ref) FMotionTraitField& OutTraitField);
    
    UFUNCTION(BlueprintCallable)
    static void InitializeTrajectory(UPARAM(Ref) FTrajectory& OutTrajectory, const int32 TrajectoryCount);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetVectorRelativeToCamera(const float InputX, const float InputY, UCameraComponent* CameraComponent);
    
    UFUNCTION(BlueprintCallable)
    static FMotionTraitField GetTraitHandleFromArray(const TArray<FString>& TraitNames);
    
    UFUNCTION(BlueprintCallable)
    static FMotionTraitField GetTraitHandle(const FString& TraitName);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetInputVectorRelativeToCamera(FVector InputVector, UCameraComponent* CameraComponent);
    
    UFUNCTION(BlueprintCallable)
    static FMotionTraitField CreateMotionTraitFieldFromArray(const TArray<FString>& TraitNames);
    
    UFUNCTION(BlueprintCallable)
    static FMotionTraitField CreateMotionTraitField(const FString& TraitName);
    
    UFUNCTION(BlueprintCallable)
    static void ClearTraitField(UPARAM(Ref) FMotionTraitField& OutTraitField);
    
    UFUNCTION(BlueprintCallable)
    static void AddTraits(const TArray<FString>& TraitNames, UPARAM(Ref) FMotionTraitField& OutTraitField);
    
    UFUNCTION(BlueprintCallable)
    static void AddTraitField(const FMotionTraitField NewTraits, UPARAM(Ref) FMotionTraitField& OutTraitField);
    
    UFUNCTION(BlueprintCallable)
    static void AddTrait(const FString& TraitName, UPARAM(Ref) FMotionTraitField& OutTraitField);
    
};


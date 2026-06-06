#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GothicCharacterMixins.generated.h"

class AActor;
class AGothicCharacter;
class USceneComponent;

UCLASS(BlueprintType)
class UGothicCharacterMixins : public UObject {
    GENERATED_BODY()
public:
    UGothicCharacterMixins();

    UFUNCTION(BlueprintCallable)
    static void SetTargetedComponent(const AGothicCharacter* This, USceneComponent* TargetComponent);
    
    UFUNCTION(BlueprintCallable)
    static void SetTargetedActor(const AGothicCharacter* This, AActor* TargetActor, bool isCameraRelevant);
    
    UFUNCTION(BlueprintCallable)
    static bool HasAnyOverlappingNPCs(const AGothicCharacter* This, const FVector& TestLocation, TArray<AGothicCharacter*>& OutOtherCharacters, const FVector& ThisExtentScale);
    
    UFUNCTION(BlueprintCallable)
    static bool HasAnyOverlappingCharacters(const AGothicCharacter* This, const FVector& TestLocation, TArray<AGothicCharacter*>& OutOtherCharacters, const FVector& ThisExtentScale);
    
    UFUNCTION(BlueprintCallable)
    static bool HasAliveUndefeatedOverlappingNPCs(const AGothicCharacter* This, const FVector& TestLocation, TArray<AGothicCharacter*>& OutOtherCharacters, const FVector& ThisExtentScale);
    
    UFUNCTION(BlueprintCallable)
    static bool HasAliveUndefeatedOverlappingCharacters(const AGothicCharacter* This, const FVector& TestLocation, TArray<AGothicCharacter*>& OutOtherCharacters, const FVector& ThisExtentScale);
    
    UFUNCTION(BlueprintCallable)
    static USceneComponent* GetTargetedComponent(const AGothicCharacter* This);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetTargetedActor(const AGothicCharacter* This);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EPathFollowingStatus::Type> GetPathfollowingStatus(const AGothicCharacter* This);
    
    UFUNCTION()
    static float GetDistanceBetweenCollisions(const AGothicCharacter* Self, const AGothicCharacter* Other);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AGothicCharacter*> GetAllTargetingThis(const AGothicCharacter* This);
    
};


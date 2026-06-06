#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DebugScriptLibrary.generated.h"

class AGothicCharacter;
class UObject;

UCLASS(BlueprintType)
class UDebugScriptLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebugScriptLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawText(UObject* WorldContextObject, FVector position, const FString& String, FColor Color, float Size, float Duration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawSphere(UObject* WorldContextObject, FVector Center, float Radius, FColor Color, float Lifetime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawMovingPearlChain(UObject* WorldContextObject, const TArray<FVector>& PointChain, FColor Color, float LineThickness, float PearlSize, float PearlDistance, float PearlSpeed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawLine(UObject* WorldContextObject, FVector Start, FVector End, FColor Color, float Thickness, float Lifetime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawCube(UObject* WorldContextObject, FVector Center, float Radius, FColor Color, float Lifetime, int32 Alpha);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawCircle(UObject* WorldContextObject, FVector Center, float Radius, FColor Color, float Lifetime, int32 Alpha);
    
    UFUNCTION(BlueprintCallable)
    static void DrawCharacterCapsule(AGothicCharacter* GothicCharacter, FVector ActorLocation, FColor Color, float Thickness, float Lifetime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawArcXY(UObject* WorldContextObject, const FVector& Center, float Radius, float DegreesStart, float DegreesEnd, FColor Color, float Thickness, float Lifetime);
    
};


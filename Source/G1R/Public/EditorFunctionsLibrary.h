#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditorFunctionsLibrary.generated.h"

class AActor;
class UObject;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(BlueprintType)
class G1R_API UEditorFunctionsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEditorFunctionsLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* SpawnActorMeshInSocket(UObject* WorldContextObject, USkeletalMeshComponent* MeshComp, UStaticMesh* StaticMeshToSpawn, FName PropName, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    static void SetDistanceFieldResolutionScale(UStaticMeshComponent* SMComponent, float NewDFResolutionScale);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DoSetDistanceFieldResolutionScaleToAllSceneMeshes(UObject* WorldContextObject, float NewDFResolutionScale);
    
};


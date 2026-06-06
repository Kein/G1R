#include "EditorFunctionsLibrary.h"

UEditorFunctionsLibrary::UEditorFunctionsLibrary() {
}

AActor* UEditorFunctionsLibrary::SpawnActorMeshInSocket(UObject* WorldContextObject, USkeletalMeshComponent* MeshComp, UStaticMesh* StaticMeshToSpawn, FName PropName, FName SocketName) {
    return NULL;
}

void UEditorFunctionsLibrary::SetDistanceFieldResolutionScale(UStaticMeshComponent* SMComponent, float NewDFResolutionScale) {
}

void UEditorFunctionsLibrary::DoSetDistanceFieldResolutionScaleToAllSceneMeshes(UObject* WorldContextObject, float NewDFResolutionScale) {
}



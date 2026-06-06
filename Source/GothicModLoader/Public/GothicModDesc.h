#pragma once
#include "CoreMinimal.h"
#include "EGothicModLoadOrder.h"
#include "GothicModDependency.h"
#include "GothicModDesc.generated.h"

USTRUCT(BlueprintType)
struct GOTHICMODLOADER_API FGothicModDesc {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Name;
    
    UPROPERTY(EditAnywhere)
    FString title;
    
    UPROPERTY(EditAnywhere)
    FString Author;
    
    UPROPERTY(EditAnywhere)
    FString ProjectWebsiteURL;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    TArray<FGothicModDependency> Dependencies;
    
    UPROPERTY(EditAnywhere)
    FString ModVersion;
    
    UPROPERTY(EditAnywhere)
    EGothicModLoadOrder LoadOrder;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> ScriptPreprocessorDefines;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FString> PakMountPoints;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysEnabled;
    
    FGothicModDesc();
};


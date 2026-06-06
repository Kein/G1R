#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "PhotoModeConfig.generated.h"

class UTexture2D;

UCLASS(Abstract, BlueprintType, EditInlineNew, MinimalAPI)
class UPhotoModeConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxPlayerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxCameraSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> m_LUTNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UTexture2D>> m_LUTAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UTexture2D>> m_StickerAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> m_ParticleNames;
    
    UPhotoModeConfig();

    UFUNCTION(BlueprintCallable)
    void AddSticker(FName StickerAsset);
    
    UFUNCTION(BlueprintCallable)
    void AddParticle(const FString& ParticleName, FName ParticleAsset);
    
    UFUNCTION(BlueprintCallable)
    void AddLut(const FString& LutName, FName LutAsset);
    
};


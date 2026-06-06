#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Sticker.h"
#include "Templates/SubclassOf.h"
#include "PhotoModeManager.generated.h"

class AEmitter;
class AGothicCharacter;
class AGothicPlayerControllerBase;
class AHUD;
class APhotoModePawn;
class APointLight;
class UCameraModifier;
class UCanvas;
class UParticleSystem;
class UPhotoModeCameraModifier;
class UPhotoModeConfig;
class UTexture2D;
class UWorldDefinition;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UPhotoModeManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UPhotoModeConfig* m_PhotoModeConfig;
    
    UPROPERTY()
    TArray<UTexture2D*> m_LoadedLUTs;
    
    UPROPERTY()
    TArray<UTexture2D*> m_LoadedStickers;
    
    UPROPERTY()
    TArray<UParticleSystem*> m_LoadedParticles;
    
    UPROPERTY()
    AGothicCharacter* m_PreviousOwner;
    
    UPROPERTY()
    AGothicPlayerControllerBase* m_PlayerController;
    
    UPROPERTY()
    UCameraModifier* m_PreviousCameraModifier;
    
    UPROPERTY()
    APhotoModePawn* m_PhotoModePawn;
    
    UPROPERTY()
    UPhotoModeCameraModifier* m_PhotoModeCameraModifier;
    
    UPROPERTY()
    AEmitter* m_Emitter;
    
    UPROPERTY()
    TArray<APointLight*> m_Lights;
    
    UPROPERTY()
    TArray<FSticker> m_Stickers;
    
    UPROPERTY()
    TArray<UTexture2D*> m_SavedImages;
    
    UPROPERTY()
    UTexture2D* m_FullScreenTest;
    
private:
    UPROPERTY()
    TSubclassOf<UWorldDefinition> m_WorldDefinition;
    
public:
    UPhotoModeManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnScreenshotCaptured(int32 inSizeX, int32 inSizeY, const TArray<FColor>& rawPixels);
    
    UFUNCTION()
    void OnDrawHud(AHUD* HUD, UCanvas* Canvas);
    
};


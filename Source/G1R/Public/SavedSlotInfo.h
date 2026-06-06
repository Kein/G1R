#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "SavedSlotInfo.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class G1R_API USavedSlotInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString SlotName;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_IsPlayerSaveNameCustom;
    
    UPROPERTY(BlueprintReadOnly)
    double TimePlayed;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime ProfileDate;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Chapter;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsQuicksave;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsAutosave;
    
    UPROPERTY(BlueprintReadOnly)
    FString ScreenshotFilePath;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> CompressedBitmap;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SizeX;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SizeY;
    
    USavedSlotInfo();

    UFUNCTION(BlueprintCallable)
    UTexture2D* GetImage();
    
};


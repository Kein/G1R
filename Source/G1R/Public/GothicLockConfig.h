#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GothicLockConfig.generated.h"

UCLASS(Abstract, BlueprintType, DefaultToInstanced, EditInlineNew)
class G1R_API UGothicLockConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_UniqueName;
    
    UGothicLockConfig();

    UFUNCTION(BlueprintCallable)
    void AddPiece(int32 ID, int32 Rotation);
    
    UFUNCTION(BlueprintCallable)
    void AddConnection(const int32 ID, const int32 connectedId, const int32 Direction);
    
};


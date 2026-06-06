#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "TeleportExtraData.generated.h"

UCLASS(Abstract, BlueprintType)
class G1R_API UTeleportExtraData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_TeleportMapFreepointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, int32> m_RequiredData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, int32> m_SetOnFinishData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, int32> m_SetOnStartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_MontageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_UnEquipBefore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_TagsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_TagsToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_MustSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_MustDisable;
    
    UTeleportExtraData();

};


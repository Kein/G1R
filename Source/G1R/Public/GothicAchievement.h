#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GothicAchievement.generated.h"

class ULongTermMemoryComponent;

UCLASS(Abstract, Blueprintable)
class UGothicAchievement : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString ID;
    
    UPROPERTY(EditDefaultsOnly)
    FString StatId;
    
    UPROPERTY(EditDefaultsOnly)
    FString Description;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxAmount;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag RequiredMemoryTag;
    
    UGothicAchievement();

    UFUNCTION(BlueprintImplementableEvent)
    int32 GetProgress(ULongTermMemoryComponent* LongTermMemoryComponent) const;
    
};


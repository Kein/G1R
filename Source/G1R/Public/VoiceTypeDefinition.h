#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "VoicelineAssignment.h"
#include "VoiceTypeDefinition.generated.h"

UCLASS(BlueprintType, Const)
class UVoiceTypeDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag VoiceTypeTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FVoicelineAssignment> Texts;
    
    UVoiceTypeDefinition();

};


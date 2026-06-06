#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "VoiceTypeSubsystem.generated.h"

class UGenericVoicelineDefinition;
class UVoiceTypeDefinition;

UCLASS()
class G1R_API UVoiceTypeSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<FGameplayTag, UGenericVoicelineDefinition*> GenericVoicelinesByTag;
    
    UPROPERTY()
    TMap<FGameplayTag, UVoiceTypeDefinition*> VoiceTypesByTag;
    
public:
    UVoiceTypeSubsystem();

};


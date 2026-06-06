#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GothicGenericMagicComponent.h"
#include "Templates/SubclassOf.h"
#include "GothicSummonManagerComponent.generated.h"

class AActor;
class AGothicNPCState;
class UAIState_DailyRoutine;
class UGameplayEffect;
class USpawnAIAgentDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicSummonManagerComponent : public UGothicGenericMagicComponent {
    GENERATED_BODY()
public:
    UGothicSummonManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDelayedSpawn(AActor* SummonerActor, TSubclassOf<UGameplayEffect> SummonedEffect, TSubclassOf<USpawnAIAgentDefinition> SpawnAIAgentDefinition, FVector position, TSubclassOf<UAIState_DailyRoutine> DailyRoutine, AActor* SummonCreatureVisualEffect, float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AGothicNPCState* DoDelayedSpawn_Scriptable(AActor* SummonerActor, TSubclassOf<UGameplayEffect> SummonedEffect, TSubclassOf<USpawnAIAgentDefinition> SpawnAIAgentDefinition, FVector position, TSubclassOf<UAIState_DailyRoutine> DailyRoutine, AActor* SummonCreatureVisualEffect);
    
};


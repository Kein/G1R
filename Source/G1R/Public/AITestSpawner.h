#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "WaynetRelevantInterface.h"
#include "AITestSpawner.generated.h"

class UAIState_DailyRoutine;
class UChildActorComponent;
class USkeletalMeshComponent;
class USpawnAIAgentDefinition;

UCLASS()
class G1R_API AAITestSpawner : public AActor, public IWaynetRelevantInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USpawnAIAgentDefinition> CharacterKind;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIState_DailyRoutine> DailyRoutine;
    
    UPROPERTY(EditAnywhere, Instanced)
    UChildActorComponent* PreviewCharacterActorComponent;
    
    UPROPERTY(Instanced)
    USkeletalMeshComponent* OldRootComponent;
    
    AAITestSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnCharacter();
    

    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "GameplayObjectWithEditorIcon.h"
#include "Templates/SubclassOf.h"
#include "GothicWorldActor.generated.h"

class UWorldItemSpawnConfig;
class UWorldPointManagerConfig;

UCLASS()
class G1R_API AGothicWorldActor : public AGameplayObjectWithEditorIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSubclassOf<UWorldPointManagerConfig> m_WorldPointManagerConfig;
    
    UPROPERTY()
    TSubclassOf<UWorldItemSpawnConfig> m_WorldItemSpawnConfig;
    
    UPROPERTY(EditAnywhere)
    bool m_IsGothicWorldActorEnabled;
    
public:
    AGothicWorldActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnGameMapLoadedComplete(bool isNewGame);
    
};


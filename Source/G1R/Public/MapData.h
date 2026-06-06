#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "InstancedStruct.h"
#include "MapMarkerArrayData.h"
#include "MapPlayerPosAndRot.h"
#include "MapData.generated.h"

class AActor;
class AGothicCharacter;
class APlayerController;
class UMapData;
class UUIMapConfigDefinition;

UCLASS(BlueprintType)
class G1R_API UMapData : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AActor* m_WorldMapBoundingBox;
    
    UPROPERTY()
    TMap<FGameplayTag, AActor*> m_AreaBoxesDataMap;
    
    UPROPERTY()
    TMap<FGameplayTag, FMapMarkerArrayData> m_MapsMarkersData;
    
    UPROPERTY()
    TMap<FGameplayTag, UUIMapConfigDefinition*> m_MapsCanUsePlayer;
    
    UPROPERTY()
    TSet<UUIMapConfigDefinition*> m_MapsObtainedByPlayer;
    
public:
    UMapData();

    UFUNCTION(BlueprintCallable)
    void UnregisterMapVolume(const FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void TeleportActorToNormalized2DPosition(AGothicCharacter* Character, FVector2D position);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMarkerFromMap(FGameplayTag _GameplayTag, FVector2D _Position);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMapVolume(AActor* Volume, FGameplayTag Tag);
    
    UFUNCTION(BlueprintPure)
    FInstancedStruct GetSaveData() const;
    
    UFUNCTION(BlueprintCallable)
    FMapPlayerPosAndRot GetNormalized2DPositionAndRotationFromActor(AActor* Actor, FGameplayTag MapTag);
    
    UFUNCTION(BlueprintCallable)
    FMapMarkerArrayData GetMarkersArrayFromTag(FGameplayTag _GameplayTag);
    
    UFUNCTION(BlueprintCallable)
    static UMapData* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetActorMapTags(APlayerController* _PlayerController);
    
    UFUNCTION(BlueprintCallable)
    bool AddMarkerToMap(FGameplayTag _GameplayTag, FVector2D _Position, FGameplayTag _MarkerTag);
    
};


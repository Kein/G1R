#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "WorldDefinition.generated.h"

class AItemVisualWorld;
class UAnimInstance;
class UCameraDefinition;
class UInteractCameraDefinition;
class UInteractiveObjectDefinition;
class UItemDefinition;
class UMiningSpotConfig;
class UPhotoModeConfig;
class UPhysicsDefinition;
class URegionsDefinition;
class USensorConfigDefinition;
class UStatsCalculatorConfiguration;
class UTradersTypeDefinition;

UCLASS(Abstract, Blueprintable)
class G1R_API UWorldDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UItemDefinition> m_DefaultOre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<URegionsDefinition> m_Regions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UTradersTypeDefinition> m_TradersType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DefaultTraderRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DefaultTraderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UInteractiveObjectDefinition> m_CharactersDefaultInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UInteractiveObjectDefinition> m_CharactersLootInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UInteractiveObjectDefinition> m_CharactersExecutionInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UInteractiveObjectDefinition> m_CharactersRideInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxRegionalMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RegionalMultiplierMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RegionalMultiplierMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RegionalMultiplierDivide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MainRegions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxLiquidityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LiquidityMultiplierMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LiquidityMultiplierMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UCameraDefinition>> m_DefaultCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UPhotoModeConfig> m_DefaultPhotoModeConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_SpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_UnSpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UPhysicsDefinition> m_PhysicsDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_SpawnAllAiFromStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMiningSpotConfig> m_MiningDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UInteractCameraDefinition> m_InteractCameraDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AIAgentsNameDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AIAgentsNameImportantConversationsDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_AIAgentsImportantConversationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ShowAllNamesAndHealthBars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ItemDetectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_GothicGameViewportClientDisableGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ShowHealthBarTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ShowGameOverTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USensorConfigDefinition> m_SensorConfigDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UStatsCalculatorConfiguration> m_StatsCalculatorConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ShowNPCNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ReviveCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AItemVisualWorld> m_ItemVisualWorldGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AItemVisualWorld> m_ItemVisualWorldArrows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AItemVisualWorld> m_ItemVisualWorldBolts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UAnimInstance> m_AnimDebugPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DropForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_ValidTagsControlledByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_ValidTagsTransformed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_ValidTagsRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_CampAreasForBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_MaxTorches;
    
    UPROPERTY()
    TMap<FGameplayTag, int32> m_ExperienceByStation;
    
    UWorldDefinition();

    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool ShouldLevelUp(const int32 ExperienceNow, const int32 LevelNow) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 LevelFromExperience(int32 Experience) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 ExperienceRequiredForLevel(int32 Level) const;
    
    UFUNCTION(BlueprintCallable)
    void AddStationExperience(FGameplayTag Tag, const int32 Experience);
    
};


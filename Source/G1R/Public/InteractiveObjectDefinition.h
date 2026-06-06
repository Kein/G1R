#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EInteractiveCameraTarget.h"
#include "InventoryDefinition.h"
#include "Templates/SubclassOf.h"
#include "InteractiveObjectDefinition.generated.h"

class AActor;
class UGameplayEffect;
class UItemDefinition;
class UItemEffectDefinition;

UCLASS(EditInlineNew)
class G1R_API UInteractiveObjectDefinition : public UInventoryDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_ObjectInteractAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_PlayerInteractAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_PlayerInteractZDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_PlayerInteractDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_PlayerInteractDistanceFar;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_PlayerDetectDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_UsableByPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_AddNPCInteractionSpots;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FString> m_tags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag m_RequiredItemSpec;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag m_OptionalItemSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, UItemEffectDefinition*> m_Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* m_OptionalObject;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag m_RequiredIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ShouldShowNameIngame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_Lock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> m_Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> m_PuzzleKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ConsumeKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInteractiveCameraTarget m_CameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_ActiveUntilEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DisabledUntilEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_RequiredUniqueObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UItemDefinition>> m_RequiredIdObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_MustMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_StartBeforeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Priority;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> m_ExtraTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_MinimalAction;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag m_DefaultInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer m_AdditionalInteractions;
    
public:
    UInteractiveObjectDefinition();

private:
    UFUNCTION(NetMulticast, Reliable)
    void MyCustomRPC(AActor* OtherActor, bool IsBegin);
    
public:
    UFUNCTION(BlueprintPure)
    FGameplayTag GetDefaultInteraction() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetAdditionalInteractions() const;
    
    UFUNCTION(BlueprintCallable)
    UItemEffectDefinition* AddEffect(FGameplayTag Name, TSubclassOf<UGameplayEffect> effectToAdd);
    
};


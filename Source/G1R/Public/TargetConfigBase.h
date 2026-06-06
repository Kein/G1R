#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "TargetConfigBase.generated.h"

class AActor;
class AGothicCharacter;
class USceneComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class G1R_API UTargetConfigBase : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> m_TargetFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_DetectionRadiusPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_DetectionRadiusAI;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_TargetCheckVisibilityRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_TargetLostTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_ShouldFindTargetOnVisualLost;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_ShouldFindTargetOnTargetDefeated;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_ShouldFindTargetOnTargetDie;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_ShouldFindTargetOnTargetCantBeTargeted;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_ShouldAimToTargetHeadOrChest;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_ShouldFilterTargetByRelationship;
    
public:
    UTargetConfigBase();

protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsValidTarget_Scriptable(const USceneComponent* Comp, AActor* AvatarActor) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsValidTarget(const USceneComponent* Comp, AActor* AvatarActor) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetTargetFilterClass() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetAccurateTargetComponentOnCurrentTarget_Scriptable(USceneComponent* TargetComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FilterTargetByRelationship_Scriptable(AGothicCharacter* OwnerCharacter, TArray<USceneComponent*>& Targets);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CheckVisibility_Scriptable(const USceneComponent* Target, AActor* AvatarActor) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool CheckVisibility(const USceneComponent* Target, AActor* AvatarActor) const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CheckCharacterVisualInterruption_Scriptable(const USceneComponent* Target, AActor* AvatarActor) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool CheckCharacterVisualInterruption(const USceneComponent* Target, AActor* AvatarActor) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "ArmorVisualsDefinition.generated.h"

class UAnimSequence;
class UCharacterVisualFeaturesDefinition;
class UCustomizableObject;
class UFggto;
class USkeletalMesh;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class G1R_API UArmorVisualsDefinition : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> m_WeaponHolderOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_HasPreBakedSK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_PreBakedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_UpperTeethOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UCharacterVisualFeaturesDefinition> m_CharacterVisualFeatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_TagsToAdd;
    
protected:
    UPROPERTY()
    FString m_MutableAsset;
    
    UPROPERTY()
    FString m_MutableAssetPath;
    
    UPROPERTY()
    FString m_GTOAssetPath;
    
    UPROPERTY()
    FString m_PreBakedSKsPath;
    
public:
    UArmorVisualsDefinition();

    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<USkeletalMesh> GetPrebakedSKsAssetSoftPtr(const FString& facename) const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UCustomizableObject> GetMutableAssetSoftPtr() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UFggto> GetGTOAssetSoftPtr(const FString& facename) const;
    
};


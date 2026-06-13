#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GothicActorComponentInterface.h"
#include "Templates/SubclassOf.h"
#include "CharacterVisualsComponent.generated.h"

class AActor;
class UAbilitySystemComponent;
class UArmorDefinition;
class UArmorVisualsDefinition;
class UCharacterDefinition;
class UCharacterVisualFeaturesDefinition;
class UCustomizableObject;
class UCustomizableObjectInstance;
class UCustomizableSkeletalComponent;
class UFggto;
class UGameplayEffect;
class UItemDefinition;
class UMaterialInterface;
class USkeletalMesh;

UCLASS(BlueprintType, ClassGroup=Custom, Within=GothicCharacter, meta=(BlueprintSpawnableComponent))
class G1R_API UCharacterVisualsComponent : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_ItemDef)
    TSubclassOf<UItemDefinition> ReplicatedItemDef;
    
    UPROPERTY()
    FGameplayTagContainer m_CurrentTagsAdded;
    
    UPROPERTY()
    TSubclassOf<UGameplayEffect> m_EquipArmorGameplayEffect;
    
    UPROPERTY()
    UCustomizableObject* m_LoadedCustomizableObject;
    
    UPROPERTY(Instanced)
    UCustomizableSkeletalComponent* m_CSkeletalComponent;
    
    UPROPERTY(Instanced)
    UAbilitySystemComponent* m_AbilitySystemComponent;
    
protected:
    UPROPERTY()
    FActiveGameplayEffectHandle m_GE_Armor_contextHandle;
    
    UPROPERTY()
    FActiveGameplayEffectHandle m_GE_Armor_Upper_contextHandle;
    
    UPROPERTY()
    FActiveGameplayEffectHandle m_GE_Armor_Mid_contextHandle;
    
    UPROPERTY()
    FActiveGameplayEffectHandle m_GE_Armor_Lower_contextHandle;
    
    UPROPERTY()
    TMap<FString, float> m_CurrentFloatProperties;
    
    UPROPERTY()
    TMap<FString, bool> m_CurrentBoolProperties;
    
    UPROPERTY()
    TMap<FString, FString> m_CurrentEnumProperties;
    
    UPROPERTY()
    TMap<FString, FLinearColor> m_CurrentVectorProperties;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UCustomizableObject> m_CustomizableObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> m_RedEyeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UFggto> m_gtoPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCustomizableObjectInstance* m_CustomizableObjectInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_faceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_PrebakedMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UCharacterDefinition* m_charDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UArmorVisualsDefinition* m_currentVisualsDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> m_BakedSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCharacterVisualFeaturesDefinition* VisualFeaturesDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_MagicIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ProgressSteps;
    
    UCharacterVisualsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    static void StaticCustomizableObjectInit(AActor* Owner, UCustomizableObjectInstance* CustomizableObjectInstance, const UCharacterDefinition* CharacterDefinition, UArmorVisualsDefinition* amorVisualDefinition);
    
private:
    UFUNCTION()
    void SetRedEyes() const;
    
public:
    UFUNCTION()
    static void SetPropertyFromCharactersName(const UCharacterDefinition* charDef, TMap<FString, FString>& CurrentEnumProperties);
    
    UFUNCTION()
    static void SetPropertiesIntoCustomizableObject(UCustomizableObjectInstance* CustomizableObjectInstance, TMap<FString, float>& CurrentFloatProperties, TMap<FString, bool>& CurrentBoolProperties, TMap<FString, FString>& CurrentEnumProperties, TMap<FString, FLinearColor>& CurrentVectorProperties);
    
    UFUNCTION()
    void SetPreviewArmor(TSubclassOf<UItemDefinition> itemDef);
    
    UFUNCTION()
    void SetNewArmor(TSubclassOf<UItemDefinition> itemDef, bool IsPreview);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentStep(int32 Index);
    
    UFUNCTION(Reliable, Server)
    void ServerNotifyArmorChanged(TSubclassOf<UItemDefinition> itemDef);
    
private:
    UFUNCTION()
    void PrepareDataFromVisualDefinition(const UArmorVisualsDefinition* m_CharacterVisualsDefinition);
    
public:
    UFUNCTION()
    void PreloadGTO();
    
    UFUNCTION()
    void PreloadCustomizableObject();
    
private:
    UFUNCTION()
    void OnWaterStateChange(FGameplayTag InTag, int32 NewCount) const;
    
    UFUNCTION()
    void OnRep_ItemDef();
    
public:
    UFUNCTION()
    void OnPrebakedSKLoaded();
    
    UFUNCTION()
    void OnGTOLoaded();
    
    UFUNCTION()
    void OnCustomMeshUpdated();
    
    UFUNCTION()
    void OnCustomizableObjectLoaded();
    
    UFUNCTION(BlueprintCallable)
    bool IsCurrentStepCompletedAt(int32 Index);
    
    UFUNCTION()
    static FString GetDefinitionPrebakedSKNameIfUsed(const TSubclassOf<UArmorVisualsDefinition> ArmorVisualDef);
    
    UFUNCTION()
    static void GetArmorUpgradesClassName(AActor* Owner, UArmorDefinition* ArmorDef, FString& UpperArmorUpgradeClass, FString& MidArmorUpgradeClass, FString& LowerArmorUpgradeClass);
    
    UFUNCTION()
    static void FillPropertiesFromNewArmor(AActor* Owner, TSubclassOf<UItemDefinition> itemDef, TMap<FString, float>& CurrentFloatProperties, TMap<FString, bool>& CurrentBoolProperties, TMap<FString, FString>& CurrentEnumProperties, TMap<FString, FLinearColor>& CurrentVectorProperties);
    
    UFUNCTION()
    static void ClearProperties(TMap<FString, float>& CurrentFloatProperties, TMap<FString, bool>& CurrentBoolProperties, TMap<FString, FString>& CurrentEnumProperties, TMap<FString, FLinearColor>& CurrentVectorProperties);
    
private:
    UFUNCTION()
    static void AddPropertiesFromDefinition(const UArmorVisualsDefinition* ArmorVisualDef, TMap<FString, float>& CurrentFloatProperties, TMap<FString, bool>& CurrentBoolProperties, TMap<FString, FString>& CurrentEnumProperties, TMap<FString, FLinearColor>& CurrentVectorProperties);
    

    // Fix for true pure virtual functions not being implemented
};


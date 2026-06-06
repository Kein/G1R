#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RuneStats.h"
#include "SpellsManaCost.h"
#include "Templates/SubclassOf.h"
#include "IHelper.generated.h"

class UAbilitySystemComponent;
class UArmorCustomizationSlotData;
class UInventoryFilter;
class UItemDefinition;
class UObject;
class UPersistentDataSubsystem;
class UScriptGameplayEffect;
class UTexture2D;
class UUserWidget;
class UWidgetAnimation;

UCLASS(BlueprintType)
class G1R_API UIHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIHelper();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool StartNewGame(const UObject* WorldContextObject, const FString& ProfileName);
    
    UFUNCTION(BlueprintPure)
    static TSoftObjectPtr<UTexture2D> GetSoftItemIcon(const UItemDefinition* Item);
    
    UFUNCTION(BlueprintCallable)
    static FString GetProfileName(UPersistentDataSubsystem* PersistentDataSubsystem);
    
    UFUNCTION(BlueprintCallable)
    static UInventoryFilter* GetItemCategory(const UItemDefinition* _Item);
    
    UFUNCTION(BlueprintPure)
    static UArmorCustomizationSlotData* GetDefaultInitCustomizationSlotData();
    
protected:
    UFUNCTION()
    static TArray<TSubclassOf<UScriptGameplayEffect>> GetAttributeGEListWithPotentialUpgrades(UItemDefinition* Item, UAbilitySystemComponent* ASC);
    
public:
    UFUNCTION(BlueprintPure)
    static float GetAnimationStartTime(UUserWidget* _Owner, UWidgetAnimation* _Animation);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GenerateDefaultSavegameName(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FSpellsManaCost CalculateSpellManaCost(const FRuneStats& RuneStats);
    
};


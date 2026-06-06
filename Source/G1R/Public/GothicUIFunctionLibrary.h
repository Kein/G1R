#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "GothicUIFunctionLibrary.generated.h"

class AActor;
class APlayerController;
class UInputAction;
class ULocalPlayer;
class UObject;

UCLASS(BlueprintType)
class G1R_API UGothicUIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGothicUIFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void Viewport_SetMousePosition(const APlayerController* ThePC, const float& PosX, const float& PosY);
    
    UFUNCTION(BlueprintCallable)
    static bool TryGetCurrentKeyIcon(FSlateBrush& _IconBrush, const ULocalPlayer* _LocalPlayer, FKey _Key);
    
    UFUNCTION(BlueprintCallable)
    static void GetSkillTagDisplayText(FGameplayTag _SkillTag, FText& _DisplayName, FText& _Description, FText& _MasteryDisplayName, FText& _MasteryDescription, int32& _MasteryLevel);
    
    UFUNCTION(BlueprintCallable)
    static void GetSkillOreCost(const FGameplayTag& _SkillTag, int32& _OreCost);
    
    UFUNCTION(BlueprintCallable)
    static void GetSkillLPCost(const FGameplayTag& _SkillTag, int32& _LPCost);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetOwnedSkillMastery(const AActor* _Owner, FGameplayTag _SkillTag);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetLocalPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetLearningSkillTooltipText(FGameplayTag _SkillTag, TArray<FText>& _SkillDescriptions);
    
    UFUNCTION(BlueprintCallable)
    static void GetGameplayTagDisplayText(const FGameplayTag& _GameplayTag, FText& _DisplayName, FText& _Description);
    
    UFUNCTION(BlueprintCallable)
    static FSlateBrush GetCurrentInputActionIcon(const ULocalPlayer* _LocalPlayer, const FDataTableRowHandle& _DataTableRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static FSlateBrush GetCurrentEnhancedInputActionIcon(const ULocalPlayer* _LocalPlayer, const UInputAction* _InputAction);
    
    UFUNCTION(BlueprintCallable)
    static FText GetChapterTitle(int32 _ChapterNumber);
    
    UFUNCTION(BlueprintCallable)
    static FText GetChapterHeadline(int32 _ChapterNumber);
    
    UFUNCTION(BlueprintCallable)
    static void GetAttributeDisplayText(const FGameplayAttribute& _GameplayAttribute, FText& _DisplayName, FText& _Description);
    
    UFUNCTION(BlueprintCallable)
    static void GetArmorOreCost(const FGameplayTag& _ArmorTag, int32& _OreCost);
    
    UFUNCTION(BlueprintCallable)
    static FText FormatNumberSI(int32 _Number);
    
    UFUNCTION(BlueprintPure)
    static bool BrushIsEmpty(const FSlateBrush& _Brush);
    
};


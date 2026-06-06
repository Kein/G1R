#pragma once
#include "CoreMinimal.h"
#include "EParryMode.h"
#include "GothicBaseConfig.h"
#include "CombatConfig.generated.h"

UCLASS(BlueprintType, EditInlineNew, Config=CombatConfig)
class G1R_API UCombatConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    float m_RootMotionMod_AttacksHits;
    
    UPROPERTY(Config, EditAnywhere)
    float m_RootMotionMod_DodgesHorizontal;
    
    UPROPERTY(Config, EditAnywhere)
    float m_RootMotionMod_DodgesVertical;
    
    UPROPERTY(Config, EditAnywhere)
    float m_Pity_Critical_Increase;
    
    UPROPERTY(Config, EditAnywhere)
    EParryMode m_ParryMode;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_DrawDodge;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_DisableMagnetForAll;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_DrawMagnet;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_UseDebugMagnetAngle;
    
    UPROPERTY(Config, EditAnywhere)
    float m_DebugMagnetAngle;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_PrintMagnetData;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_PrintRootMotionMultiplier;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_ShowMagnetBack;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_DisableMultiplierSuperArmor;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_HideSuperArmorBars;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_ShowComboDebug;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_ShowLastKeyPressedDebug;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_GodMode;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_ParryCheatMode;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_AdditiveHits;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_DrawDamageSweeps;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_EnableFakeSloppyCombos;
    
public:
    UCombatConfig();

    UFUNCTION(BlueprintPure)
    bool IsGodModeOn() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUseDebugMagnetAngle() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowMagnetBack() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowLastKeyPressedDebug() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShowComboDebug() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPrintRootMotionMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPrintMagnetData() const;
    
    UFUNCTION(BlueprintPure)
    float GetPityCriticalIncrease() const;
    
    UFUNCTION(BlueprintPure)
    EParryMode GetParryMode() const;
    
    UFUNCTION(BlueprintPure)
    bool GetParryCheatMode() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHideSuperArmorBars() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDrawMagnet() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDrawDodge() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDrawDamageSweeps() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDisableMultiplierSuperArmor() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDisableMagnetForAll() const;
    
    UFUNCTION(BlueprintPure)
    float GetDebugMagnetAngle() const;
    
    UFUNCTION(BlueprintPure)
    bool AdditiveHits() const;
    
};


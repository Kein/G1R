#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_Base.h"
#include "EDeflectMethod.h"
#include "AnimNotifyState_Deflectable.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UAnimNotifyState_Deflectable : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FString m_HitCollisionName;
    
    UPROPERTY(EditAnywhere, Transient)
    FString m_SocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MinHeightToDeflect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MinAngleToDeflect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MaxAngleToDeflect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDeflectMethod m_DeflectMethod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bInverted;
    
public:
    UAnimNotifyState_Deflectable();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetMinHeightToDeflect(float MinHeightToDeflect) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetMinAngleToDeflect(float MinAngleToDeflect) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetMaxAngleToDeflect(float MaxAngleToDeflect) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetInverted(bool Inverted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDeflectMethod(EDeflectMethod DeflectMethod) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDebug(bool Debug) const;
    
    UFUNCTION(BlueprintPure)
    FString GetSocketName() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinHeightToDeflect() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinAngleToDeflect() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxAngleToDeflect() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInverted() const;
    
    UFUNCTION(BlueprintPure)
    FString GetHitCollisionName() const;
    
    UFUNCTION(BlueprintPure)
    EDeflectMethod GetDeflectMethod() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDebug() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_Base.h"
#include "AnimNotifyState_Damage.generated.h"

class USkeletalMeshComponent;

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_Damage : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_DamageSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString m_HitCollisionName;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> m_AdditionalHitCollisionNames;
    
protected:
    UPROPERTY(Instanced, Transient)
    USkeletalMeshComponent* m_MeshComp;
    
public:
    UAnimNotifyState_Damage();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetHitCollisionName(const FString& HitBoxName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDamageBone(FName SocketName) const;
    
};


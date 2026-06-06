#pragma once
#include "CoreMinimal.h"
#include "CrosshairInterface.h"
#include "ItemVisual.h"
#include "ArcheryWeaponVisual.generated.h"

class AArrowVisual;
class UItemDefinition;
class USkeletalMeshComponent;

UCLASS()
class G1R_API AArcheryWeaponVisual : public AItemVisual, public ICrosshairInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    USkeletalMeshComponent* m_MeshComp;
    
    UPROPERTY()
    AArrowVisual* m_ArrowNotched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_HandleSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_StringSocketName;
    
    UPROPERTY(Replicated)
    bool m_HasArrowNotched;
    
public:
    AArcheryWeaponVisual(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnItemAddedInMainContainer(const UItemDefinition* new_item, int32 Count);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastDetachArrow(AArrowVisual* arrow) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastAttachArrow(AArrowVisual* arrow, const FName& SocketName) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool HasArrowNotched() const;
    

    // Fix for true pure virtual functions not being implemented
};


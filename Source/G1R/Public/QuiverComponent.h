#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EInventoryTypes.h"
#include "GothicActorComponentInterface.h"
#include "ItemVirtualData.h"
#include "Templates/SubclassOf.h"
#include "QuiverComponent.generated.h"

class AItemVisual;
class UHUDAmmoLeftController;
class UInstancedStaticMeshComponent;
class UItemDefinition;

UCLASS(BlueprintType, ClassGroup=Custom, Within=GothicCharacter, meta=(BlueprintSpawnableComponent))
class G1R_API UQuiverComponent : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AItemVisual* m_QuiverVisual;
    
    UPROPERTY()
    AItemVisual* m_QuiverBoltVisual;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AItemVisual> m_QuiverVisualClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AItemVisual> m_BoltHolderVisualClass;
    
private:
    UPROPERTY()
    UHUDAmmoLeftController* m_HUDAmmoLeftController;
    
public:
    UQuiverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void UpdateBolts(int32 totalAmount, bool bBoltAlreadyOnHand);
    
    UFUNCTION()
    void UpdateArrows(int32 totalAmount, bool bArrowAlreadyOnHand);
    
    UFUNCTION(BlueprintCallable)
    void ToggleQuiverVisibility(bool ShouldBeHidden);
    
    UFUNCTION(BlueprintCallable)
    void ToggleBoltHolderVisibility(bool ShouldBeHidden);
    
    UFUNCTION()
    void OnPreItemRemovedInPlayerMainContainer(const FItemVirtualData& RemovedItem, int32 Count);
    
    UFUNCTION()
    void OnPostItemRemovedInPlayerMainContainer();
    
    UFUNCTION()
    void OnItemAddedInPlayerMainContainer(const UItemDefinition* NewItem, int32 Count);
    
    UFUNCTION()
    void OnInventoryQuickItemHasBowOrCrossbow(EInventoryTypes slotType);
    
    UFUNCTION()
    int32 GetNumBoltsAvailable() const;
    
    UFUNCTION()
    int32 GetNumArrowsAvailable() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UInstancedStaticMeshComponent*> GetAllInstancedMeshes();
    
    UFUNCTION()
    void DisableQuiver();
    
    UFUNCTION()
    void DisableBoltHolder();
    

    // Fix for true pure virtual functions not being implemented
};


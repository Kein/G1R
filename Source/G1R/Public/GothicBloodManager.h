#pragma once
#include "CoreMinimal.h"
#include "GothicSingletonManager.h"
#include "GothicBloodManager.generated.h"

class AGothicBloodDecal;
class AGothicBloodManager;
class UObject;

UCLASS()
class G1R_API AGothicBloodManager : public AGothicSingletonManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    TArray<AGothicBloodDecal*> m_Decals;
    
    UPROPERTY(EditAnywhere)
    int32 m_MaxDecalNum;
    
    UPROPERTY(EditAnywhere)
    float m_TexScale;
    
public:
    AGothicBloodManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGothicBloodManager* GetInstance(UObject* WorldContextObject);
    
};


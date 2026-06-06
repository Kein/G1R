#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GothicMutilatedSkeletalMeshActor.generated.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS()
class G1R_API AGothicMutilatedSkeletalMeshActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    USkeletalMeshComponent* m_SkeletalMeshComponent;
    
    UPROPERTY(Instanced)
    UStaticMeshComponent* m_StaticMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USkeletalMeshComponent* m_Source;
    
    UPROPERTY()
    FName m_BoneToCut;
    
    UPROPERTY()
    FVector m_LastPosition;
    
public:
    AGothicMutilatedSkeletalMeshActor(const FObjectInitializer& ObjectInitializer);

};


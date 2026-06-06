#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GothicInputContextData.h"
#include "GothicInputContextDataTemporal.h"
#include "GothicInputContextController.generated.h"

class AGothicPlayerControllerBase;
class APawn;
class UInputMappingContext;

UCLASS()
class G1R_API UGothicInputContextController : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<UInputMappingContext*> m_MappingContextsDefault;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGothicInputContextData> m_MappingContexts;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGothicInputContextDataTemporal> m_TemporalMappingContexts;
    
    UPROPERTY(EditDefaultsOnly)
    FGothicInputContextData m_MappingContextsTorch;
    
    UPROPERTY(EditDefaultsOnly)
    UInputMappingContext* m_MappingContextDebug;
    
private:
    UPROPERTY()
    AGothicPlayerControllerBase* m_ParentPlayerControllerBase;
    
    UPROPERTY()
    APawn* m_Pawn;
    
    UPROPERTY()
    TMap<UInputMappingContext*, int32> m_TemporalMappingsCounter;
    
public:
    UGothicInputContextController();

};


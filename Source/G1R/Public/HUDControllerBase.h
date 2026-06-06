#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HUDControllerWidgetStruct.h"
#include "HUDControllerBase.generated.h"

class AGothicPlayerControllerBase;
class UUserWidget;

UCLASS()
class G1R_API UHUDControllerBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UUserWidget* m_Widget;
    
    UPROPERTY()
    AGothicPlayerControllerBase* m_PlayerController;
    
    UPROPERTY()
    TArray<FHUDControllerWidgetStruct> m_CreatedWidgetArray;
    
public:
    UHUDControllerBase();

};


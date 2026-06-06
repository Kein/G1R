#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "ServersListWidget.generated.h"

class UObject;
class UOnlineSessionResult;

UCLASS(EditInlineNew)
class G1R_API UServersListWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UServersListWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void RefreshServersList();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAvailableSessions(const TArray<UOnlineSessionResult*>& WidgetSessions);
    
    UFUNCTION(BlueprintCallable)
    void JoinSession(const UObject* SelectedSession);
    
};


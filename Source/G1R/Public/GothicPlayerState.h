#pragma once
#include "CoreMinimal.h"
#include "GothicCharacterState.h"
#include "GothicPlayerState.generated.h"

class AGothicPlayerState;
class UObject;

UCLASS()
class G1R_API AGothicPlayerState : public AGothicCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayNameTextOverride;
    
public:
    AGothicPlayerState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerStartLessons();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGothicPlayerState* GetMainPlayerState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGothicPlayerState* GetLocalPlayerState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGothicPlayerState* FindPlayerByUniqueName(const UObject* WorldContextObject, FName UniqueName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGothicPlayerState* FindPlayerByGlobalId(const UObject* WorldContextObject, FName GlobalId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AGothicPlayerState*> FindAllPlayersByUniqueName(const UObject* WorldContextObject, FName UniqueName);
    
};


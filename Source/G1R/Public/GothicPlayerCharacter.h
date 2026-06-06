#pragma once
#include "CoreMinimal.h"
#include "GothicCharacter.h"
#include "GothicPlayerCharacter.generated.h"

class UNPCTalkBalloonComponent;

UCLASS()
class G1R_API AGothicPlayerCharacter : public AGothicCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UNPCTalkBalloonComponent* m_TalkBalloonComponent;
    
    AGothicPlayerCharacter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(Reliable, Server)
    void Server_PlayerProperlySync(const FString& Name);
    
};


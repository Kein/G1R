#pragma once
#include "CoreMinimal.h"
#include "JoinSessionCompletedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FJoinSessionCompleted, int32, Result);


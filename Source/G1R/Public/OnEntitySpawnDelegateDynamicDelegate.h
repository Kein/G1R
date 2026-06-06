#pragma once
#include "CoreMinimal.h"
#include "OnEntitySpawnDelegateDynamicDelegate.generated.h"

class AActor;
class USpawningRequest;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnEntitySpawnDelegateDynamic, USpawningRequest*, SpawningRequest, AActor*, Actor);


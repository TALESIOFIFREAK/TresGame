#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPlayerAccelerationBase.h"
#include "TresGumiShipThrottleAccelCompo.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipThrottleAccelCompo : public UTresGumiShipPlayerAccelerationBase {
    GENERATED_BODY()
public:
    UTresGumiShipThrottleAccelCompo();
};


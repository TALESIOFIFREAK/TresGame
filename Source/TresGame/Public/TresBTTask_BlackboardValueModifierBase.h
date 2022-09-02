#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresValueModifierMethod.h"
#include "TresBTTask_BlackboardValueModifierBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresBTTask_BlackboardValueModifierBase : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_BlackboardKey;
    
    UTresBTTask_BlackboardValueModifierBase();
};


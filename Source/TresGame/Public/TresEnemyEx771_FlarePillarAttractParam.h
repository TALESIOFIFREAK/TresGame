#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx771_FlarePillarAttractParam.generated.h"

class ATresActor_e_ex771_Attract;
class AActor;

USTRUCT(BlueprintType)
struct FTresEnemyEx771_FlarePillarAttractParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresActor_e_ex771_Attract* m_pAttract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pTarget;
    
    TRESGAME_API FTresEnemyEx771_FlarePillarAttractParam();
};


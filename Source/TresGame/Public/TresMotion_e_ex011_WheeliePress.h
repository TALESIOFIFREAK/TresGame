#pragma once
#include "CoreMinimal.h"
#include "TresMotion_e_ex011_WheeliePress.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FTresMotion_e_ex011_WheeliePress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* StartAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* LoopAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* EndAnimData;
    
    TRESGAME_API FTresMotion_e_ex011_WheeliePress();
};


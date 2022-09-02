#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackMorphControlElement.h"
#include "TresInterpTrackMorphControlKey.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackMorphControlKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresInterpTrackMorphControlElement> m_Elements;
    
    TRESGAME_API FTresInterpTrackMorphControlKey();
};


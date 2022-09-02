#pragma once
#include "CoreMinimal.h"
#include "TresMapJumpVolumeSignatureDelegate.h"
#include "ETresMapJumpFadeKind.h"
#include "TresVolume.h"
#include "TresMapJumpVolume.generated.h"

UCLASS(Blueprintable)
class ATresMapJumpVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetTag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresMapJumpFadeKind> m_FadeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_BlueprintMapJump;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresMapJumpVolumeSignature OnMapJump;
    
    ATresMapJumpVolume();
    UFUNCTION(BlueprintCallable)
    void InvokeMapJump();
    
};


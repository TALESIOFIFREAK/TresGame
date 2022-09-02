#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresActorInterface.h"
#include "TresFzGimmickAttacker.generated.h"

class UTresChrBaseParam;
class UTresChrDataTableSet;

UCLASS(Blueprintable)
class ATresFzGimmickAttacker : public AActor, public ITresActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresChrDataTableSet* m_pDataTableSet;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UTresChrBaseParam* m_pBaseParam;
    
public:
    ATresFzGimmickAttacker();
    
    // Fix for true pure virtual functions not being implemented
};


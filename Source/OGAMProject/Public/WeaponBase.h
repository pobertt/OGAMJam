// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "WeaponBase.generated.h"

UCLASS()
class OGAMPROJECT_API AWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponBase();

	FORCEINLINE USkeletalMeshComponent* GetMeshComponent() const
	{
		return _SkeletalMeshComponent;
	}


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Actor Component", meta = (AllowPrivateAccess = "true"))
		USkeletalMeshComponent* _SkeletalMeshComponent;

};

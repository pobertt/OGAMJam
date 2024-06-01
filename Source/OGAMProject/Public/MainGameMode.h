// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainGameMode.generated.h"

/**
 * 
 */
UCLASS()
class OGAMPROJECT_API AMainGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMainGameMode();
	virtual ~AMainGameMode() = default;

	/* Return the number of the test count in the game */
	UFUNCTION(BlueprintPure, Category = "Test")
		virtual int32 GetTestCount() const;

	
	UFUNCTION(BlueprintCallable, Category = "Test")
		virtual void SetTestCount(int32 newTestCount);
	
	virtual void StartPlay();
	
	UFUNCTION(BlueprintNativeEvent, Category = "Test", DisplayName = "Start Play")
		void StartPlayEvent();
		
};

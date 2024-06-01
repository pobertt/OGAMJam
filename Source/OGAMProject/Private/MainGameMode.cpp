// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameMode.h"
#include "MainGameState.h"


AMainGameMode::AMainGameMode()
{
	GameStateClass = AMainGameState::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Player/BP_PlayerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

int32 AMainGameMode::GetTestCount() const
{
	return GetGameState<AMainGameState>()->TestCount;
}


void AMainGameMode::SetTestCount(int32 newTestCount)
{
	GetGameState<AMainGameState>()->TestCount = newTestCount;
}


void AMainGameMode::StartPlay()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Start Play called"));

	StartPlayEvent();

	/* Initialize stuff here */

	GetWorld()->GetAuthGameMode()->GetGameState<AMainGameState>()->TestCount = 150;

	Super::StartPlay();
}

void AMainGameMode::StartPlayEvent_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("StartPlayEvent Default Implementation called"));
}

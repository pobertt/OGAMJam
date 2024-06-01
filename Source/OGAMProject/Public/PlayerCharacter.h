#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class OGAMPROJECT_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Defining Inputs:

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
		class UInputMappingContext* InputMapping;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
		class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
		class UInputAction* LookAction;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
		class UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
		class UInputAction* PrimaryInput;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
		class UInputAction* SprintAction;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
		class UInputAction* CrouchAction;

	UPROPERTY(EditAnywhere, Category = "EnhancedInput")
		class UInputAction* InteractAction;

	// Functions for inputs:

	void Move(const FInputActionValue& InputValue);

	void Look(const FInputActionValue& InputValue);

	void Jump();

	void PrimaryAction();

	void Sprint();

	void Crouch();

	void Interact();
};

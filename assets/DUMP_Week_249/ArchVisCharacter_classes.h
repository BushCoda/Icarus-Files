// Class ArchVisCharacter.ArchVisCharacter
struct AArchVisCharacter : ACharacter {
	struct FString LookUpAxisName; 
	struct FString LookUpAtRateAxisName; 
	struct FString TurnAxisName; 
	struct FString TurnAtRateAxisName; 
	struct FString MoveForwardAxisName; 
	struct FString MoveRightAxisName; 
	float MouseSensitivityScale_Pitch; 
	float MouseSensitivityScale_Yaw; 
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
struct UArchVisCharMovementComponent : UCharacterMovementComponent {
	struct FRotator RotationalAcceleration; 
	struct FRotator RotationalDeceleration; 
	struct FRotator MaxRotationalVelocity; 
	float MinPitch; 
	float MaxPitch; 
	float WalkingFriction; 
	float WalkingSpeed; 
	float WalkingAcceleration; 
};


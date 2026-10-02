// BlueprintGeneratedClass BP_PlayerCameraComponent.BP_PlayerCameraComponent_C
struct UBP_PlayerCameraComponent_C : UActorComponent {
	float RotationLagSpeed; 
	struct ABP_IcarusPlayerCharacterSurvival_C* PlayerRef; 
	struct FRotator TargetCameraRotation; 
	struct FTransform SmoothedPivotTarget; 
	struct FVector PivotLagSpeed; 
	struct FVector PivotLagSpeedCrouched; 
	struct FVector PivotOffsetStand; 
	struct FVector PivotOffsetCrouched; 
	struct FVector PivotLocation; 
	struct FVector CameraOffset; 
	struct FVector CameraOffsetCrouched; 
	struct FVector TargetCameraLocation; 
	struct FVector TargetPivotOffset; 
	float PivotOffsetSpeed; 
	struct FVector TargetCameraOffset; 

	void UpdateCamera(struct FVector InLocation, struct FRotator InRotation, float InFOV, bool ForceUpdate, struct FVector& OutLocation, struct FRotator& OutRotation, float& OutFOV, bool& Return); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool UseFreeLookRotation(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsFirstPerson(bool& FirstPerson); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetControllerRotation(struct FRotator& Rotation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetPlayer(struct ABP_IcarusPlayerCharacterSurvival_C*& Player); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FVector CalculateAxisIndependentLag(struct FVector CurrentLocation, struct FVector TargetLocation, struct FRotator CameraRotation, struct FVector LagSpeeds, bool ForceUpdate); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};


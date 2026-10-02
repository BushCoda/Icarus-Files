// Class Strider.StriderMath
struct UStriderMath : UBlueprintFunctionLibrary {

	float WrapAngle(float Angle); // (Final|Native|Static|Public|BlueprintCallable)
	void MoveTowardVector(struct FVector& InStart, struct FVector& End, float MaxDelta); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	float MoveTowardAngle(float StartAngle, float EndAngle, float MaxDelta); // (Final|Native|Static|Public|BlueprintCallable)
	float MoveToward(float Start, float End, float MaxDelta); // (Final|Native|Static|Public|BlueprintCallable)
	void MoveComponentsToward(struct FVector& InStart, struct FVector& End, float MaxDelta); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	float GetRotationRelativeToVelocity(struct AActor* Actor); // (Final|Native|Static|Public|BlueprintCallable)
	int32_t GetNextCardinalDirection(int32_t CurrentCardinalDirection, float RelativeDirection, float StepDelta, float SkipDelta); // (Final|Native|Static|Public|BlueprintCallable)
	float GetAngleDelta(float StartAngle, float EndAngle); // (Final|Native|Static|Public|BlueprintCallable)
	float CalculateStrideScale(float TotalSpeedScale, float PlayRate); // (Final|Native|Static|Public|BlueprintCallable)
	float CalculatePlayRate(float TotalSpeedScale, float PlaybackWeight, float MinPlayRate, float MaxPlayRate); // (Final|Native|Static|Public|BlueprintCallable)
	float CalculateCircleStrafeDirectionDelta(float LastDirection, float Direction, float DeltaTime); // (Final|Native|Static|Public|BlueprintCallable)
	float AngleBetween(struct FVector& A, struct FVector& B); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
};


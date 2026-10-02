// BlueprintGeneratedClass HabFunctionLibrary.HabFunctionLibrary_C
struct UHabFunctionLibrary_C : UBlueprintFunctionLibrary {

	struct FString HandStateToString(struct FHabHandStateStruct HandState, struct UObject* __WorldContext); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector ConditionallyFilterUpDirection(struct FVector Vector, struct FVector UpAxis, bool IgnoreUp, struct UObject* __WorldContext); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool HasEnoughMassToBeRelevant(struct UPrimitiveComponent* Component, struct UObject* __WorldContext); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void HitToHandState(enum class ESpaceHandGripMode HandMode, bool Reaching, struct FHitResult Hit, float Distance, struct UObject* __WorldContext, struct FHabHandStateStruct& HandState); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetHandStateWorldNormal(struct FHabHandStateStruct State, struct UObject* __WorldContext); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetHandStateWorldLocation(struct FHabHandStateStruct State, struct UObject* __WorldContext); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FName GetHabCharacterShoulderName(bool ForLeftHand, struct UObject* __WorldContext); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FName GetHabCharacterWristName(bool ForLeftHand, struct UObject* __WorldContext); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsTouchOrStableGrip(struct FHabHandStateStruct HandState, struct UObject* __WorldContext); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetAutoOrientUpAxis(struct AIcarusPlayerCharacter* Character, struct FHabHandStateStruct HandState, bool ForLeftHand, struct FVector& UpAxis, struct UObject* __WorldContext, bool& Success); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetAutoOrientLocationAndDirection(struct AIcarusPlayerCharacter* Character, struct FHabHandStateStruct HandState, bool ForLeftHand, struct FVector& DesiredHeadLocation, struct FVector& DesiredFacingDirection, struct UObject* __WorldContext, bool& FoundLocationSuccessfully); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool IsStableGrip(struct FHabHandStateStruct HandState, struct UObject* __WorldContext); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void FindBestGripTransform(struct UPrimitiveComponent* GripTargetComponent, bool ForLeftHand, struct FVector TargetLocation, struct FRotator TargetRotation, struct UObject* __WorldContext, struct FTransform& BestTransform); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FHabHandStateStruct MakeHandStateFromGripTarget(struct UPrimitiveComponent* GripTarget, struct FVector TargetLocation, struct FRotator TargetRotation, bool Reaching, float HandDistance, float Created, struct UObject* __WorldContext); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};


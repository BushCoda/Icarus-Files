// BlueprintGeneratedClass IGripTargetInterface.IGripTargetInterface_C
struct UIGripTargetInterface_C : UInterface {

	void FindBestCharacterUpAxisDirection(struct AIcarusPlayerCharacter* Character, bool ForLeftHand, struct FVector TargetLocation, bool& Success, struct FVector& UpAxisDirection); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindBestCharacterDirection(struct AIcarusPlayerCharacter* Character, bool ForLeftHand, struct FVector TargetLocation, bool& Success, struct FVector& BestDirection); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindBestCharacterLocation(struct AIcarusPlayerCharacter* Character, bool ForLeftHand, struct FVector TargetLocation, bool& Success, struct FVector& BestLocation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindBestAnimation(struct FVector TargetLocation, struct FRotator TargetRotation, bool& Success, struct UAnimMontage*& GripMontage); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindBestGripTransform(bool ForLeftHand, struct FVector TargetLocation, struct FRotator TargetRotation, struct FTransform& BestTransform); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};


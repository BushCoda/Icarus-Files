// Class DragonIKPlugin.DragonIK_Library
struct UDragonIK_Library : UObject {

	struct FTransform QuatLookXatLocation(struct FTransform& LookAtFromTransform, struct FVector& LookAtTarget); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator LookAtVector_V2(struct FVector Source_Location, struct FVector lookAt, struct FVector upDirection); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator LookAtRotation_V3(struct FVector Source, struct FVector Target, struct FVector UpVector); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FRotator CustomLookRotation(struct FVector lookAt, struct FVector upDirection); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
};


// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AimController_Prediction.BP_ActionableBehaviour_Firearm_AimController_Prediction_C
struct UBP_ActionableBehaviour_Firearm_AimController_Prediction_C : UBP_ActionableBehaviour_Firearm_AimController_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void GetTargetPosition(float Distance, struct FVector& HitLocation, struct FVector& CrosshairEndPoint); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FTransform GetFirePositionOverride(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFireLocationAndPostion(struct FVector& FirePosition, struct FRotator& FireRotation); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AimController_Prediction(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


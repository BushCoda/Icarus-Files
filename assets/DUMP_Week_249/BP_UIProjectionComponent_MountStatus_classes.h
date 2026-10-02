// BlueprintGeneratedClass BP_UIProjectionComponent_MountStatus.BP_UIProjectionComponent_MountStatus_C
struct UBP_UIProjectionComponent_MountStatus_C : UBP_UIProjectionComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float AlertTickRate; 
	struct AIcarusMountCharacter* MountCharacterRef; 
	enum class EMountAction CurrentMountState; 

	void OnRep_IsEatingOrDrinking(); // (BlueprintCallable|BlueprintEvent)
	void GetWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void AlertTick(); // (BlueprintCallable|BlueprintEvent)
	void ForceProjectionUpdate(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_UIProjectionComponent_MountStatus(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


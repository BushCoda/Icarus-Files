// BlueprintGeneratedClass BP_UIProjectionComponent_Fishing.BP_UIProjectionComponent_Fishing_C
struct UBP_UIProjectionComponent_Fishing_C : UBP_UIProjectionComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool IsAbleToCatch; 

	void GetFishingRod(struct ABP_SkeletalItem_Fishing_Rod_C*& FishingRod); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ForceProjectionUpdate(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_UIProjectionComponent_Fishing(int32_t EntryPoint); // (Final|UbergraphFunction)
};


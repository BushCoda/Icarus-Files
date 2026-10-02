// BlueprintGeneratedClass BP_SkeletalItem_Meta_Flashlight.BP_SkeletalItem_Meta_Flashlight_C
struct ABP_SkeletalItem_Meta_Flashlight_C : ABP_SkeletalItem_LightBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct UFMODEvent* FMODEvent_Switch; 

	void GetComponentToOffset(struct USceneComponent*& Component); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PlaySwitchAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void LightUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Meta_Flashlight(int32_t EntryPoint); // (Final|UbergraphFunction)
};


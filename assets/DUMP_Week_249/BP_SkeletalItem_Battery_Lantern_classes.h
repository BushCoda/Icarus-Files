// BlueprintGeneratedClass BP_SkeletalItem_Battery_Lantern.BP_SkeletalItem_Battery_Lantern_C
struct ABP_SkeletalItem_Battery_Lantern_C : ABP_SkeletalItem_LightBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UPointLightComponent* PointLight_Fill; 
	struct UFMODAudioComponent* FMOD_Lantern_Loop; 

	void LightUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetAttachmentOffset(struct FTransform& ThirdPersonActorOffset, struct FTransform& FirstPersonActorOffset, struct FVector& ThirdPersonComponentOffset); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetComponentToOffset(struct USceneComponent*& Component); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetLightAudioState(bool IsLit); // (Public|BlueprintCallable|BlueprintEvent)
	void CanLight(bool& CanLight); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Battery_Lantern(int32_t EntryPoint); // (Final|UbergraphFunction)
};


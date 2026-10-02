// BlueprintGeneratedClass BP_SkeletalItem_Lantern.BP_SkeletalItem_Lantern_C
struct ABP_SkeletalItem_Lantern_C : ABP_SkeletalItem_LightBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_Lantern_Flame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UFMODAudioComponent* FMOD_Lantern_Loop; 

	void GetAttachmentOffset(struct FTransform& ThirdPersonActorOffset, struct FTransform& FirstPersonActorOffset, struct FVector& ThirdPersonComponentOffset); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetComponentToOffset(struct USceneComponent*& Component); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetLightAudioState(bool IsLit); // (Public|BlueprintCallable|BlueprintEvent)
	void CanLight(bool& CanLight); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Damage(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Lantern(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


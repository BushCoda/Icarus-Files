// BlueprintGeneratedClass BP_SKItem_Sandwyrm_Lamp.BP_SKItem_Sandwyrm_Lamp_C
struct ABP_SKItem_Sandwyrm_Lamp_C : ABP_SkeletalItem_LightBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UPointLightComponent* PointLight; 
	struct UFMODEvent* FMODEvent_Switch; 

	void GetAttachmentOffset(struct FTransform& ThirdPersonActorOffset, struct FTransform& FirstPersonActorOffset, struct FVector& ThirdPersonComponentOffset); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetComponentToOffset(struct USceneComponent*& Component); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void PlaySwitchAudio(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void LightUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_SKItem_Sandwyrm_Lamp(int32_t EntryPoint); // (Final|UbergraphFunction)
};


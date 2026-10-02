// BlueprintGeneratedClass BP_SkeletalItem_FlameThrower_Small.BP_SkeletalItem_FlameThrower_Small_C
struct ABP_SkeletalItem_FlameThrower_Small_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* PilotLight; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Pilot; 
	struct UFMODAudioComponent* PilotAudio; 
	struct UPointLightComponent* PointLight; 
	struct UNiagaraComponent* NS_Flamethrower_FX; 
	struct UFillableComponent* Fillable; 
	int32_t StoredUnits; 
	int32_t MaxStoredUnits; 
	bool WantOn; 
	struct FName AttachPointName; 
	struct UNiagaraSystem* PilotVFX; 

	void UpdateStoredUnits(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SetItemVisible(bool bVisible); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ToggleParticle(bool Play); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_FlameThrower_Small(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


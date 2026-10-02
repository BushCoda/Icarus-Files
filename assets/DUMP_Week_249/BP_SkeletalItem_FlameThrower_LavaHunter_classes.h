// BlueprintGeneratedClass BP_SkeletalItem_FlameThrower_LavaHunter.BP_SkeletalItem_FlameThrower_LavaHunter_C
struct ABP_SkeletalItem_FlameThrower_LavaHunter_C : ABP_SkeletalItem_FlameThrower_Small_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_Flamethrower_FX1; 
	struct UNiagaraComponent* NS_Flamethrower_FX2; 
	struct USceneComponent* Scene_1; 

	void ToggleParticle(bool Play); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void MULTI_PlayBurst(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void SERVER_PlayBurst(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_FlameThrower_LavaHunter(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


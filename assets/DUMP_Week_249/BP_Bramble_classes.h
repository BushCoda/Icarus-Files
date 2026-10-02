// BlueprintGeneratedClass BP_Bramble.BP_Bramble_C
struct ABP_Bramble_C : ABP_Spike_Trap_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void DoDamage(int32_t DamageAmount, struct AActor* Defender); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void MULTI_PlayDamageAudio(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Bramble(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


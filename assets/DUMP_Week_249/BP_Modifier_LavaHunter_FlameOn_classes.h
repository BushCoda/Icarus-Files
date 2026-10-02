// BlueprintGeneratedClass BP_Modifier_LavaHunter_FlameOn.BP_Modifier_LavaHunter_FlameOn_C
struct UBP_Modifier_LavaHunter_FlameOn_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void InitComponent(); // (Event|Public|BlueprintEvent)
	void OnDamagedReturned(int32_t ReturnedAmount, struct AActor* ActorReceivingDamage); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Modifier_LavaHunter_FlameOn(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


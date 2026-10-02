// BlueprintGeneratedClass BP_Flammable_SpontaneouslyCombustStuff.BP_Flammable_SpontaneouslyCombustStuff_C
struct UBP_Flammable_SpontaneouslyCombustStuff_C : UBP_Flammable_Actor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool ActiveCombustCharged; 
	float InitialCombustStuffDelay; 
	float ActiveCombustStuffDelay; 

	void SpontaneouslyCombustStuff(bool& LitSomething); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnFlammableInstanceState_Combusting_Tick(struct UFlammableInstance* Instance, struct UFlammableState* State, float DeltaSeconds); // (BlueprintCallable|BlueprintEvent)
	void OnFlammableInstanceState_Combusting_Enter(struct UFlammableInstance* Instance, struct UFlammableState* State); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Flammable_SpontaneouslyCombustStuff(int32_t EntryPoint); // (Final|UbergraphFunction)
};


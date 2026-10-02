// BlueprintGeneratedClass BP_Modifier_Gestating.BP_Modifier_Gestating_C
struct UBP_Modifier_Gestating_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAISetupRowHandle Juvenile Creature Type; 
	int32_t GestationPeriodSeconds; 
	float DeltaOverflow; 
	float GestationMultiplier; 
	struct FTamesRowHandle JuvenileTameData; 
	struct TArray<struct AActor*> SpawnedJuveniles; 

	bool ModifierApplied(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void GestationComplete(); // (BlueprintCallable|BlueprintEvent)
	void SpawnJuvenile(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Modifier_Gestating(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


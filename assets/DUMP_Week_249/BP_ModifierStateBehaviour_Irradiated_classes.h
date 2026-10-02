// BlueprintGeneratedClass BP_ModifierStateBehaviour_Irradiated.BP_ModifierStateBehaviour_Irradiated_C
struct UBP_ModifierStateBehaviour_Irradiated_C : UModifierStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float BaseRadiationGain; 
	float Accumulation; 
	float Temp; 
	struct TArray<struct FItemData> EquippedArmour; 
	struct AIcarusPlayerCharacterSurvival* Player; 

	void CheckHazmatSuit(int32_t& Pieces, struct AIcarusPlayerCharacterSurvival*& Player); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool ModifierRemoved(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ModifierApplied(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ModifierStateBehaviour_Irradiated(int32_t EntryPoint); // (Final|UbergraphFunction)
};


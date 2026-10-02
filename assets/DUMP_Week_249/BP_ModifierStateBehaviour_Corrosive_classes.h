// BlueprintGeneratedClass BP_ModifierStateBehaviour_Corrosive.BP_ModifierStateBehaviour_Corrosive_C
struct UBP_ModifierStateBehaviour_Corrosive_C : UBP_ModifierStateBehaviour_TickDamage_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<struct FInventoryIDEnum> AffectedInventoryTypes; 

	void ModifierTick(float DeltaTime); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ModifierStateBehaviour_Corrosive(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


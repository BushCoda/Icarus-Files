// BlueprintGeneratedClass BP_EquippableModifier_SpeederBike.BP_EquippableModifier_SpeederBike_C
struct UBP_EquippableModifier_SpeederBike_C : UEquippableModifier {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FText ItemName; 
	int32_t ID; 
	bool bActive; 

	bool ItemUnequipped(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ItemEquipped(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateModifier(bool bActive); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_EquippableModifier_SpeederBike(int32_t EntryPoint); // (Final|UbergraphFunction)
};


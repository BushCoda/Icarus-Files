// BlueprintGeneratedClass BP_EquippableModifier_Icebox_Backpack.BP_EquippableModifier_Icebox_Backpack_C
struct UBP_EquippableModifier_Icebox_Backpack_C : UEquippableModifier {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FText ItemName; 
	int32_t ID; 
	bool bActive; 

	bool ItemUnequipped(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool ItemEquipped(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Update Icebox(bool bActive); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void IceBoxCheck(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_EquippableModifier_Icebox_Backpack(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


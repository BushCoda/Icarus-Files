// BlueprintGeneratedClass BP_FocusableBehaviour_Backpack.BP_FocusableBehaviour_Backpack_C
struct UBP_FocusableBehaviour_Backpack_C : UBP_FocusableBehaviour_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusItem* BackpackItem; 

	void FindBackpackItem(struct ACharacter* TargetCharacter, struct AIcarusItem*& BackpackItem); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HideBackpackMesh(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnFocused(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnUnfocused(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_FocusableBehaviour_Backpack(int32_t EntryPoint); // (Final|UbergraphFunction)
};


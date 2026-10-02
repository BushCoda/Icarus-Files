// BlueprintGeneratedClass BTTask_PerformAction_SpitAttack_Ape_Child.BTTask_PerformAction_SpitAttack_Ape_Child_C
struct UBTTask_PerformAction_SpitAttack_Ape_Child_C : UBTTask_PerformAction_SpitAttack_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FName ShowMeshNotify; 
	struct FName HideMeshNotify; 
	bool IsRock; 

	void OnMontageNotifyBegin(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTTask_PerformAction_SpitAttack_Ape_Child(int32_t EntryPoint); // (Final|UbergraphFunction)
};


// BlueprintGeneratedClass BTTask_PerformAction_StrikeAttack_Ape_Child.BTTask_PerformAction_StrikeAttack_Ape_Child_C
struct UBTTask_PerformAction_StrikeAttack_Ape_Child_C : UBTTask_PerformAction_StrikeAttack_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FName BreakClubNotify; 
	struct FBlackboardKeySelector CarryingLogKey; 
	struct FBlackboardKeySelector NumClubHits; 

	void OnMontageNotifyBegin(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTTask_PerformAction_StrikeAttack_Ape_Child(int32_t EntryPoint); // (Final|UbergraphFunction)
};


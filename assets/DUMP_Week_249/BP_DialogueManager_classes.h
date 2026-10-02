// BlueprintGeneratedClass BP_DialogueManager.BP_DialogueManager_C
struct ABP_DialogueManager_C : ADialogueManager {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void GetDialogueWidget(struct UUMG_Dialogue_C*& DialogueWidget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnDialoguePlayed(struct FDialogueRowHandle Dialogue); // (Event|Protected|BlueprintEvent)
	void OnDialogueCleared(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_DialogueManager(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


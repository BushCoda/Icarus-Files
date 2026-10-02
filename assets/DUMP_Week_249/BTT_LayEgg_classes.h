// BlueprintGeneratedClass BTT_LayEgg.BTT_LayEgg_C
struct UBTT_LayEgg_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FItemData EggItem; 
	struct AIcarusCharacter* CharacterRef; 
	struct UInventory* Container; 
	float NearbyCoopRadius; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_LayEgg(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


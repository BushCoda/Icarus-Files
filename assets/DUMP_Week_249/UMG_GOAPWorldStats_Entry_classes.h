// WidgetBlueprintGeneratedClass UMG_GOAPWorldStats_Entry.UMG_GOAPWorldStats_Entry_C
struct UUMG_GOAPWorldStats_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* Text_Count; 
	struct UTextBlock* Text_Name; 
	struct FAISetupRowHandle RowHandle; 
	struct AIcarusNPCGOAPCharacter* NPCGOAPChar; 

	void UpdateName(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_GOAPWorldStats_Entry(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


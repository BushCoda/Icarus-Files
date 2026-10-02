// WidgetBlueprintGeneratedClass ProspectRow.ProspectRow_C
struct UProspectRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText NameText; 
	struct FAISetupRowHandle AISetup; 
	struct FProspectListRowHandle Prospect; 

	void SetProspectRow(struct FProspectListRowHandle ProspectRowHandle); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_ProspectRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


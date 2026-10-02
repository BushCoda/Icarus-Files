// WidgetBlueprintGeneratedClass UMG_Party.UMG_Party_C
struct UUMG_Party_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* PartyList; 
	struct USizeBox* SizeBox_1; 
	bool Found; 
	struct APlayerState* CurrentState; 
	bool HideDetails; 
	bool DebugWidgets; 
	int32_t NumDebugWidgets; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Party(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


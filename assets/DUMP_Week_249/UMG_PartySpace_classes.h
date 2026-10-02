// WidgetBlueprintGeneratedClass UMG_PartySpace.UMG_PartySpace_C
struct UUMG_PartySpace_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* PartyList; 
	struct FMulticastInlineDelegate PartyReadyStateChanged; 

	void PlayerPartyChanged(); // (Public|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_PartySpace(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void PartyReadyStateChanged__DelegateSignature(bool AllPlayersReady); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


// WidgetBlueprintGeneratedClass UMG_ItemsOnDrop.UMG_ItemsOnDrop_C
struct UUMG_ItemsOnDrop_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* CharName; 
	struct UTextBlock* CharName_2; 
	struct UBorder* InsuranceOverlay; 
	struct UUMG_DisplayOnlyInventory_C* Inventory; 
	struct UButton* LoadoutButton; 
	struct UTextBlock* NoItems; 
	struct UTextBlock* ProspectName; 
	struct UTextBlock* ProspectOwner; 
	struct UBorder* SettledOverlay; 
	bool Insured; 
	struct FProspectInfo ProspectInfo; 
	struct FText HostName; 
	struct TArray<struct FItemData> Items; 
	struct FText CharacterName; 
	struct FText DropName; 
	struct FPlayerLoadoutData PlayerLoadoutData; 
	struct FMulticastInlineDelegate OnInsuranceClaimed; 
	struct UUMG_InsuranceClaimPopup_C* CurrentPopup; 
	bool Settled; 
	bool CanReclaimLoadout; 
	struct FMulticastInlineDelegate OnLoadoutDeleted; 

	void CacheDropName(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetCharacterName(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GatherItems(); // (Private|BlueprintCallable|BlueprintEvent)
	void OnFailure_25A6710546032D088E33AA9D784DA123(struct FGetIcarusPlayerPersonaResult Result); // (BlueprintCallable|BlueprintEvent)
	void OnSuccess_25A6710546032D088E33AA9D784DA123(struct FGetIcarusPlayerPersonaResult Result); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void EDITOR_FillData(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_ItemsOnDrop_Button_30_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void ShowInsurancePopup(); // (BlueprintCallable|BlueprintEvent)
	void OnInsurancePopupClosed(); // (BlueprintCallable|BlueprintEvent)
	void OnClaimInsurance(); // (BlueprintCallable|BlueprintEvent)
	void GetHostInfo(); // (BlueprintCallable|BlueprintEvent)
	void OnDeleteLoadout(); // (BlueprintCallable|BlueprintEvent)
	void ResetUI(); // (BlueprintCallable|BlueprintEvent)
	void Reconstruct(struct FPlayerLoadoutData PlayerLoadoutData); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ItemsOnDrop(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnLoadoutDeleted__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnInsuranceClaimed__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


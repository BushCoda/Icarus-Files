// WidgetBlueprintGeneratedClass UMG_InsuranceClaimPopup.UMG_InsuranceClaimPopup_C
struct UUMG_InsuranceClaimPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IconTextButton_C* ClaimButton; 
	struct UTextBlock* ClaimTime; 
	struct UUMG_IconTextButton_C* CloseButton; 
	struct UUMG_IconTextButton_C* DeleteButton; 
	struct UTextBlock* Description; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_97; 
	struct UUMG_DisplayOnlyInventory_C* Inventory; 
	struct UTextBlock* Lbl_CharacterName; 
	struct UTextBlock* Lbl_CharacterName_2; 
	struct UTextBlock* Lbl_ProspectName; 
	struct UTextBlock* Lbl_ProspectOwner; 
	struct TArray<struct FItemData> Items; 
	int32_t TimeUntilClaim; 
	bool IsInsured; 
	struct FTimerHandle CounterTimerHandle; 
	struct FMulticastInlineDelegate OnClose; 
	struct FMulticastInlineDelegate OnClaim; 
	struct FText CharacterName; 
	struct FText PropsectName; 
	struct FText ProspectOwner; 
	struct FMulticastInlineDelegate OnDelete; 

	void UpdateClaimButton(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetRemainingTimeText(struct FText& TimeText); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_InsuranceClaimPopup_ClaimButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_InsuranceClaimPopup_CloseButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void UpdateTime(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_InsuranceClaimPopup_DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void OnConfirmDelete(); // (BlueprintCallable|BlueprintEvent)
	void OnCancelDelete(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_InsuranceClaimPopup(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnDelete__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnClaim__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnClose__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


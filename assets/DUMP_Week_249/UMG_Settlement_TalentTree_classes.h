// WidgetBlueprintGeneratedClass UMG_Settlement_TalentTree.UMG_Settlement_TalentTree_C
struct UUMG_Settlement_TalentTree_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IconTextButton_C* CloseButton; 
	struct UImage* Image; 
	struct UImage* Image_76; 
	struct UListView* ListView_BuildingLedger; 
	struct UNamedSlot* TalentMenuSlot; 
	struct UTextBlock* TextBlock_BuildingName; 
	struct UTextBlock* TextBlock_BuildingName_2; 
	struct UTextBlock* TextBlock_Status; 
	struct UTextBlock* TitleText; 
	struct UUMG_ButtonIcon_C* UMG_ButtonIcon; 
	struct UWidgetSwitcher* WidgetSwitcher_Settlement; 
	struct ASettlement* NearestSettlement; 
	bool NewVar_1; 
	struct TArray<struct UBP_SettlementLedger_Data_C*> ListDataObjects; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Settlement_NPC_Visitor_DenyButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Settlement_TalentTree_UMG_ButtonIcon_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Settlement_TalentTree(int32_t EntryPoint); // (Final|UbergraphFunction)
};


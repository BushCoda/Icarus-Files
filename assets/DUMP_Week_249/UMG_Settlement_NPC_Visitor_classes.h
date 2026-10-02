// WidgetBlueprintGeneratedClass UMG_Settlement_NPC_Visitor.UMG_Settlement_NPC_Visitor_C
struct UUMG_Settlement_NPC_Visitor_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IconTextButton_C* CancelButton; 
	struct UUMG_IconTextButton_C* ConfirmButton; 
	struct UUMG_IconTextButton_C* RejectButton; 
	struct UTextBlock* TextBlock_Background; 
	struct UTextBlock* TextBlock_Capacity; 
	struct UTextBlock* TextBlock_NPCName; 
	struct UTextBlock* TitleText; 
	struct ASettlement* NearestSettlement; 
	bool WantsNPC; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Sign_Text_Window_ConfirmButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Settlement_NPC_Visitor_DenyButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Settlement_NPC_Visitor_RejectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Settlement_NPC_Visitor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


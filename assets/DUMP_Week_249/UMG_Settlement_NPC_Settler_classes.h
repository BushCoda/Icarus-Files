// WidgetBlueprintGeneratedClass UMG_Settlement_NPC_Settler.UMG_Settlement_NPC_Settler_C
struct UUMG_Settlement_NPC_Settler_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IconTextButton_C* CancelButton; 
	struct UUMG_IconTextButton_C* MakeGuardButton; 
	struct UTextBlock* TextBlock_Background; 
	struct UTextBlock* TextBlock_NPCName; 
	struct UTextBlock* TextBlock_Role; 
	struct UTextBlock* TitleText; 
	struct ASettlement* NearestSettlement; 
	bool WantsNPC; 
	struct FSettlementNPCRolesRowHandle WorkerRole; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Settlement_NPC_Visitor_DenyButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Settlement_NPC_Visitor_RejectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_Settlement_NPC_Settler(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


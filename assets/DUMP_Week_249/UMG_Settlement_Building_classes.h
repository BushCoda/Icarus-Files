// WidgetBlueprintGeneratedClass UMG_Settlement_Building.UMG_Settlement_Building_C
struct UUMG_Settlement_Building_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IconTextButton_C* CloseButton; 
	struct UUMG_IconTextButton_C* DeconstructButton; 
	struct UTextBlock* TitleText; 
	struct ASettlementBuilding* Building; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Settlement_NPC_Visitor_DenyButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_Settlement_Building_DeconstructButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void DoNothing(); // (BlueprintCallable|BlueprintEvent)
	void PerformDeconstruct(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Settlement_Building(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


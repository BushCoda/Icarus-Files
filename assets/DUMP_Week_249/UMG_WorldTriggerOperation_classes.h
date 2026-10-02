// WidgetBlueprintGeneratedClass UMG_WorldTriggerOperation.UMG_WorldTriggerOperation_C
struct UUMG_WorldTriggerOperation_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* AnglePiece; 
	struct UUMG_BasicButton_2_C* CloseButton; 
	struct UUMG_MissionBoardProspectSelected_C* ProspectSelected; 

	void PlayProspectAudio(struct FFProspectServerInfo Prospect); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StopProspectAudio(); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ShowProspect(struct FFProspectServerInfo ProspectInfo); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_TriggerMission_ProspectSelected_K2Node_ComponentBoundEvent_6_OperationSelected__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_WorldTriggerOperation(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


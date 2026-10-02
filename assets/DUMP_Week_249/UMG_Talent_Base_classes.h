// WidgetBlueprintGeneratedClass UMG_Talent_Base.UMG_Talent_Base_C
struct UUMG_Talent_Base_C : UTalentWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FTalentViewsRowHandle ViewData; 
	struct FTalentModelData CurrentState; 
	struct UTalentViewInterface* View; 
	bool QueueRefresh; 
	struct FMulticastInlineDelegate OnHover; 
	struct FMulticastInlineDelegate OnUnhover; 
	struct TMap<struct FTalentsRowHandle, struct FSessionFlagsRowHandle> TalentHightlightFlagMap; 
	struct UUMG_WidgetHighlightBase_C* CachedHighlightWidget; 

	void GetOverlay(struct UOverlay*& Overlay); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CanUnlock(bool& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Set View(struct UTalentViewInterface* View); // (BlueprintCallable|BlueprintEvent)
	void Set State(struct FTalentModelData New State); // (BlueprintCallable|BlueprintEvent)
	void OnStateChanged(struct FTalentModelData NewState); // (BlueprintCallable|BlueprintEvent)
	void RefreshState(); // (BlueprintCallable|BlueprintEvent)
	void OnTalentSet(); // (Event|Public|BlueprintEvent)
	void Set Zoom Level(int32_t Level, float Scale); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Talent_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnUnhover__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnHover__DelegateSignature(struct UUMG_Talent_Base_C* Talent); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


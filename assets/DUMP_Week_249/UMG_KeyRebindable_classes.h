// WidgetBlueprintGeneratedClass UMG_KeyRebindable.UMG_KeyRebindable_C
struct UUMG_KeyRebindable_C : UKeyRebindableWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* InteractBorder; 
	struct UWidgetSwitcher* RebindSwitcher; 
	struct UUMG_Keybind_C* UMG_Keybind; 
	struct FKeybindingsRowHandle Key; 
	struct FMulticastInlineDelegate BeginRebindEvent; 
	struct FMulticastInlineDelegate EndRebindEvent; 
	struct FKey PendingKey; 

	void RebindToKey(struct FKey NewKey, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool OnKeySet(struct FKey NewKey); // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetRebindIndex(int32_t& NewParam); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetKeyIndex(int32_t& NewParam); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Set Key(struct FKeybindingsRowHandle InKey, bool Hold); // (BlueprintCallable|BlueprintEvent)
	void OnStartRebind(); // (Event|Protected|BlueprintEvent)
	void OnEndRebind(); // (Event|Protected|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void UpdateHighlight(); // (BlueprintCallable|BlueprintEvent)
	void ConfirmOverwriteInput(); // (BlueprintCallable|BlueprintEvent)
	void CancelOverwriteInput(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_KeyRebindable(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void EndRebindEvent__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void BeginRebindEvent__DelegateSignature(struct UUMG_KeyRebindable_C* KeyWidget); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


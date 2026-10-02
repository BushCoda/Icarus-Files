// WidgetBlueprintGeneratedClass UMG_KeyBind.UMG_Keybind_C
struct UUMG_Keybind_C : UUMG_PhysicalKey_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FKeybindingsRowHandle Keybinding; 
	struct FMulticastInlineDelegate OnKeyBindChanged; 

	void GetDefaultKey(struct FKey& Key); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetKey(struct FKey& Key); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Set Keybind(struct FKeybindingsRowHandle InKey, bool Hold); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Input Type Changed(enum class EInputTypeSetting Value); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Keybind(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnKeyBindChanged__DelegateSignature(bool IsSet); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


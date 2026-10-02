// WidgetBlueprintGeneratedClass UMG_KeyBind_TextOnly.UMG_KeyBind_TextOnly_C
struct UUMG_KeyBind_TextOnly_C : UUMG_PhysicalKey_TextOnly_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FKeybindingsRowHandle Keybinding; 
	struct FMulticastInlineDelegate OnKeyBindChanged; 

	void GetDefaultKey(struct FKey& Key); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetKey(struct FKey& Key); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Set Keybind(struct FKeybindingsRowHandle InKey, bool Hold); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Input Type Changed(enum class EInputTypeSetting Value); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_KeyBind_TextOnly(int32_t EntryPoint); // (Final|UbergraphFunction)
	void OnKeyBindChanged__DelegateSignature(bool IsSet); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


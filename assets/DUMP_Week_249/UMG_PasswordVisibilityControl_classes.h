// WidgetBlueprintGeneratedClass UMG_PasswordVisibilityControl.UMG_PasswordVisibilityControl_C
struct UUMG_PasswordVisibilityControl_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* PasswordVisibilityIcon; 
	struct UImage* VisibilityHidden; 
	bool MouseDown; 
	struct FMulticastInlineDelegate OnClicked; 
	bool Selected; 
	struct FLinearColor HoverColour; 
	struct FLinearColor NormalColour; 
	struct FLinearColor PressedColour; 

	void SetIconColour(struct FLinearColor Specified Color); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void Clicked(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_PasswordVisibilityControl(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnClicked__DelegateSignature(bool Selected); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


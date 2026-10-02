// WidgetBlueprintGeneratedClass UMG_LoadoutSelection.UMG_LoadoutSelection_C
struct UUMG_LoadoutSelection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_BasicButton_2_C* BackButton; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UUMG_SpaceMenu_Cargo_C* UMG_SpaceMenu_Cargo; 
	struct FMulticastInlineDelegate ConfirmLoadout; 
	struct FMulticastInlineDelegate Back; 

	void BndEvt__UMG_LoadoutSelection_UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_LoadoutSelection_UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_LoadoutSelection(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Back__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ConfirmLoadout__DelegateSignature(struct FPlayerLoadoutData Loadout); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


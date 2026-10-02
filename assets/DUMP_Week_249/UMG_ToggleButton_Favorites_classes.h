// WidgetBlueprintGeneratedClass UMG_ToggleButton_Favorites.UMG_ToggleButton_Favorites_C
struct UUMG_ToggleButton_Favorites_C : UUMG_ToggleButtonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UButton* ImageButton; 
	struct UImage* ImageIcon; 
	struct USizeBox* SizeBox; 
	struct FCharacterCreationDataRowHandle CharacterCustomisationRow; 

	void SetInitialState(bool Toggled); // (Public|BlueprintCallable|BlueprintEvent)
	void OnUnhover(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnHover(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetButtonImages(struct UMaterialInstance* Normal, struct UMaterialInstance* Hovered, struct UMaterialInstance* Pressed, struct UMaterialInstance* Disabled); // (Public|BlueprintCallable|BlueprintEvent)
	void VisuallyToggleButton(bool VisualToggledState); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetFocusWidget(bool& bValid, struct UWidget*& Widget, bool& bThis); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetImageButton(struct UButton*& ImageButton); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ToggleButton_Favorites(int32_t EntryPoint); // (Final|UbergraphFunction)
};


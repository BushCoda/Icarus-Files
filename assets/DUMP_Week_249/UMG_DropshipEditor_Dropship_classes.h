// WidgetBlueprintGeneratedClass UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C
struct UUMG_DropshipEditor_Dropship_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_DropshipSlot_C* Base; 
	struct UUMG_BasicButton_2_C* DeleteButton; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_4; 
	struct UImage* Image_85; 
	struct UImage* Image_146; 
	struct UImage* Image_220; 
	struct UBorder* LoadoutText; 
	struct UTextBlock* LoadoutWarning; 
	struct UUMG_DropshipSlot_C* Mid; 
	struct UVerticalBox* Pointers; 
	struct UEditableText* ShipNameTextBox; 
	struct UUMG_DropshipSlot_C* Top; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct FDropship Dropship; 
	int32_t Dropship Index; 
	bool LoadoutSelected; 

	void RemovePart(enum class EDropshipPartType Type); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ModifyDropship(struct UInventory* Inventory, int32_t Slot, enum class EDropshipPartType Type); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Refresh(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateDropship(struct FDropship Dropship); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void BndEvt__UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_DropshipEditor_Dropship(int32_t EntryPoint); // (Final|UbergraphFunction)
};


// WidgetBlueprintGeneratedClass UMG_ContainerWhitelist.UMG_ContainerWhitelist_C
struct UUMG_ContainerWhitelist_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* ButtonText; 
	struct UUMG_IconTextButton_C* ConfirmButton; 
	struct UImage* divider; 
	struct UListView* ListView_AllowedCreatures; 
	struct UListView* ListView_NearbyCreatures; 
	struct UTextBlock* Text_NoneAllowed; 
	struct UTextBlock* Text_NoneNearby; 
	struct UTextBlock* TitleText; 
	struct UTextBlock* TitleText_2; 
	struct UUMG_Checkbox_C* UMG_Checkbox_WhitelistOnly; 
	struct UWidgetSwitcher* WidgetSwitcher_SignType; 
	struct FString TempString; 
	int32_t MaxCharacters; 
	struct TArray<struct FLinearColor> SupportedColors; 
	struct FLinearColor FontColor; 
	struct FMulticastInlineDelegate FontColorChanged; 
	struct TArray<struct UMountList_ListItem_C*> MountListItems; 
	struct ADeployable* DeployableReference; 
	struct UTameInteractableComponent* InteractableComponent; 

	void ProxySetWhitelist(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateListItems(struct TArray<struct FMountSaveData>& OutNearbyMountData, struct TArray<struct UTextureRenderTarget2D*>& OutNearbyMountIcons, struct TArray<struct FMountSaveData>& OutWhitelistedMountData, struct TArray<struct UTextureRenderTarget2D*>& OutWhitelistedMountIcons); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateIconList(struct TArray<struct UObject*>& Items); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_Sign_Text_Window_ConfirmButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__UMG_ContainerWhitelist_ListView_NearbyCreatures_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // (BlueprintEvent)
	void BndEvt__UMG_ContainerWhitelist_ListView_AllowedCreatures_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // (BlueprintEvent)
	void BndEvt__UMG_ContainerWhitelist_ListView_NearbyCreatures_K2Node_ComponentBoundEvent_3_OnListEntryReleasedDynamic__DelegateSignature(struct UUserWidget* Widget); // (BlueprintEvent)
	void BndEvt__UMG_ContainerWhitelist_ListView_AllowedCreatures_K2Node_ComponentBoundEvent_5_OnListEntryReleasedDynamic__DelegateSignature(struct UUserWidget* Widget); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_ContainerWhitelist(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void FontColorChanged__DelegateSignature(struct FLinearColor NewColor); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


// WidgetBlueprintGeneratedClass UMG_PersistentMountList.UMG_PersistentMountList_C
struct UUMG_PersistentMountList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* HorizontalBox_Container; 
	struct UBorder* InventoryBorder; 
	struct UScrollBox* ScrollBox_Horizontal; 
	struct UScrollBox* ScrollBox_Vertical; 
	struct UTextBlock* TextBlock_NoMounts_Horiz; 
	struct UTextBlock* TextBlock_NoMounts_Vert; 
	struct UVerticalBox* VerticalBox_Container; 
	struct UVerticalBox* VerticalBox_Title; 
	bool IsHorizontal; 
	struct TArray<struct FMountSaveData> LoadedData; 
	bool ShowTitle; 
	bool GenerateDataFromNearbyMounts; 
	struct FSlateBrush NewBrush; 
	struct TArray<struct UTextureRenderTarget2D*> GeneratedIcons; 

	void GetSelectedMounts(struct TArray<struct FMountSaveData>& SelectedMountData); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct TArray<struct FMountSaveData> GenerateNearbyMountData(struct TArray<struct UTextureRenderTarget2D*>& MountIcons); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetMountInfoWidgets(struct TArray<struct UUMG_PersistentMountInfo_C*>& MountWidgets); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_PersistentMountList(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


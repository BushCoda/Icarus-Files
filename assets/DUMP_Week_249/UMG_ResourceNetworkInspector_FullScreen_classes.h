// WidgetBlueprintGeneratedClass UMG_ResourceNetworkInspector_FullScreen.UMG_ResourceNetworkInspector_FullScreen_C
struct UUMG_ResourceNetworkInspector_FullScreen_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_BasicButton_2_C* CloseButton; 
	struct UListView* ConsumerList; 
	struct UBackgroundBlur* LoadingDataOverlay; 
	struct UImage* NetworkTypeIcon; 
	struct UTextBlock* NetworkTypeText; 
	struct UTextBlock* NotConnectedText; 
	struct UBackgroundBlur* NotConnectedToNetworkOverlay; 
	struct UImage* PriorityDemandArrow; 
	struct UTextBlock* PriorityDemandHeading; 
	struct UTextBlock* PriorityDemandRateText; 
	struct UListView* ProducerList; 
	struct UImage* StandardDemandArrow; 
	struct UImage* StandardDemandBlocked; 
	struct UTextBlock* StandardDemandHeading; 
	struct UTextBlock* StandardDemandRateText; 
	struct UTextBlock* StorageFlowHeading; 
	struct UImage* StorageInArrow; 
	struct UOverlay* StorageInArrowGroup; 
	struct UListView* StorageList; 
	struct UImage* StorageOutArrow; 
	struct UOverlay* StorageOutArrowGroup; 
	struct UTextBlock* StorageRateText; 
	struct UImage* SupplyArrow; 
	struct UTextBlock* SupplyFlowHeading; 
	struct UTextBlock* SupplyRateText; 
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; 
	struct UUMG_PhysicalKeyPrompt_C* UMG_PhysicalKeyPrompt; 
	struct FMulticastInlineDelegate OnCloseWindow; 
	struct TMap<struct FName, struct UBP_ResourceNetworkInspectorListItemData_C*> SupplyDataMap; 
	struct TMap<struct FName, struct UBP_ResourceNetworkInspectorListItemData_C*> DemandDataMap; 
	struct UResourceComponent* TargetDevice; 
	struct FIcarusResourcesEnum TargetResourceType; 
	struct FIcarusResourcesEnum LastResourceType; 
	struct UMaterialInstanceDynamic* SupplyArrow_MID; 
	struct UMaterialInstanceDynamic* StorageOutArrow_MID; 
	struct UMaterialInstanceDynamic* StandardDemandArrow_MID; 
	struct UMaterialInstanceDynamic* PriorityDemandArrow_MID; 
	struct UMaterialInstanceDynamic* StorageInArrow_MID; 
	struct FResourceNetworkInspectorData LastData; 

	void UpdateArrowAndFlowText(struct UMaterialInstanceDynamic* ArrowMID, struct UTextBlock* Heading, struct UTextBlock* RateText, bool Enabled); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FormatRateValue(int32_t Rate, int32_t RateMax, struct FText& Result); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetAllArrowFlowColours(struct FLinearColor Value); // (Public|BlueprintCallable|BlueprintEvent)
	void SetArrowColour(struct UMaterialInstanceDynamic* Target, struct FLinearColor Value); // (Public|BlueprintCallable|BlueprintEvent)
	void SetArrowFlowColour(struct UMaterialInstanceDynamic* Target, struct FLinearColor Value); // (Public|BlueprintCallable|BlueprintEvent)
	void SetArrowFlowEnabled(struct UMaterialInstanceDynamic* Target, bool Enabled); // (Public|BlueprintCallable|BlueprintEvent)
	void InitArrows(); // (Public|BlueprintCallable|BlueprintEvent)
	void TryDetermineDeviceAndNetwork(bool& Success, struct UResourceComponent*& FoundDevice, struct AResourceSplineActorBase*& Spline, struct FIcarusResourcesEnum& TargetNetworkType); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool WantsNotConnectedToNetworkOverlay(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitNetworkType(struct FIcarusResourcesEnum NetworkType); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ProcessDeviceData(struct TMap<struct FName, struct UBP_ResourceNetworkInspectorListItemData_C*>& TargetMap, struct FIcarusResourcesEnum ResourceType, struct TArray<struct FCompactNetworkDeviceData>& Data, bool bShowPriorityBox, struct TArray<struct UBP_ResourceNetworkInspectorListItemData_C*>& SortedObjectList); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void LoadData(struct FResourceNetworkInspectorData Data); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_ResourceNetworkInspector_FullScreen_CloseButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetTargetDevice(struct UResourceComponent* Device, struct FIcarusResourcesEnum ResourceType); // (BlueprintCallable|BlueprintEvent)
	void UpdateDisconnectedOverlay(); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnReceivedNetworkInspectionData(struct FResourceNetworkInspectorData& Data); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ResourceNetworkInspector_FullScreen(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnCloseWindow__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


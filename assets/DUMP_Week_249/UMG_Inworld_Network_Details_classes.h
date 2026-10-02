// WidgetBlueprintGeneratedClass UMG_Inworld_Network_Details.UMG_Inworld_Network_Details_C
struct UUMG_Inworld_Network_Details_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* WaveProgressAnimation; 
	struct UWidgetAnimation* BorderAnimation; 
	struct UTextBlock* DemandText; 
	struct UVerticalBox* NetworkActive; 
	struct UTextBlock* NetworkInactive; 
	struct UTextBlock* StorageText; 
	struct UTextBlock* SupplyText; 
	struct UTextBlock* TypeText; 
	struct UUMG_InventorySeperator_C* UMG_InventorySeperator; 
	struct UUMG_InventorySeperator_C* UMG_InventorySeperator_2; 
	struct UUMG_InventorySeperator_C* UMG_InventorySeperator_3; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Update(struct FBPS_FlowMeterData Data); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_Inworld_Network_Details(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


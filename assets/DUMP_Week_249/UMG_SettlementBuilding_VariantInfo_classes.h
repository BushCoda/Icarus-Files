// WidgetBlueprintGeneratedClass UMG_SettlementBuilding_VariantInfo.UMG_SettlementBuilding_VariantInfo_C
struct UUMG_SettlementBuilding_VariantInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* Description; 
	struct UHorizontalBox* HorizontalBox_RecipeInputs; 
	struct UImage* Image; 
	struct UImage* Image_101; 
	struct UImage* Image_Frame; 
	struct URetainerBox* RetainerBox_1; 
	struct UVerticalBox* StatList; 
	struct UVerticalBox* VerticalBox_Cost; 
	struct UVerticalBox* VerticalBox_Stats; 
	struct FSettlementBuildingsRowHandle SettlementBuilding; 
	struct ASettlement* NearbySettlement; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SettlementBuilding_VariantInfo(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


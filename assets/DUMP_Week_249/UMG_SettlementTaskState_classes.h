// WidgetBlueprintGeneratedClass UMG_SettlementTaskState.UMG_SettlementTaskState_C
struct UUMG_SettlementTaskState_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Hover; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_129; 
	struct UImage* Image_Progress; 
	struct UImage* Image_TaskIcon; 
	struct UOverlay* Overlay_NoNPC; 
	struct UOverlay* Overlay_NoResources; 
	struct UMaterialInstanceDynamic* DynMat; 
	struct ASettlement* Settlement; 
	struct FGuid TaskId; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_SettlementTaskState(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


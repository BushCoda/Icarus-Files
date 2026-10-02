// WidgetBlueprintGeneratedClass UMG_DLCBadgeContainer.UMG_DLCBadgeContainer_C
struct UUMG_DLCBadgeContainer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* RevealTooltip; 
	struct UUMG_DLCBadge_C* DangerousHorizons; 
	struct UUMG_DLCBadge_C* GreatHunts; 
	struct UUMG_DLCBadge_C* Homestead; 
	struct UHorizontalBox* HorizontalBox_DLCs; 
	struct UImage* Image_129; 
	struct UUMG_DLCBadge_C* NewFrontiers; 
	struct UUMG_DLCBadge_C* PETCOMPANIONS; 
	struct UUMG_DLCBadge_C* Styx; 
	struct UUMG_DLCBadge_Tooltip_C* UMG_DLCBadge_Tooltip_361; 
	struct UUMG_DLCBadge_C* HoveredWidget; 

	void OnDLCButtonHoverUpdated(bool IsHovered, struct UUMG_DLCBadge_C* Widget); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_DLCBadgeContainer(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


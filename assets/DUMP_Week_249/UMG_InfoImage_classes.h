// WidgetBlueprintGeneratedClass UMG_InfoImage.UMG_InfoImage_C
struct UUMG_InfoImage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* HoverAnim; 
	struct UImage* Image_Icon; 
	struct UImage* Image_Strikethrough; 
	struct FResourceAvailabilityData ResourceAvailabilityData; 
	float ImageSize; 

	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_InfoImage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


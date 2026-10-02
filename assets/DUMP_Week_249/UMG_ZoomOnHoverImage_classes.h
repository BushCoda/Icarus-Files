// WidgetBlueprintGeneratedClass UMG_ZoomOnHoverImage.UMG_ZoomOnHoverImage_C
struct UUMG_ZoomOnHoverImage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Image_Background; 
	struct URetainerBox* RetainerBox_Zoom; 
	struct UMaterialInstanceDynamic* DynMat; 
	float BaseScaleValue; 
	float ZoomedScaleValue; 
	struct UTexture2D* Image; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ZoomOnHoverImage(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


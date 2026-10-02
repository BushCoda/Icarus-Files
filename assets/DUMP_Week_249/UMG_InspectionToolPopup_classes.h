// WidgetBlueprintGeneratedClass UMG_InspectionToolPopup.UMG_InspectionToolPopup_C
struct UUMG_InspectionToolPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* FadeOut; 
	struct UBorder* Border; 
	struct UHorizontalBox* HorizontalBox_ACTOR; 
	struct UHorizontalBox* HorizontalBox_BONE; 
	struct UHorizontalBox* HorizontalBox_COMP; 
	struct UHorizontalBox* HorizontalBox_MAT; 
	struct UHorizontalBox* HorizontalBox_MESH; 
	struct UHorizontalBox* HorizontalBox_PHYS; 
	struct UTextBlock* StatList; 
	struct UTextBlock* StatsTitle; 
	struct UWidgetSwitcher* Switcher; 
	struct UTextBlock* TagList; 
	struct UTextBlock* TagsTitle; 
	struct UTextBlock* TextBlock_Bone; 
	struct UTextBlock* TextBlock_Component; 
	struct UTextBlock* TextBlock_Dist; 
	struct UTextBlock* TextBlock_HitActor; 
	struct UTextBlock* TextBlock_HitActor_2; 
	struct UTextBlock* TextBlock_ImpactPoint; 
	struct UTextBlock* TextBlock_Mesh; 
	struct UTextBlock* TextBlock_PhysMat; 
	struct UTextBlock* TextBlock_Vis; 
	struct UPrimitiveComponent* HitComponent; 
	bool HoldWidget; 
	enum class EDevToolMode Mode; 
	struct FHitResult HitResult; 

	void GetWorldScale(struct USceneComponent* Actor, struct FText& XYZ); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetVisibilityInfo(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetMesh(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetMat(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetTags(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetStats(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetDist(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetBone(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetComponent(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetHitActor(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetPhysMat(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetImpactPoint(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Initialise(bool HoldWidget, enum class EDevToolMode Mode, struct FHitResult HitResult); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PlayFadeOut(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_InspectionToolPopup(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// BlueprintGeneratedClass BP_ContextMenuFactory.BP_ContextMenuFactory_C
struct ABP_ContextMenuFactory_C : AContextMenuFactory {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	struct UUMG_ContextMenu_List_C* ContextMenuClass; 
	struct UUMG_ContextMenu_Radial_C* RadialMenuClass; 
	struct FText ContextMenuName; 
	struct TSoftObjectPtr<UTexture2D> ContextMenuIcon; 

	void ShouldShow(bool& ShouldShow); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct UContextMenuWidget* ShowAsRadialMenu(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct UContextMenuWidget* ShowAsContextMenu(struct FVector2D ScreenPosition); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FinaliseMenu(struct UUMG_ContextMenu_Base_C* MenuClass, struct FVector2D ScreenPosition, struct UUMG_ContextMenu_Base_C*& ContextMenu); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetContextMenuData(struct FText& Name, struct TSoftObjectPtr<UTexture2D>& Icon); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ContextMenuFactory(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// WidgetBlueprintGeneratedClass UMG_StatList.UMG_StatList_C
struct UUMG_StatList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* Stats; 
	struct AActor* TargetOverride; 
	bool HideZeroStats; 
	bool HasNonZeroStats; 
	struct UUMG_StatTitleCategory_C* LastStatCategory; 
	bool HideLastStatCategory; 
	bool HasAddedNonZeroStatSinceLastCategory; 

	bool AddElement(struct UUserWidget* UserWidget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Update(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_StatList(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


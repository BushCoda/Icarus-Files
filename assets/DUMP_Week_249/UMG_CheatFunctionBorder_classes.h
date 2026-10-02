// WidgetBlueprintGeneratedClass UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C
struct UUMG_CheatFunctionBorder_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* ContentBox; 
	struct UTextBlock* Description; 
	struct UTextBlock* Title; 
	struct UBorder* TitleBorder; 
	struct UCheatFunctionBase* CheatFunction; 
	struct FText DisplayName; 
	struct TSoftObjectPtr<UUMG_CheatOverlay_C> ParentOverlay; 
	struct FLinearColor TitleColor; 
	struct FLinearColor AreaColor; 
	struct FText CheatDescription; 
	struct FLinearColor HighlightColor; 
	struct FLinearColor TitleTextColor; 
	struct FLinearColor TitleDescriptionColor; 

	void UpperChar(struct FString Char, bool& IsUpper, struct FString& UpperChar); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GenerateDisplayName(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Set Function(struct UCheatFunctionBase* CheatFunction); // (BlueprintCallable|BlueprintEvent)
	void Set Top Function(bool IsTop); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_CheatFunctionBorder(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// WidgetBlueprintGeneratedClass UMG_DifficultySelect.UMG_DifficultySelect_C
struct UUMG_DifficultySelect_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* DifficultyOptions; 
	enum class EMissionDifficulty Difficulty; 
	struct FMulticastInlineDelegate DifficultyUpdated; 
	bool HideRewards; 

	void ShowOnlyDifficulty(enum class EMissionDifficulty Difficulty); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Select(enum class EMissionDifficulty Difficulty); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void WidgetChecked(bool Checked, struct UUMG_DifficultyButton_C* Widget); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Setup(struct TArray<enum class EMissionDifficulty>& Difficulty); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_DifficultySelect(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void DifficultyUpdated__DelegateSignature(enum class EMissionDifficulty Difficulty); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


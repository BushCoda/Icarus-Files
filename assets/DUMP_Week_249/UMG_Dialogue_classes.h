// WidgetBlueprintGeneratedClass UMG_Dialogue.UMG_Dialogue_C
struct UUMG_Dialogue_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* LineBox; 
	struct USubtitleQueue* Queue; 
	int32_t MaxNumberLines; 

	void AddLineToBox(struct UUMG_DialogueLine_C* Line); // (Public|BlueprintCallable|BlueprintEvent)
	void ForceFadePlayingLines(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ClearAllDialogue(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddLineQuickFade(struct FSubtitle& Subtitle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void AddLine(struct FSubtitle& Subtitle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void AddDialogue(struct FDialogueRowHandle DialogueRow); // (Public|BlueprintCallable|BlueprintEvent)
	void OnInitialized(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Dialogue(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


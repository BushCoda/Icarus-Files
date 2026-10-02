// WidgetBlueprintGeneratedClass UMG_Queue.UMG_Queue_C
struct UUMG_Queue_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Indicator; 
	struct UBorder* QueueBorder; 
	struct UGridPanel* QueueGrid; 
	struct UUMG_DarkTitlebarShort_C* UMG_DarkTitlebarShort; 
	struct FMulticastInlineDelegate QueueElementClicked; 
	struct TArray<struct UUMG_CraftingQueueElement_C*> QueueElements; 
	struct FMargin Margin; 
	struct UUMG_CraftingQueueElement_C* CraftingQueueWidget; 
	struct AActor* LinkedActor; 

	void CheckForQueueCountChanges(struct TArray<struct FProcessingItem>& Queue); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateTrigger(); // (Public|BlueprintCallable|BlueprintEvent)
	void InitialiseQueue(int32_t Count); // (Public|BlueprintCallable|BlueprintEvent)
	void GetQueueSize(int32_t& Size); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void RecreateQueue(struct TArray<struct FProcessingItem>& Queue); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ElementClickedHandler(struct UUMG_CraftingQueueElement_C* Element); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RemoveQueueElement(int32_t Location); // (Public|BlueprintCallable|BlueprintEvent)
	void AddQueueElement(int32_t Location, struct FProcessingItem Recipe); // (Public|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_Queue(int32_t EntryPoint); // (Final|UbergraphFunction)
	void QueueElementClicked__DelegateSignature(int32_t Location); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


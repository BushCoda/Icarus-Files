// WidgetBlueprintGeneratedClass UMG_StatsWindow.UMG_StatsWindow_C
struct UUMG_StatsWindow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Backglow; 
	struct UHorizontalBox* Container; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; 
	struct UOverlay* Overlay; 
	struct UUMG_StatList_C* CurrentStatList; 
	int32_t MaxVerticalElements; 
	int32_t CurrentElements; 
	bool Bound; 
	struct AActor* BoundActor; 
	bool HideZeroStats; 
	bool AutoInitialise; 
	bool WantsStatUpdate; 
	struct FMulticastInlineDelegate WindowClosed; 

	void CreateList(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateStats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void AddWidget(struct UUserWidget* Widget); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Update(); // (BlueprintCallable|BlueprintEvent)
	void Initialise(struct AActor* BoundActor); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_StatsWindow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void WindowClosed__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


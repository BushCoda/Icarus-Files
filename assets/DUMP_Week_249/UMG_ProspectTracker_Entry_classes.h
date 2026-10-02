// WidgetBlueprintGeneratedClass UMG_ProspectTracker_Entry.UMG_ProspectTracker_Entry_C
struct UUMG_ProspectTracker_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* HoverAnimation; 
	struct UButton* ButtonBase; 
	struct UTextBlock* ClaimedText; 
	struct UTextBlock* Days; 
	struct UTextBlock* Hours; 
	struct UUMG_BasicButton_2_C* JoinButton; 
	struct UTextBlock* JoinedText; 
	struct UTextBlock* Minutes; 
	struct UTextBlock* OccupiedText; 
	struct UTextBlock* ProspectName; 
	struct UTextBlock* Seconds; 
	struct UUMG_BasicButton_2_C* SettleButton; 
	struct UHorizontalBox* SettleStateBoxes; 
	struct FIcarusSession Session; 
	bool Found; 

	void SetTime(struct TArray<struct FString>& Time); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Initialise(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // (BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ProspectTracker_Entry(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


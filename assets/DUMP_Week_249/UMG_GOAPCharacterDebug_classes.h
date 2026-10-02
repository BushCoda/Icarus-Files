// WidgetBlueprintGeneratedClass UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C
struct UUMG_GOAPCharacterDebug_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Expand; 
	struct UVerticalBox* Actions; 
	struct UBorder* Border_Header; 
	struct UExpandableArea* ExpandableArea_85; 
	struct UVerticalBox* Goals; 
	struct UVerticalBox* GOAPStateNames; 
	struct UVerticalBox* GOAPStateValues; 
	struct UProgressBar* Health; 
	struct UVerticalBox* MotivationNames; 
	struct UVerticalBox* MotivationsValues; 
	struct UTextBlock* ObjectName; 
	struct UTextBlock* TextBlock_3; 
	struct UTextBlock* TextBlock_4; 
	struct UTextBlock* TextBlock_10; 
	struct UTextBlock* TextBlock_13; 
	struct UTextBlock* TextBlock_14; 
	struct UTextBlock* TextBlock_18; 
	struct UTextBlock* TextBlock_23; 
	struct UTextBlock* TextBlock_236; 
	struct UTextBlock* TextBlock_HealthValue_2; 
	struct UTextBlock* TextBlock_Level; 
	struct AIcarusNPCGOAPController* NPCGOAPController; 
	struct AIcarusNPCController* NPCController; 
	struct TArray<struct FGOAPMotivationsRowHandle> MotivationOrder; 
	bool ActionsAndGoals; 
	struct TMap<struct FName, int32_t> State; 
	bool IsFocused; 
	bool ForceFocus; 

	struct FText GetRelationship(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetLevel(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetDistance(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetHealthValue(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetMovement(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetControllerState(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	float GetHealth(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Update Motivation(struct UIcarusGOAPMotivation* Motivation); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetupIcarusNPCController(struct AIcarusNPCController* NewController); // (Public|BlueprintCallable|BlueprintEvent)
	struct FText GetName(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetAction(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FText GetPlan(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetGoapController(struct ABP_IcarusNPCGOAPController_C* NewController); // (Public|BlueprintCallable|BlueprintEvent)
	struct FText GetGoal(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_GOAPCharacterDebug(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


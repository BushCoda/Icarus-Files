// WidgetBlueprintGeneratedClass UMG_InWorld_Animal_Trap.UMG_InWorld_Animal_Trap_C
struct UUMG_InWorld_Animal_Trap_C : UW_ProjectionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBackgroundBlur* BackgroundBlur_1; 
	struct UImage* BaitImage; 
	struct UOverlay* BaitOverlay; 
	struct UImage* CaughtCreature; 
	struct UTextBlock* CreatureLevel; 
	struct UTextBlock* CreatureName; 
	struct UOverlay* CreatureOverlay; 
	struct UOverlay* MainOverlay; 
	struct UImage* Pointer; 
	struct URetainerBox* RetainerBox_1; 
	struct UTextBlock* TrapStatus; 
	struct AIcarusActor* Cached Current Item; 
	struct UUMG_DeployableModifiersList_C* ModifierList; 

	void UpdateVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void TickWidget(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_InWorld_Animal_Trap(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


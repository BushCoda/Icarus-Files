// WidgetBlueprintGeneratedClass CF_GrowCrop.CF_GrowCrop_C
struct UCF_GrowCrop_C : UCF_BaseButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void GetTargetedFarmableComponent(struct AIcarusPlayerController* Player, struct UFarmableComponent*& Farmable); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_GrowCrop(int32_t EntryPoint); // (Final|UbergraphFunction)
};


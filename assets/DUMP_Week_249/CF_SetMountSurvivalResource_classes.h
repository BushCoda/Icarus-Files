// WidgetBlueprintGeneratedClass CF_SetMountSurvivalResource.CF_SetMountSurvivalResource_C
struct UCF_SetMountSurvivalResource_C : UCF_BaseComboInteger_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class ESurvivalConsumableType Enum Value; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Handle Execute(struct UUserWidget* Widget, int32_t Amount); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_SetMountSurvivalResource(int32_t EntryPoint); // (Final|UbergraphFunction)
};


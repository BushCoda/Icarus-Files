// WidgetBlueprintGeneratedClass DamageType.DamageType_C
struct UDamageType_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* Text; 
	enum class EIcarusDamageType DamageType; 

	void SetDamageType(enum class EIcarusDamageType NewDamageType); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_DamageType(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


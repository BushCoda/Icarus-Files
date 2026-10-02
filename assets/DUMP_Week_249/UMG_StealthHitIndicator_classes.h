// WidgetBlueprintGeneratedClass UMG_StealthHitIndicator.UMG_StealthHitIndicator_C
struct UUMG_StealthHitIndicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* Pulse; 
	struct UTextBlock* StealthDamageText; 
	enum class EStealthAttackType StealthType; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnAnimComplete(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_StealthHitIndicator(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


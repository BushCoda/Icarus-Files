// WidgetBlueprintGeneratedClass UMG_ArmourHealth.UMG_ArmourHealth_C
struct UUMG_ArmourHealth_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* BrokenFlashing; 
	struct UImage* ArmourPiece; 
	struct FSlateBrush Healthy; 
	struct FSlateBrush damaged; 
	struct FSlateBrush Broken; 
	int32_t ArmourDurability; 
	float HealthyArmourThreshold; 
	float DamagedArmourThreshold; 
	float BrokenArmourThreshold; 

	void SetArmourHealth(float ArmourDurability); // (Public|BlueprintCallable|BlueprintEvent)
	void SetArmourVisuals(enum class E_ArmourHealth ArmourHealth); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ArmourHealth(int32_t EntryPoint); // (Final|UbergraphFunction)
};


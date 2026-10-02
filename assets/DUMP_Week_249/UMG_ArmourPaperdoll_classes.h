// WidgetBlueprintGeneratedClass UMG_ArmourPaperdoll.UMG_ArmourPaperdoll_C
struct UUMG_ArmourPaperdoll_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UOverlay* MainOverlay; 
	struct UImage* RadiationBarrier; 
	struct UUMG_ArmourHealth_C* UMG_ArmourHealth_ArmL; 
	struct UUMG_ArmourHealth_C* UMG_ArmourHealth_ArmR; 
	struct UUMG_ArmourHealth_C* UMG_ArmourHealth_Chest; 
	struct UUMG_ArmourHealth_C* UMG_ArmourHealth_Feet; 
	struct UUMG_ArmourHealth_C* UMG_ArmourHealth_Helmet; 
	struct UUMG_ArmourHealth_C* UMG_ArmourHealth_Legs; 
	enum class E_ArmourHealth EArmourHealth; 
	struct FSlateColor HealthyOpacity; 
	struct FSlateColor DamagedOpacity; 
	struct FSlateColor BrokenOpacity; 
	float DamgedArmourThreshold; 
	int32_t RadResist; 

	void UpdateElement(int32_t Slot, float Durability); // (Public|BlueprintCallable|BlueprintEvent)
	void SetPaperdollStyle(struct UInventory* EquipmentInventory); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ArmourPaperdoll(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


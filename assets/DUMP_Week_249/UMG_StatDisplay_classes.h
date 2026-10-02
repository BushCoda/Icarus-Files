// WidgetBlueprintGeneratedClass UMG_StatDisplay.UMG_StatDisplay_C
struct UUMG_StatDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* BasicContainer; 
	struct UUMG_StatTitle_C* ColdRes; 
	struct UUMG_StatTitle_C* CollisionRes; 
	struct UUMG_StatTitle_C* Critical; 
	struct UUMG_StatTitle_C* ExplosiveRes; 
	struct UUMG_StatTitle_C* ExposureRes; 
	struct UUMG_StatTitle_C* Health; 
	struct UUMG_StatTitle_C* HealthRegen; 
	struct UUMG_StatTitle_C* HeatRes; 
	struct UUMG_StatTitle_C* Melee; 
	struct UUMG_StatTitle_C* MeleeRes; 
	struct UUMG_StatTitle_C* MovementSpeed; 
	struct UUMG_StatTitle_C* ProjectileRes; 
	struct UUMG_StatTitle_C* RadiationRes; 
	struct UUMG_StatTitle_C* Ranged; 
	struct UVerticalBox* ResistanceContainer; 
	struct UUMG_StatTitle_C* Stamina; 
	struct UUMG_StatTitle_C* StaminaRegen; 
	struct UUMG_StatTitle_C* Stealth; 
	struct UVerticalBox* WeaponContainer; 
	struct UUMG_StatTitle_C* WeightCapacity; 
	struct UUMG_StatTitle_C* XPBonus; 
	bool Initialised; 
	bool NeedsStatUpdate; 
	struct AActor* TargetActor; 

	void UpdateRangeStats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetTargetActor(struct AActor* TargetActor); // (Public|BlueprintCallable|BlueprintEvent)
	void GetTargetActor(struct AActor*& TargetActor); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateStats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void StatContainerUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_StatDisplay(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


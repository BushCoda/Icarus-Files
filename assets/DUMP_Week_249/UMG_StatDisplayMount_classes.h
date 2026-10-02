// WidgetBlueprintGeneratedClass UMG_StatDisplayMount.UMG_StatDisplayMount_C
struct UUMG_StatDisplayMount_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* BasicContainer; 
	struct UUMG_StatTitle_C* ColdRes; 
	struct UUMG_StatTitle_C* FallRes; 
	struct UUMG_StatTitle_C* FireRes; 
	struct UUMG_StatTitle_C* Health; 
	struct UUMG_StatTitle_C* HealthRegen; 
	struct UUMG_StatTitle_C* HeatRes; 
	struct UUMG_StatTitle_C* MeleeDamage; 
	struct UUMG_StatTitle_C* MeleeRes; 
	struct UUMG_StatTitle_C* MovementSpeed; 
	struct UUMG_StatTitle_C* PoisonRes; 
	struct UUMG_StatTitle_C* ProjectileRes; 
	struct UVerticalBox* ResistanceContainer; 
	struct UUMG_StatTitle_C* SprintSpeed; 
	struct UUMG_StatTitle_C* Stamina; 
	struct UUMG_StatTitle_C* StaminaRegen; 
	struct UUMG_StatTitle_C* WeightCapacity; 
	bool Initialised; 
	bool NeedsStatUpdate; 
	struct AActor* TargetActor; 

	void Update Movement(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update Sprint(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetTargetActor(struct AActor* TargetActor); // (Public|BlueprintCallable|BlueprintEvent)
	void GetTargetActor(struct AActor*& TargetActor); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateStats(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void StatContainerUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_StatDisplayMount(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// BlueprintGeneratedClass BP_NPC_MammothArctic_Character.BP_NPC_MammothArctic_Character_C
struct ABP_NPC_MammothArctic_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct USphereComponent* CritArea_Tusk2; 
	struct USphereComponent* CritArea_Tusk1; 
	struct UGFurComponent* GFurShort; 
	struct UGFurComponent* GFurLong; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	enum class EGOAPProperty FastestActiveState; 

	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnActionMontageNotify(struct FName NotifyName); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};


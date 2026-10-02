// BlueprintGeneratedClass BP_Tame_Chicken.BP_Tame_Chicken_C
struct ABP_Tame_Chicken_C : ABP_Tame_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 

	void UpdateCosmeticMaterials(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetCarcassStats(struct TArray<struct FIcarusStatReplicated>& Custom Stats); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool CanKillcam(); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void AssignSkinIndex(int32_t Index); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Tame_Chicken(int32_t EntryPoint); // (Final|UbergraphFunction)
};


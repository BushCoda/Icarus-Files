// BlueprintGeneratedClass BTTask_PerformAction_ApeGas.BTTask_PerformAction_ApeGas_C
struct UBTTask_PerformAction_ApeGas_C : UBTTask_PerformAction_Base_C {
	float GasLifetime; 
	float GasModifierLifetime; 

	void DoAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void RandomOffset(struct FVector Location, float MinOffset, float MaxOffset, struct FVector& OffsetOut); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SpawnCloud(struct FVector Location, struct AActor* Owner); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};


// BlueprintGeneratedClass BTTask_PerformAction_ShootBulletEx.BTTask_PerformAction_ShootBulletEx_C
struct UBTTask_PerformAction_ShootBulletEx_C : UBTTask_PerformAction_SpitAttack_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void SetupCarrierDrone(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupHunterDrone(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupScoutDrone(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupStandardDrone(); // (Public|BlueprintCallable|BlueprintEvent)
	void SetupVarsFromDroneType(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DoAction(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_PerformAction_ShootBulletEx(int32_t EntryPoint); // (Final|UbergraphFunction)
};


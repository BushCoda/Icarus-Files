// BlueprintGeneratedClass BTS_SweepChargeDamage_IceMammoth.BTS_SweepChargeDamage_IceMammoth_C
struct UBTS_SweepChargeDamage_IceMammoth_C : UBTS_SweepChargeDamage_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float SphereRadius; 

	void TryAttack(struct APawn* ControlledPawn, bool& WasBlockingAttack); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	float GetChargeDamageRadius(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_SweepChargeDamage_IceMammoth(int32_t EntryPoint); // (Final|UbergraphFunction)
};


// BlueprintGeneratedClass BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C
struct UBP_ActionableBehaviour_FireArm_FireController_Charge_C : UBP_ActionableBehaviour_FireArm_FireController_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float ChargePower; 
	bool StaminaUsed; 
	float FullChargePowerTimeStamp; 
	struct UMatineeCameraShake* CameraShake; 
	bool LocalChargeCancel; 
	struct FTimerHandle ChargeShakeTimer; 
	bool IsDoingChargeShake; 
	float LastChargePower; 
	float AcceptableClientPowerDifference; 
	bool LocalIsFiring; 

	void GetFiring(bool& Firing); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void HandleRep_WantsFire(); // (Protected|BlueprintCallable|BlueprintEvent)
	void FinishFiring(); // (Public|BlueprintCallable|BlueprintEvent)
	void BeginFire(); // (Public|BlueprintCallable|BlueprintEvent)
	void IsChargedForFiring(bool& Charged); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void EndFire(); // (Public|BlueprintCallable|BlueprintEvent)
	void CancelCharging(); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckCancelCharge(); // (Public|BlueprintCallable|BlueprintEvent)
	void TickCameraEffects(); // (Public|BlueprintCallable|BlueprintEvent)
	float GetChargeTimeMultiplier(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void TickCharge(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	float GetLaunchForce(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsCharging(bool& IsCharging); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdatePersistentAudioCharge(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetCurrentChargePower(float& ChargePower); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void OnReloadPressed(); // (BlueprintCallable|BlueprintEvent)
	void ChargeShakeBegin(); // (BlueprintCallable|BlueprintEvent)
	void ChargeShakeEnd(); // (BlueprintCallable|BlueprintEvent)
	void LateSetup(); // (BlueprintCallable|BlueprintEvent)
	void Server_CancelCharge(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Server_OnReleasedShot(bool ClientFired, float ClientChargePower); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_Charge(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// BlueprintGeneratedClass BP_SkeletalItem_LightBase.BP_SkeletalItem_LightBase_C
struct ABP_SkeletalItem_LightBase_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* ActiveComponents; 
	bool LightActive; 
	bool Underwater; 
	float UnderwaterDepth; 
	struct FMulticastInlineDelegate OnLightSwitchAction; 
	struct FMulticastInlineDelegate LightStateChanged; 
	bool UsesFuel; 
	int32_t FuelConsumptionAmount; 
	float FuelConsumptionTickRate; 
	enum class LightSlotAttachPoint LightSlotAttachPoint; 
	bool IgnoreWater; 
	bool IsCurrentlyOffset; 
	struct FVector PreOffsetLocation; 

	void GetAttachmentOffset(struct FTransform& ThirdPersonActorOffset, struct FTransform& FirstPersonActorOffset, struct FVector& ThirdPersonComponentOffset); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetThirdPersonOnlyComponents(struct TArray<struct UPrimitiveComponent*>& OutComponents); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetComponentToOffset(struct USceneComponent*& Component); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetLightSlotAttachPoint(enum class LightSlotAttachPoint& AttachPoint); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetLightAudioState(bool IsLit); // (Public|BlueprintCallable|BlueprintEvent)
	void CanLight(bool& CanLight); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ConsumeFuel(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void HasFuel(bool& Fuel); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void OnRep_LightActive(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_Underwater(); // (BlueprintCallable|BlueprintEvent)
	void GetLightActive(bool& LightActive); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsLit(bool& Lit); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void LightUpdated(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateWaterState(bool Floating); // (Public|BlueprintCallable|BlueprintEvent)
	void SetLightActive(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void PrimaryFireToggle(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnFloatableUpdated(bool Floating); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void SetItemVisible(bool bVisible); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void FillableUnitsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void FuelTick(); // (BlueprintCallable|BlueprintEvent)
	void UpdateCurrentOffset(struct FVector NewOffset); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_LightBase(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void LightStateChanged__DelegateSignature(bool ActiveState); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnLightSwitchAction__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


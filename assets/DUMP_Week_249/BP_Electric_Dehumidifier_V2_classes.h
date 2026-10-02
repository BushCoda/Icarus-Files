// BlueprintGeneratedClass BP_Electric_Dehumidifier_V2.BP_Electric_Dehumidifier_V2_C
struct ABP_Electric_Dehumidifier_V2_C : ABP_Deployable_PowerToggleableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UStaticMeshComponent* SM_DEP_Electric_Dehumidifier_Fan_02; 
	struct UStaticMeshComponent* SM_DEP_Electric_Dehumidifier_Fan_01; 
	struct UStaticMeshComponent* SM_DEP_Electric_Dehumidifier_Proxy_V2; 
	struct UNiagaraComponent* Niagara2; 
	struct UNiagaraComponent* Niagara1; 
	struct USceneComponent* Scene_Niagara; 
	struct UFMODAudioComponent* FMOD_Active_Audio; 
	float FanAnim_SpinRate_E87368C54EC6D3F0213C90880A7FFD3F; 
	enum class ETimelineDirection FanAnim__Direction_E87368C54EC6D3F0213C90880A7FFD3F; 
	struct UTimelineComponent* FanAnim; 
	struct UInventory* GeneralInventory; 
	int32_t LastRangeValue; 

	void UpdateModifier(bool Powered); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateRunningEffects(bool ReceivingPower); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FanAnim__FinishedFunc(); // (BlueprintEvent)
	void FanAnim__UpdateFunc(); // (BlueprintEvent)
	void PlayFanAnim(); // (BlueprintCallable|BlueprintEvent)
	void StopFanAnim(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStartRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnDeviceStopRunning(); // (BlueprintCallable|BlueprintEvent)
	void OnBrownOutStrengthChanged(struct FIcarusResourcesEnum ResourceType, int32_t NewBrownOutStrength); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnStatContainerUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Electric_Dehumidifier_V2(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


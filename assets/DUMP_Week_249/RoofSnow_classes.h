// BlueprintGeneratedClass RoofSnow.RoofSnow_C
struct URoofSnow_C : UStaticMeshComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float MeshXScale; 
	float MeshYScale; 
	float MeshZScaleMultiplier; 
	float Snow Amount; 
	float BuildingAngleClampModifier; 
	float MaxFlatRoofSnowAmount; 
	bool Destroying; 
	struct FTimerHandle SnowDefrostTimer; 
	bool RecentlyAdded; 
	float SnowClearedDelay; 
	struct UFMODEvent* SnowClearSound; 

	void OnRep_Destroying(); // (BlueprintCallable|BlueprintEvent)
	void Update Snow Visualizer(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Server Modify Snow Amount(float SnowDelta); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Snow Amount(); // (BlueprintCallable|BlueprintEvent)
	void TurnOffSnow(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Defrost(); // (BlueprintCallable|BlueprintEvent)
	void TriggerDefrostTimer(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void MultiClearSnowEffects(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ServerClearSnow(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_RoofSnow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


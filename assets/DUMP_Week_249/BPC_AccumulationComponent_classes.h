// BlueprintGeneratedClass BPC_AccumulationComponent.BPC_AccumulationComponent_C
struct UBPC_AccumulationComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class EAccumulationType AccumulationType; 
	struct FTimerHandle ClearTimer; 
	bool RecentlyAdded; 
	float Amount; 
	bool Destroying; 
	float ClearedDelay; 
	float MaxFlatRoofAmount; 
	float BuildingAngleClampModifier; 
	bool BuildUpEnabled; 

	void OnRep_Destroying(); // (BlueprintCallable|BlueprintEvent)
	void UpdateType(enum class EAccumulationType AccumulationType); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ServerModifyAmount(float Delta, enum class EAccumulationType AccumulationType); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateAmount(float Amount); // (Private|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FixTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag, bool Add); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SpawnDestructionEffects(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ClearEvent(); // (BlueprintCallable|BlueprintEvent)
	void TriggerClearTimer(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ServerClear(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void Multicast_SpawnEffect(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BPC_AccumulationComponent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


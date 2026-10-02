// BlueprintGeneratedClass BP_Payload_Dropship_Grenade.BP_Payload_Dropship_Grenade_C
struct ABP_Payload_Dropship_Grenade_C : ABP_Payload_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* ActiveAudio; 
	float BurnRadius; 
	float DamageMultiplier; 
	float InnerRadius; 
	float OuterRadius; 
	struct ABP_DropShip_C* Dropship; 
	struct AIcarusItem* SpawnedFlare; 
	float PostDeployLifespan; 
	struct FVector_NetQuantize EffectsSourceLocation; 

	void OnRep_EffectsSourceLocation(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_EffectsAreActive(); // (BlueprintCallable|BlueprintEvent)
	void SpawnFlare(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnEQSComplete(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Payload_Dropship_Grenade(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


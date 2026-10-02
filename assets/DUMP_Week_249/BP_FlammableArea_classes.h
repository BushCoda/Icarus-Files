// BlueprintGeneratedClass BP_FlammableArea.BP_FlammableArea_C
struct ABP_FlammableArea_C : AGameplayTagActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_Flammable_ActiveCombustion_C* BP_Flammable_ActiveCombustion; 
	struct UCapsuleComponent* FireSettingCapsule; 
	struct USceneComponent* DefaultSceneRoot; 
	float DefaultLifeSpan; 
	bool ForceNearbyActorIgnition; 
	float NearbyIgnitionRadius; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void CleanupVFX(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_FlammableArea(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// BlueprintGeneratedClass BP_EquippableModifier_CompanionDrone.BP_EquippableModifier_CompanionDrone_C
struct UBP_EquippableModifier_CompanionDrone_C : UBP_EquippableModifier_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AActor* SpawnedDrone; 

	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_EquippableModifier_CompanionDrone(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


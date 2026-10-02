// BlueprintGeneratedClass BP_Interactable_Harvest_Resource.BP_Interactable_Harvest_Resource_C
struct UBP_Interactable_Harvest_Resource_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_IcarusPlayerCharacterSurvival_C* CurrentPlayer; 
	struct ABP_ResourceNodeBase_C* ResourceNodeBase; 
	enum class EHandedness Handedness; 

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Interact(struct AActor* Instigator, struct FHitResult& HitResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void PlayPickupFX(struct AIcarusPlayerCharacter* Target); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Interactable_Harvest_Resource(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


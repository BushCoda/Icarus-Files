// BlueprintGeneratedClass BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C
struct ABP_GOAPInteractable_Base_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBillboardComponent* Billboard; 
	struct USphereComponent* Sphere; 
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; 
	struct UBP_GOAPInteractableComponent_C* BP_GOAPInteractableComponent; 
	struct USceneComponent* DefaultSceneRoot; 
	struct ABP_IcarusNPCGOAPCharacter_C* GOAPCharRef; 

	bool IsStealthBonusDamageDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool ShouldOverrideTargetNeutrality(struct AActor* TargetActor, enum class ERelationshipType& OutRelationshipType); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct TArray<struct FCriticalHitLocation> GetCriticalHitBones(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FAIRelationshipsRowHandle GetRelationshipData(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	int32_t GetTargetAlertness(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetTargetLocation(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsActorAlive(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsCriticalHitDisabled(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsHidden(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void OnInteractionComplete(struct AIcarusNPCGOAPController* Controller); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_1_GOAPInteractionSignature__DelegateSignature(struct UIcarusGOAPInteractableComponent* Component); // (BlueprintEvent)
	void OnMontageComplete(struct UAnimMontage* Montage, bool bInterrupted); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void CheckDebugEnabled(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_0_GOAPAbortSignature__DelegateSignature(struct UIcarusGOAPInteractableComponent* Component); // (BlueprintEvent)
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_3_GOAPInteractionCompleteSignature__DelegateSignature(struct UIcarusGOAPInteractableComponent* Component); // (BlueprintEvent)
	void ExecuteUbergraph_BP_GOAPInteractable_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


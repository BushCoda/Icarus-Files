// BlueprintGeneratedClass BP_BerryBush.BP_BerryBush_C
struct ABP_BerryBush_C : ABP_ResourceNodeBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* PerceptionTarget; 
	struct UBP_GOAPInteractableComponent_C* BP_GOAPInteractableComponent; 
	struct TMap<struct UAnimInstance*, struct UAnimMontage*> PendingAnimations; 

	void PlayHarvestFX(struct FVector Location, struct AIcarusPlayerCharacter* Instigator); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_C61AA06843904A6595D627BFC74135C5(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_35D8DF264EE323267AA6EA8C06002441(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_15B36D3C434B95EB3872FB8EDAED70B9(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_15B36D3C434B95EB3872FB8EDAED70B9(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_15B36D3C434B95EB3872FB8EDAED70B9(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_15B36D3C434B95EB3872FB8EDAED70B9(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_15B36D3C434B95EB3872FB8EDAED70B9(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnMontageComplete(struct UAnimMontage* Montage, bool bInterrupted); // (BlueprintCallable|BlueprintEvent)
	void MULTI_PlayMontage(struct ABP_IcarusNPCGOAPCharacter_C* Character, struct TSoftObjectPtr<UAnimMontage> Montage, struct FName MontageSection); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void MULTI_AbortMontage(struct AIcarusNPCGOAPCharacter* Character, struct TSoftObjectPtr<UAnimMontage> Montage); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_2_GOAPInteractionCompleteSignature__DelegateSignature(struct UIcarusGOAPInteractableComponent* Component); // (BlueprintEvent)
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_1_GOAPInteractionSignature__DelegateSignature(struct UIcarusGOAPInteractableComponent* Component); // (BlueprintEvent)
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_0_GOAPAbortSignature__DelegateSignature(struct UIcarusGOAPInteractableComponent* Component); // (BlueprintEvent)
	void ExecuteUbergraph_BP_BerryBush(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


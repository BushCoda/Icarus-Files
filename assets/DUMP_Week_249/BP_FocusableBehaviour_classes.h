// BlueprintGeneratedClass BP_FocusableBehaviour.BP_FocusableBehaviour_C
struct UBP_FocusableBehaviour_C : UFocusableComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<struct UObject*> StoredFocusableAnims; 
	bool Attached; 
	struct USkeletalMeshComponent* FPShadowMesh; 
	bool IsThirdPerson; 
	bool IsPlayingFocusAnimation; 
	struct AIcarusPlayerCharacter* OwningPlayer; 
	int32_t ChargingItemModifierID; 

	void GetFocusedMontage(struct TSoftObjectPtr<UAnimMontage>& FPFocused Montage, struct TSoftObjectPtr<UAnimMontage>& TPFocused Montage, struct TSoftObjectPtr<UAnimMontage>& Item Focused Montage); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RemoveModifiers(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateModifiers(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OwningPlayerEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (Public|BlueprintCallable|BlueprintEvent)
	float GetEquipSpeedModifier(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FItemAnimationData GetAnimationData(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct FItemAttachmentData GetAttachmentData(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdatePanini(struct AIcarusItem* Item); // (Public|BlueprintCallable|BlueprintEvent)
	void Show Mesh(); // (Public|BlueprintCallable|BlueprintEvent)
	void ValidateAttachMesh(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnAnim_Focused(struct AActor* Invoking Actor); // (Public|BlueprintCallable|BlueprintEvent)
	void OnAnim_Unfocused(struct AActor* Invoking Actor); // (Public|BlueprintCallable|BlueprintEvent)
	void TryAttachToOwner(struct AIcarusItem* ItemActor, struct AActor* Invoking Actor); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnLoaded_2B8B2B624CE5F97DAE6892B77E5FE36F(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_B75FF5954D2D861DA51E0E923DB50BFF(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_AC757DAE416C84ADD41FA08FC6C50D49(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_AC757DAE416C84ADD41FA08FC6C50D49(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_AC757DAE416C84ADD41FA08FC6C50D49(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_AC757DAE416C84ADD41FA08FC6C50D49(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_AC757DAE416C84ADD41FA08FC6C50D49(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnAnimNotify(struct FAnimNotifyEvent& Notify, struct AActor* AnimInstancePawn); // (Event|Public|HasOutParms|BlueprintEvent)
	void OnFocused(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnUnfocused(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnDataSet(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void NotifyMeshChanged(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_FocusableBehaviour(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


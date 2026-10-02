// BlueprintGeneratedClass BP_SkeletalItem_Fish.BP_SkeletalItem_Fish_C
struct ABP_SkeletalItem_Fish_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* VisualFish; 
	bool bIsBlinky; 

	void OnLoaded_D1E6FED94206F8C01D702FB25448C4EF(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_91199F9C400E2B4956FD0DB90B732EA7(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_91199F9C400E2B4956FD0DB90B732EA7(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_91199F9C400E2B4956FD0DB90B732EA7(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_91199F9C400E2B4956FD0DB90B732EA7(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_91199F9C400E2B4956FD0DB90B732EA7(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Custom Animation(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Fish(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// BlueprintGeneratedClass BP_SkeletalItem_Wood_Rag_Torch.BP_SkeletalItem_Wood_Rag_Torch_C
struct ABP_SkeletalItem_Wood_Rag_Torch_C : ABP_SkeletalItem_Wood_Flare_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_TorchRag_FireShell; 

	void GetThirdPersonOnlyComponents(struct TArray<struct UPrimitiveComponent*>& OutComponents); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SetItemVisible(bool bVisible); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void LightUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Wood_Rag_Torch(int32_t EntryPoint); // (Final|UbergraphFunction)
};


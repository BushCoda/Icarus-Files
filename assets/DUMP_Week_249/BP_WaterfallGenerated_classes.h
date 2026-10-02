// BlueprintGeneratedClass BP_WaterfallGenerated.BP_WaterfallGenerated_C
struct ABP_WaterfallGenerated_C : AWaterBody {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_WaterfallAudioComponent_C* WaterfallAudio; 
	struct UStaticMeshComponent* SM_Waterfall; 
	int32_t MeshIndex; 
	struct FVector Scale; 
	struct UMaterialInstance* MaterialOverride; 
	struct TArray<struct UMaterialInstance*> MaterialOverrideArray; 
	bool IsInCave; 
	bool IsLava; 
	float LavaSpeed; 
	struct FST_Waterfall_Details Waterfall Custom Details; 
	bool UseCalmVariant; 

	void UpdateMaterials(); // (Public|BlueprintCallable|BlueprintEvent)
	void Water Fall Custom Details(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__BP_WaterfallGenerated_SM_Waterfall_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void BndEvt__BP_WaterfallGenerated_SM_Waterfall_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // (BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_WaterfallGenerated(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


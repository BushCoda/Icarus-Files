// BlueprintGeneratedClass BP_Saddle_NonRidable.BP_Saddle_NonRidable_C
struct ABP_Saddle_NonRidable_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* SaddleMesh; 
	struct USceneComponent* DefaultSceneRoot; 
	struct FSaddlesRowHandle SaddleDataRow; 

	void InitialiseWithSaddleData(struct FSaddlesRowHandle SaddleDataRow); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_8B4EC68E4BD00AEFC7C1E685110F6037(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnRep_SaddleDataRow(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Saddle_NonRidable(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// BlueprintGeneratedClass BP_FX_ShelterCapture.BP_FX_ShelterCapture_C
struct ABP_FX_ShelterCapture_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneCaptureComponent2D* ShelterCaptureComponent; 
	struct USceneComponent* DefaultSceneRoot; 
	struct TArray<struct AActor*> Show Only Actors; 
	struct FTimerHandle RefreshActorListTimer; 
	struct TArray<struct AActor*> StaticShowOnlyActors; 

	void CaptureScene(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_FX_ShelterCapture(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


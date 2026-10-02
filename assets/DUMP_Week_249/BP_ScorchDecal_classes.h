// BlueprintGeneratedClass BP_ScorchDecal.BP_ScorchDecal_C
struct ABP_ScorchDecal_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* RVT; 
	struct UDecalComponent* Decal; 
	struct USceneComponent* DefaultSceneRoot; 
	float FadeIn_Fade_3955FBF44E677FA5935C558A825C9787; 
	enum class ETimelineDirection FadeIn__Direction_3955FBF44E677FA5935C558A825C9787; 
	struct UTimelineComponent* FadeIn; 

	void FadeIn__FinishedFunc(); // (BlueprintEvent)
	void FadeIn__UpdateFunc(); // (BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_ScorchDecal(int32_t EntryPoint); // (Final|UbergraphFunction)
};


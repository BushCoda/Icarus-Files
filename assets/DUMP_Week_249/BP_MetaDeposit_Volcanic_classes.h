// BlueprintGeneratedClass BP_MetaDeposit_Volcanic.BP_MetaDeposit_Volcanic_C
struct ABP_MetaDeposit_Volcanic_C : ABP_MetaDeposit_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_MetaGroundRays; 
	struct USceneComponent* HarvesterSnap; 
	struct UStaticMeshComponent* Leaves; 
	struct UFMODAudioComponent* FMOD_MetaLoop; 
	struct UStaticMeshComponent* Tree; 
	struct UStaticMeshComponent* OverlayDecal; 
	struct UNiagaraComponent* Niagara; 
	struct URectLightComponent* RectLight; 
	float Timeline_FadeOut_MaterialIntensity_5FA61E05426880BD9F77F7B424497055; 
	float Timeline_FadeOut_Intensity_5FA61E05426880BD9F77F7B424497055; 
	enum class ETimelineDirection Timeline_FadeOut__Direction_5FA61E05426880BD9F77F7B424497055; 
	struct UTimelineComponent* Timeline_FadeOut; 

	void Timeline_FadeOut__FinishedFunc(); // (BlueprintEvent)
	void Timeline_FadeOut__UpdateFunc(); // (BlueprintEvent)
	void ResourceEmptied(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_MetaDeposit_Volcanic(int32_t EntryPoint); // (Final|UbergraphFunction)
};


// BlueprintGeneratedClass BP_MetaDeposit_Arctic.BP_MetaDeposit_Arctic_C
struct ABP_MetaDeposit_Arctic_C : ABP_MetaDeposit_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMOD_MetaLoop; 
	struct UStaticMeshComponent* OverlayDecal; 
	struct UNiagaraComponent* Niagara; 
	struct UStaticMeshComponent* SM_MetaGroundRays; 
	struct URectLightComponent* RectLight; 
	float Timeline_FadeOut_MaterialIntensity_3DACA88A4BA29A7A439FDD849EDCB5C6; 
	float Timeline_FadeOut_Intensity_3DACA88A4BA29A7A439FDD849EDCB5C6; 
	enum class ETimelineDirection Timeline_FadeOut__Direction_3DACA88A4BA29A7A439FDD849EDCB5C6; 
	struct UTimelineComponent* Timeline_FadeOut; 

	void Timeline_FadeOut__FinishedFunc(); // (BlueprintEvent)
	void Timeline_FadeOut__UpdateFunc(); // (BlueprintEvent)
	void ResourceEmptied(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_MetaDeposit_Arctic(int32_t EntryPoint); // (Final|UbergraphFunction)
};


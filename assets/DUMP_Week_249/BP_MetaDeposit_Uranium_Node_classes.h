// BlueprintGeneratedClass BP_MetaDeposit_Uranium_Node.BP_MetaDeposit_Uranium_Node_C
struct ABP_MetaDeposit_Uranium_Node_C : ABP_MetaDeposit_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_MetaExotic_Uranium_Node_09; 
	struct UStaticMeshComponent* SM_MetaExotic_Uranium_Node_010; 
	struct UStaticMeshComponent* SM_MetaExotic_Uranium_Node_03; 
	struct UStaticMeshComponent* SM_MetaExotic_Uranium_Node_02; 
	struct UStaticMeshComponent* SM_MetaExotic_Uranium_Node_08; 
	struct UStaticMeshComponent* SM_MetaExotic_Uranium_Node_07; 
	struct UStaticMeshComponent* SM_MetaExotic_Uranium_Node_06; 
	struct UStaticMeshComponent* SM_MetaExotic_Uranium_Node_05; 
	struct UStaticMeshComponent* SM_MetaExotic_Uranium_Node_04; 
	struct UNiagaraComponent* Niagara; 
	struct USceneComponent* SnapPoint; 
	struct UFMODAudioComponent* FMOD_MetaLoop; 
	struct UStaticMeshComponent* SM_MetaExotic_Uranium_Node_01; 
	struct URectLightComponent* RectLight; 
	float Timeline_FadeOut_EmissiveIntensity_3C3235C94E330A9F1B4C37AE2F2C646D; 
	float Timeline_FadeOut_MaterialIntensity_3C3235C94E330A9F1B4C37AE2F2C646D; 
	float Timeline_FadeOut_Intensity_3C3235C94E330A9F1B4C37AE2F2C646D; 
	enum class ETimelineDirection Timeline_FadeOut__Direction_3C3235C94E330A9F1B4C37AE2F2C646D; 
	struct UTimelineComponent* Timeline_FadeOut; 
	struct TArray<struct ABP_MetaDeposit_Uranium_C*> GlowingCrystals; 

	void Timeline_FadeOut__FinishedFunc(); // (BlueprintEvent)
	void Timeline_FadeOut__UpdateFunc(); // (BlueprintEvent)
	void ResourceEmptied(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void SetCrystalsState(bool bGlow); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_MetaDeposit_Uranium_Node(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// BlueprintGeneratedClass BP_MetaDeposit_Conifer.BP_MetaDeposit_Conifer_C
struct ABP_MetaDeposit_Conifer_C : ABP_MetaDeposit_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMOD_MetaLoop; 
	struct UNiagaraComponent* Niagara; 
	struct UStaticMeshComponent* SM_MetaGroundRays; 
	struct UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_08; 
	struct UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_07; 
	struct UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_06; 
	struct UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_05; 
	struct UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_04; 
	struct UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_03; 
	struct UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_02; 
	struct UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_01; 
	struct URectLightComponent* RectLight; 
	float Timeline_FadeOut_MaterialIntensity_DD7B1724447D1AD3197974861B05360D; 
	float Timeline_FadeOut_Intensity_DD7B1724447D1AD3197974861B05360D; 
	enum class ETimelineDirection Timeline_FadeOut__Direction_DD7B1724447D1AD3197974861B05360D; 
	struct UTimelineComponent* Timeline_FadeOut; 

	void Timeline_FadeOut__FinishedFunc(); // (BlueprintEvent)
	void Timeline_FadeOut__UpdateFunc(); // (BlueprintEvent)
	void ResourceEmptied(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_MetaDeposit_Conifer(int32_t EntryPoint); // (Final|UbergraphFunction)
};


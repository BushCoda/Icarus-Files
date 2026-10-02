// BlueprintGeneratedClass BP_Irradiated_Prospector_Corpse.BP_Irradiated_Prospector_Corpse_C
struct ABP_Irradiated_Prospector_Corpse_C : ABP_GOAP_Corpse_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi4; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi3; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi2; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi1; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Lo1; 
	float FadeLight_Alpha_29193A864A0320384B896492622325AE; 
	enum class ETimelineDirection FadeLight__Direction_29193A864A0320384B896492622325AE; 
	struct UTimelineComponent* FadeLight; 
	struct UMaterialInstanceDynamic* MatID1; 

	void IsSkeletonUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateCosmeticMaterials(); // (Public|BlueprintCallable|BlueprintEvent)
	void Populate Contents(float Multiplier, struct AIcarusPlayerCharacter* Player, bool ForcePopulateCorpse); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnSkinnedStateUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void FadeLight__FinishedFunc(); // (BlueprintEvent)
	void FadeLight__UpdateFunc(); // (BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Irradiated_Prospector_Corpse(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


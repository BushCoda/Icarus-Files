// BlueprintGeneratedClass BP_Irradiated_Mutation_Corpse.BP_Irradiated_Mutation_Corpse_C
struct ABP_Irradiated_Mutation_Corpse_C : ABP_GOAP_Corpse_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi6; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi5; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi4; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi3; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi2; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Hi1; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Lo1; 
	float FadeLight_Alpha_8AF483DB47937431B8A6A19F60CAD2B8; 
	enum class ETimelineDirection FadeLight__Direction_8AF483DB47937431B8A6A19F60CAD2B8; 
	struct UTimelineComponent* FadeLight; 
	struct UMaterialInstanceDynamic* MatID0; 
	struct UMaterialInstanceDynamic* MatID1; 

	void FadeLight__FinishedFunc(); // (BlueprintEvent)
	void FadeLight__UpdateFunc(); // (BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Irradiated_Mutation_Corpse(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


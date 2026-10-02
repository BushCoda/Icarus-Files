// BlueprintGeneratedClass BTT_IcarusGoap_PlayVocalisation.BTT_IcarusGOAP_PlayVocalisation_C
struct UBTT_IcarusGOAP_PlayVocalisation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class EAIVocalisationType VocalisationType; 

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTT_IcarusGOAP_PlayVocalisation(int32_t EntryPoint); // (Final|UbergraphFunction)
};


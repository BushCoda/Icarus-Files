// BlueprintGeneratedClass BTTask_TryCompleteAccolade.BTTask_TryCompleteAccolade_C
struct UBTTask_TryCompleteAccolade_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector PlayerCharacterKey; 
	struct FAccoladesRowHandle Accolade; 

	void ReceiveExecute(struct AActor* OwnerActor); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTTask_TryCompleteAccolade(int32_t EntryPoint); // (Final|UbergraphFunction)
};


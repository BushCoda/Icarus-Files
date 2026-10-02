// BlueprintGeneratedClass BTS_CheckForThrownItem.BTS_CheckForThrownItem_C
struct UBTS_CheckForThrownItem_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FBlackboardKeySelector PlayerKey; 
	struct FBlackboardKeySelector ThrownItemKey; 

	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BTS_CheckForThrownItem(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


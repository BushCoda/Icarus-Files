// BlueprintGeneratedClass BP_SMItem_Rudimentary_Stone.BP_SMItem_Rudimentary_Stone_C
struct ABP_SMItem_Rudimentary_Stone_C : AStaticItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UDestructibleComponent* Destructible; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Shatter Rock(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SMItem_Rudimentary_Stone(int32_t EntryPoint); // (Final|UbergraphFunction)
};


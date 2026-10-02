// BlueprintGeneratedClass BP_DropShipConnectionPoint.BP_DropShipConnectionPoint_C
struct ABP_DropShipConnectionPoint_C : AIcarusRocketPartConnector {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* Sphere; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnConnectionUpdated(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_DropShipConnectionPoint(int32_t EntryPoint); // (Final|UbergraphFunction)
};


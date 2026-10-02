// BlueprintGeneratedClass BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C
struct ABP_DropShip_RespawnPod_C : ABP_DropShip_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void SetInteraction(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void GetDropshipLoadoutItems(struct FItemData& TopPart, struct FItemData& MidPart, struct FItemData& BottomPart); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void CheckClientPartsReady(bool& PartsReady); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SpawnShipParts(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_DropShip_RespawnPod(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


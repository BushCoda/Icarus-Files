// BlueprintGeneratedClass BP_Back_DroneCompanion.BP_Back_DroneCompanion_C
struct ABP_Back_DroneCompanion_C : ABP_Back_Item_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* StaticMesh; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Back_DroneCompanion(int32_t EntryPoint); // (Final|UbergraphFunction)
};


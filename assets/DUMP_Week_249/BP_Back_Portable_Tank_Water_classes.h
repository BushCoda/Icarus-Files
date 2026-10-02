// BlueprintGeneratedClass BP_Back_Portable_Tank_Water.BP_Back_Portable_Tank_Water_C
struct ABP_Back_Portable_Tank_Water_C : ABP_Back_Item_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* StaticMesh; 

	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Back_Portable_Tank_Water(int32_t EntryPoint); // (Final|UbergraphFunction)
};


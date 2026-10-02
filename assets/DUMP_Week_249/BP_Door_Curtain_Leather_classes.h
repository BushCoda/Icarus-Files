// BlueprintGeneratedClass BP_Door_Curtain_Leather.BP_Door_Curtain_Leather_C
struct ABP_Door_Curtain_Leather_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_DEP_Leather_Curtain_Door; 
	struct UBoxComponent* InteractionCollision; 
	struct UCapsuleComponent* BlockingCapsule; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Door_Curtain_Leather(int32_t EntryPoint); // (Final|UbergraphFunction)
};


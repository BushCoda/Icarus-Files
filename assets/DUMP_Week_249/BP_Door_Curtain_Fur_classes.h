// BlueprintGeneratedClass BP_Door_Curtain_Fur.BP_Door_Curtain_Fur_C
struct ABP_Door_Curtain_Fur_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBoxComponent* InteractionCollision; 
	struct UCapsuleComponent* BlockingCapsule; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Door_Curtain_Fur(int32_t EntryPoint); // (Final|UbergraphFunction)
};


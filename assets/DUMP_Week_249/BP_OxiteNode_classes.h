// BlueprintGeneratedClass BP_OxiteNode.BP_OxiteNode_C
struct ABP_OxiteNode_C : ABP_ResourceNodeBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* Stone3; 
	struct UStaticMeshComponent* Stone2; 
	struct UStaticMeshComponent* Stone1; 
	struct UStaticMeshComponent* Oxite3; 
	struct UStaticMeshComponent* Oxite2; 
	struct UStaticMeshComponent* Oxite1; 
	struct USceneComponent* Resources; 

	void PlayHarvestFX(struct FVector Location, struct AIcarusPlayerCharacter* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_OxiteNode(int32_t EntryPoint); // (Final|UbergraphFunction)
};


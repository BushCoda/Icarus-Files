// BlueprintGeneratedClass BP_NPC_Juvenile_Domesticated.BP_NPC_Juvenile_Domesticated_C
struct ABP_NPC_Juvenile_Domesticated_C : ABP_IcarusNPCGOAPCharacter_Juvenile_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FName ParentCharacterKey; 

	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void OnParentCharacterUpdated(); // (Event|Protected|BlueprintEvent)
	void ReceivePossessed(struct AController* NewController); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_Juvenile_Domesticated(int32_t EntryPoint); // (Final|UbergraphFunction)
};


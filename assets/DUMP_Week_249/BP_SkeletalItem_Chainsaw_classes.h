// BlueprintGeneratedClass BP_SkeletalItem_Chainsaw.BP_SkeletalItem_Chainsaw_C
struct ABP_SkeletalItem_Chainsaw_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* SFX_IdleLoop; 
	bool TurnedOn; 

	void OnRep_TurnedOn(); // (BlueprintCallable|BlueprintEvent)
	void OnDynamicStateUpdated(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Chainsaw(int32_t EntryPoint); // (Final|UbergraphFunction)
};


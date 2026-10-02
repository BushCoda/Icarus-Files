// BlueprintGeneratedClass BP_Nest_Base.BP_Nest_Base_C
struct ABP_Nest_Base_C : ABP_ContainerBase_C {
	bool bGeneratedRewards; 
	struct FItemRewardsRowHandle LootRewards; 

	void AddExtraLoot(struct TArray<struct FItemData>& ExtraLoot); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void WorldObject_Interact(struct AActor* Instigator); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GenerateItem(struct FItemTemplateRowHandle Item, int32_t Amount, struct FItemData& OutputItem); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};


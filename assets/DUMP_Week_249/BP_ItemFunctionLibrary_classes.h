// BlueprintGeneratedClass BP_ItemFunctionLibrary.BP_ItemFunctionLibrary_C
struct UBP_ItemFunctionLibrary_C : UBlueprintFunctionLibrary {

	void MergeItemDataIntoArray(struct TArray<struct FItemData>& Items, struct FItemData NewItem, struct UObject* __WorldContext); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetNumDeployableVariations(struct FDeployableData& DeployableData, struct UObject* __WorldContext, int32_t& NumVariants); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void QuickMakeQuestItemStack(struct FItemTemplateRowHandle Item, int32_t Count, struct UObject* __WorldContext, struct FItemData& CreatedItem); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void QuickMakeQuestItem(struct FItemTemplateRowHandle Item, struct UObject* __WorldContext, struct FItemData& CreatedItem); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void QuickMakeItemStack(struct FItemTemplateRowHandle Item, int32_t Count, struct UObject* __WorldContext, struct FItemData& CreatedItem); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void QuickMakeItem(struct FItemTemplateRowHandle Item, struct UObject* __WorldContext, struct FItemData& CreatedItem); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Get Damage Variation Specific(struct UObject* Context, struct FItemData Item, struct FStatsEnum Damage, struct FStatsEnum Variation, struct UObject* __WorldContext, int32_t& Minimum, int32_t& Maximum); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Get Damage Variation(struct FItemData Item, bool Melee, struct UObject* __WorldContext, int32_t& Minimum, int32_t& Maximum); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FillableSupports(struct UFillableComponent* Target, struct UFillableComponent* Source, struct UObject* __WorldContext, bool& Supports); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void FillableTypeToInt(struct FIcarusResourcesEnum Type, struct UObject* __WorldContext, int32_t& Int); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IntToFillableType(int32_t Int, struct UObject* __WorldContext, struct FIcarusResourcesEnum& Type); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
};


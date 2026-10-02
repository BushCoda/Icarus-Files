// BlueprintGeneratedClass BP_PlayerCosmeticsFunctionLibrary.BP_PlayerCosmeticsFunctionLibrary_C
struct UBP_PlayerCosmeticsFunctionLibrary_C : UBlueprintFunctionLibrary {

	void ClearCosmeticMaterialOverride(struct UPrimitiveComponent* InPrimitive, struct UObject* __WorldContext); // (Static|Public|BlueprintCallable|BlueprintEvent)
	void MakeCharacterCreationDataArray(struct FCharacterCosmetics CharacterCosmetics, struct UObject* __WorldContext, struct TArray<struct FCharacterCreationDataRowHandle>& OutData); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetMasterMaterial(struct UMaterialInterface* Material, struct UObject* __WorldContext, struct UMaterial*& Parent); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ApplyCosmeticsToPrimitive(struct UPrimitiveComponent* PrimitiveComponent, struct FCharacterCosmetics CosmeticData, struct UObject* __WorldContext); // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
};


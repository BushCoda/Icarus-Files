// Class AssetTags.AssetTagsSubsystem
struct UAssetTagsSubsystem : UEngineSubsystem {

	struct TArray<struct FName> GetCollectionsContainingAssetPtr(struct UObject* AssetPtr); // (Final|Native|Public|BlueprintCallable)
	struct TArray<struct FName> GetCollectionsContainingAssetData(struct FAssetData& AssetData); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct TArray<struct FName> GetCollectionsContainingAsset(struct FName AssetPathName); // (Final|Native|Public|BlueprintCallable)
	struct TArray<struct FName> GetCollections(); // (Final|Native|Public|BlueprintCallable)
	struct TArray<struct FAssetData> GetAssetsInCollection(struct FName Name); // (Final|Native|Public|BlueprintCallable)
	bool CollectionExists(struct FName Name); // (Final|Native|Public|BlueprintCallable)
};


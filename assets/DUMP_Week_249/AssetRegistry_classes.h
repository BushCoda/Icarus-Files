// Class AssetRegistry.AssetRegistryImpl
struct UAssetRegistryImpl : UObject {
};

// Class AssetRegistry.AssetRegistryHelpers
struct UAssetRegistryHelpers : UObject {

	struct FSoftObjectPath ToSoftObjectPath(struct FAssetData& InAssetData); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FARFilter SetFilterTagsAndValues(struct FARFilter& InFilter, struct TArray<struct FTagAndValue>& InTagsAndValues); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool IsValid(struct FAssetData& InAssetData); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool IsUAsset(struct FAssetData& InAssetData); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool IsRedirector(struct FAssetData& InAssetData); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool IsAssetLoaded(struct FAssetData& InAssetData); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool GetTagValue(struct FAssetData& InAssetData, struct FName& InTagName, struct FString& OutTagValue); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString GetFullName(struct FAssetData& InAssetData); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FString GetExportTextName(struct FAssetData& InAssetData); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct UObject* GetClass(struct FAssetData& InAssetData); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct TScriptInterface<IAssetRegistry> GetAssetRegistry(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UObject* GetAsset(struct FAssetData& InAssetData); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FAssetData CreateAssetData(struct UObject* InAsset, bool bAllowBlueprintClass); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
};

// Class AssetRegistry.AssetRegistry
struct UAssetRegistry : UInterface {

	void WaitForCompletion(); // (Native|Public|BlueprintCallable)
	void UseFilterToExcludeAssets(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const)
	void SearchAllAssets(bool bSynchronousSearch); // (Native|Public|BlueprintCallable)
	void ScanPathsSynchronous(struct TArray<struct FString>& InPaths, bool bForceRescan); // (Native|Public|HasOutParms|BlueprintCallable)
	void ScanModifiedAssetFiles(struct TArray<struct FString>& InFilePaths); // (Native|Public|HasOutParms|BlueprintCallable)
	void ScanFilesSynchronous(struct TArray<struct FString>& InFilePaths, bool bForceRescan); // (Native|Public|HasOutParms|BlueprintCallable)
	void RunAssetsThroughFilter(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const)
	void PrioritizeSearchPath(struct FString PathToPrioritize); // (Native|Public|BlueprintCallable)
	bool K2_GetReferencers(struct FName PackageName, struct FAssetRegistryDependencyOptions& ReferenceOptions, struct TArray<struct FName>& OutReferencers); // (Native|Public|HasOutParms|BlueprintCallable|Const)
	bool K2_GetDependencies(struct FName PackageName, struct FAssetRegistryDependencyOptions& DependencyOptions, struct TArray<struct FName>& OutDependencies); // (Native|Public|HasOutParms|BlueprintCallable|Const)
	bool IsLoadingAssets(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasAssets(struct FName PackagePath, bool bRecursive); // (Native|Public|BlueprintCallable|Const)
	void GetSubPaths(struct FString InBasePath, struct TArray<struct FString>& OutPathList, bool bInRecurse); // (Native|Public|HasOutParms|BlueprintCallable|Const)
	bool GetAssetsByPath(struct FName PackagePath, struct TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // (Native|Public|HasOutParms|BlueprintCallable|Const)
	bool GetAssetsByPackageName(struct FName PackageName, struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets); // (Native|Public|HasOutParms|BlueprintCallable|Const)
	bool GetAssetsByClass(struct FName ClassName, struct TArray<struct FAssetData>& OutAssetData, bool bSearchSubClasses); // (Native|Public|HasOutParms|BlueprintCallable|Const)
	bool GetAssets(struct FARFilter& Filter, struct TArray<struct FAssetData>& OutAssetData); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const)
	struct FAssetData GetAssetByObjectPath(struct FName ObjectPath, bool bIncludeOnlyOnDiskAssets); // (Native|Public|HasDefaults|BlueprintCallable|Const)
	void GetAllCachedPaths(struct TArray<struct FString>& OutPathList); // (Native|Public|HasOutParms|BlueprintCallable|Const)
	bool GetAllAssets(struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets); // (Native|Public|HasOutParms|BlueprintCallable|Const)
};


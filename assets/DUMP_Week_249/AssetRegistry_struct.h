// ScriptStruct AssetRegistry.TagAndValue
struct FTagAndValue {
	struct FName Tag; 
	struct FString Value; 
};

// ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; 
	bool bIncludeHardPackageReferences; 
	bool bIncludeSearchableNames; 
	bool bIncludeSoftManagementReferences; 
	bool bIncludeHardManagementReferences; 
};


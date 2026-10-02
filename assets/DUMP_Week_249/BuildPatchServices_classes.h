// Class BuildPatchServices.BuildPatchManifest
struct UBuildPatchManifest : UObject {
	char ManifestFileVersion; 
	bool bIsFileData; 
	uint32_t AppId; 
	struct FString AppName; 
	struct FString BuildVersion; 
	struct FString LaunchExe; 
	struct FString LaunchCommand; 
	struct TSet<struct FString> PrereqIds; 
	struct FString PrereqName; 
	struct FString PrereqPath; 
	struct FString PrereqArgs; 
	struct TArray<struct FFileManifestData> FileManifestList; 
	struct TArray<struct FChunkInfoData> ChunkList; 
	struct TArray<struct FCustomFieldData> CustomFields; 
};


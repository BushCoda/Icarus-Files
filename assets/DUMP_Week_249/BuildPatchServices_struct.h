// ScriptStruct BuildPatchServices.FileManifestData
struct FFileManifestData {
	struct FString Filename; 
	struct FSHAHashData FileHash; 
	struct TArray<struct FChunkPartData> FileChunkParts; 
	struct TArray<struct FString> InstallTags; 
	bool bIsUnixExecutable; 
	struct FString SymlinkTarget; 
	bool bIsReadOnly; 
	bool bIsCompressed; 
};

// ScriptStruct BuildPatchServices.ChunkPartData
struct FChunkPartData {
	struct FGuid Guid; 
	uint32_t Offset; 
	uint32_t Size; 
};

// ScriptStruct BuildPatchServices.SHAHashData
struct FSHAHashData {
	char Hash[0x14]; 
};

// ScriptStruct BuildPatchServices.ChunkInfoData
struct FChunkInfoData {
	struct FGuid Guid; 
	uint64_t Hash; 
	struct FSHAHashData ShaHash; 
	int64_t FileSize; 
	char GroupNumber; 
};

// ScriptStruct BuildPatchServices.CustomFieldData
struct FCustomFieldData {
	struct FString Key; 
	struct FString Value; 
};


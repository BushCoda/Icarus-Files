// Class VirtualHeightfieldMesh.HeightfieldMinMaxTexture
struct UHeightfieldMinMaxTexture : UObject {
	struct UTexture2D* Texture; 
	struct UTexture2D* LodBiasTexture; 
	struct UTexture2D* LodBiasMinMaxTexture; 
	int32_t MaxCPULevels; 
	struct TArray<struct FVector2D> TextureData; 
	struct FIntPoint TextureDataSize; 
	struct TArray<int32_t> TextureDataMips; 
};

// Class VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
struct UMaterialExpressionHeightfieldMinMaxTexture : UMaterialExpression {
	struct UHeightfieldMinMaxTexture* MinMaxTexture; 
};

// Class VirtualHeightfieldMesh.VirtualHeightfieldMesh
struct AVirtualHeightfieldMesh : AActor {
	struct UVirtualHeightfieldMeshComponent* VirtualHeightfieldMeshComponent; 
};

// Class VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
struct UVirtualHeightfieldMeshComponent : UPrimitiveComponent {
	struct TSoftObjectPtr<ARuntimeVirtualTextureVolume> VirtualTexture; 
	struct ARuntimeVirtualTextureVolume* VirtualTextureRef; 
	struct UObject* VirtualTextureThumbnail; 
	bool bCopyBoundsButton; 
	struct UHeightfieldMinMaxTexture* MinMaxTexture; 
	int32_t NumMinMaxTextureBuildLevels; 
	bool bBuildMinMaxTextureButton; 
	struct UMaterialInterface* Material; 
	float Lod0ScreenSize; 
	float Lod0Distribution; 
	float LodDistribution; 
	float LodBiasScale; 
	int32_t NumForceLoadLods; 
	int32_t NumOcclusionLods; 
	bool bHiddenInEditor; 

	void GatherHideFlags(bool& InOutHidePrimitivesInEditor, bool& InOutHidePrimitivesInGame); // (Final|Native|Protected|HasOutParms|Const)
};


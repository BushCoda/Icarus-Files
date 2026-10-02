// Class ClothingSystemRuntimeCommon.ClothConfigCommon
struct UClothConfigCommon : UClothConfigBase {
};

// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
struct UClothSharedConfigCommon : UClothConfigCommon {
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
struct UClothingAssetCustomData : UObject {
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
struct UClothingAssetCommon : UClothingAssetBase {
	struct UPhysicsAsset* PhysicsAsset; 
	struct TMap<struct FName, struct UClothConfigBase*> ClothConfigs; 
	struct TArray<struct FClothLODDataCommon> LODData; 
	struct TArray<int32_t> LodMap; 
	struct TArray<struct FName> UsedBoneNames; 
	struct TArray<int32_t> UsedBoneIndices; 
	int32_t ReferenceBoneIndex; 
	struct UClothingAssetCustomData* CustomData; 
};

// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
struct UClothLODDataCommon_Legacy : UObject {
	struct UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; 
	struct FClothPhysicalMeshData ClothPhysicalMeshData; 
	struct FClothCollisionData CollisionData; 
};


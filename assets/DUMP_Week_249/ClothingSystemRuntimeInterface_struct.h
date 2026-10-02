// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
struct FClothCollisionData {
	struct TArray<struct FClothCollisionPrim_Sphere> Spheres; 
	struct TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections; 
	struct TArray<struct FClothCollisionPrim_Convex> Convexes; 
	struct TArray<struct FClothCollisionPrim_Box> Boxes; 
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
struct FClothCollisionPrim_Box {
	struct FVector LocalPosition; 
	struct FQuat LocalRotation; 
	struct FVector HalfExtents; 
	int32_t BoneIndex; 
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
struct FClothCollisionPrim_Convex {
	struct TArray<struct FClothCollisionPrim_ConvexFace> Faces; 
	struct TArray<struct FVector> SurfacePoints; 
	int32_t BoneIndex; 
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
struct FClothCollisionPrim_ConvexFace {
	struct FPlane Plane; 
	struct TArray<int32_t> Indices; 
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; 
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; 
	float Radius; 
	struct FVector LocalPosition; 
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
struct FClothVertBoneData {
	int32_t NumInfluences; 
	uint16_t BoneIndices[0xc]; 
	float BoneWeights[0xc]; 
};


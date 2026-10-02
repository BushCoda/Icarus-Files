// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8 {
	NoCap = 0,
	CreateNewSectionForCap = 1,
	UseLastSectionForCap = 2,
	EProcMeshSliceCapOption_MAX = 3
};

// ScriptStruct ProceduralMeshComponent.ProcMeshSection
struct FProcMeshSection {
	struct TArray<struct FProcMeshVertex> ProcVertexBuffer; 
	struct TArray<uint32_t> ProcIndexBuffer; 
	struct FBox SectionLocalBox; 
	bool bEnableCollision; 
	bool bSectionVisible; 
};

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
struct FProcMeshVertex {
	struct FVector position; 
	struct FVector Normal; 
	struct FProcMeshTangent Tangent; 
	struct FColor Color; 
	struct FVector2D UV0; 
	struct FVector2D UV1; 
	struct FVector2D UV2; 
	struct FVector2D UV3; 
};

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
struct FProcMeshTangent {
	struct FVector TangentX; 
	bool bFlipTangentY; 
};


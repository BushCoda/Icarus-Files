// Enum ClothingSystemRuntimeNv.EClothingWindMethodNv
enum class EClothingWindMethodNv : uint8 {
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethodNv_MAX = 2
};

// ScriptStruct ClothingSystemRuntimeNv.ClothConstraintSetupNv
struct FClothConstraintSetupNv {
	float Stiffness; 
	float StiffnessMultiplier; 
	float StretchLimit; 
	float CompressionLimit; 
};


// Enum MaterialShaderQualitySettings.EMobileShadowQuality
enum class EMobileShadowQuality : uint8 {
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2,
	PCF_3x3 = 3,
	EMobileShadowQuality_MAX = 4
};

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
struct FMaterialQualityOverrides {
	bool bDiscardQualityDuringCook; 
	bool bEnableOverride; 
	bool bForceFullyRough; 
	bool bForceNonMetal; 
	bool bForceDisableLMDirectionality; 
	bool bForceLQReflections; 
	bool bForceDisablePreintegratedGF; 
	bool bDisableMaterialNormalCalculation; 
	enum class EMobileShadowQuality MobileShadowQuality; 
};


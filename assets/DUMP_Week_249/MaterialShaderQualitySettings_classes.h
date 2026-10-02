// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
struct UMaterialShaderQualitySettings : UObject {
	struct TMap<struct FName, struct UShaderPlatformQualitySettings*> ForwardSettingMap; 
};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
struct UShaderPlatformQualitySettings : UObject {
	struct FMaterialQualityOverrides QualityOverrides[0x4]; 
};


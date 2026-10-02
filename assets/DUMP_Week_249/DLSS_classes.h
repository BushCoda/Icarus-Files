// Class DLSS.DLSSOverrideSettings
struct UDLSSOverrideSettings : UObject {
	enum class EDLSSSettingOverride EnableDLSSInEditorViewportsOverride; 
	enum class EDLSSSettingOverride EnableScreenpercentageManipulationInDLSSEditorViewportsOverride; 
	enum class EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride; 
	bool bShowDLSSIncompatiblePluginsToolsWarnings; 
	enum class EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages; 
};

// Class DLSS.DLSSSettings
struct UDLSSSettings : UObject {
	bool bEnableDLSSD3D12; 
	bool bEnableDLSSD3D11; 
	bool bEnableDLSSVulkan; 
	bool bEnableDLSSInEditorViewports; 
	bool bEnableScreenpercentageManipulationInDLSSEditorViewports; 
	bool bEnableDLSSInPlayInEditorViewports; 
	bool bShowDLSSSDebugOnScreenMessages; 
	struct FString GenericDLSSBinaryPath; 
	bool bGenericDLSSBinaryExists; 
	uint32_t NVIDIANGXApplicationId; 
	struct FString CustomDLSSBinaryPath; 
	bool bCustomDLSSBinaryExists; 
	bool bAllowOTAUpdate; 
	enum class EDLSSPreset DLAAPreset; 
	enum class EDLSSPreset DLSSQualityPreset; 
	enum class EDLSSPreset DLSSBalancedPreset; 
	enum class EDLSSPreset DLSSPerformancePreset; 
	enum class EDLSSPreset DLSSUltraPerformancePreset; 
};


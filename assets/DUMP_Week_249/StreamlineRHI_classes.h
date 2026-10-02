// Class StreamlineRHI.StreamlineOverrideSettings
struct UStreamlineOverrideSettings : UObject {
	enum class EStreamlineSettingOverride EnableDLSSFGInPlayInEditorViewportsOverride; 
	enum class EStreamlineSettingOverride LoadDebugOverlayOverride; 
};

// Class StreamlineRHI.StreamlineSettings
struct UStreamlineSettings : UObject {
	bool bEnableStreamlineD3D12; 
	bool bEnableStreamlineD3D11; 
	bool bEnableDLSSFGInPlayInEditorViewports; 
	bool bLoadDebugOverlay; 
	bool bAllowOTAUpdate; 
	int32_t NVIDIANGXApplicationId; 
};


// Class AudioExtensions.SoundfieldEncodingSettingsBase
struct USoundfieldEncodingSettingsBase : UObject {
};

// Class AudioExtensions.AudioEndpointSettingsBase
struct UAudioEndpointSettingsBase : UObject {
};

// Class AudioExtensions.DummyEndpointSettings
struct UDummyEndpointSettings : UAudioEndpointSettingsBase {
};

// Class AudioExtensions.SpatializationPluginSourceSettingsBase
struct USpatializationPluginSourceSettingsBase : UObject {
};

// Class AudioExtensions.OcclusionPluginSourceSettingsBase
struct UOcclusionPluginSourceSettingsBase : UObject {
};

// Class AudioExtensions.ReverbPluginSourceSettingsBase
struct UReverbPluginSourceSettingsBase : UObject {
};

// Class AudioExtensions.SoundModulatorBase
struct USoundModulatorBase : UObject {
};

// Class AudioExtensions.SoundfieldEndpointSettingsBase
struct USoundfieldEndpointSettingsBase : UObject {
};

// Class AudioExtensions.SoundfieldEffectSettingsBase
struct USoundfieldEffectSettingsBase : UObject {
};

// Class AudioExtensions.SoundfieldEffectBase
struct USoundfieldEffectBase : UObject {
	struct USoundfieldEffectSettingsBase* Settings; 
};


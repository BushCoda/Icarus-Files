// ScriptStruct Renderer.LightPropagationVolumeSettings
struct FLightPropagationVolumeSettings {
	char bOverride_LPVIntensity : 1; 
	char bOverride_LPVDirectionalOcclusionIntensity : 1; 
	char bOverride_LPVDirectionalOcclusionRadius : 1; 
	char bOverride_LPVDiffuseOcclusionExponent : 1; 
	char bOverride_LPVSpecularOcclusionExponent : 1; 
	char bOverride_LPVDiffuseOcclusionIntensity : 1; 
	char bOverride_LPVSpecularOcclusionIntensity : 1; 
	char bOverride_LPVSize : 1; 
	char bOverride_LPVSecondaryOcclusionIntensity : 1; 
	char bOverride_LPVSecondaryBounceIntensity : 1; 
	char bOverride_LPVGeometryVolumeBias : 1; 
	char bOverride_LPVVplInjectionBias : 1; 
	char bOverride_LPVEmissiveInjectionIntensity : 1; 
	float LPVIntensity; 
	float LPVVplInjectionBias; 
	float LPVSize; 
	float LPVSecondaryOcclusionIntensity; 
	float LPVSecondaryBounceIntensity; 
	float LPVGeometryVolumeBias; 
	float LPVEmissiveInjectionIntensity; 
	float LPVDirectionalOcclusionIntensity; 
	float LPVDirectionalOcclusionRadius; 
	float LPVDiffuseOcclusionExponent; 
	float LPVSpecularOcclusionExponent; 
	float LPVDiffuseOcclusionIntensity; 
	float LPVSpecularOcclusionIntensity; 
	float LPVFadeRange; 
	float LPVDirectionalOcclusionFadeRange; 
};


// Enum RTXGI.EDDGISkyLightType
enum class EDDGISkyLightType : uint8 {
	None = 0,
	Raster = 1,
	RayTracing = 2,
	EDDGISkyLightType_MAX = 3
};

// Enum RTXGI.EDDGIRaysPerProbe
enum class EDDGIRaysPerProbe : int32 {
	n144 = 144,
	n288 = 288,
	n432 = 432,
	n576 = 576,
	n720 = 720,
	n864 = 864,
	n1008 = 1008,
	EDDGIRaysPerProbe_MAX = 1009
};

// Enum RTXGI.EDDGIProbesVisulizationMode
enum class EDDGIProbesVisulizationMode : uint8 {
	off = 0,
	irrad = 1,
	distr = 2,
	distg = 3,
	EDDGIProbesVisulizationMode_MAX = 4
};

// Enum RTXGI.EDDGIDistanceBits
enum class EDDGIDistanceBits : uint8 {
	n16 = 0,
	n32 = 1,
	EDDGIDistanceBits_MAX = 2
};

// Enum RTXGI.EDDGIIrradianceBits
enum class EDDGIIrradianceBits : uint8 {
	n10 = 0,
	n32 = 1,
	EDDGIIrradianceBits_MAX = 2
};

// ScriptStruct RTXGI.ProbeRelocation
struct FProbeRelocation {
	bool AutomaticProbeRelocation; 
	float ProbeMinFrontfaceDistance; 
	float ProbeBackfaceThreshold; 
};


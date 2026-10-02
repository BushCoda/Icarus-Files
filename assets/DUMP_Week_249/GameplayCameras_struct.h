// Enum GameplayCameras.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8 {
	EOO_OffsetRandom = 0,
	EOO_OffsetZero = 1,
	EOO_MAX = 2
};

// Enum GameplayCameras.EOscillatorWaveform
enum class EOscillatorWaveform : uint8 {
	SineWave = 0,
	PerlinNoise = 1,
	EOscillatorWaveform_MAX = 2
};

// Enum GameplayCameras.EInitialWaveOscillatorOffsetType
enum class EInitialWaveOscillatorOffsetType : uint8 {
	Random = 0,
	Zero = 1,
	EInitialWaveOscillatorOffsetType_MAX = 2
};

// ScriptStruct GameplayCameras.VOscillator
struct FVOscillator {
	struct FFOscillator X; 
	struct FFOscillator Y; 
	struct FFOscillator Z; 
};

// ScriptStruct GameplayCameras.FOscillator
struct FFOscillator {
	float Amplitude; 
	float Frequency; 
	enum class EInitialOscillatorOffset InitialOffset; 
	enum class EOscillatorWaveform Waveform; 
};

// ScriptStruct GameplayCameras.ROscillator
struct FROscillator {
	struct FFOscillator Pitch; 
	struct FFOscillator Yaw; 
	struct FFOscillator Roll; 
};

// ScriptStruct GameplayCameras.PerlinNoiseShaker
struct FPerlinNoiseShaker {
	float Amplitude; 
	float Frequency; 
};

// ScriptStruct GameplayCameras.WaveOscillator
struct FWaveOscillator {
	float Amplitude; 
	float Frequency; 
	enum class EInitialWaveOscillatorOffsetType InitialOffsetType; 
};


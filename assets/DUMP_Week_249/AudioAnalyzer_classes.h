// Class AudioAnalyzer.AudioAnalyzerAsset
struct UAudioAnalyzerAsset : UObject {
};

// Class AudioAnalyzer.AudioAnalyzerNRTSettings
struct UAudioAnalyzerNRTSettings : UAudioAnalyzerAsset {
};

// Class AudioAnalyzer.AudioAnalyzerNRT
struct UAudioAnalyzerNRT : UAudioAnalyzerAsset {
	struct USoundWave* Sound; 
	float DurationInSeconds; 
};


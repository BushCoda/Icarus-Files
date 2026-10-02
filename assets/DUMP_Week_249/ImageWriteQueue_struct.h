// Enum ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8 {
	PNG = 0,
	JPG = 1,
	BMP = 2,
	EXR = 3,
	EDesiredImageFormat_MAX = 4
};

// ScriptStruct ImageWriteQueue.ImageWriteOptions
struct FImageWriteOptions {
	enum class EDesiredImageFormat Format; 
	struct FDelegate OnComplete; 
	int32_t CompressionQuality; 
	bool bOverwriteFile; 
	bool bAsync; 
};


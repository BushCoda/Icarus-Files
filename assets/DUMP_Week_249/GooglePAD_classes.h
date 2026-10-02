// Class GooglePAD.GooglePADFunctionLibrary
struct UGooglePADFunctionLibrary : UBlueprintFunctionLibrary {

	enum class EGooglePADErrorCode ShowCellularDataConfirmation(); // (Final|Native|Static|Public|BlueprintCallable)
	enum class EGooglePADErrorCode RequestRemoval(struct FString Name); // (Final|Native|Static|Public|BlueprintCallable)
	enum class EGooglePADErrorCode RequestInfo(struct TArray<struct FString> AssetPacks); // (Final|Native|Static|Public|BlueprintCallable)
	enum class EGooglePADErrorCode RequestDownload(struct TArray<struct FString> AssetPacks); // (Final|Native|Static|Public|BlueprintCallable)
	void ReleaseDownloadState(int32_t State); // (Final|Native|Static|Public|BlueprintCallable)
	void ReleaseAssetPackLocation(int32_t Location); // (Final|Native|Static|Public|BlueprintCallable)
	int32_t GetTotalBytesToDownload(int32_t State); // (Final|Native|Static|Public|BlueprintCallable)
	enum class EGooglePADStorageMethod GetStorageMethod(int32_t Location); // (Final|Native|Static|Public|BlueprintCallable)
	enum class EGooglePADErrorCode GetShowCellularDataConfirmationStatus(enum class EGooglePADCellularDataConfirmStatus& Status); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	enum class EGooglePADDownloadStatus GetDownloadStatus(int32_t State); // (Final|Native|Static|Public|BlueprintCallable)
	enum class EGooglePADErrorCode GetDownloadState(struct FString Name, int32_t& State); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	int32_t GetBytesDownloaded(int32_t State); // (Final|Native|Static|Public|BlueprintCallable)
	struct FString GetAssetsPath(int32_t Location); // (Final|Native|Static|Public|BlueprintCallable)
	enum class EGooglePADErrorCode GetAssetPackLocation(struct FString Name, int32_t& Location); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	enum class EGooglePADErrorCode CancelDownload(struct TArray<struct FString> AssetPacks); // (Final|Native|Static|Public|BlueprintCallable)
};


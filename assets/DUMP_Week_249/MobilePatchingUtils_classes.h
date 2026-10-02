// Class MobilePatchingUtils.MobileInstalledContent
struct UMobileInstalledContent : UObject {

	bool Mount(int32_t PakOrder, struct FString MountPoint); // (Final|Native|Public|BlueprintCallable)
	float GetInstalledContentSize(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetDiskFreeSpace(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
};

// Class MobilePatchingUtils.MobilePendingContent
struct UMobilePendingContent : UMobileInstalledContent {

	void StartInstall(struct FDelegate OnSucceeded, struct FDelegate OnFailed); // (Final|Native|Public|BlueprintCallable)
	float GetTotalDownloadedSize(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetRequiredDiskSpace(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetInstallProgress(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	struct FText GetDownloadStatusText(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetDownloadSpeed(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	float GetDownloadSize(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
};

// Class MobilePatchingUtils.MobilePatchingLibrary
struct UMobilePatchingLibrary : UBlueprintFunctionLibrary {

	void RequestContent(struct FString RemoteManifestURL, struct FString CloudURL, struct FString InstallDirectory, struct FDelegate OnSucceeded, struct FDelegate OnFailed); // (Final|Native|Static|Public|BlueprintCallable)
	bool HasActiveWiFiConnection(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FString> GetSupportedPlatformNames(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UMobileInstalledContent* GetInstalledContent(struct FString InstallDirectory); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FString GetActiveDeviceProfileName(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};


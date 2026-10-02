// BlueprintGeneratedClass BP_IcarusPlayerCameraManager.BP_IcarusPlayerCameraManager_C
struct ABP_IcarusPlayerCameraManager_C : AIcarusPlayerCameraManager {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void GetThirdPerson(bool& ThirdPerson); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool BlueprintUpdateCamera(struct AActor* CameraTarget, struct FVector& NewCameraLocation, struct FRotator& NewCameraRotation, float& NewCameraFOV); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateRotationLimits(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusPlayerCameraManager(int32_t EntryPoint); // (Final|UbergraphFunction)
};


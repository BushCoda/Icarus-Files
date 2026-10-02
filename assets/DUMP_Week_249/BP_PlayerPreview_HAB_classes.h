// BlueprintGeneratedClass BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C
struct ABP_PlayerPreview_HAB_C : ABP_PlayerPreview_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UDirectionalLightComponent* Light_Bottom; 
	struct UPointLightComponent* Light_Rim; 
	struct UPointLightComponent* Light_Fill_R; 
	struct UPointLightComponent* Light_Fill_L; 
	struct UChildActorComponent* Light_Key; 
	struct UChildActorComponent* Light_Fill_Blue; 
	float testIntensity; 
	bool SWITCH; 
	float NewVar_0_1; 

	void CharacterUpdated(struct FOnlineProfileCharacter Character); // (Public|BlueprintCallable|BlueprintEvent)
	void GetLightComponents(struct TArray<struct ULightComponent*>& SceneCaptureLights, struct TArray<struct ULightComponent*>& CameraComponentLights); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateCaptureMode(bool UseSceneCapture, bool UseCameraComponent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ClearCurrentMeshes(); // (Public|BlueprintCallable|BlueprintEvent)
	void ConstructPlayerMeshArray(struct TArray<struct USkeletalMesh*>& MeshArray, struct TArray<struct TSoftClassPtr<UObject>>& MeshAnimBPs, struct USkeletalMesh*& BodyMesh); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CharacterDataUpdated(struct FCharacterCosmetics CharacterData); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Intensity(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_PlayerPreview_HAB(int32_t EntryPoint); // (Final|UbergraphFunction)
};


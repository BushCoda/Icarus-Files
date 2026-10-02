// BlueprintGeneratedClass BP_PlayerPreview.BP_PlayerPreview_C
struct ABP_PlayerPreview_C : ABP_ActorPreview_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* PlayerMesh; 
	struct AIcarusPlayerCharacter* Player; 
	struct TArray<struct USkeletalMeshComponent*> ArmourPieces; 
	bool UpdateEquipment; 
	bool UseMasterPose; 
	struct FCharacterCosmetics CosmeticData; 
	struct FPreviewCameraSettingsEnum CurrentCameraFocus; 

	void ApplyDefaultMaterialOverride(struct USkeletalMeshComponent* MeshComponent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TickCameraPosition(float DeltaSeconds, bool ForceInstant); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetCameraFocus(struct FPreviewCameraSettingsEnum NewCameraFocus, bool InstantUpdate); // (Public|BlueprintCallable|BlueprintEvent)
	void GetShowOnlyComponents(struct TArray<struct UPrimitiveComponent*>& OutComponents); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ForceLOD_OnSkeletalMesh(struct USkeletalMeshComponent* InSkeletalMeshComponent, bool ForceLOD_1); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ClearCurrentMeshes(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckPlayerMeshes(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetPlayer(struct AIcarusPlayerCharacter*& Player); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetPlayer(struct AIcarusPlayerCharacter* InPlayer); // (Public|BlueprintCallable|BlueprintEvent)
	void ConstructPreviewMeshArray(struct TArray<struct USkeletalMesh*>& MeshArray); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ConstructPlayerMeshArray(struct TArray<struct USkeletalMesh*>& MeshArray, struct TArray<struct TSoftClassPtr<UObject>>& MeshAnimBPs, struct USkeletalMesh*& BodyMesh); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePlayerMeshes(bool Force); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePreviewVisibility(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void UpdateActorPreview(bool Visible); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_PlayerPreview(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// BlueprintGeneratedClass BP_MountPreview.BP_MountPreview_C
struct ABP_MountPreview_C : ABP_ActorPreview_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* MountMesh; 
	struct AIcarusMountCharacter* Mount; 
	struct TArray<struct USkeletalMeshComponent*> ArmourPieces; 
	bool UpdateEquipment; 
	bool UseMasterPose; 
	struct FCharacterCosmetics CosmeticData; 
	struct FPreviewCameraSettingsEnum CurrentCameraFocus; 

	void SetupGFurComponents(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ResolveVisibility(bool& Visible); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ApplyDefaultMaterialOverride(struct USkeletalMeshComponent* MeshComponent); // (Public|BlueprintCallable|BlueprintEvent)
	void TickCameraPosition(float DeltaSeconds, bool ForceInstant); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetCameraFocus(struct FPreviewCameraSettingsEnum NewCameraFocus, bool InstantUpdate); // (Public|BlueprintCallable|BlueprintEvent)
	void GetShowOnlyComponents(struct TArray<struct UPrimitiveComponent*>& OutComponents); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ForceLOD_OnSkeletalMesh(struct USkinnedMeshComponent* InSkinnedMeshComponent, bool ForceLOD_1); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ClearCurrentMeshes(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckMountMeshes(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetMount(struct AIcarusMountCharacter*& Mount); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetMount(struct AIcarusMountCharacter* InMount); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ConstructPreviewMeshArray(struct TArray<struct USkeletalMesh*>& MeshArray); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ConstructMountMeshArray(struct TArray<struct USkeletalMesh*>& MeshArray, struct TArray<struct TSoftClassPtr<UObject>>& MeshAnimBPs, struct USkeletalMesh*& BodyMesh); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateMountMeshes(bool Force); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePreviewVisibility(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void UpdateActorPreview(bool Visible); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_MountPreview(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


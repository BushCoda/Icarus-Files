// BlueprintGeneratedClass BP_BaseCaveEntrance.BP_BaseCaveEntrance_C
struct ABP_BaseCaveEntrance_C : ACaveEntranceBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* VoxelBlockerMarker; 
	struct USceneComponent* BlockerMeshes; 
	struct UStaticMeshComponent* Mesh; 
	struct UStaticMesh* EntranceMesh; 
	struct AVoxelResource* VoxelRef; 
	bool VisuliseMeshBlocker; 
	bool VisuliseVoxelBlocker; 
	struct AVoxelResource* VoxelBlocker; 
	struct FRandomStream Stream; 
	int32_t UniqueEntranceID; 
	enum class ECaveBlockerState BlockerState; 
	struct TArray<struct FVoxelMinedSphere> VoxelSaveData; 
	bool OverrideBlockerState; 
	enum class ECaveBlockerState OverrideInitialState; 

	struct AVoxelResource* GetVoxelActor(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void OnRep_BlockerState(); // (BlueprintCallable|BlueprintEvent)
	void UpdateVoxelBlocker(bool bLocked, bool ForceNewVoxel); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateMeshBlocker(bool bLock); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitBlockedState(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateDebug(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnSeedInitialised(int32_t Seed); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SetVoxelBlocker(struct AVoxelResource* VoxelBlocker); // (BlueprintEvent)
	void SetVoxelBlockerSaveData(struct TArray<struct FVoxelMinedSphere>& VoxelBlockerSaveData); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_BaseCaveEntrance(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


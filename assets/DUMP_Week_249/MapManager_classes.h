// BlueprintGeneratedClass MapManager.MapManager_C
struct AMapManager_C : AMapManagerBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneCaptureComponent2D* OrthoCapture; 
	struct UCameraComponent* OrthoCamera; 
	struct USceneComponent* DefaultSceneRoot; 
	struct AActor* MapCameraLocationActor; 
	int32_t XTileCount; 
	int32_t YTileCount; 
	struct TArray<struct FMapRow> TileRadarStates; 
	struct TArray<struct FIntVector> AdjacencyMatrix; 
	struct TArray<struct AResourceDeposit*> RadarDetectedDeposits; 
	struct TArray<struct FIntVector> PlacedRadarLocations; 
	struct TArray<int32_t> PlacedRadarRadius; 
	struct TArray<struct FGlobalEquippableStats> GlobalStats; 
	struct TArray<struct FRadarV2ScanData> RadarV2Scans; 
	int32_t RadarV2ScanCount; 
	int32_t RadarV3ScanCount; 

	void GetRadarUMG(struct UUMG_RadarMainScreen_C*& RadarMainScreen); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FlushAllScans(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RestoreFromDatabase(struct TMap<struct FIntPoint, int32_t>& TileFlags, struct TArray<struct FRadarV3ScanData>& RadarScans); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SaveToDatabase(struct TMap<struct FIntPoint, int32_t>& TileFlags); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetColumnTilesFromBitmask(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_TileRadarStates(); // (BlueprintCallable|BlueprintEvent)
	void SetMapTileForFOW(int32_t X, int32_t Y, bool& FoundUnscanned, int32_t& Unscanned X, int32_t& Unscanned Y); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_RadarV3ScanCount(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_RadarV2ScanCount(); // (BlueprintCallable|BlueprintEvent)
	void RadarV3ScanFinished(struct FRadarV3ScanData Scan); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_RadarV2Scans(); // (BlueprintCallable|BlueprintEvent)
	void RadarV2ScanFinished(struct FVector WorldLocation, float DistanceInKM, float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void RemoveSingleGlobalStatFromActors(int32_t StatIndex); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RecheckActorsForSingleGlobalStat(int32_t StatIndex); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void EquipableRemoveGlobalStat(struct UBP_EquippableModifier_C* Equippable Instance); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void EquipableApplyGlobalStat(struct UBP_EquippableModifier_C* Equippable Instance); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Radar Radius Update(struct ABP_Radar_C* Radar); // (Public|BlueprintCallable|BlueprintEvent)
	void RadarTileToWorld(int32_t X, int32_t Y, struct FVector& TileCenterWorldSpace); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void LineSubsectionCheck(struct FVectorPair TestLine, struct FVectorPair CheckAgainstLine, enum class LineSegmentRelationship& NewParam); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetTileAtGridspaceVector(struct FVector TileCoords, enum class EMapTileRadarFlag& Radar Flag, bool& Failed); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void TryToGetUnscannedTileAtCoords(int32_t X, int32_t Y, bool& FoundUnscanned, int32_t& Unscanned X, int32_t& Unscanned Y); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CompleteTileScan(int32_t X, int32_t Y, struct ABP_Radar_C* Radar); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsValidTileCoord(int32_t X, int32_t Y, bool& Valid); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetNearestUnscannedTileInRangeOf1(int32_t X, int32_t Y, int32_t& Unscanned X, int32_t& Unscanned Y); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetTileRadarFlag(int32_t X, int32_t Y, enum class EMapTileRadarFlag Flag); // (Public|BlueprintCallable|BlueprintEvent)
	void InitMapTiles(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ClientUpdateRadarMapTile(int32_t X, int32_t Y, enum class EMapTileRadarFlag Flag, struct FVector WorldPosition, struct ABP_Radar_C* Radar); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ClientUpdateRadarRadius(int32_t X, int32_t Y, int32_t Radius, struct FVector TileWorldSpace, struct ABP_Radar_C* Radar); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ServerOnlyUpdate(); // (BlueprintCallable|BlueprintEvent)
	void Multi_RunFlushAllScans(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_MapManager(int32_t EntryPoint); // (Final|UbergraphFunction)
};


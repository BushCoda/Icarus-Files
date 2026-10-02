// Class Paper2D.MaterialExpressionSpriteTextureSampler
struct UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D {
	bool bSampleAdditionalTextures; 
	int32_t AdditionalSlotIndex; 
	struct FText SlotDisplayName; 
};

// Class Paper2D.PaperCharacter
struct APaperCharacter : ACharacter {
	struct UPaperFlipbookComponent* Sprite; 
};

// Class Paper2D.PaperFlipbook
struct UPaperFlipbook : UObject {
	float FramesPerSecond; 
	struct TArray<struct FPaperFlipbookKeyFrame> KeyFrames; 
	struct UMaterialInterface* DefaultMaterial; 
	enum class EFlipbookCollisionMode CollisionSource; 

	bool IsValidKeyFrameIndex(int32_t Index); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetTotalDuration(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UPaperSprite* GetSpriteAtFrame(int32_t FrameIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumKeyFrames(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumFrames(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Paper2D.PaperFlipbookActor
struct APaperFlipbookActor : AActor {
	struct UPaperFlipbookComponent* RenderComponent; 
};

// Class Paper2D.PaperFlipbookComponent
struct UPaperFlipbookComponent : UMeshComponent {
	struct UPaperFlipbook* SourceFlipbook; 
	struct UMaterialInterface* Material; 
	float PlayRate; 
	char bLooping : 1; 
	char bReversePlayback : 1; 
	char bPlaying : 1; 
	float AccumulatedTime; 
	int32_t CachedFrameIndex; 
	struct FLinearColor SpriteColor; 
	struct UBodySetup* CachedBodySetup; 
	struct FMulticastInlineDelegate OnFinishedPlaying; 

	void Stop(); // (Final|Native|Public|BlueprintCallable)
	void SetSpriteColor(struct FLinearColor NewColor); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetPlayRate(float NewRate); // (Final|Native|Public|BlueprintCallable)
	void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents); // (Final|Native|Public|BlueprintCallable)
	void SetPlaybackPosition(float NewPosition, bool bFireEvents); // (Final|Native|Public|BlueprintCallable)
	void SetNewTime(float NewTime); // (Final|Native|Public|BlueprintCallable)
	void SetLooping(bool bNewLooping); // (Final|Native|Public|BlueprintCallable)
	bool SetFlipbook(struct UPaperFlipbook* NewFlipbook); // (Native|Public|BlueprintCallable)
	void ReverseFromEnd(); // (Final|Native|Public|BlueprintCallable)
	void Reverse(); // (Final|Native|Public|BlueprintCallable)
	void PlayFromStart(); // (Final|Native|Public|BlueprintCallable)
	void Play(); // (Final|Native|Public|BlueprintCallable)
	void OnRep_SourceFlipbook(struct UPaperFlipbook* OldFlipbook); // (Final|Native|Protected)
	bool IsReversing(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsPlaying(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsLooping(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FLinearColor GetSpriteColor(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	float GetPlayRate(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetPlaybackPositionInFrames(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetPlaybackPosition(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetFlipbookLengthInFrames(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetFlipbookLength(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetFlipbookFramerate(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UPaperFlipbook* GetFlipbook(); // (Native|Public|BlueprintCallable|BlueprintPure)
};

// Class Paper2D.PaperGroupedSpriteActor
struct APaperGroupedSpriteActor : AActor {
	struct UPaperGroupedSpriteComponent* RenderComponent; 
};

// Class Paper2D.PaperGroupedSpriteComponent
struct UPaperGroupedSpriteComponent : UMeshComponent {
	struct TArray<struct UMaterialInterface*> InstanceMaterials; 
	struct TArray<struct FSpriteInstanceData> PerInstanceSpriteData; 

	bool UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	bool UpdateInstanceColor(int32_t InstanceIndex, struct FLinearColor NewInstanceColor, bool bMarkRenderStateDirty); // (Native|Public|HasDefaults|BlueprintCallable)
	void SortInstancesAlongAxis(struct FVector WorldSpaceSortAxis); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	bool RemoveInstance(int32_t InstanceIndex); // (Native|Public|BlueprintCallable)
	bool GetInstanceTransform(int32_t InstanceIndex, struct FTransform& OutInstanceTransform, bool bWorldSpace); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	int32_t GetInstanceCount(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void ClearInstances(); // (Native|Public|BlueprintCallable)
	int32_t AddInstance(struct FTransform& Transform, struct UPaperSprite* Sprite, bool bWorldSpace, struct FLinearColor Color); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
};

// Class Paper2D.PaperRuntimeSettings
struct UPaperRuntimeSettings : UObject {
	bool bEnableSpriteAtlasGroups; 
	bool bEnableTerrainSplineEditing; 
	bool bResizeSpriteDataToMatchTextures; 
};

// Class Paper2D.PaperSprite
struct UPaperSprite : UObject {
	struct TArray<struct UTexture*> AdditionalSourceTextures; 
	struct FVector2D BakedSourceUV; 
	struct FVector2D BakedSourceDimension; 
	struct UTexture2D* BakedSourceTexture; 
	struct UMaterialInterface* DefaultMaterial; 
	struct UMaterialInterface* AlternateMaterial; 
	struct TArray<struct FPaperSpriteSocket> Sockets; 
	enum class ESpriteCollisionMode SpriteCollisionDomain; 
	float PixelsPerUnrealUnit; 
	struct UBodySetup* BodySetup; 
	int32_t AlternateMaterialSplitIndex; 
	struct TArray<struct FVector4> BakedRenderData; 
};

// Class Paper2D.PaperSpriteActor
struct APaperSpriteActor : AActor {
	struct UPaperSpriteComponent* RenderComponent; 
};

// Class Paper2D.PaperSpriteAtlas
struct UPaperSpriteAtlas : UObject {
};

// Class Paper2D.PaperSpriteBlueprintLibrary
struct UPaperSpriteBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FSlateBrush MakeBrushFromSprite(struct UPaperSprite* Sprite, int32_t Width, int32_t Height); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class Paper2D.PaperSpriteComponent
struct UPaperSpriteComponent : UMeshComponent {
	struct UPaperSprite* SourceSprite; 
	struct UMaterialInterface* MaterialOverride; 
	struct FLinearColor SpriteColor; 

	void SetSpriteColor(struct FLinearColor NewColor); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	bool SetSprite(struct UPaperSprite* NewSprite); // (Native|Public|BlueprintCallable)
	struct UPaperSprite* GetSprite(); // (Native|Public|BlueprintCallable|BlueprintPure)
};

// Class Paper2D.PaperTerrainActor
struct APaperTerrainActor : AActor {
	struct USceneComponent* DummyRoot; 
	struct UPaperTerrainSplineComponent* SplineComponent; 
	struct UPaperTerrainComponent* RenderComponent; 
};

// Class Paper2D.PaperTerrainComponent
struct UPaperTerrainComponent : UPrimitiveComponent {
	struct UPaperTerrainMaterial* TerrainMaterial; 
	bool bClosedSpline; 
	bool bFilledSpline; 
	struct UPaperTerrainSplineComponent* AssociatedSpline; 
	int32_t RandomSeed; 
	float SegmentOverlapAmount; 
	struct FLinearColor TerrainColor; 
	int32_t ReparamStepsPerSegment; 
	enum class ESpriteCollisionMode SpriteCollisionDomain; 
	float CollisionThickness; 
	struct UBodySetup* CachedBodySetup; 

	void SetTerrainColor(struct FLinearColor NewColor); // (Final|Native|Public|HasDefaults|BlueprintCallable)
};

// Class Paper2D.PaperTerrainMaterial
struct UPaperTerrainMaterial : UDataAsset {
	struct TArray<struct FPaperTerrainMaterialRule> Rules; 
	struct UPaperSprite* InteriorFill; 
};

// Class Paper2D.PaperTerrainSplineComponent
struct UPaperTerrainSplineComponent : USplineComponent {
};

// Class Paper2D.PaperTileLayer
struct UPaperTileLayer : UObject {
	struct FText LayerName; 
	int32_t LayerWidth; 
	int32_t LayerHeight; 
	char bHiddenInGame : 1; 
	char bLayerCollides : 1; 
	char bOverrideCollisionThickness : 1; 
	char bOverrideCollisionOffset : 1; 
	float CollisionThicknessOverride; 
	float CollisionOffsetOverride; 
	struct FLinearColor LayerColor; 
	int32_t AllocatedWidth; 
	int32_t AllocatedHeight; 
	struct TArray<struct FPaperTileInfo> AllocatedCells; 
	struct UPaperTileSet* TileSet; 
	struct TArray<int32_t> AllocatedGrid; 
};

// Class Paper2D.PaperTileMap
struct UPaperTileMap : UObject {
	int32_t MapWidth; 
	int32_t MapHeight; 
	int32_t TileWidth; 
	int32_t TileHeight; 
	float PixelsPerUnrealUnit; 
	float SeparationPerTileX; 
	float SeparationPerTileY; 
	float SeparationPerLayer; 
	struct TSoftObjectPtr<UPaperTileSet> SelectedTileSet; 
	struct UMaterialInterface* Material; 
	struct TArray<struct UPaperTileLayer*> TileLayers; 
	float CollisionThickness; 
	enum class ESpriteCollisionMode SpriteCollisionDomain; 
	enum class ETileMapProjectionMode ProjectionMode; 
	int32_t HexSideLength; 
	struct UBodySetup* BodySetup; 
	int32_t LayerNameIndex; 
};

// Class Paper2D.PaperTileMapActor
struct APaperTileMapActor : AActor {
	struct UPaperTileMapComponent* RenderComponent; 
};

// Class Paper2D.PaperTileMapComponent
struct UPaperTileMapComponent : UMeshComponent {
	int32_t MapWidth; 
	int32_t MapHeight; 
	int32_t TileWidth; 
	int32_t TileHeight; 
	struct UPaperTileSet* DefaultLayerTileSet; 
	struct UMaterialInterface* Material; 
	struct TArray<struct UPaperTileLayer*> TileLayers; 
	struct FLinearColor TileMapColor; 
	int32_t UseSingleLayerIndex; 
	bool bUseSingleLayer; 
	struct UPaperTileMap* TileMap; 

	void SetTileMapColor(struct FLinearColor NewColor); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	bool SetTileMap(struct UPaperTileMap* NewTileMap); // (Native|Public|BlueprintCallable)
	void SetTile(int32_t X, int32_t Y, int32_t Layer, struct FPaperTileInfo NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetLayerColor(struct FLinearColor NewColor, int32_t Layer); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision); // (Final|Native|Public|BlueprintCallable)
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision); // (Final|Native|Public|BlueprintCallable)
	void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles); // (Final|Native|Public|BlueprintCallable)
	void RebuildCollision(); // (Final|Native|Public|BlueprintCallable)
	bool OwnsTileMap(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void MakeTileMapEditable(); // (Final|Native|Public|BlueprintCallable)
	void GetTilePolygon(int32_t TileX, int32_t TileY, struct TArray<struct FVector>& Points, int32_t LayerIndex, bool bWorldSpace); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	struct FLinearColor GetTileMapColor(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct FLinearColor GetLayerColor(int32_t Layer); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer); // (Final|Native|Public|BlueprintCallable)
	struct UPaperTileLayer* AddNewLayer(); // (Final|Native|Public|BlueprintCallable)
};

// Class Paper2D.PaperTileSet
struct UPaperTileSet : UObject {
	struct FIntPoint TileSize; 
	struct UTexture2D* TileSheet; 
	struct TArray<struct UTexture*> AdditionalSourceTextures; 
	struct FIntMargin BorderMargin; 
	struct FIntPoint PerTileSpacing; 
	struct FIntPoint DrawingOffset; 
	int32_t WidthInTiles; 
	int32_t HeightInTiles; 
	int32_t AllocatedWidth; 
	int32_t AllocatedHeight; 
	struct TArray<struct FPaperTileMetadata> PerTileData; 
	struct TArray<struct FPaperTileSetTerrain> Terrains; 
	int32_t TileWidth; 
	int32_t TileHeight; 
	int32_t Margin; 
	int32_t Spacing; 
};

// Class Paper2D.TileMapBlueprintLibrary
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FPaperTileInfo MakeTile(int32_t TileIndex, struct UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FName GetTileUserData(struct FPaperTileInfo Tile); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FTransform GetTileTransform(struct FPaperTileInfo Tile); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	void BreakTile(struct FPaperTileInfo Tile, int32_t& TileIndex, struct UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
};


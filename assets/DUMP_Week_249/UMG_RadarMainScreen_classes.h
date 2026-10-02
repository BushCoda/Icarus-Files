// WidgetBlueprintGeneratedClass UMG_RadarMainScreen.UMG_RadarMainScreen_C
struct UUMG_RadarMainScreen_C : UUMG_RadarMainScreenBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_ButtonIcon_C* ButtonMapCombined; 
	struct UUMG_ButtonIcon_C* ButtonMapTopo; 
	struct UUMG_ButtonIcon_C* ButtonMapVisual; 
	struct UUMG_ButtonIcon_C* CenterMapButton; 
	struct UCanvasPanel* DepositLocationsPanel; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_4; 
	struct UImage* Image_5; 
	struct UImage* Image_6; 
	struct UImage* Image_7; 
	struct UImage* Image_8; 
	struct UImage* Image_9; 
	struct UImage* Image_10; 
	struct UImage* Image_11; 
	struct UImage* Image_12; 
	struct UImage* Image_13; 
	struct UImage* Image_14; 
	struct UImage* Image_15; 
	struct UImage* Image_547; 
	struct UImage* Image_715; 
	struct UImage* Image_730; 
	struct UHorizontalBox* legendActiveArea; 
	struct UHorizontalBox* legendBuilding; 
	struct UHorizontalBox* LegendCompletedArea; 
	struct UHorizontalBox* legendDowned; 
	struct UHorizontalBox* legendDropship; 
	struct UHorizontalBox* legendemptytiles; 
	struct UHorizontalBox* legendgoodtiles; 
	struct UImage* LegendGradientShadow; 
	struct UImage* LegendGradientShadow_2; 
	struct UHorizontalBox* legendGravestone; 
	struct UHorizontalBox* legendMeta; 
	struct UHorizontalBox* legendplayer; 
	struct UHorizontalBox* legendRadar; 
	struct UCanvasPanel* MapRadarCanvas; 
	struct UCanvasPanel* MapSpaceCanvas_2; 
	struct UUniformGridPanel* MapTileUniformGrid_Heightmap; 
	struct UUniformGridPanel* MapTileUniformGrid_Visual; 
	struct UScaleBox* MapZoomScaleBox; 
	struct USizeBox* ObjectiveListSizeBox; 
	struct UImage* OutOfBoundsImage; 
	struct UImage* RadarHeatmapImage; 
	struct UCanvasPanel* RadarLocationsPanel; 
	struct URetainerBox* RetainerBox_191; 
	struct UCanvasPanel* TileCanvas; 
	struct UUMG_ButtonIcon_C* ToggleRadarButton; 
	struct UCanvasPanel* TranslationCanvas; 
	struct UImage* TranslationCanvasBackgroundcolor; 
	struct UImage* TranslationCanvasBackgroundPattern; 
	struct UUMG_ProspectObjectiveList_C* UMG_ProspectObjectiveList; 
	struct UUMG_RadarMapGrid_C* UMG_RadarMapGrid; 
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> RadarLocationWidgets; 
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> DepositLocationWidgets; 
	struct AMapManager_C* MapManager; 
	struct UUMG_RadarIcon_C* debugmarker; 
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> PlayerLocationWidgets; 
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> UnsortedActorLocationWidgets; 
	struct TArray<struct UUMG_RadarSquare_C*> ScannedRadarTiles; 
	struct TArray<struct UUMG_RadarSquare_C*> RadarRadius; 
	struct TArray<struct UUMG_RadarSquare_C*> OrphanedScannedRadarTiles; 
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> DropshipLocationWidgets; 
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> GraveLocationWidgets; 
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> GridLocationWidgets; 
	struct TArray<struct UUMG_IcarusLinkedActorPanel_C*> WaypointLocationWidgets; 
	float MapIconGlobalSizeMultiplier; 
	float MapIconGlobalMinSizeClamp; 
	float MapIconGlobalMaxSizeClamp; 
	float MapMaxZoomOut; 
	float MapMaxZoomIn; 
	struct TArray<struct FMapIconsStruct> MapIconSettings; 
	float FirstTimeOpenZoom; 
	struct UMaterialInstanceDynamic* RadarHeatmapMaskDMI; 
	struct UMaterialInstanceDynamic* RadarHeatmapMetaLayerDMI; 
	bool ShiftIsDown; 
	bool CtrlIsDown; 
	bool AltIsDown; 
	int32_t V2ScansProcessed; 
	bool MapTickedOnce; 
	int32_t V3ScansProcessed; 
	struct TArray<struct UUMG_RadarSquare_C*> RadarV3Radius; 
	float MapZoomRateOfChange; 
	struct TMap<struct UObject*, struct UUMG_QuestWidget_C*> QuestWidgetMap; 
	struct FSlateColor Purple; 
	struct FVector ContextMenuCachedWorldLocation; 
	struct FVector MouseDownCachedWorldLocation; 
	bool DragOperationOccurred; 
	int32_t TileSize; 
	struct UMaterialInstanceDynamic* FowMaskDMI; 
	struct UObject* AsyncOOBImageCache; 
	struct TSoftObjectPtr<UGameplayTexture> FullBoundsGameplayTexture; 
	struct TArray<struct UUMG_RadarSquare_C*> QuestCircles; 
	float GameTimeOfLastTick; 
	float MapIconGlobalSizeMultiplierNew; 
	struct FText ContextMenuHeadingText; 
	struct TArray<struct FVector> PendingFOWDrawLocations; 
	struct TArray<struct FVector> OldFOWDrawLocations; 
	bool NeedsUpdate; 
	struct FLinearColor SearchAreaColor; 
	struct FMulticastInlineDelegate SearchAreaAdded; 
	struct TMap<struct FVector2D, struct FVector2D> LinkedActorPathsToDraw; 

	void FlushRadarScans(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateViewForStats(); // (Public|BlueprintCallable|BlueprintEvent)
	void ValidateMapView(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FMinimapData GetMinimapData(bool& Valid); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateMapIcons(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BatchDrawFOW(float DrawSizeOverride); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateFogOfWarVisibility(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IsMapOpen(bool& Open); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RemoveQuestSearchArea(struct UUMG_RadarSquare_C* SearchArea); // (Public|BlueprintCallable|BlueprintEvent)
	void AddQuestSearchArea(float Radius, struct FVector WorldSpaceCenter, struct AIcarusActor* Actor, struct UTexture2D* TextureOverride, struct FLinearColor Specified Color, struct UUMG_RadarSquare_C*& Widget); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitObjectiveList(); // (Public|BlueprintCallable|BlueprintEvent)
	void InitTileSize(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetMouseWorldLocation(struct FVector& World Location); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RadarCircleRadiusUpdate(int32_t X, int32_t Y, int32_t Radius, struct FVector WorldSpaceTileCenter, struct ABP_Radar_C* Radar); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateIcon(struct UUserWidget* IconWidget, struct AActor* LinkedActor, bool ShouldRotate, float ScaleFactor); // (Public|BlueprintCallable|BlueprintEvent)
	void CanUseTopoMap(bool& HasStat); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CanUseVisualMap(bool& HasStat); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CanUseRadar(bool& HasStat); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void CanSeeOwnLocation(bool& HasStat); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void IconStatCheck(); // (Public|BlueprintCallable|BlueprintEvent)
	void RotateMapIcon(struct UUserWidget* IconWidget, struct AActor* LinkedActor); // (Public|BlueprintCallable|BlueprintEvent)
	void ConfigureMapIconSettings(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OffsetLabels(struct TArray<struct UUserWidget*>& IconWidgets); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Moved Translation Canvas to World Location(struct FVector WorldLocation); // (Public|BlueprintCallable|BlueprintEvent)
	void MapCanvasSpaceToWorldSpace(struct FVector2D MapLocation, struct FVector& World Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void LoadVisualmapsIntoMapTiles(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void LoadHeightmapsIntoMapTiles(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CompletedRadarTileCleanup(struct ABP_Radar_C* CompletedRadar); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InitCompletedRadarSquares(); // (Public|BlueprintCallable|BlueprintEvent)
	void RadarSquareRadiusUpdate(int32_t X, int32_t Y, int32_t Radius, struct FVector WorldSpaceTileCenter, struct ABP_Radar_C* Radar); // (Public|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Rotate Player Widgets(struct TArray<struct UUMG_IcarusLinkedActorPanel_C*>& Player Icons); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void InitScannedRadarSquares(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TileScannedUpdate(int32_t X, int32_t Y, enum class EMapTileRadarFlag Flag, struct FVector WorldSpaceTileCenter, struct ABP_Radar_C* LinkedRadar); // (Public|BlueprintCallable|BlueprintEvent)
	void AddMarkersForAllActorsWithIcon(struct AActor* ActorClass, struct UObject* NewImage, struct TArray<struct UUMG_IcarusLinkedActorPanel_C*>& NewWidgets, struct UImage*& IconImage); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateLinkedActorWidgetsLocations(struct UUserWidget* LinkedActorWidget, struct AActor* LinkedActor, bool ScaleIcon, float ScaleFactor); // (Public|BlueprintCallable|BlueprintEvent)
	void OnPaint(struct FPaintContext& Context); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void WorldSpaceToMapCanvasSpace(struct FVector WorldLocation, struct FVector2D& MapLocation); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateRadarWidgets(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_170E4BB94C9E0BCCC204CD833F0BCCC2(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void StatBindings(); // (BlueprintCallable|BlueprintEvent)
	void StatsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ReinitMap(); // (BlueprintCallable|BlueprintEvent)
	void ShowVisualMap(); // (BlueprintCallable|BlueprintEvent)
	void ShowHeightmap(); // (BlueprintCallable|BlueprintEvent)
	void ShowCombinedMap(); // (BlueprintCallable|BlueprintEvent)
	void ToggleRadarDisplay(); // (BlueprintCallable|BlueprintEvent)
	void HideAllMaps(); // (BlueprintCallable|BlueprintEvent)
	void RadarV2MaskReveal(struct FVector WorldLocation, float KMradius, float Intensity); // (BlueprintCallable|BlueprintEvent)
	void FakeMeta(struct FLinearColor In 2); // (BlueprintCallable|BlueprintEvent)
	void NewScanCheck(); // (BlueprintCallable|BlueprintEvent)
	void InitRadarV2(); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__CenterMapButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ToggleRadarButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ButtonMapVisual_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ButtonMapTopo_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // (BlueprintEvent)
	void BndEvt__ButtonMapCombined_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ContextMenuSetGridLocation(struct FName ItemIdentifier, int32_t ItemPayload); // (BlueprintCallable|BlueprintEvent)
	void InitialiseOutOfBoundsImage(); // (BlueprintCallable|BlueprintEvent)
	void ContextMenuCopyGridLocation(struct FName ItemIdentifier, int32_t ItemPayload); // (BlueprintCallable|BlueprintEvent)
	void GenerateFOWDrawLocations(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_RadarMainScreen(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void SearchAreaAdded__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


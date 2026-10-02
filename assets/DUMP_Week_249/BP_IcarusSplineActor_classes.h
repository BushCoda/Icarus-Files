// BlueprintGeneratedClass BP_IcarusSplineActor.BP_IcarusSplineActor_C
struct ABP_IcarusSplineActor_C : AResourceSplineActorBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* SplineNodeMeshs; 
	struct USceneComponent* SplineSegmentContainer; 
	struct USplineComponent* Spline; 
	struct USceneComponent* DefaultSceneRoot; 
	struct TMap<int32_t, struct FSplineIndexStructArray> ConnectionMap; 
	enum class SplineTypes SplineType; 
	struct TArray<struct UBP_IcarusSplineSegment_C*> SplineSegmentArray; 
	struct TArray<struct USceneComponent*> SplineSegmentRepresentations; 
	struct TArray<struct USceneComponent*> SplineNodeRepresentations; 
	struct FLinearColor Debug; 
	struct FIcarusSplineMeshStruct LastSplinePointData; 

	void UpdateLastSplinePointData(bool Invert); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_LastSplinePointData(); // (BlueprintCallable|BlueprintEvent)
	void Remove Segment Connected To Component(struct UResourceNetworkComponent* ResourceNetworkComponent ); // (Public|BlueprintCallable|BlueprintEvent)
	void IsAlreadyConnectedToSpline(struct ABP_IcarusSplineActor_C* Other Spline, bool& Connected); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FRecordedSplineActorStruct RecordSplineState(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReconnectFromDatabase(struct FRecordedSplineActorStruct& FromDatabase, struct TArray<struct AActor*>& RelevantActors); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PostDatabaseSpawn(struct FRecordedSplineActorStruct& FromDatabase); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ChangeLastSegmentsGhostColor(struct UMaterialInterface* RepGhostMaterial); // (Public|BlueprintCallable|BlueprintEvent)
	struct FVector GetSecondLastPointWorldLocation(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetNetworkType(struct FIcarusResourcesEnum& NetworkType); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetSplineSegmentFromRepresentation(struct USceneComponent* SplineSegmentRepresentation, struct UBP_IcarusSplineSegment_C*& SplineSegment, bool& Success); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ConfigureSegmentFromType(struct UPrimitiveComponent*& RepresentitiveClass, struct UStaticMesh*& RepSegmentMesh, struct UMaterialInterface*& RepSegmentFinalMaterial, int32_t& Materialndex, bool& UseNodeMeshes, struct FVector& SegmentOffset, struct UStaticMesh*& NodeMesh, struct UMaterialInterface*& NodeMaterial); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void DoTwoSplineConnectAtThisSplineIndex(struct ABP_IcarusSplineActor_C* Spline1, struct ABP_IcarusSplineActor_C* Spline2, int32_t TestIndex); // (Public|BlueprintCallable|BlueprintEvent)
	void Grab Back Pointers To Index(int32_t IndexOnThisSpline); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Replace Spline Pointers(int32_t NewSplineIndex, struct FSplineIndexStruct SplineIndexStruct, struct ABP_IcarusSplineActor_C* New Spline); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CreateNewNet(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RemoveConnectionTwoWay(int32_t LocalIndex, struct ABP_IcarusSplineActor_C* OtherSpline, int32_t OtherSplineIndex, bool& Error); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddConnection(int32_t LocalIndex, struct ABP_IcarusSplineActor_C* OtherSpline, int32_t OtherSplineIndex, bool AddBackwardsConnection, bool BypassBoundsCheck, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update Spline Start to Spline Segment end(struct UBP_IcarusSplineSegment_C* SplineSegment, int32_t SplinePointIndex, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Create New Spline Point and Segment(struct FVector InputPin, enum class ESplinePointType SplinePointType); // (Public|BlueprintCallable|BlueprintEvent)
	void IsPointCloserToEnd(struct FVector Point, bool& PointCloserToEnd); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Update Spline To Another Spline Segment(bool FinalUpdate, struct UBP_IcarusSplineSegment_C* SplineSegment, bool& Success); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SplitSplineAtSegment(struct UBP_IcarusSplineSegment_C* SplineSegment, bool RecalcNets, enum class ESplinePointType SplinePointType, struct ABP_IcarusSplineActor_C*& NewSplitSpline); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Remove Last Point and Segment(bool RemoveNodeMesh, bool& Error); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Create Spline representations Starting at Point(int32_t StartSplinePointIndex); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FinalizeCurrentPointAndAddNew(struct FVector World Space Point Posititon, struct FTransform ImpactNormalTrans, enum class ESplinePointType SplinePointType); // (Public|BlueprintCallable|BlueprintEvent)
	void Finalize Current Spline Segment(); // (Public|BlueprintCallable|BlueprintEvent)
	void Update Last Spline Point And Segment(struct FVector Updated Point Posititon, struct FTransform UpdatedHitNormalTransform, bool ManipulateSplineNode, enum class ESplinePointType SplinePointType); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Cleanup(); // (BlueprintCallable|BlueprintEvent)
	void DelayCleanupCheck(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusSplineActor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


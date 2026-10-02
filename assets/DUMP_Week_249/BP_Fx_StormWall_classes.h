// BlueprintGeneratedClass BP_Fx_StormWall.BP_Fx_StormWall_C
struct ABP_Fx_StormWall_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_StormWall_Top_04; 
	struct UStaticMeshComponent* SM_StormWall_Mid_05; 
	struct UStaticMeshComponent* SM_StormWall_Mid_04; 
	struct UStaticMeshComponent* SM_StormWall_Top_03; 
	struct UStaticMeshComponent* SM_StormWall_Mid_03; 
	struct UStaticMeshComponent* SM_StormWall_Top_02; 
	struct UStaticMeshComponent* SM_StormWall_Bot_01; 
	struct UStaticMeshComponent* SM_StormWall_Bot_03; 
	struct UStaticMeshComponent* SM_StormWall_Bot_02; 
	struct UStaticMeshComponent* SM_StormWall_Mid_02; 
	struct UStaticMeshComponent* SM_StormWall_Mid_01; 
	struct USceneComponent* Scene; 
	struct USceneComponent* DefaultSceneRoot; 
	float StartTopStormTimeline_OpacityBlend_A7AAF1D74737606FF3F58086254A4EF3; 
	float StartTopStormTimeline_CloudIntensityBlend_A7AAF1D74737606FF3F58086254A4EF3; 
	enum class ETimelineDirection StartTopStormTimeline__Direction_A7AAF1D74737606FF3F58086254A4EF3; 
	struct UTimelineComponent* StartTopStormTimeline; 
	float DissipateTopStormTimeline_SpeedChange_536C0C8F42F5E3C9A5E5FCA98C244220; 
	float DissipateTopStormTimeline_OpacityBlend_536C0C8F42F5E3C9A5E5FCA98C244220; 
	float DissipateTopStormTimeline_CloudIntensityBlend_536C0C8F42F5E3C9A5E5FCA98C244220; 
	enum class ETimelineDirection DissipateTopStormTimeline__Direction_536C0C8F42F5E3C9A5E5FCA98C244220; 
	struct UTimelineComponent* DissipateTopStormTimeline; 
	float DissipateMidStormTimeline_SpeedChange_EC98BC484B0105C7B8B3A4BEE6AEF6E9; 
	float DissipateMidStormTimeline_OpacityBlend_EC98BC484B0105C7B8B3A4BEE6AEF6E9; 
	float DissipateMidStormTimeline_Cloud_Intensity_Blend_EC98BC484B0105C7B8B3A4BEE6AEF6E9; 
	enum class ETimelineDirection DissipateMidStormTimeline__Direction_EC98BC484B0105C7B8B3A4BEE6AEF6E9; 
	struct UTimelineComponent* DissipateMidStormTimeline; 
	float DissipateBottomStormTimeline_OpacityBlend_9E6EDCAA43E1EB0F1DE4358594F7BEC8; 
	float DissipateBottomStormTimeline_Cloud_Intensity_Blend_9E6EDCAA43E1EB0F1DE4358594F7BEC8; 
	enum class ETimelineDirection DissipateBottomStormTimeline__Direction_9E6EDCAA43E1EB0F1DE4358594F7BEC8; 
	struct UTimelineComponent* DissipateBottomStormTimeline; 
	float StartMiddleStormTimeline_OpacityBlend_ECECF38F4838E65A4474218E02A40E6E; 
	float StartMiddleStormTimeline_Cloud_Intensity_Blend_ECECF38F4838E65A4474218E02A40E6E; 
	enum class ETimelineDirection StartMiddleStormTimeline__Direction_ECECF38F4838E65A4474218E02A40E6E; 
	struct UTimelineComponent* StartMiddleStormTimeline; 
	float StartBottomStormTimeline_OpacityBlend_E14271574D22D17B0C71FD9EFF61AE70; 
	float StartBottomStormTimeline_Cloud_Intensity_Blend_E14271574D22D17B0C71FD9EFF61AE70; 
	enum class ETimelineDirection StartBottomStormTimeline__Direction_E14271574D22D17B0C71FD9EFF61AE70; 
	struct UTimelineComponent* StartBottomStormTimeline; 
	bool UsingDesert; 
	bool UsingSnow; 
	float Emissive Default; 
	float Opacity Default; 
	struct TArray<struct UMaterialInstanceDynamic*> MIStormWallTop; 
	struct TArray<struct UMaterialInstanceDynamic*> MIStormWallMid; 
	struct TArray<struct UMaterialInstanceDynamic*> MIStormWallBot; 
	bool StormFinish; 

	void BiomeSelect(bool Desert, bool Snow); // (Public|BlueprintCallable|BlueprintEvent)
	void InitializeMaterials(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RandomSpeedPerWall(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void StartBottomStormTimeline__FinishedFunc(); // (BlueprintEvent)
	void StartBottomStormTimeline__UpdateFunc(); // (BlueprintEvent)
	void StartMiddleStormTimeline__FinishedFunc(); // (BlueprintEvent)
	void StartMiddleStormTimeline__UpdateFunc(); // (BlueprintEvent)
	void StartTopStormTimeline__FinishedFunc(); // (BlueprintEvent)
	void StartTopStormTimeline__UpdateFunc(); // (BlueprintEvent)
	void DissipateBottomStormTimeline__FinishedFunc(); // (BlueprintEvent)
	void DissipateBottomStormTimeline__UpdateFunc(); // (BlueprintEvent)
	void DissipateMidStormTimeline__FinishedFunc(); // (BlueprintEvent)
	void DissipateMidStormTimeline__UpdateFunc(); // (BlueprintEvent)
	void DissipateTopStormTimeline__FinishedFunc(); // (BlueprintEvent)
	void DissipateTopStormTimeline__UpdateFunc(); // (BlueprintEvent)
	void ActivateWall(bool UseDesert, bool UseSnow); // (BlueprintCallable|BlueprintEvent)
	void DeactivateWall(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Fx_StormWall(int32_t EntryPoint); // (Final|UbergraphFunction)
};


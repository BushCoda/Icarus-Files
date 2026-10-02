// BlueprintGeneratedClass BP_LivingItemPreview.BP_LivingItemPreview_C
struct ABP_LivingItemPreview_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USpotLightComponent* SpotLight1; 
	struct USpotLightComponent* SpotLight; 
	struct USceneComponent* SpotlightAnchor; 
	struct UPointLightComponent* PointLight1; 
	struct UPointLightComponent* PointLight; 
	struct USceneComponent* ItemAttachPoint; 
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; 
	struct UCameraComponent* Camera; 
	struct USceneComponent* DefaultSceneRoot; 
	struct USkeletalMeshComponent* BaseMesh; 
	struct TArray<struct UStaticMeshComponent*> Submeshes; 
	struct FItemData Item; 
	struct FLivingItemData LivingItemData; 
	struct TMap<struct ULightComponent*, float> CachedInitialLightIntensites; 
	bool FadeInWeapon; 
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> PreloadedMeshesSoft; 
	struct TArray<struct UObject*> PreloadedMeshesHard; 

	void OnLoaded_2B8B2B624CE5F97DAE6892B7AD42A935(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void SetupItem(struct FItemData Item); // (BlueprintCallable|BlueprintEvent)
	void AddSubmesh(struct FMeshCustomisationData& MeshCustomisationData); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateCapture(); // (BlueprintCallable|BlueprintEvent)
	void ClearItemMesh(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void PreloadAttachmentMaterials(); // (BlueprintCallable|BlueprintEvent)
	void ForceMipLevels(bool ForceHighQuality); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_LivingItemPreview(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


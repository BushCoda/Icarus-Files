// BlueprintGeneratedClass BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C
struct ABP_PlayerPreview_Survival_C : ABP_PlayerPreview_C {
	struct UPointLightComponent* PointLight3; 
	struct UPointLightComponent* PointLight1; 
	struct USceneComponent* Scene; 
	struct UMainInventoryWidgetBase* InventoryWidget; 

	void On Connected Player Initialised(struct FConnectedPlayer& ConnectedPlayer); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void RefreshPlayerCosmetics(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetPlayer(struct AIcarusPlayerCharacter* InPlayer); // (Public|BlueprintCallable|BlueprintEvent)
	void ConstructPlayerMeshArray(struct TArray<struct USkeletalMesh*>& MeshArray, struct TArray<struct TSoftClassPtr<UObject>>& MeshAnimBPs, struct USkeletalMesh*& BodyMesh); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePreviewVisibility(); // (Public|BlueprintCallable|BlueprintEvent)
	void ResolveVisibility(bool& Visible); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};


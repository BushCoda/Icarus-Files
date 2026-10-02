// BlueprintGeneratedClass BP_CardPreview.BP_CardPreview_C
struct ABP_CardPreview_C : ABP_ActorPreview_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UPointLightComponent* PointLight1; 
	struct UPointLightComponent* PointLight; 
	struct UWidgetComponent* Widget; 
	struct UStaticMeshComponent* Card; 

	void SetCardRotation(struct FRotator Rotation); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateCard(struct UMaterialInterface* Material, struct FText Text); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_CardPreview(int32_t EntryPoint); // (Final|UbergraphFunction)
};


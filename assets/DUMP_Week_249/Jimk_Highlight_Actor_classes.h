// BlueprintGeneratedClass Jimk_Highlight_Actor.Jimk_Highlight_Actor_C
struct AJimk_Highlight_Actor_C : ABP_Portable_Beacon_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBoxComponent* Box; 
	struct USpotLightComponent* SpotLight; 
	struct FTransform ConePosition; 
	struct FTransform CylinderPosition; 
	struct UStaticMesh* Cone; 
	struct UStaticMesh* Cylinder; 

	void UpdateMeshes(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__BP_Portable_Beacon_Child_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_Jimk_Highlight_Actor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


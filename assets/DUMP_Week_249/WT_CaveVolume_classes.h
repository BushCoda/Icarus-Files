// BlueprintGeneratedClass WT_CaveVolume.WT_CaveVolume_C
struct AWT_CaveVolume_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBoxComponent* Box; 
	struct USceneComponent* DefaultSceneRoot; 
	float Skin; 

	void GetReportedScore(float& Score); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // (HasOutParms|BlueprintEvent)
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // (BlueprintEvent)
	void ExecuteUbergraph_WT_CaveVolume(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


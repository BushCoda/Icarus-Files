// BlueprintGeneratedClass BP_WaterfallAudioComponent.BP_WaterfallAudioComponent_C
struct UBP_WaterfallAudioComponent_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* TopAudioComponent; 
	struct UFMODAudioComponent* BottomAudioComponent; 
	struct UFMODEvent* TopEvent; 
	struct UFMODEvent* BottomEvent; 
	struct FVector WaterfallSize; 
	struct UFMODEvent* TopEvent_Cave; 
	struct UFMODEvent* BottomEvent_Cave; 
	struct UFMODEvent* TopEvent_Lava; 
	struct UFMODEvent* BottomEvent_Lava; 
	float MaxPlayDistance; 
	struct FVector TopLocation; 
	struct FVector BottomLocation; 
	float UpdateFrequency; 

	void IsLava(bool& IsLava); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsInCave(bool& InCave); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetBottomFMODEvent(struct UFMODEvent*& Event); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetTopFMODEvent(struct UFMODEvent*& Event); // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateAudio(); // (Private|BlueprintCallable|BlueprintEvent)
	void SetSizeParameters(struct UFMODAudioComponent* Component); // (Private|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_WaterfallAudioComponent(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


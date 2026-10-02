// BlueprintGeneratedClass BP_Part_MID_RespawnPod.BP_Part_MID_RespawnPod_C
struct ABP_Part_MID_RespawnPod_C : ABP_PartBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* FirstPerson; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight; 
	struct UFMODAudioComponent* DropshipSequenceExternal; 
	struct UFMODAudioComponent* DropshipSequenceInternal; 
	struct UPostProcessComponent* PostProcess; 
	struct UBoxComponent* Box; 
	struct UStaticMeshComponent* SM_Shuttle_ReEntry_Cone; 
	struct USceneComponent* LandingFx; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	float DoorOpenTimeline_OpenValue_1343C0424A9B1AC4701F10A747F03C3D; 
	enum class ETimelineDirection DoorOpenTimeline__Direction_1343C0424A9B1AC4701F10A747F03C3D; 
	struct UTimelineComponent* DoorOpenTimeline; 
	float Fade_Fade_5E56498346363A547A1A46B094DCCE99; 
	enum class ETimelineDirection Fade__Direction_5E56498346363A547A1A46B094DCCE99; 
	struct UTimelineComponent* Fade; 
	bool Open; 
	bool ReEntry; 
	bool Start; 
	bool Stop; 
	float DoorOpenValue; 
	struct FMulticastInlineDelegate DoorFinishedOpening; 
	bool SeatUnlocked; 

	void OnRep_SeatUnlocked(); // (BlueprintCallable|BlueprintEvent)
	void Update Fmod Dropship State(enum class EDropshipDescentStateFMODParam DropshipSequenceState); // (Public|BlueprintCallable|BlueprintEvent)
	void ToggleFlightSFX(enum class ERocketState DropShipState, bool IsLocalPlayer); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Open(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_Stop(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_Start(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_ReEntry(); // (BlueprintCallable|BlueprintEvent)
	void TriggerEvent(struct FDropShipActionsEnum Actions); // (Public|BlueprintCallable|BlueprintEvent)
	void GetMesh(struct UPrimitiveComponent*& Mesh); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Fade__FinishedFunc(); // (BlueprintEvent)
	void Fade__UpdateFunc(); // (BlueprintEvent)
	void DoorOpenTimeline__FinishedFunc(); // (BlueprintEvent)
	void DoorOpenTimeline__UpdateFunc(); // (BlueprintEvent)
	void Show_RespawnPod_FX(); // (BlueprintCallable|BlueprintEvent)
	void Hide_RespawnPod_FX(); // (BlueprintCallable|BlueprintEvent)
	void Fade_Cone_FX(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void StartOpening(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Part_MID_RespawnPod(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void DoorFinishedOpening__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


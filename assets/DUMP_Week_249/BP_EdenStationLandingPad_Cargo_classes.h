// BlueprintGeneratedClass BP_EdenStationLandingPad_Cargo.BP_EdenStationLandingPad_Cargo_C
struct ABP_EdenStationLandingPad_Cargo_C : ABP_Exotic_Delivery_Interface_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UStaticMeshComponent* CommDevice; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_D; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_C; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_B; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_A; 
	struct UStaticMeshComponent* SM_DEP_LandingPad_T4_Base_Metal; 
	struct USceneComponent* LandingPoint; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_B3; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_A3; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_A2; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_B2; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_B1; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_A1; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_A; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_B; 
	struct UCargoLandingPadComponent* CargoLandingPad; 
	struct AIcarusActor* Left Slot; 
	struct AIcarusActor* Right Slot; 

	bool IsEdenPad(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetSnapPoint(int32_t Index); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Generate Spawn Pod Location(struct ABP_Transport_Pod_Base_C* TransportPod); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_EdenStationLandingPad_Cargo(int32_t EntryPoint); // (Final|UbergraphFunction)
};


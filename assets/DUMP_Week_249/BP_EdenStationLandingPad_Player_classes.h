// BlueprintGeneratedClass BP_EdenStationLandingPad_Player.BP_EdenStationLandingPad_Player_C
struct ABP_EdenStationLandingPad_Player_C : ABP_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_D; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_C; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_B; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_A; 
	struct UStaticMeshComponent* SM_DEP_LandingPad_T4_Base_Metal; 
	struct ULandingPadComponent* LandingPad; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_B3; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_A3; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_A2; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_B2; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_B1; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_A1; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_A; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_B; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct USceneComponent* LandingL; 
	struct AIcarusActor* Left Slot; 
	struct AIcarusActor* Right Slot; 

	struct FVector GetSnapPoint(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsEdenPad(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Deployable_Interact(struct AActor* Interactor); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ToggleLights(bool LightsOn); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_EdenStationLandingPad_Player(int32_t EntryPoint); // (Final|UbergraphFunction)
};


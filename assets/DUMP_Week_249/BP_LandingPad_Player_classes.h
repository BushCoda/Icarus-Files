// BlueprintGeneratedClass BP_LandingPad_Player.BP_LandingPad_Player_C
struct ABP_LandingPad_Player_C : ABP_Light_Electric_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_B; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_A; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_D; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_C; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_B; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_H; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_G; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_E; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_F; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_D; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_C; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_A; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct ULandingPadComponent* LandingPad; 
	struct USceneComponent* LandingLocator; 
	struct FPlayerCharacterID SelectedPlayerID; 
	struct ABP_DropShip_C* Dropship; 
	struct ABuildingBase* CachedDestroyedFoundation; 
	enum class EBuildingDestroyReason CachedDestoryedFounddataionReason; 
	bool bInteractionBlocked; 
	bool bStarted; 

	struct FVector GetSnapPoint(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	bool IsEdenPad(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void EventFoundationDestroyed(struct ABuildingBase* Building, enum class EBuildingDestroyReason DestroyReason); // (BlueprintCallable|BlueprintEvent)
	void OnEQSComplete(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ClaimLandingPad(struct AIcarusPlayerCharacterSurvival* Player); // (BlueprintCallable|BlueprintEvent)
	void OnQueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void UnClaimLandingPad(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_LandingPad_Player(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


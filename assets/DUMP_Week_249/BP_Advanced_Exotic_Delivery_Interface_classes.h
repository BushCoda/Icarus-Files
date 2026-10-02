// BlueprintGeneratedClass BP_Advanced_Exotic_Delivery_Interface.BP_Advanced_Exotic_Delivery_Interface_C
struct ABP_Advanced_Exotic_Delivery_Interface_C : ABP_Exotic_Delivery_Interface_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* Scene; 
	struct USceneComponent* LandingPoint; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_A3; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_A2; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_A3; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_B2; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_B1; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_A1; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_A; 
	struct UBP_IcarusSpotLight_C* BP_IcarusSpotLight_A; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UCargoLandingPadComponent* CargoLandingPad; 

	bool IsEdenPad(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	struct FVector GetSnapPoint(int32_t Index); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void Generate Spawn Pod Location(struct ABP_Transport_Pod_Base_C* TransportPod); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void OnHighlightChanged(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Advanced_Exotic_Delivery_Interface(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


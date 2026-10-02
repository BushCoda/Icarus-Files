// BlueprintGeneratedClass BP_Faction_Eden_Marker.BP_Faction_Eden_Marker_C
struct ABP_Faction_Eden_Marker_C : ABP_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct UStaticMeshComponent* SM_DEP_Single_Ceiling_Light; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UStaticMeshComponent* SM_ORB_STN_ControlPanel_041; 
	struct UStaticMeshComponent* SM_ORB_STN_ControlPanel_04; 
	struct UStaticMeshComponent* SM_DEP_Beacon.SM_DEP_Beacon; 
	struct UStaticMeshComponent* HorizontalFlag; 
	struct UAudioContextComponent* AudioContext; 
	struct FMulticastInlineDelegate BlockerRemoved; 
	bool Active; 

	void OnRep_Active(); // (BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UpdateFlag(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Faction_Eden_Marker(int32_t EntryPoint); // (Final|UbergraphFunction)
	void BlockerRemoved__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


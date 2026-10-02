// BlueprintGeneratedClass BP_Seismic_Probe.BP_Seismic_Probe_C
struct ABP_Seismic_Probe_C : ABP_Powered_Faction_Mission_Deployable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UFMODAudioComponent* ScanAudio; 
	struct USkeletalMeshComponent* SK_DEP_Radar_Top_D_NoWire; 
	struct USkeletalMeshComponent* SK_DEP_Radar_Head_B_NoWire; 
	struct UStaticMeshComponent* Cube; 
	bool bScanComplete; 
	struct ABP_GH_DenEntrance_RockGolem_C* ProbeTarget; 

	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ToggleAudio(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Seismic_Probe(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// BlueprintGeneratedClass BP_National_Flag.BP_National_Flag_C
struct ABP_National_Flag_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FlagRustleAudio; 
	struct UStaticMeshComponent* HorizontalFlag; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct FNationalFlagsRowHandle NationalFlag; 

	void OnRep_NationalFlag(); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_7CD21EDE421AF642C88B029595B13F43(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void UpdateFlag(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_National_Flag(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


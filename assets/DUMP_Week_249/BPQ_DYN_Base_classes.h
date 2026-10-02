// BlueprintGeneratedClass BPQ_DYN_Base.BPQ_DYN_Base_C
struct ABPQ_DYN_Base_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBPQC_DynamicLocation_C* BPQC_DynamicLocation; 
	struct USceneComponent* DefaultSceneRoot; 
	bool First Time; 
	int32_t Maximum Distance; 
	int32_t Minimum Distance; 

	void SetSpawnLocation(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool Check(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnLocationFound(struct FVector Location); // (BlueprintCallable|BlueprintEvent)
	void Setup(bool bFirstTime); // (Event|Public|BlueprintEvent)
	void PostLocationFound(bool FirstTime); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BPQ_DYN_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


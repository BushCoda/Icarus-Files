// BlueprintGeneratedClass BP_FLODInfluence_Lightning.BP_FLODInfluence_Lightning_C
struct UBP_FLODInfluence_Lightning_C : UFLODInfluenceComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<struct FFLODInstanceID> ActiveInfluenceInstances; 

	void RemoveLightningInfluencedInstance(struct FFLODInstanceID Instance); // (Public|BlueprintCallable|BlueprintEvent)
	void AddLightningInfluencedInstance(struct FFLODInstanceID Instance); // (Public|BlueprintCallable|BlueprintEvent)
	void GetLightningStrikeTarget(struct TArray<struct AActor*>& TargetActors, float Radius, struct FFLODInstanceID& FoundInstance, bool& Found); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateActiveInfluences(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_FLODInfluence_Lightning(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


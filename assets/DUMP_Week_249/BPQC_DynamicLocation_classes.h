// BlueprintGeneratedClass BPQC_DynamicLocation.BPQC_DynamicLocation_C
struct UBPQC_DynamicLocation_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FMulticastInlineDelegate LocationFound; 
	int32_t Maximum Distance; 
	int32_t Minimum Distance; 
	struct UEnvQuery* Query Template; 

	void OnGenerateSpawnPoint(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // (BlueprintCallable|BlueprintEvent)
	void FindLocation(int32_t MaximumDistance, int32_t MinimumDistance); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BPQC_DynamicLocation(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void LocationFound__DelegateSignature(struct FVector Location); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


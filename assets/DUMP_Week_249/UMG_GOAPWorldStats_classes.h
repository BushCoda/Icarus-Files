// WidgetBlueprintGeneratedClass UMG_GOAPWorldStats.UMG_GOAPWorldStats_C
struct UUMG_GOAPWorldStats_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* VerticalBox; 
	struct ABP_AISpawner_C* CachedAISpawner; 
	int32_t BiomeSpawnDensity; 
	struct FName SpawnZoneName; 
	struct UStringRow_C* RowRef; 
	struct TMap<struct ABP_IcarusNPCGOAPCharacter_C*, struct FAISetupRowHandle> FoundCreatureClasses; 

	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void GetBiomeSpawnDensity(); // (BlueprintCallable|BlueprintEvent)
	void UpdateBiomeInfo(); // (BlueprintCallable|BlueprintEvent)
	void UpdateCreatureList(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_GOAPWorldStats(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// BlueprintGeneratedClass BP_DisasterController.BP_DisasterController_C
struct ABP_DisasterController_C : ADisasterController {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_FLODInfluence_VoxelCracker_C* FLODInfluence_VoxelCracker; 
	struct UBP_FLODInfluence_Lightning_C* FLODInfluence_Lightning; 
	struct UBP_FLODInfluence_TreeToppler_C* FLODInfluence_TreeToppler; 
	struct TMap<struct FBiomesEnum, struct FFBiomeLightning> BiomeLightningMap; 
	float LightningTreeStrikeRadius; 
	float LightningCosmeticMinDistance; 
	float LightningCosmeticMaxDistance; 
	int32_t MaxActiveToppleTrees; 
	int32_t ActiveToppleTrees; 
	struct TMap<enum class ETreePrimitiveDetachContext, float> ToppleCandidateChance; 
	struct TMap<struct FBiomesEnum, struct FFBiomeStormWindInfo> BiomeStormWindMap; 
	float WindTreeToppleMaxRadius; 
	float WindTreeToppleCloseRadius; 
	int32_t MinimumTreesRequiredToTopple; 
	float LightningBlueprintMinDistance; 
	float LightningBlueprintMaxDistance; 
	int32_t LightningHitTypeMaxRoll; 
	float ChanceOfBlueprintLightning; 
	float BuildingLightingChance%; 
	float TreeLightningChance%; 
	float PlayerLightningChance%; 
	struct FRandomStream RandomStream; 
	struct TMap<struct UIcarusWeatherAction*, struct FScriptedEventsRowHandle> ScheduledScriptedEvents; 
	struct TMap<struct FBiomesEnum, struct AScriptedEvent*> ActiveScriptedEvents; 
	struct TArray<struct FTimerHandle> ToppledTreesCooldown; 
	float TreeToppleCooldownTime; 

	void DamageFISMVoxel(struct AActor* Attacker, struct AActor* Weapon, struct FHitResult HitInfo, int32_t NumHits); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DropShipAtomiseFoliage(struct FVector Location, float Radius); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void DropShipSmashTrees(struct FVector Location, float Radius); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TreeToppleCooldownEnded(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnWeatherActionCompleted(struct FBiomesRowHandle& Biome, struct FWeatherEventsRowHandle& Event); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BeginScriptedEvent(struct FScriptedEventsRowHandle Event, struct FBiomesRowHandle AssociatedBiome); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnWeatherEventStarted(struct FBiomesRowHandle& Biome, struct FWeatherEventsRowHandle& Event); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetUncoveredPlayer(struct TArray<struct ABP_IcarusPlayerCharacterSurvival_C*>& BiomeCharacters, struct ABP_IcarusPlayerCharacterSurvival_C*& TargetCharacter); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void IsLightningRodCloser(struct FVector TargetLocation, bool& LightningRod, struct AActor*& ChosenTarget); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StopStormTreeToppling(struct FBiomesEnum Biome); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StartStormTreeToppling(struct FVector WindDirection, float MinInterval, float MaxInterval, float WindStrengthThreshold, struct FBiomesEnum Biome); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindTreeToppleCandidatesInBiome(struct FBiomesEnum Biome, struct FFBiomeStormWindInfo WindInfo); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckForWindTreeTopples(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void MakeToppleTreeCandidate(struct FFLODInstanceID Instance, enum class ETreePrimitiveDetachContext Context, struct FVector ToppleDirection); // (Public|BlueprintCallable|BlueprintEvent)
	void ToppleTree(struct FFLODInstanceID Instance, struct FTreeToppleInfo ToppleInfo); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckForNewLightningStrike(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void RollNextEventTime(float Min, float Max, int32_t& NextStrikeTime); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void StartGeneratingLightning(float MinInterval, float MaxInterval, struct FBiomesEnum Biome); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Server_GenerateLightningStrike(struct FBiomesEnum LightningBiome); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Multicast_LightningStrike(enum class ELightningStrikeTarget TargetType, struct FVector TargetLocation, struct AActor* TargetActor, struct FFLODInstanceID TargetFLODInstance); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnSeedUpdated(int32_t Seed); // (BlueprintCallable|BlueprintEvent)
	void StopGeneratingLightning(struct FBiomesEnum Biome); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_DisasterController(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


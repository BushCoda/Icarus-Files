// BlueprintGeneratedClass BP_CRE_LandShark.BP_CRE_LandShark_C
struct ABP_CRE_LandShark_C : ABP_FactionBoss_SandWorm_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVocalisationComponent* Vocalisation; 
	struct USceneComponent* LootBagLocation; 
	struct UAudioContextComponent* AudioContext; 

	void DropScales(struct AActor* Causer, int32_t DamageTaken); // (Public|BlueprintCallable|BlueprintEvent)
	void SpawnLootBag(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	enum class EMusicConditionCombatState GetCombatMusicConditionOverride(struct AIcarusPlayerCharacter* TargetPlayer, float Threat); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnActorDeath(struct UActorState* ActorStateIn); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_CRE_LandShark(int32_t EntryPoint); // (Final|UbergraphFunction)
};


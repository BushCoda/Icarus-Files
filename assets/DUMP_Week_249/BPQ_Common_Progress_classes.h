// BlueprintGeneratedClass BPQ_Common_Progress.BPQ_Common_Progress_C
struct ABPQ_Common_Progress_C : AQuest {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	bool NearbyPlayers; 
	int32_t NumberOfPlayers; 
	struct FTimerHandle Event; 
	float MaxPlayerDistance; 

	float GetMaxTime(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PlayersLeftArea(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetDescription(struct FText& InDescription, struct FText& OutDescription, bool& bOutComplete); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool Check(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void RunOperations(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void Setup(bool bFirstTime); // (Event|Public|BlueprintEvent)
	void CheckPlayers(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BPQ_Common_Progress(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


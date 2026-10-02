// BlueprintGeneratedClass BP_Colony_Arcade_Machine.BP_Colony_Arcade_Machine_C
struct ABP_Colony_Arcade_Machine_C : ABP_Rad_Radio_Tower_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetComponent* Widget_ScoresDisplay; 
	struct TArray<struct FArcadeMachineScore> Scores; 
	enum class EArcadeMachineRankingType RankingType; 
	struct AActor* CurrentArcadePlayer; 

	struct TArray<struct FArcadeMachineScore> GetArcadeMachineScores(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void Deployable_StopInteract(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void SubmitPlayerScore(struct FArcadeMachineScore& ArcadeMachineScore); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ActiveUpdated(bool bNewActive); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateScoresDisplay(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Scores(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SetArcadeMachineScores(struct TArray<struct FArcadeMachineScore>& Scores); // (Event|Public|HasOutParms|BlueprintEvent)
	void UpdateScores(struct TArray<struct FArcadeMachineScore>& Scores); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void MulticastPlayHighScoreSFX(bool bNewHighScore); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Colony_Arcade_Machine(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


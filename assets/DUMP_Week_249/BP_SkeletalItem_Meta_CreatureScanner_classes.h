// BlueprintGeneratedClass BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C
struct ABP_SkeletalItem_Meta_CreatureScanner_C : ABP_SkeletalItem_Scanner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_HandheldScanner; 
	struct USceneComponent* FirstPersonTransforms; 
	struct UWidgetComponent* ScreenWidget; 
	struct FAISetupRowHandle AI; 
	struct AActor* Scanned Creature; 
	enum class ECreatureScanState ScanState; 
	struct TArray<struct FAISetupRowHandle> IgnoredAISetups; 

	void Set VFX Color(struct FLinearColor In Value); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_ScanState(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_Scanning(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_AI(); // (BlueprintCallable|BlueprintEvent)
	void Play Fish Finder Finish Sound(); // (Public|BlueprintCallable|BlueprintEvent)
	void Play Sonar Sound(); // (Public|BlueprintCallable|BlueprintEvent)
	struct UWidgetComponent* GetScreenWidget(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Scan_Creature(struct AActor* ScannedCreature); // (BlueprintCallable|BlueprintEvent)
	void TriggerReset(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void GeneticActionInt(int32_t Data); // (Public|BlueprintCallable|BlueprintEvent)
	void TriggerAudio(); // (BlueprintCallable|BlueprintEvent)
	void GenericActionWithCharacter(struct AIcarusPlayerCharacter* Character); // (Public|BlueprintCallable|BlueprintEvent)
	void GenericAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void ViewModeChanged(bool bIsThirdPerson); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Meta_CreatureScanner(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


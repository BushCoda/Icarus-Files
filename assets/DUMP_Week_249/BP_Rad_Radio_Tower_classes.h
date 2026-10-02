// BlueprintGeneratedClass BP_Rad_Radio_Tower.BP_Rad_Radio_Tower_C
struct ABP_Rad_Radio_Tower_C : ABP_Deployable_ManualToggle_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight; 
	struct USceneComponent* Scene_Lights; 
	struct UCameraComponent* Camera; 
	struct UStaticMeshComponent* dish; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	bool Aligned; 
	int32_t Degrees; 
	int32_t ZoneDegrees; 
	bool ZoneHasReachedTarget; 
	int32_t ZoneTarget; 
	float ZoneSpeed; 
	int32_t Progress; 
	float ProgressTemp; 
	float Speed; 
	float TempValue; 
	struct FFMODEventInstance MinigameInstance; 
	struct UIcarusLinkedActorPanelBase* Widget Class; 

	void ActiveUpdated(bool bNewActive); // (Public|BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Degrees(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetDegrees(int32_t NewDegrees); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void GenericAction(); // (Public|BlueprintCallable|BlueprintEvent)
	void GenericActionWithCharacter(struct AIcarusPlayerCharacter* Character); // (Public|BlueprintCallable|BlueprintEvent)
	void GeneticActionInt(int32_t Data); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Rad_Radio_Tower(int32_t EntryPoint); // (Final|UbergraphFunction)
};


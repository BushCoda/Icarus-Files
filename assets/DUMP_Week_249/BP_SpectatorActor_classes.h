// BlueprintGeneratedClass BP_SpectatorActor.BP_SpectatorActor_C
struct ABP_SpectatorActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USphereComponent* Sphere; 
	struct UCameraComponent* Camera; 
	struct USpringArmComponent* SpringArm; 
	struct USceneComponent* DefaultSceneRoot; 
	struct AActor* PlayerToSpectate; 
	int32_t CurrentPlayer; 
	float MaxCameraDistance; 
	float MinCameraDistance; 
	float HitCameraOffset; 

	void GetSpectatedPlayer(struct AIcarusPlayerCharacterSurvival*& PlayerOut); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateSpringArm(struct FRotator ControlRotation); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ChangePlayer(bool Previous); // (Public|BlueprintCallable|BlueprintEvent)
	void GetPlayer(int32_t Index, struct AActor*& Item); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void NextPlayer(bool Previous); // (Public|BlueprintCallable|BlueprintEvent)
	void SetPlayer(struct AActor* Player); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_SpectatorActor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


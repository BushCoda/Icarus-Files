// BlueprintGeneratedClass BP_NPC_DragonFly_Character.BP_NPC_DragonFly_Character_C
struct ABP_NPC_DragonFly_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* DragonflyWings; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	enum class EGOAPProperty FastestActiveState; 
	struct FRotator TargetRotator; 
	struct FName IsDivingKeyName; 
	bool IsDiving; 
	bool HasEmerged; 

	bool CanKillcam(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateVocalisationState(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateRotation(); // (Public|BlueprintCallable|BlueprintEvent)
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Dragonfly_FlyingAudio(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_DragonFly_Character(int32_t EntryPoint); // (Final|UbergraphFunction)
};


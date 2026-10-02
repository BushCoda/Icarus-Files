// BlueprintGeneratedClass BP_NPC_Kea_Character.BP_NPC_Kea_Character_C
struct ABP_NPC_Kea_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool IsScared; 
	struct FName IsScaredKeyName; 

	void UpdateVocalisationState(); // (Protected|BlueprintCallable|BlueprintEvent)
	bool CanKillcam(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // (Event|Public|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_Kea_Character(int32_t EntryPoint); // (Final|UbergraphFunction)
};


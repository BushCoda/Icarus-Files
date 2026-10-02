// BlueprintGeneratedClass BP_NPC_Spider_Character.BP_NPC_Spider_Character_C
struct ABP_NPC_Spider_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UGFurComponent* GFur; 
	struct USceneComponent* Alert; 
	struct UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner; 
	enum class EGOAPProperty FastestActiveState; 

	bool GetMontageForAction(struct TSoftClassPtr<UObject>& Action, struct TSoftObjectPtr<UAnimMontage>& ActionMontage, struct FName& MontageSection, struct FName& MontageNotify); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindFloorAngle(float& Angle); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Multicast_ActorDeath(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_Spider_Character(int32_t EntryPoint); // (Final|UbergraphFunction)
};


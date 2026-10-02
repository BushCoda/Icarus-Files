// BlueprintGeneratedClass BP_NPC_Tundra_Monkey_Character.BP_NPC_Tundra_Monkey_Character_C
struct ABP_NPC_Tundra_Monkey_Character_C : ABP_IcarusNPCGOAPCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* Alert; 
	struct UBP_JumpLerpComponent_C* BP_JumpLerpComponent; 
	struct UGFurComponent* GFur; 
	bool HasStick; 
	struct FName HasStickKey; 
	bool InTree; 
	struct FName InTreeKey; 
	struct AActor* NearbyTree; 

	void GetAlertWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void AttachToTree(bool& DidAttach); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool GetMontageForAction(struct TSoftClassPtr<UObject>& Action, struct TSoftObjectPtr<UAnimMontage>& ActionMontage, struct FName& MontageSection, struct FName& MontageNotify); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnRep_InTree(); // (BlueprintCallable|BlueprintEvent)
	void ReplicateBlackboardVariables(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_NPC_Tundra_Monkey_Character(int32_t EntryPoint); // (Final|UbergraphFunction)
};


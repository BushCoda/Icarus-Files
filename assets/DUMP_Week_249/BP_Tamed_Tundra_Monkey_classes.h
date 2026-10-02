// BlueprintGeneratedClass BP_Tamed_Tundra_Monkey.BP_Tamed_Tundra_Monkey_C
struct ABP_Tamed_Tundra_Monkey_C : ABP_Tame_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_Stick; 
	struct USceneComponent* PetTarget; 
	int32_t StickCount; 
	struct FName StickCountKey; 

	struct UAnimMontage* GetMontageForGameplayTag(struct FGameplayTag& Tag, struct FName& Section); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void OnHeldStickUpdated(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateBlackboardValues(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_StickCount(); // (BlueprintCallable|BlueprintEvent)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Tamed_Tundra_Monkey(int32_t EntryPoint); // (Final|UbergraphFunction)
};


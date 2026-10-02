// BlueprintGeneratedClass BP_Mount_Horse.BP_Mount_Horse_C
struct ABP_Mount_Horse_C : ABP_Mount_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* PetTarget; 
	struct USceneComponent* HandsTarget; 
	int32_t CosmeticSkinIndex_1; 

	void UpdateCosmeticMaterials(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	bool ReplaceSelfWithDeadItem(struct AIcarusActor*& ReplacementActor, struct TArray<struct FIcarusStatReplicated>& CustomStats); // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	struct FVector GetHandsTargetLocation(struct FVector SeatLocation); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Mount_Horse(int32_t EntryPoint); // (Final|UbergraphFunction)
};


// BlueprintGeneratedClass BP_Tame_Cow.BP_Tame_Cow_C
struct ABP_Tame_Cow_C : ABP_Tame_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFillableComponent* Fillable; 

	struct FVector GetDamageSourceLocation(struct UAnimMontage* Montage, struct FName SectionName); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IcarusBeginPlay(); // (Event|Public|BlueprintEvent)
	void OnFillableUnitsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void DebugText(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Tame_Cow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


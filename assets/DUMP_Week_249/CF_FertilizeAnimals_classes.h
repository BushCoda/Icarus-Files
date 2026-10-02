// WidgetBlueprintGeneratedClass CF_FertilizeAnimals.CF_FertilizeAnimals_C
struct UCF_FertilizeAnimals_C : UCF_BaseButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<struct USkeletalMeshComponent*> Armour Components; 
	struct TArray<struct USkeletalMeshComponent*> Simple TPArmour Components; 
	struct TArray<struct USkeletalMeshComponent*> FPArmour Components; 

	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_FertilizeAnimals(int32_t EntryPoint); // (Final|UbergraphFunction)
};


// WidgetBlueprintGeneratedClass CF_DebugArmor.CF_DebugArmor_C
struct UCF_DebugArmor_C : UCF_BaseButton_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<struct USkeletalMeshComponent*> Armour Components; 
	struct TArray<struct USkeletalMeshComponent*> Simple TPArmour Components; 
	struct TArray<struct USkeletalMeshComponent*> FPArmour Components; 

	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_DebugArmor(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


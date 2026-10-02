// BlueprintGeneratedClass BP_DamageText.BP_DamageText_C
struct ABP_DamageText_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionComponent_C* BP_UIProjectionComponent; 
	struct UStaticMeshComponent* Sphere; 
	enum class EIcarusDamageType Damage; 
	int32_t Value; 
	struct FCriticalHitAreasEnum CriticalHit; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_DamageText(int32_t EntryPoint); // (Final|UbergraphFunction)
};


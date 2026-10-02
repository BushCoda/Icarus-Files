// BlueprintGeneratedClass BP_InspectionToolGeneric.BP_InspectionToolGeneric_C
struct ABP_InspectionToolGeneric_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* Sphere; 
	struct UWidgetComponent* Widget; 
	struct USceneComponent* DefaultSceneRoot; 
	bool HoldTrace; 
	struct FHitResult HitResult; 
	enum class EDevToolMode Mode; 
	struct UUMG_InspectionToolPopup_C* CachedWidget; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Kill(); // (BlueprintCallable|BlueprintEvent)
	void DisplayWidget(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_InspectionToolGeneric(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


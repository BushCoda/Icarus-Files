// BlueprintGeneratedClass BP_NPCTrailComponent_OverlapModifier.BP_NPCTrailComponent_OverlapModifier_C
struct UBP_NPCTrailComponent_OverlapModifier_C : UBP_NPCTrailComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FModifierStatesRowHandle Modifier; 
	struct FStatsEnum ModifierStatFilter; 
	struct UIcarusStatContainer* OverlappedStatContainer; 
	float Modifier Lifetime; 

	void ApplyOverlapModifier(struct AActor* Target); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnActorBeginSplineOverlap(struct AActor* Actor, struct USplineMeshComponent* FirstSegmentOverlap); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReapplyModifierToOverlappingActors(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_NPCTrailComponent_OverlapModifier(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// BlueprintGeneratedClass BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C
struct ABP_IcarusNPCGOAPController_C : AIcarusNPCGOAPController {
	struct UCurveFloat* ThreatOverDistanceCurve; 
	bool GOAP Debugging; 
	struct UIcarusGOAPAIMemory* Memory; 
	float BaseStealthThreatModifier; 
	struct UCurveFloat* FootstepDistanceThreat; 
	struct FBestiaryDataRowHandle BestiaryRow; 

	void ResetBlackboard(); // (Public|BlueprintCallable|BlueprintEvent)
	void ShouldReactToPerceivedDamageNoise(struct AActor* PerceivedActor, bool& ShouldReact); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAdditionalTargetThreatModifier(struct AActor* PerceivedTarget, float& AdditionalThreatPlusPercent); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool OnProcessedNoise(struct AActor* PerceivedActor, struct FAIStimulus EventStimulus); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool OnProcessedDamage(struct AActor* PerceivedActor, struct FAIStimulus EventStimulus); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool RecalculateGOAPState(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool MoveToAction(struct UIcarusGOAPAction* Action); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	float GetActorThreat(struct AActor* PerceivedActor, bool bIgnoreRelationships); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};


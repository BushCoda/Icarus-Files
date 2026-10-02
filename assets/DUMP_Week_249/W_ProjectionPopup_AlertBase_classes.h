// WidgetBlueprintGeneratedClass W_ProjectionPopup_AlertBase.W_ProjectionPopup_AlertBase_C
struct UW_ProjectionPopup_AlertBase_C : UW_ProjectionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float AlertValue; 
	bool Cautious; 
	bool Alert; 
	float AlertValueSmoothed; 
	float AlertInterpSpeed; 
	struct UCurveLinearColor* ColourCurve; 
	float HealthValue; 
	float HealthValueSmoothed; 
	float HealthInterpSpeed; 
	int32_t Level; 
	struct FAICreatureTypeRowHandle Creature Type; 
	bool Perception Enabled; 
	struct FEpicCreaturesRowHandle Epic Creature; 
	bool Is Recently Perceiving Any Player; 
	struct FText EpicName; 
	bool Is Eating or Drinking; 
	int32_t CustomBehaviourState; 
	float ArmorValue; 
	float ArmorValueSmoothed; 

	void TickArmorVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void TickHealthVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void TickAlertVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void TickWidget(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_W_ProjectionPopup_AlertBase(int32_t EntryPoint); // (Final|UbergraphFunction)
};


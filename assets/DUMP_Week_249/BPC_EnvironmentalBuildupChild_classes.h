// BlueprintGeneratedClass BPC_EnvironmentalBuildupChild.BPC_EnvironmentalBuildupChild_C
struct UBPC_EnvironmentalBuildupChild_C : UStaticMeshComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float ChildMeshXScale; 
	float ChildMeshYScale; 
	float ChildMeshZScaleMultiplier; 
	float Amount; 
	enum class EAccumulationType AccumulationType; 

	void OnRep_Amount(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_AccumulationType(); // (BlueprintCallable|BlueprintEvent)
	void UpdateScale(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateMaterial(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void UpdateAmount(float Amount); // (BlueprintCallable|BlueprintEvent)
	void UpdateType(enum class EAccumulationType Type); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BPC_EnvironmentalBuildupChild(int32_t EntryPoint); // (Final|UbergraphFunction)
};


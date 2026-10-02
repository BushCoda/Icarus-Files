// BlueprintGeneratedClass BPC_EnvironmentalBuildup.BPC_EnvironmentalBuildup_C
struct UBPC_EnvironmentalBuildup_C : UStaticMeshComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float MeshXScale; 
	float MeshYScale; 
	float MeshZScaleMultiplier; 
	float Amount; 
	enum class EAccumulationType AccumulationType; 

	void UpdateMaterial(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateScale(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_AccumulationType(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_Amount(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void UpdateAmount(float Amount); // (BlueprintCallable|BlueprintEvent)
	void UpdateType(enum class EAccumulationType Type); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BPC_EnvironmentalBuildup(int32_t EntryPoint); // (Final|UbergraphFunction)
};


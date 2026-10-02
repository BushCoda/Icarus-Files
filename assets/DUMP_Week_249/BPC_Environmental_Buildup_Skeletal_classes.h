// BlueprintGeneratedClass BPC_Environmental_Buildup_Skeletal.BPC_Environmental_Buildup_Skeletal_C
struct UBPC_Environmental_Buildup_Skeletal_C : USkeletalMeshComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float Amount; 
	enum class EAccumulationType AccumulationType; 
	struct FString MorphTargetName; 

	void UpdateMaterial(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateScale(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_AccumulationType(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_Amount(); // (BlueprintCallable|BlueprintEvent)
	void UpdateType(enum class EAccumulationType Type); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void UpdateAmount(float Amount); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BPC_Environmental_Buildup_Skeletal(int32_t EntryPoint); // (Final|UbergraphFunction)
};


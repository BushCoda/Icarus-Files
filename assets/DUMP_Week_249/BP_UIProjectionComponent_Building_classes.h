// BlueprintGeneratedClass BP_UIProjectionComponent_Building.BP_UIProjectionComponent_Building_C
struct UBP_UIProjectionComponent_Building_C : UBP_UIProjectionComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct AIcarusActor* CurrentActor; 

	enum class EViewTraceResultPriority BP_UIProjectionComponent_Building_AutoGenFunc(struct FViewTraceResult& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetWidgetLocation(struct FVector& Location); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_UIProjectionComponent_Building(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


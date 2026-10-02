// BlueprintGeneratedClass BP_CaveEntranceComponent.BP_CaveEntranceComponent_C
struct UBP_CaveEntranceComponent_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCurveFloat* DistanceCurve; 
	struct UFMODAudioComponent* Audio; 
	struct UCurveFloat* DistanceCurve_Entrance; 

	void GetEntranceDepthForAtmos(struct FVector Location, float& EntranceDepth); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ToggleAudio(bool ShouldPlay); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetSpelunkingDepth(struct FVector Location, float& Depth); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_CaveEntranceComponent(int32_t EntryPoint); // (Final|UbergraphFunction)
};


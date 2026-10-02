// BlueprintGeneratedClass BP_NavigationCheckpoint.BP_NavigationCheckpoint_C
struct ABP_NavigationCheckpoint_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBillboardComponent* Billboard; 
	struct UTextRenderComponent* TextRender; 
	struct USceneComponent* DefaultSceneRoot; 
	bool IsValid; 
	bool PrintFailures; 

	void ValidateCheckpoint(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool IsCheckpointValid(); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_NavigationCheckpoint(int32_t EntryPoint); // (Final|UbergraphFunction)
};


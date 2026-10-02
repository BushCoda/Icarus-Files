// BlueprintGeneratedClass BP_Bunker_BunkBed_TopBunk.BP_Bunker_BunkBed_TopBunk_C
struct ABP_Bunker_BunkBed_TopBunk_C : ABP_BedBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBoxComponent* Box; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnHighlight(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Bunker_BunkBed_TopBunk(int32_t EntryPoint); // (Final|UbergraphFunction)
};


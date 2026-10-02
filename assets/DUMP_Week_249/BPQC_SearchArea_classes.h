// BlueprintGeneratedClass BPQC_SearchArea.BPQC_SearchArea_C
struct UBPQC_SearchArea_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FMapSearchAreaRowHandle SearchArea; 
	struct UUMG_RadarSquare_C* Widget; 
	bool bAutoAdd; 
	int32_t Radius; 
	struct UIcarusMapIconComponent* ParentIcon; 
	struct FLinearColor SearchAreaColor; 
	struct FMapIconsRowHandle MapIcon; 

	void AttemptInitialise(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void AddSearchArea(struct FMapSearchAreaRowHandle SearchArea, int32_t Radius); // (BlueprintCallable|BlueprintEvent)
	void RemoveSearchArea(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BPQC_SearchArea(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


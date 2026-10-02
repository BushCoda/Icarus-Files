// WidgetBlueprintGeneratedClass CF_TeleportToProspect.CF_TeleportToProspect_C
struct UCF_TeleportToProspect_C : UCF_BaseCombo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void GetTeleportLocation(struct FProspectListRowHandle RowHandle, struct FVector& Location, bool& FoundValidLocation); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetValidProspectStarts(struct TArray<struct FProspectListRowHandle>& ProspectRowHandles); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnConstruction(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Execute(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_CF_TeleportToProspect(int32_t EntryPoint); // (Final|UbergraphFunction)
};


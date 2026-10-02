// WidgetBlueprintGeneratedClass CF_SetGridLocation.CF_SetGridLocation_C
struct UCF_SetGridLocation_C : UCF_BaseGrid_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void teleport(struct FVector NewWorldLocation); // (Public|BlueprintCallable|BlueprintEvent)
	void GetTeleportLocation(struct FVector GridLocation, struct FVector& Location); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetValidProspectStarts(struct TArray<struct FProspectListRowHandle>& ProspectRowHandles); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Handle Execute(struct FString Grid, float UV_x, float UV_y); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_SetGridLocation(int32_t EntryPoint); // (Final|UbergraphFunction)
};


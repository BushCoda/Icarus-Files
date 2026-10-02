// WidgetBlueprintGeneratedClass CF_UnlockAllProspects.CF_UnlockAllProspects_C
struct UCF_UnlockAllProspects_C : UCF_BaseCombo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<struct UTalentControllerComponent*> TalentControllerClasses; 
	struct FString TalentContext; 
	struct FTalentsRowHandle UnlockTalentRow; 
	struct FTalentTreesEnum TalentTreesEnum; 

	void OnConstruction(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnTalentsSynced(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryUnlockAllProspectTalents(struct FTalentTreesEnum Enum); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetAllTalentRowHandlesOfType(struct FTalentTreesEnum TalentTreeEnum, struct TArray<struct FTalentsRowHandle>& Rows); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindTalentModelData(struct FTalentsRowHandle TalentRow, bool& Found, struct FTalentModelData& TalentModelData); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void HandleExecute(struct UUserWidget* Widget, int32_t Amount); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_UnlockAllProspects(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


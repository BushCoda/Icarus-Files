// WidgetBlueprintGeneratedClass UMG_ProspectObjectiveList.UMG_ProspectObjectiveList_C
struct UUMG_ProspectObjectiveList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* ObjectivesList; 
	struct FFactionMissionsRowHandle Faction Mission; 

	void InitObjectiveList(struct FFactionMissionsRowHandle FactionMission); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ProspectObjectiveList(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


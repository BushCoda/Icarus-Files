// WidgetBlueprintGeneratedClass UMG_GreatHunt_ObjectiveList.UMG_GreatHunt_ObjectiveList_C
struct UUMG_GreatHunt_ObjectiveList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UVerticalBox* ObjectivesList; 
	struct FFactionMissionsRowHandle Faction Mission; 

	void InitObjectiveList(struct FFactionMissionsRowHandle FactionMission); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_GreatHunt_ObjectiveList(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


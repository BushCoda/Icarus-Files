// WidgetBlueprintGeneratedClass UMG_MissionSpecialReward_Talent.UMG_MissionSpecialReward_Talent_C
struct UUMG_MissionSpecialReward_Talent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UHorizontalBox* Unlocks; 
	struct TArray<struct FPlayerTalentModifiersRowHandle> Talent Unlocks; 
	int32_t Points; 

	void Setup(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_MissionSpecialReward_Talent(int32_t EntryPoint); // (Final|UbergraphFunction)
};


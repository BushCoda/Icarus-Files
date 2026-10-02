// WidgetBlueprintGeneratedClass CF_UnlockTalent_Base.CF_UnlockTalent_Base_C
struct UCF_UnlockTalent_Base_C : UCF_BaseComboInteger_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TArray<struct UTalentControllerComponent*> TalentControllerClasses; 
	struct FString TalentContext; 
	struct FTalentsRowHandle UnlockTalentRow; 

	void OnTalentsSynced(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void TryUnlockTalent(struct FTalentsRowHandle Talent); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool CanModifyNumber(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetAllTalentRowHandles(struct TArray<struct FTalentsRowHandle>& Rows); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void FindTalentModelData(struct FTalentsRowHandle TalentRow, bool& Found, struct FTalentModelData& TalentModelData); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Handle Execute(struct UUserWidget* Widget, int32_t Amount); // (BlueprintCallable|BlueprintEvent)
	void Handle On Item Set(struct UUserWidget* Widget); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_CF_UnlockTalent_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


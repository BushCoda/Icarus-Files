// WidgetBlueprintGeneratedClass UMG_TalentRequiredIcon.UMG_TalentRequiredIcon_C
struct UUMG_TalentRequiredIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Border_39; 
	struct UBorder* BorderBase; 
	struct UButton* Button_1; 
	struct UImage* Corner; 
	struct UImage* talentIcon; 
	struct FText Tooltip Text Field; 
	struct FString DLCURL; 
	struct FDLCPackageDataRowHandle DLCRequired; 
	bool bHandled; 

	void SetupTalentRequired(enum class ERequiredTalentType Type, bool Unlocked, struct FTalentsRowHandle Required Talent, struct TArray<struct FFlagsMultiRowHandle>& Required Flags); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BndEvt__UMG_TalentRequiredIcon_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // (BlueprintEvent)
	void DevLocked(bool DLC); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_TalentRequiredIcon(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


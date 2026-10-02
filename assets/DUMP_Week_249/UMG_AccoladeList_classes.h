// WidgetBlueprintGeneratedClass UMG_AccoladeList.UMG_AccoladeList_C
struct UUMG_AccoladeList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Angle_2; 
	struct UTextBlock* TypeText; 
	struct UUniformGridPanel* UniformGridPanel_671; 
	struct FPlayerAccoladeCategoriesRowHandle Category; 
	struct TArray<struct UUMG_PlayerAccolade_C*> AccoladeWidgets; 

	void RefreshState(); // (Public|BlueprintCallable|BlueprintEvent)
	void Init(struct FPlayerAccoladeCategoriesRowHandle Category, struct TArray<struct FAccoladesRowHandle>& Accolades); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_AccoladeList(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


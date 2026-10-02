// BlueprintGeneratedClass BP_Sign_Base.BP_Sign_Base_C
struct ABP_Sign_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetComponent* Widget_SignDisplay; 
	struct UCameraComponent* Camera; 
	struct FText Text; 
	int32_t MaxCharacters; 
	struct FLinearColor FontColor; 
	struct FItemableRowHandle IconRow; 
	bool SupportsIcons; 
	enum class ETextJustify TextJustification; 
	struct TArray<struct FLinearColor> SupportedColourOverrides; 

	struct FItemableRowHandle GetSignIconRow(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	struct FLinearColor GetSignColor(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	struct FText GetSignText(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void GetMaxCharacters(struct TArray<int32_t>& MaxCharacters); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UpdateSignWidgetText(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetSignWidgets(struct TArray<struct UUMG_Sign_Text_Display_C*>& Widgets); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void EditorDebugIcon(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_IconRow(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_FontColor(); // (BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Text(); // (BlueprintCallable|BlueprintEvent)
	void SetSignText(struct FText& Text, struct FLinearColor& Color); // (Event|Public|HasOutParms|BlueprintEvent)
	void UpdateTextRender(struct FText& Text, struct FLinearColor Color); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void SetSignIcon(struct FItemableRowHandle& IconRow); // (Event|Public|HasOutParms|BlueprintEvent)
	void UpdateIcon(struct FItemableRowHandle IconRow); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Sign_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


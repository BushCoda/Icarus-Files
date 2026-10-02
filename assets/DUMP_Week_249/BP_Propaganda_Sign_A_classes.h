// BlueprintGeneratedClass BP_Propaganda_Sign_A.BP_Propaganda_Sign_A_C
struct ABP_Propaganda_Sign_A_C : ABP_Sign_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetComponent* Widget_SignDisplay1; 

	void GetMaxCharacters(struct TArray<int32_t>& MaxCharacters); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetSignWidgets(struct TArray<struct UUMG_Sign_Text_Display_C*>& Widgets); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Propaganda_Sign_A(int32_t EntryPoint); // (Final|UbergraphFunction)
};


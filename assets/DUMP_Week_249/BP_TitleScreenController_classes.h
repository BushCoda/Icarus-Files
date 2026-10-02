// BlueprintGeneratedClass BP_TitleScreenController.BP_TitleScreenController_C
struct ABP_TitleScreenController_C : AIcarusTitlePlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_UserInterface_TitleScreen_C* UserInterface; 

	void GetUserInterface(struct UUMG_UserInterface_Base_C*& UserInterface); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_2(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Escape_K2Node_InputActionEvent_1(struct FKey Key); // (BlueprintEvent)
	void SetConnectingUI(); // (BlueprintCallable|BlueprintEvent)
	void CreateUI(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void OnEndRetryJoinServer(); // (Event|Public|BlueprintEvent)
	void OnBeginRetryJoinServer(int32_t JoinAttempt, int32_t MaxAttempts); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_TitleScreenController(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// WidgetBlueprintGeneratedClass UMG_QueueWindow.UMG_QueueWindow_C
struct UUMG_QueueWindow_C : UConfirmationPopupBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_IconTextButton_C* CancelButton; 
	struct UTextBlock* Description; 
	struct UImage* Image; 
	struct UImage* Image_2; 
	struct UImage* Image_3; 
	struct UImage* Image_97; 
	struct UTextBlock* QueueNumber; 
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; 
	struct FMulticastInlineDelegate OnAnyItemSelected; 
	struct FMulticastInlineDelegate Close; 

	void Update(int32_t QueueSize, float TimeInSeconds); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_QueueWindow(int32_t EntryPoint); // (Final|UbergraphFunction)
	void Close__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnAnyItemSelected__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


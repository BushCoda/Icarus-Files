// BlueprintGeneratedClass BP_InputCaptureComponent.BP_InputCaptureComponent_C
struct UBP_InputCaptureComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FMulticastInlineDelegate OnLookUp; 
	struct FMulticastInlineDelegate OnLookRight; 
	struct FMulticastInlineDelegate OnFire; 
	struct FMulticastInlineDelegate OnAltFire; 
	struct FMulticastInlineDelegate OnEndInputCapture; 
	struct FMulticastInlineDelegate OnBeginInputCapture; 
	struct FMulticastInlineDelegate OnMoveForward; 
	bool InputCaptureActive; 
	struct FMulticastInlineDelegate OnJump; 

	bool ShouldBlockInput(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void EndInputCapture(struct UBP_InputCaptureComponent_C* CaptureComponent); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void BeginInputCapture(struct UBP_InputCaptureComponent_C* CaptureComponent, struct AActor* Instigator); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ServerLookUp(float AxisValue); // (Net|NetServer|BlueprintCallable|BlueprintEvent)
	void ServerLookRight(float AxisValue); // (Net|NetServer|BlueprintCallable|BlueprintEvent)
	void ServerFire(bool Pressed); // (Net|NetServer|BlueprintCallable|BlueprintEvent)
	void ServerAltFire(bool Pressed); // (Net|NetServer|BlueprintCallable|BlueprintEvent)
	void ServerMoveForward(float AxisValue); // (Net|NetServer|BlueprintCallable|BlueprintEvent)
	void ServerJump(bool Pressed); // (Net|NetServer|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_InputCaptureComponent(int32_t EntryPoint); // (Final|UbergraphFunction)
	void OnJump__DelegateSignature(bool Pressed); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnMoveForward__DelegateSignature(float AxisValue); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnBeginInputCapture__DelegateSignature(struct UBP_InputCaptureComponent_C* CaptureComponent, struct AActor* Instigator); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnEndInputCapture__DelegateSignature(struct UBP_InputCaptureComponent_C* CaptureComponent); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnAltFire__DelegateSignature(bool Pressed); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnFire__DelegateSignature(bool Pressed); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnLookRight__DelegateSignature(float AxisValue); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnLookUp__DelegateSignature(float AxisValue); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


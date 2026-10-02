// BlueprintGeneratedClass BP_Operable.BP_Operable_C
struct ABP_Operable_C : ABP_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_InputCaptureComponent_C* BP_InputCaptureComponent; 
	struct FMulticastInlineDelegate OnBeginInteract; 
	struct FText InstructionsText; 

	void EndInputCapture(struct UBP_InputCaptureComponent_C* CaptureComponent); // (Public|BlueprintCallable|BlueprintEvent)
	void WorldObject_Interact(struct AActor* Instigator); // (Public|BlueprintCallable|BlueprintEvent)
	void LookX(float Scale); // (Public|BlueprintCallable|BlueprintEvent)
	void LookY(float Scale); // (Public|BlueprintCallable|BlueprintEvent)
	void PrimaryFire(bool Press); // (Public|BlueprintCallable|BlueprintEvent)
	void AltFire(bool Press); // (Public|BlueprintCallable|BlueprintEvent)
	void Jump(); // (Public|BlueprintCallable|BlueprintEvent)
	void BndEvt__BP_InputCaptureComponent_K2Node_ComponentBoundEvent_1_OnEndInputCapture__DelegateSignature(struct UBP_InputCaptureComponent_C* CaptureComponent); // (BlueprintEvent)
	void ExecuteUbergraph_BP_Operable(int32_t EntryPoint); // (Final|UbergraphFunction)
	void OnBeginInteract__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


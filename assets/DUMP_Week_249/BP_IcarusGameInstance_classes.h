// BlueprintGeneratedClass BP_IcarusGameInstance.BP_IcarusGameInstance_C
struct UBP_IcarusGameInstance_C : UIcarusGameInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FMulticastInlineDelegate RequestErrorEvent; 
	struct ULevelStreamingDynamic* LoadingScreenLevel; 
	struct UTextureRenderTarget2D* RT_LoadingScreen; 

	void UpdateSentryContext(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CreateLoadingScreenRT(); // (Public|BlueprintCallable|BlueprintEvent)
	void InputTypeApplied(enum class EInputTypeSetting Value); // (BlueprintCallable|BlueprintEvent)
	void OnSessionInviteAcceptedEvent(int32_t ControllerId, struct FBlueprintSessionResult& InviteResult); // (Event|Public|HasOutParms|BlueprintEvent)
	void ReceiveInit(); // (Event|Public|BlueprintEvent)
	void OnSessionInvite_DoNothing(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusGameInstance(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void RequestErrorEvent__DelegateSignature(struct FErrorCodesEnum ErrorCode); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


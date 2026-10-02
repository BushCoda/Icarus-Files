// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
struct AMagicLeapSharedWorldGameMode : AGameMode {
	struct FMagicLeapSharedWorldSharedData SharedWorldData; 
	struct FMulticastInlineDelegate OnNewLocalDataFromClients; 
	float PinSelectionConfidenceThreshold; 
	struct AMagicLeapSharedWorldPlayerController* ChosenOne; 

	bool SendSharedWorldDataToClients(); // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable)
	void SelectChosenOne(); // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent)
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData& NewSharedWorldData); // (BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
struct AMagicLeapSharedWorldGameState : AGameState {
	struct FMagicLeapSharedWorldSharedData SharedWorldData; 
	struct FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; 
	struct FMulticastInlineDelegate OnSharedWorldDataUpdated; 
	struct FMulticastInlineDelegate OnAlignmentTransformsUpdated; 

	void OnReplicate_SharedWorldData(); // (Final|Native|Private)
	void OnReplicate_AlignmentTransforms(); // (Final|Native|Private)
	void MagicLeapSharedWorldEvent__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	struct FTransform CalculateXRCameraRootTransform(); // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
struct AMagicLeapSharedWorldPlayerController : APlayerController {

	void ServerSetLocalWorldData(struct FMagicLeapSharedWorldLocalData LocalWorldReplicationData); // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable)
	void ServerSetAlignmentTransforms(struct FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms); // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable)
	bool IsChosenOne(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void ClientSetChosenOne(bool bChosenOne); // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable)
	void ClientMarkReadyForSendingLocalData(); // (Net|NetReliableNative|Event|Public|NetClient)
	bool CanSendLocalDataToServer(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};


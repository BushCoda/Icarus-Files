// BlueprintGeneratedClass BP_SeatBase.BP_SeatBase_C
struct ABP_SeatBase_C : ASeatBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* ExitLocators; 
	struct UStaticMeshComponent* SeatMesh; 
	struct UIcarusCameraSpringArm* IcarusCameraSpringArm; 
	struct UCameraComponent* Camera; 
	struct UHighlightableComponent* Highlightable; 
	struct UInteractableComponent* Interactable; 
	struct UAnimInstance* SeatedAnimClass_TP; 
	struct AActor* TPViewTarget; 
	struct UAnimInstance* SeatedAnimClass_FP; 
	struct FVector FPMeshOffset; 
	struct FVector FPCameraOffset; 
	struct FRotator SeatRotationFrame; 
	bool KeepRelativeControllerRotation; 
	bool InteractableEnabled; 
	bool IsThirdPerson; 
	float CameraOffsetLength; 
	struct FVector ExitLocatorOffset; 

	void GetAudioSeatType(enum class EAudioSeatType& Type); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_CameraOffsetLength(); // (BlueprintCallable|BlueprintEvent)
	void UpdatePlayerEffectsOwner(struct USceneComponent* OwnerComponent, struct AIcarusPlayerCharacter* OptionalOwningPlayer); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateSeatedControllerRotation(); // (Public|BlueprintCallable|BlueprintEvent)
	struct FRotator GetSeatedPlayerControlRotation(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void IsLocalPlayerSeated(bool& IsLocallyControlled); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void UpdateCameraPerspective(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateViewTarget(float BlendTime); // (Public|BlueprintCallable|BlueprintEvent)
	bool FindExit(struct FVector& OutExitLocation, struct FRotator& OutExitRotation); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void InpActEvt_Interact_K2Node_InputActionEvent_1(struct FKey Key); // (BlueprintEvent)
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_4(float AxisValue); // (BlueprintEvent)
	void ServerInteract(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void AttachPlayerToSeat(struct AIcarusPlayerCharacter* PlayerCharacter, struct FRotator& EnterRotation); // (Event|Public|HasOutParms|BlueprintEvent)
	void DetachPlayerFromSeat(struct AIcarusPlayerCharacter* PlayerCharacter, struct FVector& ExitLocation, struct FRotator& ExitRotation, bool bChangeSeat); // (Event|Public|HasOutParms|BlueprintEvent)
	void OnAttachedPlayerDestroyed(struct AActor* DestroyedAttachedPlayer); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void InpAxisEvt_LookRight_K2Node_InputAxisEvent_2(float AxisValue); // (BlueprintEvent)
	void OnRep_AttachedPlayer(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_SeatBase(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


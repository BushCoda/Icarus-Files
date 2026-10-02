// BlueprintGeneratedClass BP_PhotoCamera.BP_PhotoCamera_C
struct ABP_PhotoCamera_C : ACharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UPostProcessComponent* PostProcess; 
	struct UCameraComponent* Camera; 
	struct UStaticMeshComponent* FocalCube; 
	struct USpringArmComponent* SpringArm; 
	struct ABP_IcarusPlayerCharacterSurvival_C* OwnerCharacter; 
	bool KeepRelativeControllerRotation; 
	bool MaintainHeight; 
	bool LookAtPlayer; 
	struct FVector LookAtPlayerOffset; 
	struct UUMG_PhotoUI_C* PhotoCameraUI; 
	float ResolutionMultiplier; 
	float MaxDistanceToPlayer; 
	float VerticalInputAxis; 
	float SprintSpeedMultiplier; 
	float BaseCameraSpeed; 
	bool UseMaxPlayerDistance; 
	bool WereControlsVisibleBeforeHidingUI; 
	float PendingScrollInput; 

	void AddPendingScrollInput(float Input); // (Public|BlueprintCallable|BlueprintEvent)
	void ApplyPendingScrollInput(float DeltaSeconds); // (Public|BlueprintCallable|BlueprintEvent)
	void CanMoveInDirection(struct FVector InputDirection, float InputScale, bool& CanMove); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ResolutionMultiplierChanged(float Multiplier); // (Public|BlueprintCallable|BlueprintEvent)
	void LookAtPlayerChanged(bool bIsChecked); // (Public|BlueprintCallable|BlueprintEvent)
	void MaintainHeightChanged(bool bIsChecked); // (Public|BlueprintCallable|BlueprintEvent)
	void CameraLagChanged(float Value); // (Public|BlueprintCallable|BlueprintEvent)
	void CameraSpeedChanged(float Value); // (Public|BlueprintCallable|BlueprintEvent)
	void FOVChanged(float Value); // (Public|BlueprintCallable|BlueprintEvent)
	void InpActEvt_LeftAlt_K2Node_InputKeyEvent_1(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Interact_K2Node_InputActionEvent_10(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Jump_K2Node_InputActionEvent_9(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Jump_K2Node_InputActionEvent_8(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Crouch_K2Node_InputActionEvent_7(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Crouch_K2Node_InputActionEvent_6(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Sprint_K2Node_InputActionEvent_5(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Sprint_K2Node_InputActionEvent_4(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_HotbarForward_K2Node_InputActionEvent_3(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_HotbarBack_K2Node_InputActionEvent_2(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_HideUI_K2Node_InputActionEvent_1(struct FKey Key); // (BlueprintEvent)
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_4(float AxisValue); // (BlueprintEvent)
	void InpAxisEvt_LookRight_K2Node_InputAxisEvent_2(float AxisValue); // (BlueprintEvent)
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3(float AxisValue); // (BlueprintEvent)
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_5(float AxisValue); // (BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void BindToUIEvents(); // (BlueprintCallable|BlueprintEvent)
	void SettingsUpdated(struct FPostProcessSettings Settings); // (BlueprintCallable|BlueprintEvent)
	void ReceivePossessed(struct AController* NewController); // (Event|Public|BlueprintEvent)
	void ReceiveUnpossessed(struct AController* OldController); // (Event|Public|BlueprintEvent)
	void ClientPossessed(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void ClientUnpossessed(); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void SetFlySpeed(float FlySpeed); // (BlueprintCallable|BlueprintEvent)
	void ManuallyToggleControls(); // (BlueprintCallable|BlueprintEvent)
	void ServerSetFlySpeed(float FlySpeed); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_PhotoCamera(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


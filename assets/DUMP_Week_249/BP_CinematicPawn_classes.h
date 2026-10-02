// BlueprintGeneratedClass BP_CinematicPawn.BP_CinematicPawn_C
struct ABP_CinematicPawn_C : AIcarusSpectatorPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* CameraLocation; 
	struct USpringArmComponent* SpringArm; 
	struct UChildActorComponent* ChildActor; 
	float SpeedMultiplier; 
	float DepthOfFieldSpeed; 
	bool FastMoving; 
	float CurrentFOV; 
	float DefaultFOVSpeed; 
	bool IncreaseFOV; 
	bool DecreaseFOV; 
	bool LocalSpectator; 
	struct FMulticastInlineDelegate ToggleHelpScreen; 
	float MoveUpAxis; 
	bool Jumping; 
	bool Crouching; 
	float MoveSpeedPressed; 
	float TriggerMoveSpeedRate; 

	void UpdateCamera(struct FVector InLocation, struct FRotator InRotation, float InFOV, bool ForceUpdate, struct FVector& OutLocation, struct FRotator& OutRotation, float& OutFOV, bool& Return); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ChangePreset(int32_t Index); // (Public|BlueprintCallable|BlueprintEvent)
	void ResetFOV(); // (Public|BlueprintCallable|BlueprintEvent)
	void TickVisuals(); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateFlySpeed(); // (Public|BlueprintCallable|BlueprintEvent)
	void DecreaseSpeed(); // (Public|BlueprintCallable|BlueprintEvent)
	void IncreaseSpeed(); // (Public|BlueprintCallable|BlueprintEvent)
	void InpActEvt_Hotbar1_K2Node_InputActionEvent_17(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hotbar2_K2Node_InputActionEvent_16(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hotbar3_K2Node_InputActionEvent_15(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hotbar4_K2Node_InputActionEvent_14(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hotbar5_K2Node_InputActionEvent_13(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hotbar6_K2Node_InputActionEvent_12(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hotbar7_K2Node_InputActionEvent_11(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Hotbar0_K2Node_InputActionEvent_10(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_FreeLook_K2Node_InputActionEvent_9(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Jump_K2Node_InputActionEvent_8(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Jump_K2Node_InputActionEvent_7(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Crouch_K2Node_InputActionEvent_6(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Crouch_K2Node_InputActionEvent_5(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_HotbarBack_K2Node_InputActionEvent_4(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Sprint_K2Node_InputActionEvent_3(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Sprint_K2Node_InputActionEvent_2(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_10(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_9(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_8(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_7(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_6(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_5(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_HotbarForward_K2Node_InputActionEvent_1(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2(struct FKey Key); // (BlueprintEvent)
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1(struct FKey Key); // (BlueprintEvent)
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue); // (BlueprintEvent)
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue); // (BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void SERVER_MovePawn(struct FVector_NetQuantize Location); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ReceiveDestroyed(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_CinematicPawn(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ToggleHelpScreen__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


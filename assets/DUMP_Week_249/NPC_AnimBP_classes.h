// AnimBlueprintGeneratedClass NPC_AnimBP.NPC_AnimBP_C
struct UNPC_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_17; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_16; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_15; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_14; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_13; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_12; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_11; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_10; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; 
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; 
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; 
	struct FAnimNode_Inertialization AnimGraphNode_Inertialization; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; 
	struct FAnimNode_Slot AnimGraphNode_Slot_2; 
	struct FAnimNode_Slot AnimGraphNode_Slot; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; 
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; 
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; 
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; 
	struct FAnimNode_StateResult AnimGraphNode_StateResult; 
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; 
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; 
	bool __CustomProperty_IgnoreNeckMovement_EE39C32944E0D15FE807D78EA5D12ED0; 
	float __CustomProperty_AdditionalTargetHeight_EE39C32944E0D15FE807D78EA5D12ED0; 
	struct FVector __CustomProperty_LookAtTargetLocation_EE39C32944E0D15FE807D78EA5D12ED0; 
	bool __CustomProperty_DoLookAt_EE39C32944E0D15FE807D78EA5D12ED0; 
	struct AIcarusPlayerCharacter* LookAtTarget; 
	float LookAtAlpha; 
	bool NPCLookAtAllowed; 
	enum class ENPC_InjuredStates Injured State; 
	bool Stable; 
	bool Do Look At; 
	struct FVector Look at Target Location; 
	bool IgnoreNeckMovement; 
	struct UAnimSequence* OverrideAnimation; 
	bool ShouldOverrideInjuredStates; 
	struct UAnimSequence* OverrideLookAtAnimation; 
	bool HasCustomLookAtAnimation; 
	bool LookAtWithinRange; 
	float Direction; 
	struct ABP_Mission_NPC_Base_C* NPCRef; 
	float Speed; 
	bool IsSoldier; 
	bool IsADS; 
	bool IsCrouched; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void FindPlayerToLookAt(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_BlendListByBool_06F00C4247FFCA92AFF141BF24F05723(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_BlendListByBool_813C882243EE5C2DE49E35829EF98BF4(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_TransitionResult_9B0F7DED456BC3DCF5F350B7C8EEE306(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_TransitionResult_9BB1302449576D01FCD40FBB053E76EC(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_TransitionResult_AE6285EF4A6C64F7B5049A80F5553A67(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_TransitionResult_1E0F70C14F0493C513F24D911A57EB45(); // (BlueprintEvent)
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NPC_AnimBP_AnimGraphNode_TransitionResult_116E6BBA46A603A552DC76A09E5A651C(); // (BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void BlueprintBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_NPC_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


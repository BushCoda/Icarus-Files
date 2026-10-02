// ControlRigBlueprintGeneratedClass SK_NPC_LookAt_CtrlRig.SK_NPC_LookAt_CtrlRig_C
struct USK_NPC_LookAt_CtrlRig_C : UControlRig {
	struct FVector LookAtTarget; 
	bool DoLookAt; 
	struct FVector LookAtTargetLocation; 
	float LookAtDistanceBlendStart; 
	float LookAtDistanceBlendEnd; 
	float AdditionalTargetHeight; 
	float LookAtLerp; 
	float LookAtInterpSpeedWithTarget; 
	float LookAtInterpSpeedWithoutTarget; 
	float InterpSpeed; 
	bool DoLookAt_Internal; 
	bool IgnoreNeckMovement; 
};


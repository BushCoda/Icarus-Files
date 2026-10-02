// ControlRigBlueprintGeneratedClass SK_CRE_Orka_Arctic_LookAt_CtrlRig.SK_CRE_Orka_Arctic_LookAt_CtrlRig_C
struct USK_CRE_Orka_Arctic_LookAt_CtrlRig_C : UControlRig {
	bool DoLookAt; 
	struct FVector LookAtTargetLocation; 
	float LookAtDistanceBlendStart; 
	float LookAtDistanceBlendEnd; 
	float AdditionalTargetHeight; 
	float LookAtLerp; 
	float LookAtInterpSpeedWithTarget; 
	float LookAtInterpSpeedWithoutTarget; 
	float InterpSpeed; 
	struct FVector LookAtTarget; 
};


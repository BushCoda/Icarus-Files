// ControlRigBlueprintGeneratedClass SK_CRE_Buffalo_LookAt_CtrlRig.SK_CRE_Buffalo_LookAt_CtrlRig_C
struct USK_CRE_Buffalo_LookAt_CtrlRig_C : UControlRig {
	bool DoLookAt; 
	struct FVector LookAtTargetLocation; 
	float LookAtDistanceBlendStart; 
	float LookAtDistanceBlendEnd; 
	float AdditionalTargetHeight; 
	float LookAtLerp; 
	struct FVector LookAtTarget; 
	float LookAtInterpSpeedWithTarget; 
	float LookAtInterpSpeedWithoutTarget; 
	float InterpSpeed; 
};


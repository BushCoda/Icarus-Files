// ControlRigBlueprintGeneratedClass SK_CRE_Kea_LookAt_CtrlRig.SK_CRE_Kea_LookAt_CtrlRig_C
struct USK_CRE_Kea_LookAt_CtrlRig_C : UControlRig {
	struct FVector LookAtTargetLocation; 
	struct FVector OffsetTargetLocation; 
	bool DebugTarget; 
	bool DoLookAt; 
	float LookAtDistanceBlendStart; 
	float LookAtDistanceBlendEnd; 
	float AdditionalTargetHeight; 
	float InternalLookAtAlpha; 
	bool EnableTorsoLookAt; 
	struct FVector TorsoLookAtTargetLocation; 
	struct FName BodyBone; 
	struct FName HeadBone; 
	struct FName NeckBone; 
};


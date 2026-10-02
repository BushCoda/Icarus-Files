// ControlRigBlueprintGeneratedClass SK_ITM_Cart_Wood_CtrlRig.SK_ITM_Cart_Wood_CtrlRig_C
struct USK_ITM_Cart_Wood_CtrlRig_C : UControlRig {
	struct FTransform PivotTransform; 
	struct FTransform InterpolatedTransform; 
	struct FTransform DesiredWorldTransform; 
	float FloorDistanceR; 
	float FloorDistanceL; 
	float Trace_Offset; 
	struct FVector Trace_Length; 
	float HeightLerp_Speed_Inc; 
	float HeightLerp_Speed_Dec; 
	float DesiredYaw; 
	float DesiredPitch; 
	float DesiredRoll; 
};


// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkBase
struct FRigUnit_LiveLinkBase : FRigUnit {
};

// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameTransform
struct FRigUnit_LiveLinkEvaluteFrameTransform : FRigUnit_LiveLinkBase {
	struct FName SubjectName; 
	bool bDrawDebug; 
	struct FLinearColor DebugColor; 
	struct FTransform DebugDrawOffset; 
	struct FTransform Transform; 
};

// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkGetParameterValueByName
struct FRigUnit_LiveLinkGetParameterValueByName : FRigUnit_LiveLinkBase {
	struct FSubjectFrameHandle SubjectFrame; 
	struct FName ParameterName; 
	float Value; 
};

// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkGetTransformByName
struct FRigUnit_LiveLinkGetTransformByName : FRigUnit_LiveLinkBase {
	struct FSubjectFrameHandle SubjectFrame; 
	struct FName TransformName; 
	enum class EBoneGetterSetterMode Space; 
	struct FTransform Transform; 
};

// ScriptStruct LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameAnimation
struct FRigUnit_LiveLinkEvaluteFrameAnimation : FRigUnit_LiveLinkBase {
	struct FName SubjectName; 
	bool bDrawDebug; 
	struct FLinearColor DebugColor; 
	struct FTransform DebugDrawOffset; 
	struct FSubjectFrameHandle SubjectFrame; 
};


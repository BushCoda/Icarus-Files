// Enum DragonIKPlugin.EIK_Type_Plugin
enum class EIK_Type_Plugin : uint8 {
	ENUM_Two_Bone_Ik = 0,
	ENUM_Single_Bone_Ik = 1,
	ENUM_MAX = 2
};

// Enum DragonIKPlugin.ESolverComplexityPluginEnum
enum class ESolverComplexityPluginEnum : uint8 {
	VE_Simple = 0,
	VE_Complex = 1,
	VE_MAX = 2
};

// Enum DragonIKPlugin.ERefPosePluginEnum
enum class ERefPosePluginEnum : uint8 {
	VE_Animated = 0,
	VE_Rest = 1,
	VE_MAX = 2
};

// Enum DragonIKPlugin.EInterpoRotation_Type_Plugin
enum class EInterpoRotation_Type_Plugin : uint8 {
	ENUM_DivisiveRot_Interp = 0,
	ENUM_LegacyRot_Interp = 1,
	ENUM_MAX = 2
};

// Enum DragonIKPlugin.EInterpoLocation_Type_Plugin
enum class EInterpoLocation_Type_Plugin : uint8 {
	ENUM_DivisiveLoc_Interp = 0,
	ENUM_LegacyLoc_Interp = 1,
	ENUM_MAX = 2
};

// Enum DragonIKPlugin.EIKTrace_Type_Plugin
enum class EIKTrace_Type_Plugin : uint8 {
	ENUM_LineTrace_Type = 0,
	ENUM_SphereTrace_Type = 1,
	ENUM_BoxTrace_Type = 2,
	ENUM_MAX = 3
};

// Enum DragonIKPlugin.ERotation_Type_DragonIK
enum class ERotation_Type_DragonIK : uint8 {
	ENUM_AdditiveRotation = 0,
	ENUM_ReplaceRotation = 1,
	ENUM_MAX = 2
};

// Enum DragonIKPlugin.EInputTransformSpace_DragonIK
enum class EInputTransformSpace_DragonIK : uint8 {
	ENUM_WorldSpaceSystem = 0,
	ENUM_ComponentSpaceSystem = 1,
	ENUM_MAX = 2
};

// Enum DragonIKPlugin.EPole_System_DragonIK
enum class EPole_System_DragonIK : uint8 {
	ENUM_SinglePoleSystem = 0,
	ENUM_NSEWPoleSystem = 1,
	ENUM_MAX = 2
};

// Enum DragonIKPlugin.ETwist_Type_DragonIK
enum class ETwist_Type_DragonIK : uint8 {
	ENUM_PoseAxisTwist = 0,
	ENUM_UpAxisTwist = 1,
	ENUM_MAX = 2
};

// ScriptStruct DragonIKPlugin.AnimNode_DragonControlBase
struct FAnimNode_DragonControlBase : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; 
	int32_t LODThreshold; 
	float ActualAlpha; 
	enum class EAnimAlphaInputType AlphaInputType; 
	bool bAlphaBoolEnabled; 
	float Alpha; 
	struct FInputScaleBias AlphaScaleBias; 
	struct FInputAlphaBoolBlend AlphaBoolBlend; 
	struct FName AlphaCurveName; 
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; 
};

// ScriptStruct DragonIKPlugin.AnimNode_DragonAimSolver
struct FAnimNode_DragonAimSolver : FAnimNode_DragonControlBase {
	struct FBoneReference EndSplineBone; 
	struct FBoneReference StartSplineBone; 
	struct FTransform LookAtLocation; 
	struct FDragonData_MultiInput dragon_input_data; 
	struct TArray<struct FDragonData_ArmsData> Aiming_Hand_Limbs; 
	struct FDragonData_Overrided_Location_Data Arm_TargetLocation_Overrides; 
	bool Use_Separate_Targets; 
	bool Override_Hand_Rotation; 
	bool bAllowHandStretching; 
	bool reach_instead; 
	bool Aggregate_Hand_Body; 
	bool Let_Arm_Twist_With_Hand; 
	enum class EPole_System_DragonIK pole_system_input; 
	enum class ETwist_Type_DragonIK arm_twist_axis; 
	enum class ERotation_Type_DragonIK hand_rotation_method; 
	bool Override_Head_Rotation; 
	bool Enable_Hand_Interpolation; 
	float Hand_Interpolation_Speed; 
	struct FDragonData_CustomArmLengths custom_arm_lengths; 
	enum class EInputTransformSpace_DragonIK arm_transform_space; 
	int32_t Main_Arm_Index; 
	float Lookat_Radius; 
	struct FRotator Inner_Body_Clamp; 
	float Lookat_Clamp; 
	float Limbs_Clamp; 
	float Downward_Dip_Multiplier; 
	float Inverted_Dip_Multiplier; 
	float Vertical_Dip_Treshold; 
	float Side_Move_Multiplier; 
	float Side_Down_Multiplier; 
	float Up_Rot_Clamp; 
	struct FVector2D Verticle_Range_Angles; 
	struct FVector2D Horizontal_Range_Angles; 
	struct FRuntimeFloatCurve Look_Bending_Curve; 
	struct FRuntimeFloatCurve Look_Multiplier_Curve; 
	enum class EInputTransformSpace_DragonIK look_transform_space; 
	bool Lock_Legs; 
	bool ignore_elbow_modification; 
	bool ignore_separate_hand_solving; 
	bool Use_Natural_Method; 
	bool Head_Use_Separate_Clamp; 
	bool Is_Head_Accurate; 
	bool automatic_leg_make; 
	bool enable_solver; 
	bool Work_Outside_PIE; 
	bool Adaptive_Terrain_Tail; 
	enum class ETraceTypeQuery Trace_Channel; 
	float Trace_Up_Height; 
	float Trace_Down_Height; 
	enum class EInterpoLocation_Type_Plugin loc_interp_type; 
	bool Enable_Interpolation; 
	float Interpolation_Speed; 
	float Toggle_Interpolation_Speed; 
	struct FVector LookAt_Axis; 
	struct FVector Upward_Axis; 
	struct FVector TargetOffset; 
	bool Use_Reference_Forward_Axis; 
	struct FVector Reference_Constant_Forward_Axis; 
	struct FTransform Debug_LookAtLocation; 
	struct TArray<struct FTransform> Debug_Hand_Locations; 
};

// ScriptStruct DragonIKPlugin.DragonData_CustomArmLengths
struct FDragonData_CustomArmLengths {
	struct TArray<struct FDragonData_ArmSizeStruct> CustomArmSizeArray; 
};

// ScriptStruct DragonIKPlugin.DragonData_ArmSizeStruct
struct FDragonData_ArmSizeStruct {
	bool Use_Custom_Arm_Sizes; 
	float custom_upperArm_length; 
	float custom_lowerArm_length; 
};

// ScriptStruct DragonIKPlugin.DragonData_Overrided_Location_Data
struct FDragonData_Overrided_Location_Data {
	struct TArray<struct FDragonData_SingleArmElement> Arm_TargetLocation_Overrides; 
};

// ScriptStruct DragonIKPlugin.DragonData_SingleArmElement
struct FDragonData_SingleArmElement {
	struct FTransform Overrided_Arm_Transform; 
	float Arm_Alpha; 
	struct FRotator rotation_offset; 
};

// ScriptStruct DragonIKPlugin.DragonData_ArmsData
struct FDragonData_ArmsData {
	struct FBoneReference Clavicle_Bone; 
	struct FBoneReference Shoulder_Bone_Name; 
	struct FBoneReference Elbow_Bone_Name; 
	struct FBoneReference Hand_Bone_Name; 
	bool is_this_right_hand; 
	bool invert_lower_twist; 
	bool invert_upper_twist; 
	struct FVector Local_Direction_Axis; 
	struct FVector Arm_Aiming_Offset; 
	bool accurate_hand_rotation; 
	bool relative_axis; 
	float Maximum_Extension; 
	float Minimum_Extension; 
	float Max_Stretch_Ratio; 
	float Stretch_lower_arm_Priorty; 
	struct FVector Elbow_Pole_Offset; 
	struct FVector North_Pole_Offset; 
	struct FVector South_Pole_Offset; 
	struct FVector West_Pole_Offset; 
	struct FVector East_Pole_Offset; 
	bool override_limits; 
	struct FVector2D Max_Arm_H_Angle; 
	struct FVector2D Max_Arm_V_Angle; 
	struct FVector2D Inner_Clavicle_Side_Limit; 
	struct FVector2D Inner_Clavicle_Vertical_Limit; 
	struct FVector2D Outer_Clavicle_Side_Limit; 
	struct FVector2D Outer_Clavicle_Vertical_Limit; 
	struct FVector2D Shoulder_Inner_Clamp; 
	struct FVector2D Shoulder_Outer_Clamp; 
	struct FVector2D ForeArm_Angle_Limit; 
	float Twist_Offset_Reverse; 
};

// ScriptStruct DragonIKPlugin.DragonData_MultiInput
struct FDragonData_MultiInput {
	struct FName Start_Spine; 
	struct FName Pelvis; 
	struct TArray<struct FDragonData_FootData> FeetBones; 
};

// ScriptStruct DragonIKPlugin.DragonData_FootData
struct FDragonData_FootData {
	struct FName Feet_Bone_Name; 
	struct FName Knee_Bone_Name; 
	struct FName Thigh_Bone_Name; 
	struct FRotator Feet_Rotation_Offset; 
	bool Fixed_Pole; 
	struct FVector Knee_Direction_Offset; 
	struct FVector Feet_Trace_Offset; 
	float Front_Trace_Point_Spacing; 
	float Side_Traces_Spacing; 
	float Feet_Rotation_Limit; 
	bool Fixed_Foot_Height; 
	float Feet_Heights; 
	float Feet_Alpha; 
	float Min_Feet_Extension; 
	float Max_Feet_Extension; 
	float Feet_Slope_Offset_Multiplier; 
	float Max_Feet_Lift; 
	float Overrided_Trace_Radius; 
	struct TArray<struct FDragonData_FingerData> Finger_Array; 
};

// ScriptStruct DragonIKPlugin.DragonData_FingerData
struct FDragonData_FingerData {
	struct FName Finger_Bone_Name; 
	float Trace_Scale; 
	struct FVector Trace_Offset; 
	bool Is_Finger_Backward; 
};

// ScriptStruct DragonIKPlugin.BoneDragonSocketTarget
struct FBoneDragonSocketTarget {
	bool bUseSocket; 
	struct FBoneReference BoneReference; 
	struct FSocketDragonReference SocketReference; 
};

// ScriptStruct DragonIKPlugin.SocketDragonReference
struct FSocketDragonReference {
	struct FName SocketName; 
};

// ScriptStruct DragonIKPlugin.AnimNode_DragonFabrikSolver
struct FAnimNode_DragonFabrikSolver : FAnimNode_DragonControlBase {
	struct FBoneReference StartSplineBone; 
	struct FBoneReference EndSplineBone; 
	float Precision; 
	float MaxIterations; 
	struct FTransform Target_Transform; 
};

// ScriptStruct DragonIKPlugin.AnimNode_DragonFeetSolver
struct FAnimNode_DragonFeetSolver : FAnimNode_DragonControlBase {
	struct FDragonData_MultiInput dragon_input_data; 
	enum class EIK_Type_Plugin ik_type; 
	enum class EIKTrace_Type_Plugin trace_type; 
	float Trace_Radius; 
	bool Override_Curve_Velocity; 
	float custom_velocity; 
	enum class EInterpoLocation_Type_Plugin loc_interp_type; 
	enum class EInterpoRotation_Type_Plugin rot_interp_type; 
	float virtual_scale; 
	bool automatic_leg_make; 
	bool Use_OptionalRef_Feet_As_Ref; 
	bool enable_solver; 
	bool Work_Outside_PIE; 
	struct FComponentSpacePoseLink OptionalRefPose; 
	bool interpolate_only_z; 
	float shift_speed; 
	float Location_Lerp_Speed; 
	float feet_rotation_speed; 
	bool ignore_shift_speed; 
	bool Ignore_Lerping; 
	bool Ignore_Location_Lerping; 
	struct FRuntimeFloatCurve Interpolation_Velocity_Curve; 
	bool Enable_Complex_Rotation_Method; 
	struct FRuntimeFloatCurve ComplexSimpleFoot_Velocity_Curve; 
	enum class ETraceTypeQuery Trace_Channel; 
	enum class ETraceTypeQuery Anti_Trace_Channel; 
	float FPS_Lerp_Treshold; 
	float line_trace_upper_height; 
	float line_trace_down_height; 
	struct FRuntimeFloatCurve Trace_Down_Multiplier_Curve; 
	bool Use_Anti_Channel; 
	bool Should_Rotate_Feet; 
	bool show_trace_in_game; 
	bool Enable_Pitch; 
	bool Enable_Roll; 
	struct FVector character_direction_vector_CS; 
	struct FVector character_forward_direction_vector_CS; 
	struct FVector poles_forward_direction_vector_CS; 
	bool Use_Four_Point_Feets; 
	bool Enable_Foot_Lift_Limit; 
	bool Affect_Toes_Always; 
	struct FRuntimeFloatCurve Finger_Alpha_Velocity_Curve; 
	float Max_Limb_Radius; 
	bool sticky_feet_mode; 
	float sticky_feet_on_speed; 
	float sticky_feet_off_speed; 
	float Sticky_Feet_Range; 
	struct FDragonData_StickyFeetStruct sticky_feets_data; 
	bool sticky_floor_detection; 
	float floor_value; 
	bool Auto_Sticky_Toggle; 
	struct FDragonData_StickySocketStruct sticky_sockets_data; 
	float Foot_01_Height_Offset; 
	float Foot_02_Height_Offset; 
	float Foot_03_Height_Offset; 
	float Foot_04_Height_Offset; 
};

// ScriptStruct DragonIKPlugin.DragonData_StickySocketStruct
struct FDragonData_StickySocketStruct {
	struct TArray<struct FBoneSocketTarget> sticky_socket_array; 
};

// ScriptStruct DragonIKPlugin.DragonData_StickyFeetStruct
struct FDragonData_StickyFeetStruct {
	struct TArray<bool> sticky_feet_array; 
};

// ScriptStruct DragonIKPlugin.AnimNode_DragonSpineSolver
struct FAnimNode_DragonSpineSolver : FAnimNode_Base {
	struct FDragonData_MultiInput dragon_input_data; 
	float Precision; 
	float MaximumPitch; 
	float MinimumPitch; 
	float MaximumRoll; 
	float MinimumRoll; 
	int32_t MaxIterations; 
	struct FComponentSpacePoseLink ComponentPose; 
	float Alpha; 
	float shift_speed; 
	enum class ETraceTypeQuery Trace_Channel; 
	enum class ETraceTypeQuery Anti_Trace_Channel; 
	enum class EIKTrace_Type_Plugin trace_type; 
	float Trace_Radius; 
	bool Override_Curve_Velocity; 
	float custom_velocity; 
	int32_t LODThreshold; 
	bool Rotate_Around_Translate; 
	enum class ESolverComplexityPluginEnum complexity_type; 
	bool Ignore_Lerping; 
	float ActualAlpha; 
	float virtual_scale; 
	float line_trace_downward_height; 
	float line_trace_upper_height; 
	bool Use_Anti_Channel; 
	bool stabilize_pelvis_legs; 
	float Pelvis_UpSlopeStabilization_Alpha; 
	float Pelvis_DownSlopeStabilization_Alpha; 
	bool stabilize_chest_legs; 
	float Chest_UpSlopeStabilization_Alpha; 
	float Chest_DownslopeStabilization_Alpha; 
	struct FBoneReference Stabilization_Head_Bone; 
	struct FBoneReference Stabilization_Tail_Bone; 
	bool Use_Ducking_Feature; 
	enum class ETraceTypeQuery Ducking_Trace_Channel; 
	float Ducking_Limit; 
	float Pelvis_Crouch_Height; 
	float Pelvis_Crouch_Rotation_Intensity; 
	struct FVector Duck_Pelvis_Trace_Offset; 
	float Chest_Crouch_Height; 
	float Chest_Crouch_Rotation_Intensity; 
	struct FVector Duck_Chest_Trace_Offset; 
	float Slanted_Height_Up_Offset; 
	float Slanted_Height_Down_Offset; 
	float dip_multiplier; 
	float pelvis_adaptive_gravity; 
	bool reverse_fabrik; 
	bool Calculation_To_RefPose; 
	float Chest_Slanted_Height_Up_Offset; 
	float Chest_Slanted_Height_Down_Offset; 
	float chest_side_dip_multiplier; 
	float chest_adaptive_gravity; 
	float Chest_Base_Offset; 
	float Pelvis_Base_Offset; 
	float virtual_leg_width; 
	float Maximum_Dip_Height; 
	struct FRuntimeFloatCurve Pelvis_Height_Multiplier_Curve; 
	float Maximum_Dip_Height_Chest; 
	struct FRuntimeFloatCurve Chest_Height_Multiplier_Curve; 
	float rotation_power_between; 
	bool Use_Automatic_Fabrik_Selection; 
	float Trace_Lerp_Speed; 
	float Location_Lerp_Speed; 
	float Rotation_Lerp_Speed; 
	struct FRuntimeFloatCurve Interpolation_Multiplier_Curve; 
	float Chest_Influence_Alpha; 
	float Pelvis_ForwardRotation_Intensity; 
	float Pelvis_UpwardForwardRotation_Intensity; 
	float Body_Rotation_Intensity; 
	float Pelvis_Rotation_Offset; 
	float Chest_ForwardRotation_Intensity; 
	float Chest_UpwardForwardRotation_Intensity; 
	float Chest_SidewardRotation_Intensity; 
	float Chest_Rotation_Offset; 
	bool Full_Extended_Spine; 
	float max_extension_ratio; 
	float min_extension_ratio; 
	float extension_switch_speed; 
	bool enable_solver; 
	bool Work_Outside_PIE; 
	bool Use_Fake_Chest_Rotations; 
	bool Use_Fake_Pelvis_Rotations; 
	bool Force_Activation; 
	bool accurate_feet_placement; 
	struct FRuntimeFloatCurve Accurate_Foot_Curve; 
	bool use_crosshair_trace_also_for_fail_distance; 
	bool Only_Root_Solve; 
	bool Ignore_Chest_Solve; 
	struct FVector Overall_PostSolved_Offset; 
	struct FVector character_direction_vector_CS; 
	struct FVector Forward_Direction_Vector; 
	bool flip_forward_and_right; 
	enum class ERefPosePluginEnum SolverReferencePose; 
	bool Spine_Feet_Connect; 
	float Snake_Joint_Speed; 
	bool Enable_Snake_Interpolation; 
	bool is_snake; 
	bool Ignore_End_Points; 
	float Maximum_Feet_Distance; 
	float Minimum_Feet_Distance; 
	bool DisplayLineTrace; 
};

// ScriptStruct DragonIKPlugin.AnimNode_DragonWarpSolver
struct FAnimNode_DragonWarpSolver : FAnimNode_DragonControlBase {
	struct TArray<struct FDragonData_WarpLimbsData> dragon_limb_input; 
	struct FName Hip_Bone_Name; 
	bool enable_solver; 
	struct FVector character_direction_vector_CS; 
	struct FVector forward_vector_CS; 
	float speed_warping_const; 
	bool enable_slope_warp; 
	float automatic_speed_warping_const; 
	float slope_detection_tolerance; 
	float Warp_Slope_Interpolation; 
	enum class ETraceTypeQuery Trace_Channel; 
	float line_trace_downward_height; 
	float line_trace_upper_height; 
	float virtual_leg_width; 
	float virtual_scale; 
	bool DisplayLineTrace; 
	float Limb_Compression_Intensity; 
	struct FRuntimeFloatCurve Limb_Lifting_Curve; 
	float Hip_Change_Intensity; 
	struct FRuntimeFloatCurve Hip_Lifting_Curve; 
};

// ScriptStruct DragonIKPlugin.DragonData_WarpLimbsData
struct FDragonData_WarpLimbsData {
	struct FName Foot_Bone_Name; 
	struct FName Knee_Bone_Name; 
	struct FName Thigh_Bone_Name; 
	float Warp_Lift_Reference_Location; 
	float Warp_Param_Adder; 
	struct FVector2D Min_Max_Warp; 
	float max_extra_compression_height; 
};

// ScriptStruct DragonIKPlugin.CCDIK_Modified_ChainLink
struct FCCDIK_Modified_ChainLink {
};


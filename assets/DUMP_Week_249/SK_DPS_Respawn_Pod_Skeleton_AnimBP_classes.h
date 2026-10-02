// AnimBlueprintGeneratedClass SK_DPS_Respawn_Pod_Skeleton_AnimBP.SK_DPS_Respawn_Pod_Skeleton_AnimBP_C
struct USK_DPS_Respawn_Pod_Skeleton_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	float __CustomProperty_DoorOpenPosition_4E7C5A6944FCDF17C664BBB7240CF69E; 
	struct FVector External Force; 
	float DoorOpenValue; 
	bool Landed; 
	bool IsOpen; 
	float DoorPitchCached; 
	struct UFMODAudioComponent* SFXDoorEvent; 
	struct FName DoorAudioAttachPoint; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void OnDoorOpenComplete(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_SK_DPS_Respawn_Pod_Skeleton_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction)
};


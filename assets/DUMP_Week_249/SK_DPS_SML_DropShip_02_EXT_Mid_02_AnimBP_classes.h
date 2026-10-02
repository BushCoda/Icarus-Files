// AnimBlueprintGeneratedClass SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP.SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP_C
struct USK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FAnimNode_Root AnimGraphNode_Root; 
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; 
	float __CustomProperty_DoorSpeed_7967AE9249945CF5A2907BA25311E72E; 
	bool __CustomProperty_DoorOpen?_7967AE9249945CF5A2907BA25311E72E; 
	bool IsOpen; 
	float Door Speed; 
	struct FName DoorAudioAttachPoint; 
	struct UFMODAudioComponent* SFXDoorEvent; 
	float DoorPitchCached; 

	void AnimGraph(struct FPoseLink& AnimGraph); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void BlueprintUpdateAnimation(float DeltaTimeX); // (Event|Public|BlueprintEvent)
	void StartDoorAudioUpdateTimer(); // (BlueprintCallable|BlueprintEvent)
	void UpdateDoorAudio(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_SK_DPS_SML_DropShip_02_EXT_Mid_02_AnimBP(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


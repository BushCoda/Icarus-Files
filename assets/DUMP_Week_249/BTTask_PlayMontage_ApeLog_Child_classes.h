// BlueprintGeneratedClass BTTask_PlayMontage_ApeLog_Child.BTTask_PlayMontage_ApeLog_Child_C
struct UBTTask_PlayMontage_ApeLog_Child_C : UBTTask_PlayMontage_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FName ShowMeshNotify; 
	struct FName RotateMeshNotify; 

	void OnMontageNotifyBegin(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BTTask_PlayMontage_ApeLog_Child(int32_t EntryPoint); // (Final|UbergraphFunction)
};


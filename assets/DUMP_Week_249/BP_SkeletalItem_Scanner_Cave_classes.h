// BlueprintGeneratedClass BP_SkeletalItem_Scanner_Cave.BP_SkeletalItem_Scanner_Cave_C
struct ABP_SkeletalItem_Scanner_Cave_C : ABP_SkeletalItem_Scanner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UFMODAudioComponent* FMODAudio; 
	struct UMaterialInstanceDynamic* LightMaterial; 

	void UpdateLightMaterial(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void PlayAudioBeep(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void PlayToggleAudio(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Scanner_Cave(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// BlueprintGeneratedClass BP_SkeletalItem_Meta_Fishfinder.BP_SkeletalItem_Meta_Fishfinder_C
struct ABP_SkeletalItem_Meta_Fishfinder_C : ABP_SkeletalItem_Scanner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetComponent* ScreenWidget; 

	void Play Fish Finder Finish Sound(); // (Public|BlueprintCallable|BlueprintEvent)
	void Play Sonar Sound(); // (Public|BlueprintCallable|BlueprintEvent)
	struct UWidgetComponent* GetScreenWidget(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Meta_Fishfinder(int32_t EntryPoint); // (Final|UbergraphFunction)
};


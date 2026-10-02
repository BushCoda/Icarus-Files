// BlueprintGeneratedClass BP_TrapDoor_Thatch.BP_TrapDoor_Thatch_C
struct ABP_TrapDoor_Thatch_C : ABP_Door_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_BLD_TrapDoor_Thatch; 
	struct UBP_WeatherAudioComponent_C* BP_WeatherAudioComponent; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_TrapDoor_Thatch(int32_t EntryPoint); // (Final|UbergraphFunction)
};


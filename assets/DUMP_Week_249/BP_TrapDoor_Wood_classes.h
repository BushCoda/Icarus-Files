// BlueprintGeneratedClass BP_TrapDoor_Wood.BP_TrapDoor_Wood_C
struct ABP_TrapDoor_Wood_C : ABP_Door_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_BLD_TrapDoorHatch_Wood; 
	struct UBP_WeatherAudioComponent_C* BP_WeatherAudioComponent; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_TrapDoor_Wood(int32_t EntryPoint); // (Final|UbergraphFunction)
};


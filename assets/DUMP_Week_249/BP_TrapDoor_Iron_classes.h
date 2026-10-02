// BlueprintGeneratedClass BP_TrapDoor_Iron.BP_TrapDoor_Iron_C
struct ABP_TrapDoor_Iron_C : ABP_Door_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_BLD_TrapDoor_Hatch_Iron; 
	struct UBP_WeatherAudioComponent_C* BP_WeatherAudioComponent; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_TrapDoor_Iron(int32_t EntryPoint); // (Final|UbergraphFunction)
};


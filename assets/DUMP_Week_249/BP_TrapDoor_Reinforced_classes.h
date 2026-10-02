// BlueprintGeneratedClass BP_TrapDoor_Reinforced.BP_TrapDoor_Reinforced_C
struct ABP_TrapDoor_Reinforced_C : ABP_Door_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_BLD_Floor_TrapDoorHatch_Reinforced; 
	struct UBP_WeatherAudioComponent_C* BP_WeatherAudioComponent; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_TrapDoor_Reinforced(int32_t EntryPoint); // (Final|UbergraphFunction)
};


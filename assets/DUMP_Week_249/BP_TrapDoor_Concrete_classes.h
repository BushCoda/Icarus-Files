// BlueprintGeneratedClass BP_TrapDoor_Concrete.BP_TrapDoor_Concrete_C
struct ABP_TrapDoor_Concrete_C : ABP_Door_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_BLD_TrapDoorHatch_Concrete; 
	struct UBP_WeatherAudioComponent_C* BP_WeatherAudioComponent; 

	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_TrapDoor_Concrete(int32_t EntryPoint); // (Final|UbergraphFunction)
};


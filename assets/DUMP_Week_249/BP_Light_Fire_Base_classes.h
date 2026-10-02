// BlueprintGeneratedClass BP_Light_Fire_Base.BP_Light_Fire_Base_C
struct ABP_Light_Fire_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* Scene_Niagara; 
	struct USceneComponent* Scene_Lights; 
	struct UFMODAudioComponent* FMODAudio; 
	struct UCapsuleComponent* FireSettingCapsule; 
	struct UInventory* FuelInventory; 
	struct UFMODEvent* FMODEvent_Stop; 

	void GeneratorStateUpdate(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_Light_Fire_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


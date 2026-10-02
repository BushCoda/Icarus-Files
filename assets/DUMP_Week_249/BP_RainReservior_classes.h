// BlueprintGeneratedClass BP_RainReservior.BP_RainReservior_C
struct ABP_RainReservior_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UBP_WeatherAudioComponent_Deployable_C* BP_WeatherAudioComponent_Deployable; 
	int32_t UnitsFilledPerUpdate; 
	int32_t Array Index; 

	void Sand(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Ash(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void InventoryItemAdded(struct UInventory* Inventory, int32_t Location); // (BlueprintCallable|BlueprintEvent)
	void FillContainers(); // (BlueprintCallable|BlueprintEvent)
	void AddIce(); // (BlueprintCallable|BlueprintEvent)
	void Snow(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Rain(int32_t Millilitres); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_RainReservior(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


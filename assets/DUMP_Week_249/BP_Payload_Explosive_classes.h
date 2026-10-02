// BlueprintGeneratedClass BP_Payload_Explosive.BP_Payload_Explosive_C
struct ABP_Payload_Explosive_C : ABP_Payload_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float InnerRadius; 
	float DefaultOuterRadius; 
	float DefaultDamage; 

	void GetDamageStats(float& OuterRadius, float& Damage); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SpawningComplete(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Payload_Explosive(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


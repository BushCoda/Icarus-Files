// BlueprintGeneratedClass BP_Fireplace_Chimney_Cap.BP_Fireplace_Chimney_Cap_C
struct ABP_Fireplace_Chimney_Cap_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_Smoke_FX; 
	struct USceneComponent* Scene_Niagara; 

	void UpdateEffects(bool Active); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void InitialiseAttachment(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Fireplace_Chimney_Cap(int32_t EntryPoint); // (Final|UbergraphFunction)
};


// BlueprintGeneratedClass BP_Flammable_FLODActor_Tree.BP_Flammable_FLODActor_Tree_C
struct UBP_Flammable_FLODActor_Tree_C : UFlammableActorFLOD {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ATreeBase* OwnerTree; 

	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void OnUpdateInstanceVisuals(float FireSpread, float FireTemperature); // (Event|Protected|BlueprintEvent)
	void OnFlammableInstanceAttached(struct UFlammableInstance* Instance); // (Event|Public|BlueprintEvent)
	void OnFlammableInstanceDetached(struct UFlammableInstance* Instance); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Flammable_FLODActor_Tree(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


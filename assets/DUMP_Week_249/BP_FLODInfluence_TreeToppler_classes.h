// BlueprintGeneratedClass BP_FLODInfluence_TreeToppler.BP_FLODInfluence_TreeToppler_C
struct UBP_FLODInfluence_TreeToppler_C : UFLODInfluenceComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct TMap<struct FFLODInstanceID, struct FTreeToppleInfo> PendingToppleInfo; 

	void ToppleTree(struct ATreeBase* Tree, struct FTreeToppleInfo ToppleInfo); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdatePendingTopple(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void AddPendingTreeTopple(struct FFLODInstanceID Instance, struct FTreeToppleInfo ToppleInfo); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateActiveInfluences(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_BP_FLODInfluence_TreeToppler(int32_t EntryPoint); // (Final|UbergraphFunction)
};


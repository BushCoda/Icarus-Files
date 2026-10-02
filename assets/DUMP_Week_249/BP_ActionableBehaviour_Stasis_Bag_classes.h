// BlueprintGeneratedClass BP_ActionableBehaviour_Stasis_Bag.BP_ActionableBehaviour_Stasis_Bag_C
struct UBP_ActionableBehaviour_Stasis_Bag_C : UBP_ActionableBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	float HitTraceDistance; 
	struct AIcarusPlayerCharacter* OwningPlayer; 
	struct TMap<struct AActor*, struct FItemTemplateRowHandle> NPC; 
	struct FItemTemplateRowHandle ItemToPickup; 

	bool GetItem(struct UObject* Object, struct FItemTemplateRowHandle& Value); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	enum class EViewTraceResultPriority BP_ActionableBehaviour_Scanner_Medical_AutoGenFunc(struct FViewTraceResult& Result); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_Stasis_Bag(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


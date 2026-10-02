// WidgetBlueprintGeneratedClass UMG_ProcessorBase.UMG_ProcessorBase_C
struct UUMG_ProcessorBase_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ABP_DummyObject_C* DummyObject; 
	struct UBoxComponent* DropCollider; 
	struct ABP_HolographicObject_C* CachedPreview; 

	void UpdateHolographicHover(struct FItemData Item, enum class ProcessorPreview State); // (Public|BlueprintCallable|BlueprintEvent)
	struct FEventReply 3DSpace_MouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct FEventReply 3DSpace_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void CloseUI(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_ProcessorBase(int32_t EntryPoint); // (Final|UbergraphFunction)
};


// BlueprintGeneratedClass BP_TreeBase_Snow.BP_TreeBase_Snow_C
struct ABP_TreeBase_Snow_C : ABP_TreeBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NiagaraRef; 

	void MULTI_TreePrimitiveDetached(struct FVector DetachedPrimitiveOffset, enum class ETreePrimitiveType DetachedPrimitiveType, float DetachedPrimitiveMass, struct FTreePrimitiveDetachContext DetachContext, bool ShouldPlaySFX, struct FName DetachPrimitiveName); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_TreeBase_Snow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


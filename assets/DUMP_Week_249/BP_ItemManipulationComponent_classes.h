// BlueprintGeneratedClass BP_ItemManipulationComponent.BP_ItemManipulationComponent_C
struct UBP_ItemManipulationComponent_C : UItemManipulationComponent {

	enum class ECanUseItemResult CanUseItem(struct UInventory* SourceInventory, int32_t SourceLocation, struct FUsesEnum Use, struct FUseCondition UseCondition, struct AIcarusPlayerCharacter* Target); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool UseItem(struct AIcarusPlayerCharacter* Source, struct UInventory* SourceInventory, int32_t SourceLocation, struct FUsesEnum Use, struct AIcarusCharacter* Target, struct FItemData& ItemConsumed); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};


// WidgetBlueprintGeneratedClass UMG_FuelElement.UMG_FuelElement_C
struct UUMG_FuelElement_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* IconImage; 
	struct FMulticastInlineDelegate Selected; 
	struct FItemData Item; 
	struct AActor* NewLinkedActor; 
	struct FIcarusResourcesEnum ResourceType; 

	void UpdateState(enum class ProcessorPreview Selected); // (Public|BlueprintCallable|BlueprintEvent)
	void Intialise(struct FItemData NewItem, struct FIcarusResourcesEnum NewResourceType); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_FuelElement(int32_t EntryPoint); // (Final|UbergraphFunction)
	void Selected__DelegateSignature(struct UUMG_RecipeInputItem_C* SelectedRecipe); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


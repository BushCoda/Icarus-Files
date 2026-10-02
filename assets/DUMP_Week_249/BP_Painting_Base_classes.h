// BlueprintGeneratedClass BP_Painting_Base.BP_Painting_Base_C
struct ABP_Painting_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetComponent* Widget_PaintingDisplay; 
	struct UCameraComponent* Camera; 
	struct FPaintingsRowHandle PaintingRow; 

	struct FPaintingsRowHandle GetPaintingImageRow(); // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const)
	void UpdatePaintingDisplay(); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_PaintingRow(); // (BlueprintCallable|BlueprintEvent)
	void Deployable_Interact(struct AActor* Interactor); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UpdateImage(struct FPaintingsRowHandle PaintingRow); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void SetPaintingImage(struct FPaintingsRowHandle& PaintingRow); // (Event|Public|HasOutParms|BlueprintEvent)
	void ExecuteUbergraph_BP_Painting_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


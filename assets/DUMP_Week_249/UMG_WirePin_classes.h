// WidgetBlueprintGeneratedClass UMG_WirePin.UMG_WirePin_C
struct UUMG_WirePin_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Pin; 
	struct FLinearColor Unfocused Wire Colour; 

	void GetPinSize(struct FVector2D& Size); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetPinColour(struct FLinearColor InColorAndOpacity); // (BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_WirePin(int32_t EntryPoint); // (Final|UbergraphFunction)
};


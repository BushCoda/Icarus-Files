// WidgetBlueprintGeneratedClass UMG_DeviceInfo.UMG_DeviceInfo_C
struct UUMG_DeviceInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* DeviceImage; 
	struct UTextBlock* DeviceName; 
	struct USizeBox* NameBox; 
	struct FMulticastInlineDelegate Clicked; 

	void Initialise(struct FItemData Item); // (BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ShowName(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_DeviceInfo(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void Clicked__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


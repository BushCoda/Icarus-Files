// WidgetBlueprintGeneratedClass UMG_DropshipPartSmall.UMG_DropshipPartSmall_C
struct UUMG_DropshipPartSmall_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBorder* Empty; 
	struct UImage* Image; 
	struct FItemData CurrentItem; 
	struct FGameplayTagQuery Query; 
	struct UUMG_DropshipEditor_Dropship_C* EditorDropship; 

	void Initialise(struct UUMG_DropshipEditor_Dropship_C* Parent); // (Public|BlueprintCallable|BlueprintEvent)
	void UpdateState(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Update(struct FItemData Item); // (Public|BlueprintCallable|BlueprintEvent)
	void OnLoaded_6FF29948471A55576D5E19A5F0534075(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void LoadIcon(struct TSoftObjectPtr<UTexture2D> Texture); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_DropshipPartSmall(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// WidgetBlueprintGeneratedClass UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C
struct UUMG_CharacterCustomisationContainer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_BasicButton_2_C* BackButton; 
	struct UScaleBox* MainDisplayScaleBox; 
	struct UUMG_CharacterCreation_C* UMG_CharacterCreation; 
	struct ABP_PlayerPreviewManager_C* PreviewManager; 
	struct TSoftObjectPtr<UWorld> DefaultDiorama; 
	struct FCharacterCosmetics InitialCosmetics; 
	struct FText PlayerName; 

	void OnCustomisationUpdated(struct FCharacterCosmetics CharacterData); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void OnFail_97CCC08F4ACBB904FC9CD19A62C8CD71(struct FResUpdateCosmetics& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnSuccess_97CCC08F4ACBB904FC9CD19A62C8CD71(struct FResUpdateCosmetics& Response); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnCustomisationCompleted(bool Success, struct FOnlineProfileCharacter NewCharacterInfo); // (BlueprintCallable|BlueprintEvent)
	void OnCosmeticUpdateRequest(struct FReqUpdateCosmetics Request, int32_t Retries); // (BlueprintCallable|BlueprintEvent)
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // (BlueprintEvent)
	void ExecuteUbergraph_UMG_CharacterCustomisationContainer(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


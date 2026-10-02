// Class UMG.Visual
struct UVisual : UObject {
};

// Class UMG.Widget
struct UWidget : UVisual {
	struct UPanelSlot* Slot; 
	struct FDelegate bIsEnabledDelegate; 
	struct FText ToolTipText; 
	struct FDelegate ToolTipTextDelegate; 
	struct UWidget* ToolTipWidget; 
	struct FDelegate ToolTipWidgetDelegate; 
	struct FDelegate VisibilityDelegate; 
	struct FWidgetTransform RenderTransform; 
	struct FVector2D RenderTransformPivot; 
	char bIsVariable : 1; 
	char bCreatedByConstructionScript : 1; 
	char bIsEnabled : 1; 
	char bOverride_Cursor : 1; 
	struct USlateAccessibleWidgetData* AccessibleWidgetData; 
	char bIsVolatile : 1; 
	enum class EMouseCursor Cursor; 
	enum class EWidgetClipping Clipping; 
	enum class ESlateVisibility Visibility; 
	float RenderOpacity; 
	struct UWidgetNavigation* Navigation; 
	enum class EFlowDirectionPreference FlowDirectionPreference; 
	struct TArray<struct UPropertyBinding*> NativeBindings; 

	void SetVisibility(enum class ESlateVisibility InVisibility); // (Native|Public|BlueprintCallable)
	void SetUserFocus(struct APlayerController* PlayerController); // (Final|Native|Public|BlueprintCallable)
	void SetToolTipText(struct FText& InToolTipText); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetToolTip(struct UWidget* Widget); // (Final|Native|Public|BlueprintCallable)
	void SetRenderTranslation(struct FVector2D Translation); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetRenderTransformPivot(struct FVector2D Pivot); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetRenderTransformAngle(float Angle); // (Final|Native|Public|BlueprintCallable)
	void SetRenderTransform(struct FWidgetTransform InTransform); // (Final|Native|Public|BlueprintCallable)
	void SetRenderShear(struct FVector2D Shear); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetRenderScale(struct FVector2D Scale); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetRenderOpacity(float InOpacity); // (Final|Native|Public|BlueprintCallable)
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget* InWidget); // (Final|Native|Public|BlueprintCallable)
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // (Final|Native|Public|BlueprintCallable)
	void SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // (Final|Native|Public|BlueprintCallable)
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule); // (Final|Native|Public|BlueprintCallable)
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus); // (Final|Native|Public|BlueprintCallable)
	void SetKeyboardFocus(); // (Final|Native|Public|BlueprintCallable)
	void SetIsEnabled(bool bInIsEnabled); // (Native|Public|BlueprintCallable)
	void SetFocus(); // (Final|Native|Public|BlueprintCallable)
	void SetCursor(enum class EMouseCursor InCursor); // (Final|Native|Public|BlueprintCallable)
	void SetClipping(enum class EWidgetClipping InClipping); // (Final|Native|Public|BlueprintCallable)
	void SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus); // (Final|Native|Public|BlueprintCallable)
	void ResetCursor(); // (Final|Native|Public|BlueprintCallable)
	void RemoveFromParent(); // (Native|Public|BlueprintCallable)
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // (Public|Delegate) 
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // (Public|Delegate|HasOutParms) 
	bool IsVisible(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsHovered(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	void InvalidateLayoutAndVolatility(); // (Final|Native|Public|BlueprintCallable)
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasUserFocus(struct APlayerController* PlayerController); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasMouseCapture(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasKeyboardFocus(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasFocusedDescendants(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasAnyUserFocus(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // (Public|Delegate) 
	enum class ESlateVisibility GetVisibility(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FGeometry GetTickSpaceGeometry(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // (Public|Delegate) 
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // (Public|Delegate) 
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // (Public|Delegate) 
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // (Public|Delegate) 
	float GetRenderTransformAngle(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetRenderOpacity(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UPanelWidget* GetParent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FGeometry GetPaintSpaceGeometry(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct APlayerController* GetOwningPlayer(); // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct ULocalPlayer* GetOwningLocalPlayer(); // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EMouseCursor GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // (Public|Delegate) 
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // (Public|Delegate|HasDefaults) 
	bool GetIsEnabled(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // (Public|Delegate) 
	struct UGameInstance* GetGameInstance(); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // (Public|Delegate) 
	struct FVector2D GetDesiredSize(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	enum class EWidgetClipping GetClipping(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // (Public|Delegate) 
	struct FGeometry GetCachedGeometry(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // (Public|Delegate) 
	struct FText GetAccessibleText(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FText GetAccessibleSummaryText(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // (Public|Delegate) 
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // (Public|Delegate) 
	void ForceVolatile(bool bForce); // (Final|Native|Public|BlueprintCallable)
	void ForceLayoutPrepass(); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.UserWidget
struct UUserWidget : UWidget {
	struct FLinearColor ColorAndOpacity; 
	struct FDelegate ColorAndOpacityDelegate; 
	struct FSlateColor ForegroundColor; 
	struct FDelegate ForegroundColorDelegate; 
	struct FMulticastInlineDelegate OnVisibilityChanged; 
	struct FMargin Padding; 
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; 
	struct UUMGSequenceTickManager* AnimationTickManager; 
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; 
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; 
	struct UWidgetTree* WidgetTree; 
	int32_t Priority; 
	char bSupportsKeyboardFocus : 1; 
	char bIsFocusable : 1; 
	char bStopAction : 1; 
	char bHasScriptImplementedTick : 1; 
	char bHasScriptImplementedPaint : 1; 
	enum class EWidgetTickFrequency TickFrequency; 
	struct UInputComponent* InputComponent; 
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; 

	void UnregisterInputComponent(); // (Final|Native|Protected|BlueprintCallable)
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // (Final|Native|Public|BlueprintCallable)
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // (Final|Native|Public|BlueprintCallable)
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation); // (Final|Native|Public|BlueprintCallable)
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation); // (Final|Native|Public|BlueprintCallable)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void StopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType); // (Final|Native|Protected|BlueprintCallable)
	void StopListeningForAllInputActions(); // (Final|Native|Protected|BlueprintCallable)
	void StopAnimationsAndLatentActions(); // (Final|Native|Public|BlueprintCallable)
	void StopAnimation(struct UWidgetAnimation* InAnimation); // (Final|Native|Public|BlueprintCallable)
	void StopAllAnimations(); // (Final|Native|Public|BlueprintCallable)
	void SetPositionInViewport(struct FVector2D position, bool bRemoveDPIScale); // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable)
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	void SetPadding(struct FMargin InPadding); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	void SetOwningPlayer(struct APlayerController* LocalPlayerController); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	void SetInputActionPriority(int32_t NewPriority); // (Final|Native|Protected|BlueprintCallable)
	void SetInputActionBlocking(bool bShouldBlock); // (Final|Native|Protected|BlueprintCallable)
	void SetForegroundColor(struct FSlateColor InForegroundColor); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	void SetDesiredSizeInViewport(struct FVector2D Size); // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable)
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable)
	void SetAnimationCurrentTime(struct UWidgetAnimation* InAnimation, float InTime); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	void SetAnchorsInViewport(struct FAnchors Anchors); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	void SetAlignmentInViewport(struct FVector2D Alignment); // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable)
	void ReverseAnimation(struct UWidgetAnimation* InAnimation); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	void RemoveFromViewport(); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	void RegisterInputComponent(); // (Final|Native|Protected|BlueprintCallable)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void PlaySound(struct USoundBase* SoundToPlay); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	float PauseAnimation(struct UWidgetAnimation* InAnimation); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (Event|Public|BlueprintEvent)
	void OnPaint(struct FPaintContext& Context); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const)
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnMouseCaptureLost(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnInitialized(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnFocusLost(struct FFocusEvent InFocusEvent); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent)
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent)
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent)
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // (Event|Public|BlueprintEvent)
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ListenForInputAction(struct FName ActionName, enum class EInputEvent EventType, bool bConsume, struct FDelegate Callback); // (Final|Native|Protected|BlueprintCallable)
	bool IsPlayingAnimation(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsListeningForInputAction(struct FName ActionName); // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const)
	bool IsInViewport(); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsInteractable(); // (BlueprintCosmetic|Event|Public|BlueprintEvent|Const)
	bool IsAnyAnimationPlaying(); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct APawn* GetOwningPlayerPawn(); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct APlayerCameraManager* GetOwningPlayerCameraManager(); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetIsVisible(); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FAnchors GetAnchorsInViewport(); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector2D GetAlignmentInViewport(); // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void FlushAnimations(); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	void Destruct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void CancelLatentActions(); // (Final|Native|Public|BlueprintCallable)
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // (Final|Native|Public|BlueprintCallable)
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // (Final|Native|Public|BlueprintCallable)
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag); // (Final|Native|Public|BlueprintCallable)
	void AddToViewport(int32_t ZOrder); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
	bool AddToPlayerScreen(int32_t ZOrder); // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable)
};

// Class UMG.AsyncTaskDownloadImage
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; 
	struct FMulticastInlineDelegate OnFail; 

	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class UMG.PanelWidget
struct UPanelWidget : UWidget {
	struct TArray<struct UPanelSlot*> Slots; 

	bool RemoveChildAt(int32_t Index); // (Final|Native|Public|BlueprintCallable)
	bool RemoveChild(struct UWidget* Content); // (Final|Native|Public|BlueprintCallable)
	bool HasChild(struct UWidget* Content); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasAnyChildren(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetChildrenCount(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetChildIndex(struct UWidget* Content); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UWidget* GetChildAt(int32_t Index); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct UWidget*> GetAllChildren(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void ClearChildren(); // (Native|Public|BlueprintCallable)
	struct UPanelSlot* AddChild(struct UWidget* Content); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.ContentWidget
struct UContentWidget : UPanelWidget {

	struct UPanelSlot* SetContent(struct UWidget* Content); // (Final|Native|Public|BlueprintCallable)
	struct UPanelSlot* GetContentSlot(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UWidget* GetContent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.BackgroundBlur
struct UBackgroundBlur : UContentWidget {
	struct FMargin Padding; 
	enum class EHorizontalAlignment HorizontalAlignment; 
	enum class EVerticalAlignment VerticalAlignment; 
	bool bApplyAlphaToBlur; 
	float BlurStrength; 
	bool bOverrideAutoRadiusCalculation; 
	int32_t BlurRadius; 
	struct FSlateBrush LowQualityFallbackBrush; 

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetPadding(struct FMargin InPadding); // (Final|Native|Public|BlueprintCallable)
	void SetLowQualityFallbackBrush(struct FSlateBrush& InBrush); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetBlurStrength(float InStrength); // (Native|Public|BlueprintCallable)
	void SetBlurRadius(int32_t InBlurRadius); // (Final|Native|Public|BlueprintCallable)
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.PanelSlot
struct UPanelSlot : UVisual {
	struct UPanelWidget* Parent; 
	struct UWidget* Content; 
};

// Class UMG.BackgroundBlurSlot
struct UBackgroundBlurSlot : UPanelSlot {
	struct FMargin Padding; 
	enum class EHorizontalAlignment HorizontalAlignment; 
	enum class EVerticalAlignment VerticalAlignment; 

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetPadding(struct FMargin InPadding); // (Final|Native|Public|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.PropertyBinding
struct UPropertyBinding : UObject {
	struct TWeakObjectPtr<struct UObject> SourceObject; 
	struct FDynamicPropertyPath SourcePath; 
	struct FName DestinationProperty; 
};

// Class UMG.BoolBinding
struct UBoolBinding : UPropertyBinding {

	bool GetValue(); // (Final|Native|Public|Const)
};

// Class UMG.Border
struct UBorder : UContentWidget {
	enum class EHorizontalAlignment HorizontalAlignment; 
	enum class EVerticalAlignment VerticalAlignment; 
	char bShowEffectWhenDisabled : 1; 
	struct FLinearColor ContentColorAndOpacity; 
	struct FDelegate ContentColorAndOpacityDelegate; 
	struct FMargin Padding; 
	struct FSlateBrush Background; 
	struct FDelegate BackgroundDelegate; 
	struct FLinearColor BrushColor; 
	struct FDelegate BrushColorDelegate; 
	struct FVector2D DesiredSizeScale; 
	bool bFlipForRightToLeftFlowDirection; 
	struct FDelegate OnMouseButtonDownEvent; 
	struct FDelegate OnMouseButtonUpEvent; 
	struct FDelegate OnMouseMoveEvent; 
	struct FDelegate OnMouseDoubleClickEvent; 

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetPadding(struct FMargin InPadding); // (Final|Native|Public|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetDesiredSizeScale(struct FVector2D InScale); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetBrushFromTexture(struct UTexture2D* Texture); // (Final|Native|Public|BlueprintCallable)
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // (Final|Native|Public|BlueprintCallable)
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // (Final|Native|Public|BlueprintCallable)
	void SetBrushColor(struct FLinearColor InBrushColor); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetBrush(struct FSlateBrush& InBrush); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.BorderSlot
struct UBorderSlot : UPanelSlot {
	struct FMargin Padding; 
	enum class EHorizontalAlignment HorizontalAlignment; 
	enum class EVerticalAlignment VerticalAlignment; 

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetPadding(struct FMargin InPadding); // (Final|Native|Public|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.BrushBinding
struct UBrushBinding : UPropertyBinding {

	struct FSlateBrush GetValue(); // (Final|Native|Public|Const)
};

// Class UMG.Button
struct UButton : UContentWidget {
	struct USlateWidgetStyleAsset* Style; 
	struct FButtonStyle WidgetStyle; 
	struct FLinearColor ColorAndOpacity; 
	struct FLinearColor BackgroundColor; 
	enum class EButtonClickMethod ClickMethod; 
	enum class EButtonTouchMethod TouchMethod; 
	enum class EButtonPressMethod PressMethod; 
	bool IsFocusable; 
	struct FMulticastInlineDelegate OnClicked; 
	struct FMulticastInlineDelegate OnPressed; 
	struct FMulticastInlineDelegate OnReleased; 
	struct FMulticastInlineDelegate OnHovered; 
	struct FMulticastInlineDelegate OnUnhovered; 

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // (Final|Native|Public|BlueprintCallable)
	void SetStyle(struct FButtonStyle& InStyle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // (Final|Native|Public|BlueprintCallable)
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // (Final|Native|Public|BlueprintCallable)
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	bool IsPressed(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.ButtonSlot
struct UButtonSlot : UPanelSlot {
	struct FMargin Padding; 
	enum class EHorizontalAlignment HorizontalAlignment; 
	enum class EVerticalAlignment VerticalAlignment; 

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetPadding(struct FMargin InPadding); // (Final|Native|Public|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.CanvasPanel
struct UCanvasPanel : UPanelWidget {

	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.CanvasPanelSlot
struct UCanvasPanelSlot : UPanelSlot {
	struct FAnchorData LayoutData; 
	bool bAutoSize; 
	int32_t ZOrder; 

	void SetZOrder(int32_t InZOrder); // (Final|Native|Public|BlueprintCallable)
	void SetSize(struct FVector2D InSize); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetPosition(struct FVector2D InPosition); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetOffsets(struct FMargin InOffset); // (Final|Native|Public|BlueprintCallable)
	void SetMinimum(struct FVector2D InMinimumAnchors); // (Final|Native|Public|HasDefaults)
	void SetMaximum(struct FVector2D InMaximumAnchors); // (Final|Native|Public|HasDefaults)
	void SetLayout(struct FAnchorData& InLayoutData); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetAutoSize(bool InbAutoSize); // (Final|Native|Public|BlueprintCallable)
	void SetAnchors(struct FAnchors InAnchors); // (Final|Native|Public|BlueprintCallable)
	void SetAlignment(struct FVector2D InAlignment); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	int32_t GetZOrder(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector2D GetSize(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FVector2D GetPosition(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct FMargin GetOffsets(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FAnchorData GetLayout(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetAutoSize(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FAnchors GetAnchors(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector2D GetAlignment(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.CheckBox
struct UCheckBox : UContentWidget {
	enum class ECheckBoxState CheckedState; 
	struct FDelegate CheckedStateDelegate; 
	struct FCheckBoxStyle WidgetStyle; 
	struct USlateWidgetStyleAsset* Style; 
	struct USlateBrushAsset* UncheckedImage; 
	struct USlateBrushAsset* UncheckedHoveredImage; 
	struct USlateBrushAsset* UncheckedPressedImage; 
	struct USlateBrushAsset* CheckedImage; 
	struct USlateBrushAsset* CheckedHoveredImage; 
	struct USlateBrushAsset* CheckedPressedImage; 
	struct USlateBrushAsset* UndeterminedImage; 
	struct USlateBrushAsset* UndeterminedHoveredImage; 
	struct USlateBrushAsset* UndeterminedPressedImage; 
	enum class EHorizontalAlignment HorizontalAlignment; 
	struct FMargin Padding; 
	struct FSlateColor BorderBackgroundColor; 
	enum class EButtonClickMethod ClickMethod; 
	enum class EButtonTouchMethod TouchMethod; 
	enum class EButtonPressMethod PressMethod; 
	bool IsFocusable; 
	struct FMulticastInlineDelegate OnCheckStateChanged; 

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // (Final|Native|Public|BlueprintCallable)
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // (Final|Native|Public|BlueprintCallable)
	void SetIsChecked(bool InIsChecked); // (Final|Native|Public|BlueprintCallable)
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // (Final|Native|Public|BlueprintCallable)
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // (Final|Native|Public|BlueprintCallable)
	bool IsPressed(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsChecked(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class ECheckBoxState GetCheckedState(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.CheckedStateBinding
struct UCheckedStateBinding : UPropertyBinding {

	enum class ECheckBoxState GetValue(); // (Final|Native|Public|Const)
};

// Class UMG.CircularThrobber
struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; 
	float Period; 
	float Radius; 
	struct USlateBrushAsset* PieceImage; 
	struct FSlateBrush Image; 
	bool bEnableRadius; 

	void SetRadius(float InRadius); // (Final|Native|Public|BlueprintCallable)
	void SetPeriod(float InPeriod); // (Final|Native|Public|BlueprintCallable)
	void SetNumberOfPieces(int32_t InNumberOfPieces); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.ColorBinding
struct UColorBinding : UPropertyBinding {

	struct FSlateColor GetSlateValue(); // (Final|Native|Public|Const)
	struct FLinearColor GetLinearValue(); // (Final|Native|Public|HasDefaults|Const)
};

// Class UMG.ComboBox
struct UComboBox : UWidget {
	struct TArray<struct UObject*> Items; 
	struct FDelegate OnGenerateWidgetEvent; 
	bool bIsFocusable; 
};

// Class UMG.ComboBoxString
struct UComboBoxString : UWidget {
	struct TArray<struct FString> DefaultOptions; 
	struct FString SelectedOption; 
	struct FComboBoxStyle WidgetStyle; 
	struct FTableRowStyle ItemStyle; 
	struct FMargin ContentPadding; 
	float MaxListHeight; 
	bool HasDownArrow; 
	bool EnableGamepadNavigationMode; 
	struct FSlateFontInfo Font; 
	struct FSlateColor ForegroundColor; 
	bool bIsFocusable; 
	struct FDelegate OnGenerateWidgetEvent; 
	struct FMulticastInlineDelegate OnSelectionChanged; 
	struct FMulticastInlineDelegate OnOpening; 

	void SetSelectedOption(struct FString Option); // (Final|Native|Public|BlueprintCallable)
	void SetSelectedIndex(int32_t Index); // (Final|Native|Public|BlueprintCallable)
	bool RemoveOption(struct FString Option); // (Final|Native|Public|BlueprintCallable)
	void RefreshOptions(); // (Final|Native|Public|BlueprintCallable)
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	bool IsOpen(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetSelectedOption(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetSelectedIndex(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetOptionCount(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetOptionAtIndex(int32_t Index); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t FindOptionIndex(struct FString Option); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void ClearSelection(); // (Final|Native|Public|BlueprintCallable)
	void ClearOptions(); // (Final|Native|Public|BlueprintCallable)
	void AddOption(struct FString Option); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.DragDropOperation
struct UDragDropOperation : UObject {
	struct FString Tag; 
	struct UObject* Payload; 
	struct UWidget* DefaultDragVisual; 
	enum class EDragPivot Pivot; 
	struct FVector2D Offset; 
	struct FMulticastInlineDelegate OnDrop; 
	struct FMulticastInlineDelegate OnDragCancelled; 
	struct FMulticastInlineDelegate OnDragged; 

	void Drop(struct FPointerEvent& PointerEvent); // (Native|Event|Public|HasOutParms|BlueprintEvent)
	void Dragged(struct FPointerEvent& PointerEvent); // (Native|Event|Public|HasOutParms|BlueprintEvent)
	void DragCancelled(struct FPointerEvent& PointerEvent); // (Native|Event|Public|HasOutParms|BlueprintEvent)
};

// Class UMG.DynamicEntryBoxBase
struct UDynamicEntryBoxBase : UWidget {
	enum class EDynamicBoxType EntryBoxType; 
	struct FVector2D EntrySpacing; 
	struct TArray<struct FVector2D> SpacingPattern; 
	struct FSlateChildSize EntrySizeRule; 
	enum class EHorizontalAlignment EntryHorizontalAlignment; 
	enum class EVerticalAlignment EntryVerticalAlignment; 
	int32_t MaxElementSize; 
	struct FRadialBoxSettings RadialBoxSettings; 
	struct FUserWidgetPool EntryWidgetPool; 

	void SetRadialSettings(struct FRadialBoxSettings& InSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetEntrySpacing(struct FVector2D& InEntrySpacing); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	int32_t GetNumEntries(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct UUserWidget*> GetAllEntries(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.DynamicEntryBox
struct UDynamicEntryBox : UDynamicEntryBoxBase {
	struct UUserWidget* EntryWidgetClass; 

	void Reset(bool bDeleteWidgets); // (Final|Native|Public|BlueprintCallable)
	void RemoveEntry(struct UUserWidget* EntryWidget); // (Final|Native|Public|BlueprintCallable)
	struct UUserWidget* BP_CreateEntryOfClass(struct UUserWidget* EntryClass); // (Final|Native|Private|BlueprintCallable)
	struct UUserWidget* BP_CreateEntry(); // (Final|Native|Private|BlueprintCallable)
};

// Class UMG.EditableText
struct UEditableText : UWidget {
	struct FText Text; 
	struct FDelegate TextDelegate; 
	struct FText HintText; 
	struct FDelegate HintTextDelegate; 
	struct FEditableTextStyle WidgetStyle; 
	struct USlateWidgetStyleAsset* Style; 
	struct USlateBrushAsset* BackgroundImageSelected; 
	struct USlateBrushAsset* BackgroundImageComposing; 
	struct USlateBrushAsset* CaretImage; 
	struct FSlateFontInfo Font; 
	struct FSlateColor ColorAndOpacity; 
	bool IsReadOnly; 
	bool IsPassword; 
	float MinimumDesiredWidth; 
	bool IsCaretMovedWhenGainFocus; 
	bool SelectAllTextWhenFocused; 
	bool RevertTextOnEscape; 
	bool ClearKeyboardFocusOnCommit; 
	bool SelectAllTextOnCommit; 
	bool AllowContextMenu; 
	enum class EVirtualKeyboardType KeyboardType; 
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; 
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; 
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; 
	enum class ETextJustify Justification; 
	struct FShapedTextOptions ShapedTextOptions; 
	struct FMulticastInlineDelegate OnTextChanged; 
	struct FMulticastInlineDelegate OnTextCommitted; 

	void SetText(struct FText InText); // (Final|Native|Public|BlueprintCallable)
	void SetJustification(enum class ETextJustify InJustification); // (Final|Native|Public|BlueprintCallable)
	void SetIsReadOnly(bool InbIsReadyOnly); // (Final|Native|Public|BlueprintCallable)
	void SetIsPassword(bool InbIsPassword); // (Final|Native|Public|BlueprintCallable)
	void SetHintText(struct FText InHintText); // (Final|Native|Public|BlueprintCallable)
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) 
	void OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) 
	struct FText GetText(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.EditableTextBox
struct UEditableTextBox : UWidget {
	struct FText Text; 
	struct FDelegate TextDelegate; 
	struct FEditableTextBoxStyle WidgetStyle; 
	struct USlateWidgetStyleAsset* Style; 
	struct FText HintText; 
	struct FDelegate HintTextDelegate; 
	struct FSlateFontInfo Font; 
	struct FLinearColor ForegroundColor; 
	struct FLinearColor BackgroundColor; 
	struct FLinearColor ReadOnlyForegroundColor; 
	bool IsReadOnly; 
	bool IsPassword; 
	float MinimumDesiredWidth; 
	struct FMargin Padding; 
	bool IsCaretMovedWhenGainFocus; 
	bool SelectAllTextWhenFocused; 
	bool RevertTextOnEscape; 
	bool ClearKeyboardFocusOnCommit; 
	bool SelectAllTextOnCommit; 
	bool AllowContextMenu; 
	enum class EVirtualKeyboardType KeyboardType; 
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; 
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; 
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; 
	enum class ETextJustify Justification; 
	struct FShapedTextOptions ShapedTextOptions; 
	struct FMulticastInlineDelegate OnTextChanged; 
	struct FMulticastInlineDelegate OnTextCommitted; 

	void SetText(struct FText InText); // (Final|Native|Public|BlueprintCallable)
	void SetJustification(enum class ETextJustify InJustification); // (Final|Native|Public|BlueprintCallable)
	void SetIsReadOnly(bool bReadOnly); // (Final|Native|Public|BlueprintCallable)
	void SetIsPassword(bool bIsPassword); // (Final|Native|Public|BlueprintCallable)
	void SetHintText(struct FText InText); // (Final|Native|Public|BlueprintCallable)
	void SetError(struct FText InError); // (Final|Native|Public|BlueprintCallable)
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) 
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) 
	bool HasError(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FText GetText(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void ClearError(); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.ExpandableArea
struct UExpandableArea : UWidget {
	struct FExpandableAreaStyle Style; 
	struct FSlateBrush BorderBrush; 
	struct FSlateColor BorderColor; 
	bool bIsExpanded; 
	float MaxHeight; 
	struct FMargin HeaderPadding; 
	struct FMargin AreaPadding; 
	struct FMulticastInlineDelegate OnExpansionChanged; 
	struct UWidget* HeaderContent; 
	struct UWidget* BodyContent; 

	void SetIsExpanded_Animated(bool IsExpanded); // (Final|Native|Public|BlueprintCallable)
	void SetIsExpanded(bool IsExpanded); // (Final|Native|Public|BlueprintCallable)
	bool GetIsExpanded(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.FloatBinding
struct UFloatBinding : UPropertyBinding {

	float GetValue(); // (Final|Native|Public|Const)
};

// Class UMG.GridPanel
struct UGridPanel : UPanelWidget {
	struct TArray<float> ColumnFill; 
	struct TArray<float> RowFill; 

	void SetRowFill(int32_t ColumnIndex, float Coefficient); // (Final|Native|Public|BlueprintCallable)
	void SetColumnFill(int32_t ColumnIndex, float Coefficient); // (Final|Native|Public|BlueprintCallable)
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.GridSlot
struct UGridSlot : UPanelSlot {
	struct FMargin Padding; 
	enum class EHorizontalAlignment HorizontalAlignment; 
	enum class EVerticalAlignment VerticalAlignment; 
	int32_t Row; 
	int32_t RowSpan; 
	int32_t Column; 
	int32_t ColumnSpan; 
	int32_t Layer; 
	struct FVector2D Nudge; 

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetRowSpan(int32_t InRowSpan); // (Final|Native|Public|BlueprintCallable)
	void SetRow(int32_t InRow); // (Final|Native|Public|BlueprintCallable)
	void SetPadding(struct FMargin InPadding); // (Final|Native|Public|BlueprintCallable)
	void SetNudge(struct FVector2D InNudge); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetLayer(int32_t InLayer); // (Final|Native|Public|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetColumnSpan(int32_t InColumnSpan); // (Final|Native|Public|BlueprintCallable)
	void SetColumn(int32_t InColumn); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.HorizontalBox
struct UHorizontalBox : UPanelWidget {

	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.HorizontalBoxSlot
struct UHorizontalBoxSlot : UPanelSlot {
	struct FMargin Padding; 
	struct FSlateChildSize Size; 
	enum class EHorizontalAlignment HorizontalAlignment; 
	enum class EVerticalAlignment VerticalAlignment; 

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetSize(struct FSlateChildSize InSize); // (Final|Native|Public|BlueprintCallable)
	void SetPadding(struct FMargin InPadding); // (Final|Native|Public|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.Image
struct UImage : UWidget {
	struct FSlateBrush Brush; 
	struct FDelegate BrushDelegate; 
	struct FLinearColor ColorAndOpacity; 
	struct FDelegate ColorAndOpacityDelegate; 
	bool bFlipForRightToLeftFlowDirection; 
	struct FDelegate OnMouseButtonDownEvent; 

	void SetOpacity(float InOpacity); // (Final|Native|Public|BlueprintCallable)
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetBrushTintColor(struct FSlateColor TintColor); // (Final|Native|Public|BlueprintCallable)
	void SetBrushSize(struct FVector2D DesiredSize); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetBrushResourceObject(struct UObject* ResourceObject); // (Final|Native|Public|BlueprintCallable)
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize); // (Native|Public|BlueprintCallable)
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // (Native|Public|BlueprintCallable)
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize); // (Native|Public|BlueprintCallable)
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial); // (Native|Public|BlueprintCallable)
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // (Native|Public|BlueprintCallable)
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize); // (Native|Public|BlueprintCallable)
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // (Native|Public|BlueprintCallable)
	void SetBrush(struct FSlateBrush& InBrush); // (Native|Public|HasOutParms|BlueprintCallable)
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.InputKeySelector
struct UInputKeySelector : UWidget {
	struct FButtonStyle WidgetStyle; 
	struct FTextBlockStyle TextStyle; 
	struct FInputChord SelectedKey; 
	struct FSlateFontInfo Font; 
	struct FMargin Margin; 
	struct FLinearColor ColorAndOpacity; 
	struct FText KeySelectionText; 
	struct FText NoKeySpecifiedText; 
	bool bAllowModifierKeys; 
	bool bAllowGamepadKeys; 
	struct TArray<struct FKey> EscapeKeys; 
	struct FMulticastInlineDelegate OnKeySelected; 
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; 

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // (Final|Native|Public|BlueprintCallable)
	void SetSelectedKey(struct FInputChord& InSelectedKey); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // (Final|Native|Public|BlueprintCallable)
	void SetKeySelectionText(struct FText InKeySelectionText); // (Final|Native|Public|BlueprintCallable)
	void SetEscapeKeys(struct TArray<struct FKey>& InKeys); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetAllowModifierKeys(bool bInAllowModifierKeys); // (Final|Native|Public|BlueprintCallable)
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // (Final|Native|Public|BlueprintCallable)
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	bool GetIsSelectingKey(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.Int32Binding
struct UInt32Binding : UPropertyBinding {

	int32_t GetValue(); // (Final|Native|Public|Const)
};

// Class UMG.InvalidationBox
struct UInvalidationBox : UContentWidget {
	bool bCanCache; 
	bool CacheRelativeTransforms; 

	void SetCanCache(bool CanCache); // (Final|Native|Public|BlueprintCallable)
	void InvalidateCache(); // (Final|Native|Public|BlueprintCallable)
	bool GetCanCache(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.UserListEntry
struct UUserListEntry : UInterface {

	void BP_OnItemSelectionChanged(bool bIsSelected); // (Event|Protected|BlueprintEvent)
	void BP_OnItemExpansionChanged(bool bIsExpanded); // (Event|Protected|BlueprintEvent)
	void BP_OnEntryReleased(); // (Event|Protected|BlueprintEvent)
};

// Class UMG.UserListEntryLibrary
struct UUserListEntryLibrary : UBlueprintFunctionLibrary {

	bool IsListItemSelected(struct TScriptInterface<IUserListEntry> UserListEntry); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsListItemExpanded(struct TScriptInterface<IUserListEntry> UserListEntry); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UListViewBase* GetOwningListView(struct TScriptInterface<IUserListEntry> UserListEntry); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class UMG.UserObjectListEntry
struct UUserObjectListEntry : UUserListEntry {

	void OnListItemObjectSet(struct UObject* ListItemObject); // (Event|Protected|BlueprintEvent)
};

// Class UMG.UserObjectListEntryLibrary
struct UUserObjectListEntryLibrary : UBlueprintFunctionLibrary {

	struct UObject* GetListItemObject(struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class UMG.ListViewBase
struct UListViewBase : UWidget {
	struct UUserWidget* EntryWidgetClass; 
	float WheelScrollMultiplier; 
	bool bEnableScrollAnimation; 
	bool bEnableFixedLineOffset; 
	float FixedLineScrollOffset; 
	struct FMulticastInlineDelegate BP_OnEntryGenerated; 
	struct FMulticastInlineDelegate BP_OnEntryReleased; 
	struct FUserWidgetPool EntryWidgetPool; 

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // (Final|Native|Public|BlueprintCallable)
	void SetScrollOffset(float InScrollOffset); // (Final|Native|Public|BlueprintCallable)
	void SetScrollbarVisibility(enum class ESlateVisibility InVisibility); // (Final|Native|Public|BlueprintCallable)
	void ScrollToTop(); // (Final|Native|Public|BlueprintCallable)
	void ScrollToBottom(); // (Final|Native|Public|BlueprintCallable)
	void RequestRefresh(); // (Final|Native|Public|BlueprintCallable)
	void RegenerateAllEntries(); // (Final|Native|Public|BlueprintCallable)
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.ListView
struct UListView : UListViewBase {
	enum class EOrientation Orientation; 
	enum class ESelectionMode SelectionMode; 
	enum class EConsumeMouseWheel ConsumeMouseWheel; 
	bool bClearSelectionOnClick; 
	bool bIsFocusable; 
	float EntrySpacing; 
	bool bReturnFocusToSelection; 
	struct TArray<struct UObject*> ListItems; 
	struct FMulticastInlineDelegate BP_OnEntryInitialized; 
	struct FMulticastInlineDelegate BP_OnItemClicked; 
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; 
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; 
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; 
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; 

	void SetSelectionMode(enum class ESelectionMode SelectionMode); // (Final|Native|Public|BlueprintCallable)
	void SetSelectedIndex(int32_t Index); // (Final|Native|Public|BlueprintCallable)
	void ScrollIndexIntoView(int32_t Index); // (Final|Native|Public|BlueprintCallable)
	void RemoveItem(struct UObject* Item); // (Final|Native|Public|BlueprintCallable)
	void NavigateToIndex(int32_t Index); // (Final|Native|Public|BlueprintCallable)
	bool IsRefreshPending(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumItems(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct UObject*> GetListItems(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UObject* GetItemAt(int32_t Index); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetIndexForItem(struct UObject* Item); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void ClearListItems(); // (Final|Native|Public|BlueprintCallable)
	void BP_SetSelectedItem(struct UObject* Item); // (Final|Native|Private|BlueprintCallable)
	void BP_SetListItems(struct TArray<struct UObject*>& InListItems); // (Final|Native|Private|HasOutParms|BlueprintCallable)
	void BP_SetItemSelection(struct UObject* Item, bool bSelected); // (Final|Native|Private|BlueprintCallable)
	void BP_ScrollItemIntoView(struct UObject* Item); // (Final|Native|Private|BlueprintCallable)
	void BP_NavigateToItem(struct UObject* Item); // (Final|Native|Private|BlueprintCallable)
	bool BP_IsItemVisible(struct UObject* Item); // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const)
	bool BP_GetSelectedItems(struct TArray<struct UObject*>& Items); // (Final|Native|Private|HasOutParms|BlueprintCallable|Const)
	struct UObject* BP_GetSelectedItem(); // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const)
	int32_t BP_GetNumItemsSelected(); // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const)
	void BP_ClearSelection(); // (Final|Native|Private|BlueprintCallable)
	void BP_CancelScrollIntoView(); // (Final|Native|Private|BlueprintCallable)
	void AddItem(struct UObject* Item); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.ListViewDesignerPreviewItem
struct UListViewDesignerPreviewItem : UObject {
};

// Class UMG.MenuAnchor
struct UMenuAnchor : UContentWidget {
	struct UUserWidget* MenuClass; 
	struct FDelegate OnGetMenuContentEvent; 
	struct FDelegate OnGetUserMenuContentEvent; 
	enum class EMenuPlacement Placement; 
	bool bFitInWindow; 
	bool ShouldDeferPaintingAfterWindowContent; 
	bool UseApplicationMenuStack; 
	struct FMulticastInlineDelegate OnMenuOpenChanged; 

	void ToggleOpen(bool bFocusOnOpen); // (Final|Native|Public|BlueprintCallable)
	bool ShouldOpenDueToClick(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void SetPlacement(enum class EMenuPlacement InPlacement); // (Final|Native|Public|BlueprintCallable)
	void Open(bool bFocusMenu); // (Final|Native|Public|BlueprintCallable)
	bool IsOpen(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasOpenSubMenus(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UUserWidget* GetUserWidget__DelegateSignature(); // DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature // (Public|Delegate) 
	struct FVector2D GetMenuPosition(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	void FitInWindow(bool bFit); // (Final|Native|Public|BlueprintCallable)
	void Close(); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.MouseCursorBinding
struct UMouseCursorBinding : UPropertyBinding {

	enum class EMouseCursor GetValue(); // (Final|Native|Public|Const)
};

// Class UMG.MovieScene2DTransformPropertySystem
struct UMovieScene2DTransformPropertySystem : UMovieScenePropertySystem {
};

// Class UMG.MovieScene2DTransformSection
struct UMovieScene2DTransformSection : UMovieSceneSection {
	struct FMovieScene2DTransformMask TransformMask; 
	struct FMovieSceneFloatChannel Translation[0x2]; 
	struct FMovieSceneFloatChannel Rotation; 
	struct FMovieSceneFloatChannel Scale[0x2]; 
	struct FMovieSceneFloatChannel Shear[0x2]; 
};

// Class UMG.MovieScene2DTransformTrack
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneMarginPropertySystem
struct UMovieSceneMarginPropertySystem : UMovieScenePropertySystem {
};

// Class UMG.MovieSceneMarginSection
struct UMovieSceneMarginSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel TopCurve; 
	struct FMovieSceneFloatChannel LeftCurve; 
	struct FMovieSceneFloatChannel RightCurve; 
	struct FMovieSceneFloatChannel BottomCurve; 
};

// Class UMG.MovieSceneMarginTrack
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneWidgetMaterialTrack
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	struct TArray<struct FName> BrushPropertyNamePath; 
	struct FName TrackName; 
};

// Class UMG.TextLayoutWidget
struct UTextLayoutWidget : UWidget {
	struct FShapedTextOptions ShapedTextOptions; 
	enum class ETextJustify Justification; 
	enum class ETextWrappingPolicy WrappingPolicy; 
	char AutoWrapText : 1; 
	float WrapTextAt; 
	struct FMargin Margin; 
	float LineHeightPercentage; 

	void SetJustification(enum class ETextJustify InJustification); // (Native|Public|BlueprintCallable)
};

// Class UMG.MultiLineEditableText
struct UMultiLineEditableText : UTextLayoutWidget {
	struct FText Text; 
	struct FText HintText; 
	struct FDelegate HintTextDelegate; 
	struct FTextBlockStyle WidgetStyle; 
	bool bIsReadOnly; 
	struct FSlateFontInfo Font; 
	bool SelectAllTextWhenFocused; 
	bool ClearTextSelectionOnFocusLoss; 
	bool RevertTextOnEscape; 
	bool ClearKeyboardFocusOnCommit; 
	bool AllowContextMenu; 
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; 
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; 
	struct FMulticastInlineDelegate OnTextChanged; 
	struct FMulticastInlineDelegate OnTextCommitted; 

	void SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetText(struct FText InText); // (Final|Native|Public|BlueprintCallable)
	void SetIsReadOnly(bool bReadOnly); // (Final|Native|Public|BlueprintCallable)
	void SetHintText(struct FText InHintText); // (Final|Native|Public|BlueprintCallable)
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) 
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) 
	struct FText GetText(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FText GetHintText(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.MultiLineEditableTextBox
struct UMultiLineEditableTextBox : UTextLayoutWidget {
	struct FText Text; 
	struct FText HintText; 
	struct FDelegate HintTextDelegate; 
	struct FEditableTextBoxStyle WidgetStyle; 
	struct FTextBlockStyle TextStyle; 
	bool bIsReadOnly; 
	bool AllowContextMenu; 
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; 
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; 
	struct USlateWidgetStyleAsset* Style; 
	struct FSlateFontInfo Font; 
	struct FLinearColor ForegroundColor; 
	struct FLinearColor BackgroundColor; 
	struct FLinearColor ReadOnlyForegroundColor; 
	struct FMulticastInlineDelegate OnTextChanged; 
	struct FMulticastInlineDelegate OnTextCommitted; 

	void SetTextStyle(struct FTextBlockStyle& InTextStyle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetText(struct FText InText); // (Final|Native|Public|BlueprintCallable)
	void SetIsReadOnly(bool bReadOnly); // (Final|Native|Public|BlueprintCallable)
	void SetHintText(struct FText InHintText); // (Final|Native|Public|BlueprintCallable)
	void SetError(struct FText InError); // (Final|Native|Public|BlueprintCallable)
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) 
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) 
	struct FText GetText(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FText GetHintText(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.NamedSlot
struct UNamedSlot : UContentWidget {
};

// Class UMG.NamedSlotInterface
struct UNamedSlotInterface : UInterface {
};

// Class UMG.NativeWidgetHost
struct UNativeWidgetHost : UWidget {
};

// Class UMG.Overlay
struct UOverlay : UPanelWidget {

	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.OverlaySlot
struct UOverlaySlot : UPanelSlot {
	struct FMargin Padding; 
	enum class EHorizontalAlignment HorizontalAlignment; 
	enum class EVerticalAlignment VerticalAlignment; 

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetPadding(struct FMargin InPadding); // (Final|Native|Public|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.ProgressBar
struct UProgressBar : UWidget {
	struct FProgressBarStyle WidgetStyle; 
	struct USlateWidgetStyleAsset* Style; 
	struct USlateBrushAsset* BackgroundImage; 
	struct USlateBrushAsset* FillImage; 
	struct USlateBrushAsset* MarqueeImage; 
	float Percent; 
	enum class EProgressBarFillType BarFillType; 
	bool bIsMarquee; 
	struct FVector2D BorderPadding; 
	struct FDelegate PercentDelegate; 
	struct FLinearColor FillColorAndOpacity; 
	struct FDelegate FillColorAndOpacityDelegate; 

	void SetPercent(float InPercent); // (Final|Native|Public|BlueprintCallable)
	void SetIsMarquee(bool InbIsMarquee); // (Final|Native|Public|BlueprintCallable)
	void SetFillColorAndOpacity(struct FLinearColor InColor); // (Final|Native|Public|HasDefaults|BlueprintCallable)
};

// Class UMG.RetainerBox
struct URetainerBox : UContentWidget {
	bool bRetainRender; 
	bool RenderOnInvalidation; 
	bool RenderOnPhase; 
	int32_t Phase; 
	int32_t PhaseCount; 
	struct UMaterialInterface* EffectMaterial; 
	struct FName TextureParameter; 
	bool bAlsoRenderContent; 

	void SetTextureParameter(struct FName TextureParameter); // (Final|Native|Public|BlueprintCallable)
	void SetRetainRendering(bool bInRetainRendering); // (Final|Native|Public|BlueprintCallable)
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // (Final|Native|Public|BlueprintCallable)
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial); // (Final|Native|Public|BlueprintCallable)
	void RequestRender(); // (Final|Native|Public|BlueprintCallable)
	struct UMaterialInstanceDynamic* GetEffectMaterial(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.RichTextBlock
struct URichTextBlock : UTextLayoutWidget {
	struct FText Text; 
	struct UDataTable* TextStyleSet; 
	struct TArray<struct URichTextBlockDecorator*> DecoratorClasses; 
	bool bOverrideDefaultStyle; 
	struct FTextBlockStyle DefaultTextStyleOverride; 
	float MinDesiredWidth; 
	enum class ETextTransformPolicy TextTransformPolicy; 
	struct FTextBlockStyle DefaultTextStyle; 
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators; 

	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // (Final|Native|Public|BlueprintCallable)
	void SetTextStyleSet(struct UDataTable* NewTextStyleSet); // (Final|Native|Public|BlueprintCallable)
	void SetText(struct FText& InText); // (Native|Public|HasOutParms|BlueprintCallable)
	void SetMinDesiredWidth(float InMinDesiredWidth); // (Final|Native|Public|BlueprintCallable)
	void SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetDefaultFont(struct FSlateFontInfo InFontInfo); // (Final|Native|Public|BlueprintCallable)
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity); // (Final|Native|Public|BlueprintCallable)
	void SetAutoWrapText(bool InAutoTextWrap); // (Final|Native|Public|BlueprintCallable)
	struct FText GetText(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct URichTextBlockDecorator* GetDecoratorByClass(struct URichTextBlockDecorator* DecoratorClass); // (Final|Native|Public|BlueprintCallable)
	void ClearAllDefaultStyleOverrides(); // (Final|Native|Public)
};

// Class UMG.RichTextBlockDecorator
struct URichTextBlockDecorator : UObject {
};

// Class UMG.RichTextBlockImageDecorator
struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	struct UDataTable* ImageSet; 
};

// Class UMG.SafeZone
struct USafeZone : UContentWidget {
	bool PadLeft; 
	bool PadRight; 
	bool PadTop; 
	bool PadBottom; 

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.SafeZoneSlot
struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; 
	struct FMargin SafeAreaScale; 
	enum class EHorizontalAlignment HAlign; 
	enum class EVerticalAlignment VAlign; 
	struct FMargin Padding; 
};

// Class UMG.ScaleBox
struct UScaleBox : UContentWidget {
	enum class EStretch Stretch; 
	enum class EStretchDirection StretchDirection; 
	float UserSpecifiedScale; 
	bool IgnoreInheritedScale; 

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // (Final|Native|Public|BlueprintCallable)
	void SetStretchDirection(enum class EStretchDirection InStretchDirection); // (Final|Native|Public|BlueprintCallable)
	void SetStretch(enum class EStretch InStretch); // (Final|Native|Public|BlueprintCallable)
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.ScaleBoxSlot
struct UScaleBoxSlot : UPanelSlot {
	struct FMargin Padding; 
	enum class EHorizontalAlignment HorizontalAlignment; 
	enum class EVerticalAlignment VerticalAlignment; 

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetPadding(struct FMargin InPadding); // (Final|Native|Public|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.ScrollBar
struct UScrollBar : UWidget {
	struct FScrollBarStyle WidgetStyle; 
	struct USlateWidgetStyleAsset* Style; 
	bool bAlwaysShowScrollbar; 
	bool bAlwaysShowScrollbarTrack; 
	enum class EOrientation Orientation; 
	struct FVector2D Thickness; 
	struct FMargin Padding; 

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.ScrollBox
struct UScrollBox : UPanelWidget {
	struct FScrollBoxStyle WidgetStyle; 
	struct FScrollBarStyle WidgetBarStyle; 
	struct USlateWidgetStyleAsset* Style; 
	struct USlateWidgetStyleAsset* BarStyle; 
	enum class EOrientation Orientation; 
	enum class ESlateVisibility ScrollBarVisibility; 
	enum class EConsumeMouseWheel ConsumeMouseWheel; 
	struct FVector2D ScrollBarThickness; 
	struct FMargin ScrollbarPadding; 
	bool AlwaysShowScrollbar; 
	bool AlwaysShowScrollbarTrack; 
	bool AllowOverscroll; 
	bool bAnimateWheelScrolling; 
	enum class EDescendantScrollDestination NavigationDestination; 
	float NavigationScrollPadding; 
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges; 
	bool bAllowRightClickDragScrolling; 
	float WheelScrollMultiplier; 
	struct FMulticastInlineDelegate OnUserScrolled; 

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // (Final|Native|Public|BlueprintCallable)
	void SetScrollWhenFocusChanges(enum class EScrollWhenFocusChanges NewScrollWhenFocusChanges); // (Final|Native|Public|BlueprintCallable)
	void SetScrollOffset(float NewScrollOffset); // (Final|Native|Public|BlueprintCallable)
	void SetScrollbarVisibility(enum class ESlateVisibility NewScrollBarVisibility); // (Final|Native|Public|BlueprintCallable)
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetOrientation(enum class EOrientation NewOrientation); // (Final|Native|Public|BlueprintCallable)
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel); // (Final|Native|Public|BlueprintCallable)
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // (Final|Native|Public|BlueprintCallable)
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // (Final|Native|Public|BlueprintCallable)
	void SetAllowOverscroll(bool NewAllowOverscroll); // (Final|Native|Public|BlueprintCallable)
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding); // (Final|Native|Public|BlueprintCallable)
	void ScrollToStart(); // (Final|Native|Public|BlueprintCallable)
	void ScrollToEnd(); // (Final|Native|Public|BlueprintCallable)
	float GetViewOffsetFraction(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetScrollOffsetOfEnd(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetScrollOffset(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void EndInertialScrolling(); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.ScrollBoxSlot
struct UScrollBoxSlot : UPanelSlot {
	struct FMargin Padding; 
	enum class EHorizontalAlignment HorizontalAlignment; 
	enum class EVerticalAlignment VerticalAlignment; 

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetPadding(struct FMargin InPadding); // (Final|Native|Public|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.SizeBox
struct USizeBox : UContentWidget {
	float WidthOverride; 
	float HeightOverride; 
	float MinDesiredWidth; 
	float MinDesiredHeight; 
	float MaxDesiredWidth; 
	float MaxDesiredHeight; 
	float MinAspectRatio; 
	float MaxAspectRatio; 
	char bOverride_WidthOverride : 1; 
	char bOverride_HeightOverride : 1; 
	char bOverride_MinDesiredWidth : 1; 
	char bOverride_MinDesiredHeight : 1; 
	char bOverride_MaxDesiredWidth : 1; 
	char bOverride_MaxDesiredHeight : 1; 
	char bOverride_MinAspectRatio : 1; 
	char bOverride_MaxAspectRatio : 1; 

	void SetWidthOverride(float InWidthOverride); // (Final|Native|Public|BlueprintCallable)
	void SetMinDesiredWidth(float InMinDesiredWidth); // (Final|Native|Public|BlueprintCallable)
	void SetMinDesiredHeight(float InMinDesiredHeight); // (Final|Native|Public|BlueprintCallable)
	void SetMinAspectRatio(float InMinAspectRatio); // (Final|Native|Public|BlueprintCallable)
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // (Final|Native|Public|BlueprintCallable)
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // (Final|Native|Public|BlueprintCallable)
	void SetMaxAspectRatio(float InMaxAspectRatio); // (Final|Native|Public|BlueprintCallable)
	void SetHeightOverride(float InHeightOverride); // (Final|Native|Public|BlueprintCallable)
	void ClearWidthOverride(); // (Final|Native|Public|BlueprintCallable)
	void ClearMinDesiredWidth(); // (Final|Native|Public|BlueprintCallable)
	void ClearMinDesiredHeight(); // (Final|Native|Public|BlueprintCallable)
	void ClearMinAspectRatio(); // (Final|Native|Public|BlueprintCallable)
	void ClearMaxDesiredWidth(); // (Final|Native|Public|BlueprintCallable)
	void ClearMaxDesiredHeight(); // (Final|Native|Public|BlueprintCallable)
	void ClearMaxAspectRatio(); // (Final|Native|Public|BlueprintCallable)
	void ClearHeightOverride(); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.SizeBoxSlot
struct USizeBoxSlot : UPanelSlot {
	struct FMargin Padding; 
	enum class EHorizontalAlignment HorizontalAlignment; 
	enum class EVerticalAlignment VerticalAlignment; 

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetPadding(struct FMargin InPadding); // (Final|Native|Public|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.SlateBlueprintLibrary
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalVector); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteVector); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	float TransformScalarLocalToAbsolute(struct FGeometry& Geometry, float LocalScalar); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	float TransformScalarAbsoluteToLocal(struct FGeometry& Geometry, float AbsoluteScalar); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D ScreenPosition, struct FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // (Final|Native|Static|Public|HasOutParms|HasDefaults)
	void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // (Final|Native|Static|Public|HasOutParms|HasDefaults)
	void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& ViewportPosition); // (Final|Native|Static|Public|HasOutParms|HasDefaults)
	void LocalToViewport(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D LocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalCoordinate); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D GetLocalTopLeft(struct FGeometry& Geometry); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D GetLocalSize(struct FGeometry& Geometry); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D GetAbsoluteSize(struct FGeometry& Geometry); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	bool EqualEqual_SlateBrush(struct FSlateBrush& A, struct FSlateBrush& B); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FVector2D AbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteCoordinate); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
};

// Class UMG.SlateVectorArtData
struct USlateVectorArtData : UObject {
	struct TArray<struct FSlateMeshVertex> VertexData; 
	struct TArray<uint32_t> IndexData; 
	struct UMaterialInterface* Material; 
	struct FVector2D ExtentMin; 
	struct FVector2D ExtentMax; 
};

// Class UMG.SlateAccessibleWidgetData
struct USlateAccessibleWidgetData : UObject {
	bool bCanChildrenBeAccessible; 
	enum class ESlateAccessibleBehavior AccessibleBehavior; 
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; 
	struct FText AccessibleText; 
	struct FDelegate AccessibleTextDelegate; 
	struct FText AccessibleSummaryText; 
	struct FDelegate AccessibleSummaryTextDelegate; 
};

// Class UMG.Slider
struct USlider : UWidget {
	float Value; 
	struct FDelegate ValueDelegate; 
	float MinValue; 
	float MaxValue; 
	struct FSliderStyle WidgetStyle; 
	enum class EOrientation Orientation; 
	struct FLinearColor SliderBarColor; 
	struct FLinearColor SliderHandleColor; 
	bool IndentHandle; 
	bool Locked; 
	bool MouseUsesStep; 
	bool RequiresControllerLock; 
	float StepSize; 
	bool IsFocusable; 
	struct FMulticastInlineDelegate OnMouseCaptureBegin; 
	struct FMulticastInlineDelegate OnMouseCaptureEnd; 
	struct FMulticastInlineDelegate OnControllerCaptureBegin; 
	struct FMulticastInlineDelegate OnControllerCaptureEnd; 
	struct FMulticastInlineDelegate OnValueChanged; 

	void SetValue(float InValue); // (Final|Native|Public|BlueprintCallable)
	void SetStepSize(float InValue); // (Final|Native|Public|BlueprintCallable)
	void SetSliderHandleColor(struct FLinearColor InValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetSliderBarColor(struct FLinearColor InValue); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetMinValue(float InValue); // (Final|Native|Public|BlueprintCallable)
	void SetMaxValue(float InValue); // (Final|Native|Public|BlueprintCallable)
	void SetLocked(bool InValue); // (Final|Native|Public|BlueprintCallable)
	void SetIndentHandle(bool InValue); // (Final|Native|Public|BlueprintCallable)
	float GetValue(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetNormalizedValue(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.Spacer
struct USpacer : UWidget {
	struct FVector2D Size; 

	void SetSize(struct FVector2D InSize); // (Final|Native|Public|HasDefaults|BlueprintCallable)
};

// Class UMG.SpinBox
struct USpinBox : UWidget {
	float Value; 
	struct FDelegate ValueDelegate; 
	struct FSpinBoxStyle WidgetStyle; 
	struct USlateWidgetStyleAsset* Style; 
	int32_t MinFractionalDigits; 
	int32_t MaxFractionalDigits; 
	bool bAlwaysUsesDeltaSnap; 
	float Delta; 
	float SliderExponent; 
	struct FSlateFontInfo Font; 
	enum class ETextJustify Justification; 
	float MinDesiredWidth; 
	bool ClearKeyboardFocusOnCommit; 
	bool SelectAllTextOnCommit; 
	struct FSlateColor ForegroundColor; 
	struct FMulticastInlineDelegate OnValueChanged; 
	struct FMulticastInlineDelegate OnValueCommitted; 
	struct FMulticastInlineDelegate OnBeginSliderMovement; 
	struct FMulticastInlineDelegate OnEndSliderMovement; 
	char bOverride_MinValue : 1; 
	char bOverride_MaxValue : 1; 
	char bOverride_MinSliderValue : 1; 
	char bOverride_MaxSliderValue : 1; 
	float MinValue; 
	float MaxValue; 
	float MinSliderValue; 
	float MaxSliderValue; 

	void SetValue(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetMinValue(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetMinSliderValue(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetMinFractionalDigits(int32_t NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetMaxValue(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetMaxSliderValue(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetMaxFractionalDigits(int32_t NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetForegroundColor(struct FSlateColor InForegroundColor); // (Final|Native|Public|BlueprintCallable)
	void SetDelta(float NewValue); // (Final|Native|Public|BlueprintCallable)
	void SetAlwaysUsesDeltaSnap(bool bNewValue); // (Final|Native|Public|BlueprintCallable)
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // (MulticastDelegate|Public|Delegate) 
	float GetValue(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetMinValue(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetMinSliderValue(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetMinFractionalDigits(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetMaxValue(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetMaxSliderValue(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetMaxFractionalDigits(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetDelta(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetAlwaysUsesDeltaSnap(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void ClearMinValue(); // (Final|Native|Public|BlueprintCallable)
	void ClearMinSliderValue(); // (Final|Native|Public|BlueprintCallable)
	void ClearMaxValue(); // (Final|Native|Public|BlueprintCallable)
	void ClearMaxSliderValue(); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.TextBinding
struct UTextBinding : UPropertyBinding {

	struct FText GetTextValue(); // (Final|Native|Public|Const)
	struct FString GetStringValue(); // (Final|Native|Public|Const)
};

// Class UMG.TextBlock
struct UTextBlock : UTextLayoutWidget {
	struct FText Text; 
	struct FDelegate TextDelegate; 
	struct FSlateColor ColorAndOpacity; 
	struct FDelegate ColorAndOpacityDelegate; 
	struct FSlateFontInfo Font; 
	struct FSlateBrush StrikeBrush; 
	struct FVector2D ShadowOffset; 
	struct FLinearColor ShadowColorAndOpacity; 
	struct FDelegate ShadowColorAndOpacityDelegate; 
	float MinDesiredWidth; 
	bool bWrapWithInvalidationPanel; 
	bool bAutoWrapText; 
	enum class ETextTransformPolicy TextTransformPolicy; 
	bool bSimpleTextMode; 

	void SetWrapTextAt(float InWrapTextAt); // (Final|Native|Public|BlueprintCallable)
	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // (Final|Native|Public|BlueprintCallable)
	void SetText(struct FText InText); // (Native|Public|BlueprintCallable)
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush); // (Final|Native|Public|BlueprintCallable)
	void SetShadowOffset(struct FVector2D InShadowOffset); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetOpacity(float InOpacity); // (Final|Native|Public|BlueprintCallable)
	void SetMinDesiredWidth(float InMinDesiredWidth); // (Final|Native|Public|BlueprintCallable)
	void SetFont(struct FSlateFontInfo InFontInfo); // (Final|Native|Public|BlueprintCallable)
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // (Final|Native|Public|BlueprintCallable)
	void SetAutoWrapText(bool InAutoTextWrap); // (Final|Native|Public|BlueprintCallable)
	struct FText GetText(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial(); // (Final|Native|Public|BlueprintCallable)
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial(); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.Throbber
struct UThrobber : UWidget {
	int32_t NumberOfPieces; 
	bool bAnimateHorizontally; 
	bool bAnimateVertically; 
	bool bAnimateOpacity; 
	struct USlateBrushAsset* PieceImage; 
	struct FSlateBrush Image; 

	void SetNumberOfPieces(int32_t InNumberOfPieces); // (Final|Native|Public|BlueprintCallable)
	void SetAnimateVertically(bool bInAnimateVertically); // (Final|Native|Public|BlueprintCallable)
	void SetAnimateOpacity(bool bInAnimateOpacity); // (Final|Native|Public|BlueprintCallable)
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.TileView
struct UTileView : UListView {
	float EntryHeight; 
	float EntryWidth; 
	enum class EListItemAlignment TileAlignment; 
	bool bWrapHorizontalNavigation; 

	void SetEntryWidth(float NewWidth); // (Final|Native|Public|BlueprintCallable)
	void SetEntryHeight(float NewHeight); // (Final|Native|Public|BlueprintCallable)
	float GetEntryWidth(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetEntryHeight(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.TreeView
struct UTreeView : UListView {
	struct FDelegate BP_OnGetItemChildren; 
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; 

	void SetItemExpansion(struct UObject* Item, bool bExpandItem); // (Final|Native|Public|BlueprintCallable)
	void ExpandAll(); // (Final|Native|Public|BlueprintCallable)
	void CollapseAll(); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.UMGSequencePlayer
struct UUMGSequencePlayer : UObject {
	struct UWidgetAnimation* Animation; 
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; 

	void SetUserTag(struct FName InUserTag); // (Final|Native|Public|BlueprintCallable)
	struct FName GetUserTag(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.UMGSequenceTickManager
struct UUMGSequenceTickManager : UObject {
	struct TSet<struct TWeakObjectPtr<struct UUserWidget>> WeakUserWidgets; 
	struct UMovieSceneEntitySystemLinker* Linker; 
};

// Class UMG.UniformGridPanel
struct UUniformGridPanel : UPanelWidget {
	struct FMargin SlotPadding; 
	float MinDesiredSlotWidth; 
	float MinDesiredSlotHeight; 

	void SetSlotPadding(struct FMargin InSlotPadding); // (Final|Native|Public|BlueprintCallable)
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // (Final|Native|Public|BlueprintCallable)
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // (Final|Native|Public|BlueprintCallable)
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.UniformGridSlot
struct UUniformGridSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; 
	enum class EVerticalAlignment VerticalAlignment; 
	int32_t Row; 
	int32_t Column; 

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetRow(int32_t InRow); // (Final|Native|Public|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetColumn(int32_t InColumn); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.VerticalBox
struct UVerticalBox : UPanelWidget {

	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.VerticalBoxSlot
struct UVerticalBoxSlot : UPanelSlot {
	struct FSlateChildSize Size; 
	struct FMargin Padding; 
	enum class EHorizontalAlignment HorizontalAlignment; 
	enum class EVerticalAlignment VerticalAlignment; 

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetSize(struct FSlateChildSize InSize); // (Final|Native|Public|BlueprintCallable)
	void SetPadding(struct FMargin InPadding); // (Final|Native|Public|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.Viewport
struct UViewport : UContentWidget {
	struct FLinearColor BackgroundColor; 

	struct AActor* Spawn(struct AActor* ActorClass); // (Final|Native|Public|BlueprintCallable)
	void SetViewRotation(struct FRotator Rotation); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetViewLocation(struct FVector Location); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct FRotator GetViewRotation(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct UWorld* GetViewportWorld(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector GetViewLocation(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.VisibilityBinding
struct UVisibilityBinding : UPropertyBinding {

	enum class ESlateVisibility GetValue(); // (Final|Native|Public|Const)
};

// Class UMG.WidgetAnimation
struct UWidgetAnimation : UMovieSceneSequence {
	struct UMovieScene* MovieScene; 
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; 
	bool bLegacyFinishOnStop; 
	struct FString DisplayLabel; 

	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // (Final|Native|Public|BlueprintCallable)
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // (Final|Native|Public|BlueprintCallable)
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget); // (Final|Native|Public|BlueprintCallable)
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget); // (Final|Native|Public|BlueprintCallable)
	float GetStartTime(); // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetEndTime(); // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // (Final|Native|Public|BlueprintCallable)
	void BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.WidgetAnimationDelegateBinding
struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; 
};

// Class UMG.WidgetAnimationPlayCallbackProxy
struct UWidgetAnimationPlayCallbackProxy : UObject {
	struct FMulticastInlineDelegate Finished; 

	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class UMG.WidgetBinding
struct UWidgetBinding : UPropertyBinding {

	struct UWidget* GetValue(); // (Final|Native|Public|Const)
};

// Class UMG.WidgetBlueprintGeneratedClass
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; 
	char bClassRequiresNativeTick : 1; 
	struct TArray<struct FDelegateRuntimeBinding> Bindings; 
	struct TArray<struct UWidgetAnimation*> Animations; 
	struct TArray<struct FName> NamedSlots; 
};

// Class UMG.WidgetBlueprintLibrary
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FEventReply UnlockMouse(struct FEventReply& Reply); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FEventReply Unhandled(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void SetWindowTitleBarState(struct UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // (Final|Native|Static|Public|BlueprintCallable)
	void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate); // (Final|Native|Static|Public|BlueprintCallable)
	void SetWindowTitleBarCloseButtonActive(bool bActive); // (Final|Native|Static|Public|BlueprintCallable)
	struct FEventReply SetUserFocus(struct FEventReply& Reply, struct UWidget* FocusWidget, bool bInAllUsers); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FEventReply SetMousePosition(struct FEventReply& Reply, struct FVector2D NewMousePosition); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	void SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable)
	void SetInputMode_UIOnly(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable)
	void SetInputMode_GameOnly(struct APlayerController* PlayerController); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable)
	void SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable)
	void SetInputMode_GameAndUI(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable)
	bool SetHardwareCursor(struct UObject* WorldContextObject, enum class EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	void SetFocusToGameViewport(); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable)
	void SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable)
	void SetBrushResourceToTexture(struct FSlateBrush& Brush, struct UTexture2D* Texture); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void SetBrushResourceToMaterial(struct FSlateBrush& Brush, struct UMaterialInterface* Material); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void RestorePreviousWindowTitleBarState(); // (Final|Native|Static|Public|BlueprintCallable)
	struct FEventReply ReleaseMouseCapture(struct FEventReply& Reply); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FEventReply ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature(); // DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature // (Public|Delegate) 
	struct FSlateBrush NoResourceBrush(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FEventReply LockMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool IsDragDropping(); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FEventReply Handled(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4& SafePadding, struct FVector2D& SafePaddingScale, struct FVector4& SpillOverPadding); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& Event); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent& Event); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent& Event); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent& Event); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent& Event); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& Brush); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct UDragDropOperation* GetDragDroppingContent(); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush& Brush); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush& Brush); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct UObject* GetBrushResource(struct FSlateBrush& Brush); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UInterface* Interface, bool TopLevelOnly); // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable)
	void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UUserWidget* WidgetClass, bool TopLevelOnly); // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct FEventReply EndDragDrop(struct FEventReply& Reply); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void DrawTextFormatted(struct FPaintContext& Context, struct FText& Text, struct FVector2D position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void DrawText(struct FPaintContext& Context, struct FString inString, struct FVector2D position, struct FLinearColor Tint); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void DrawLines(struct FPaintContext& Context, struct TArray<struct FVector2D>& Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void DrawLine(struct FPaintContext& Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void DrawBox(struct FPaintContext& Context, struct FVector2D position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint); // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void DismissAllMenus(); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable)
	struct FEventReply DetectDragIfPressed(struct FPointerEvent& PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct FEventReply DetectDrag(struct FEventReply& Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct UDragDropOperation* CreateDragDropOperation(struct UDragDropOperation* OperationClass); // (Final|Native|Static|Public|BlueprintCallable)
	struct UUserWidget* Create(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable)
	struct FEventReply ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FEventReply CaptureMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FEventReply CaptureJoystick(struct FEventReply& Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void CancelDragDrop(); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class UMG.WidgetComponent
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; 
	enum class EWidgetTimingPolicy TimingPolicy; 
	struct UUserWidget* WidgetClass; 
	struct FIntPoint DrawSize; 
	bool bManuallyRedraw; 
	bool bRedrawRequested; 
	float RedrawTime; 
	struct FIntPoint CurrentDrawSize; 
	bool bDrawAtDesiredSize; 
	struct FVector2D Pivot; 
	bool bReceiveHardwareInput; 
	bool bWindowFocusable; 
	enum class EWindowVisibility WindowVisibility; 
	bool bApplyGammaCorrection; 
	struct ULocalPlayer* OwnerPlayer; 
	struct FLinearColor BackgroundColor; 
	struct FLinearColor TintColorAndOpacity; 
	float OpacityFromTexture; 
	enum class EWidgetBlendMode BlendMode; 
	bool bIsTwoSided; 
	bool TickWhenOffscreen; 
	struct UBodySetup* BodySetup; 
	struct UMaterialInterface* TranslucentMaterial; 
	struct UMaterialInterface* TranslucentMaterial_OneSided; 
	struct UMaterialInterface* OpaqueMaterial; 
	struct UMaterialInterface* OpaqueMaterial_OneSided; 
	struct UMaterialInterface* MaskedMaterial; 
	struct UMaterialInterface* MaskedMaterial_OneSided; 
	struct UTextureRenderTarget2D* RenderTarget; 
	struct UMaterialInstanceDynamic* MaterialInstance; 
	bool bAddedToScreen; 
	bool bEditTimeUsable; 
	struct FName SharedLayerName; 
	int32_t LayerZOrder; 
	enum class EWidgetGeometryMode GeometryMode; 
	float CylinderArcAngle; 
	enum class ETickMode TickMode; 
	struct UUserWidget* Widget; 

	void SetWindowVisibility(enum class EWindowVisibility InVisibility); // (Final|Native|Public|BlueprintCallable)
	void SetWindowFocusable(bool bInWindowFocusable); // (Final|Native|Public|BlueprintCallable)
	void SetWidgetSpace(enum class EWidgetSpace NewSpace); // (Final|Native|Public|BlueprintCallable)
	void SetWidget(struct UUserWidget* Widget); // (Native|Public|BlueprintCallable)
	void SetTwoSided(bool bWantTwoSided); // (Final|Native|Public|BlueprintCallable)
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // (Final|Native|Public|BlueprintCallable)
	void SetTickMode(enum class ETickMode InTickMode); // (Final|Native|Public|BlueprintCallable)
	void SetRedrawTime(float InRedrawTime); // (Final|Native|Public|BlueprintCallable)
	void SetPivot(struct FVector2D& InPivot); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer); // (Final|Native|Public|BlueprintCallable)
	void SetManuallyRedraw(bool bUseManualRedraw); // (Final|Native|Public|BlueprintCallable)
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode); // (Final|Native|Public|BlueprintCallable)
	void SetDrawSize(struct FVector2D Size); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // (Final|Native|Public|BlueprintCallable)
	void SetCylinderArcAngle(float InCylinderArcAngle); // (Final|Native|Public|BlueprintCallable)
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void RequestRenderUpdate(); // (Native|Public|BlueprintCallable)
	void RequestRedraw(); // (Native|Public|BlueprintCallable)
	bool IsWidgetVisible(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EWindowVisibility GetWindowVisiblility(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetWindowFocusable(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EWidgetSpace GetWidgetSpace(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UUserWidget* GetWidget(); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UUserWidget* GetUserWidgetObject(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetTwoSided(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetTickWhenOffscreen(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UTextureRenderTarget2D* GetRenderTarget(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetRedrawTime(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector2D GetPivot(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	struct ULocalPlayer* GetOwnerPlayer(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UMaterialInstanceDynamic* GetMaterialInstance(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool GetManuallyRedraw(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class EWidgetGeometryMode GetGeometryMode(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector2D GetDrawSize(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
	bool GetDrawAtDesiredSize(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetCylinderArcAngle(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector2D GetCurrentDrawSize(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.WidgetInteractionComponent
struct UWidgetInteractionComponent : USceneComponent {
	struct FMulticastInlineDelegate OnHoveredWidgetChanged; 
	int32_t VirtualUserIndex; 
	int32_t PointerIndex; 
	enum class ECollisionChannel TraceChannel; 
	float InteractionDistance; 
	enum class EWidgetInteractionSource InteractionSource; 
	bool bEnableHitTesting; 
	bool bShowDebug; 
	float DebugSphereLineThickness; 
	float DebugLineThickness; 
	struct FLinearColor DebugColor; 
	struct FHitResult CustomHitResult; 
	struct FVector2D LocalHitLocation; 
	struct FVector2D LastLocalHitLocation; 
	struct UWidgetComponent* HoveredWidgetComponent; 
	struct FHitResult LastHitResult; 
	bool bIsHoveredWidgetInteractable; 
	bool bIsHoveredWidgetFocusable; 
	bool bIsHoveredWidgetHitTestVisible; 

	void SetFocus(struct UWidget* FocusWidget); // (Final|Native|Public|BlueprintCallable)
	void SetCustomHitResult(struct FHitResult& HitResult); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool SendKeyChar(struct FString Characters, bool bRepeat); // (Native|Public|BlueprintCallable)
	void ScrollWheel(float ScrollDelta); // (Native|Public|BlueprintCallable)
	void ReleasePointerKey(struct FKey Key); // (Native|Public|BlueprintCallable)
	bool ReleaseKey(struct FKey Key); // (Native|Public|BlueprintCallable)
	void PressPointerKey(struct FKey Key); // (Native|Public|BlueprintCallable)
	bool PressKey(struct FKey Key, bool bRepeat); // (Native|Public|BlueprintCallable)
	bool PressAndReleaseKey(struct FKey Key); // (Native|Public|BlueprintCallable)
	bool IsOverInteractableWidget(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsOverHitTestVisibleWidget(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool IsOverFocusableWidget(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FHitResult GetLastHitResult(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UWidgetComponent* GetHoveredWidgetComponent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FVector2D Get2DHitLocation(); // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.WidgetLayoutLibrary
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary {

	struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(struct UWidget* Widget); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct USizeBoxSlot* SlotAsSizeBoxSlot(struct UWidget* Widget); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UScrollBoxSlot* SlotAsScrollBoxSlot(struct UWidget* Widget); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UScaleBoxSlot* SlotAsScaleBoxSlot(struct UWidget* Widget); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct USafeZoneSlot* SlotAsSafeBoxSlot(struct UWidget* Widget); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void RemoveAllWidgets(struct UObject* WorldContextObject); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable)
	bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D& ScreenPosition, bool bPlayerViewportRelative); // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure)
	struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject); // (Final|Native|Static|Public|BlueprintCallable)
	struct FVector2D GetViewportSize(struct UObject* WorldContextObject); // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure)
	float GetViewportScale(struct UObject* WorldContextObject); // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController); // (Final|Native|Static|Public|BlueprintCallable)
	bool GetMousePositionScaledByDPI(struct APlayerController* Player, float& LocationX, float& LocationY); // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
	struct FVector2D GetMousePositionOnPlatform(); // (Final|Native|Static|Public|HasDefaults|BlueprintCallable)
};

// Class UMG.WidgetNavigation
struct UWidgetNavigation : UObject {
	struct FWidgetNavigationData Up; 
	struct FWidgetNavigationData Down; 
	struct FWidgetNavigationData Left; 
	struct FWidgetNavigationData Right; 
	struct FWidgetNavigationData Next; 
	struct FWidgetNavigationData Previous; 
};

// Class UMG.WidgetSwitcher
struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; 

	void SetActiveWidgetIndex(int32_t Index); // (Native|Public|BlueprintCallable)
	void SetActiveWidget(struct UWidget* Widget); // (Native|Public|BlueprintCallable)
	struct UWidget* GetWidgetAtIndex(int32_t Index); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetNumWidgets(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	int32_t GetActiveWidgetIndex(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct UWidget* GetActiveWidget(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class UMG.WidgetSwitcherSlot
struct UWidgetSwitcherSlot : UPanelSlot {
	struct FMargin Padding; 
	enum class EHorizontalAlignment HorizontalAlignment; 
	enum class EVerticalAlignment VerticalAlignment; 

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetPadding(struct FMargin InPadding); // (Final|Native|Public|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.WidgetTree
struct UWidgetTree : UObject {
	struct UWidget* RootWidget; 
};

// Class UMG.WindowTitleBarArea
struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; 
	bool bDoubleClickTogglesFullscreen; 

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetPadding(struct FMargin InPadding); // (Final|Native|Public|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.WindowTitleBarAreaSlot
struct UWindowTitleBarAreaSlot : UPanelSlot {
	struct FMargin Padding; 
	enum class EHorizontalAlignment HorizontalAlignment; 
	enum class EVerticalAlignment VerticalAlignment; 

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetPadding(struct FMargin InPadding); // (Final|Native|Public|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.WrapBox
struct UWrapBox : UPanelWidget {
	struct FVector2D InnerSlotPadding; 
	float WrapWidth; 
	float WrapSize; 
	bool bExplicitWrapWidth; 
	bool bExplicitWrapSize; 
	enum class EOrientation Orientation; 

	void SetInnerSlotPadding(struct FVector2D InPadding); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content); // (Final|Native|Public|BlueprintCallable)
};

// Class UMG.WrapBoxSlot
struct UWrapBoxSlot : UPanelSlot {
	struct FMargin Padding; 
	bool bFillEmptySpace; 
	float FillSpanWhenLessThan; 
	enum class EHorizontalAlignment HorizontalAlignment; 
	enum class EVerticalAlignment VerticalAlignment; 

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetPadding(struct FMargin InPadding); // (Final|Native|Public|BlueprintCallable)
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // (Final|Native|Public|BlueprintCallable)
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // (Final|Native|Public|BlueprintCallable)
	void SetFillEmptySpace(bool InbFillEmptySpace); // (Final|Native|Public|BlueprintCallable)
};


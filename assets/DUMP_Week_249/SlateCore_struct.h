// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8 {
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Next = 4,
	Previous = 5,
	Num = 6,
	Invalid = 7,
	EUINavigation_MAX = 8
};

// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8 {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3
};

// Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8 {
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5
};

// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8 {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	ESlateBrushImageType_MAX = 3
};

// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8 {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4
};

// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8 {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4
};

// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8 {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	ESlateBrushDrawType_MAX = 4
};

// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8 {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4
};

// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8 {
	Escape = 0,
	Explicit = 1,
	Wrap = 2,
	Stop = 3,
	Custom = 4,
	CustomBoundary = 5,
	Invalid = 6,
	EUINavigationRule_MAX = 7
};

// Enum SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8 {
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4
};

// Enum SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8 {
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorVisionDeficiency_MAX = 4
};

// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8 {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4
};

// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8 {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4
};

// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8 {
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3
};

// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8 {
	MenuPlacement_BelowAnchor = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox = 3,
	MenuPlacement_ComboBoxRight = 4,
	MenuPlacement_MenuRight = 5,
	MenuPlacement_AboveAnchor = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft = 9,
	MenuPlacement_Center = 10,
	MenuPlacement_RightLeftCenter = 11,
	MenuPlacement_MatchBottomLeft = 12,
	MenuPlacement_MAX = 13
};

// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8 {
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2
};

// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8 {
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3
};

// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8 {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5
};

// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8 {
	Mouse = 0,
	Navigation = 1,
	SetDirectly = 2,
	Cleared = 3,
	OtherWidgetLostFocus = 4,
	WindowActivate = 5,
	EFocusCause_MAX = 6
};

// Enum SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8 {
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	MAX = 3
};

// Enum SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8 {
	Unknown = 0,
	Explicit = 1,
	CustomDelegateBound = 2,
	CustomDelegateUnbound = 3,
	NextOrPrevious = 4,
	HitTestGrid = 5,
	ESlateDebuggingNavigationMethod_MAX = 6
};

// Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8 {
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2
};

// Enum SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8 {
	MouseMove = 0,
	MouseEnter = 1,
	MouseLeave = 2,
	PreviewMouseButtonDown = 3,
	MouseButtonDown = 4,
	MouseButtonUp = 5,
	MouseButtonDoubleClick = 6,
	MouseWheel = 7,
	TouchStart = 8,
	TouchEnd = 9,
	TouchForceChanged = 10,
	TouchFirstMove = 11,
	TouchMoved = 12,
	DragDetected = 13,
	DragEnter = 14,
	DragLeave = 15,
	DragOver = 16,
	DragDrop = 17,
	DropMessage = 18,
	PreviewKeyDown = 19,
	KeyDown = 20,
	KeyUp = 21,
	KeyChar = 22,
	AnalogInput = 23,
	TouchGesture = 24,
	MotionDetected = 25,
	MAX = 26
};

// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8 {
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2
};

// Enum SlateCore.EOrientation
enum class EOrientation : uint8 {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2
};

// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8 {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4
};

// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8 {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4
};

// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8 {
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3
};

// Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8 {
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2
};

// Enum SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8 {
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	EUINavigationAction_MAX = 4
};

// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8 {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3
};

// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8 {
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	EButtonTouchMethod_MAX = 3
};

// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8 {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4
};

// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8 {
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2
};

// Enum SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8 {
	ActiveWindow = 0,
	MainWindow = 1,
	ESlateParentWindowSearchMethod_MAX = 2
};

// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8 {
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3
};

// ScriptStruct SlateCore.Geometry
struct FGeometry {
};

// ScriptStruct SlateCore.SlateBrush
struct FSlateBrush {
	struct FVector2D ImageSize; 
	struct FMargin Margin; 
	struct FSlateColor TintColor; 
	struct UObject* ResourceObject; 
	struct FName ResourceName; 
	struct FBox2D UVRegion; 
	enum class ESlateBrushDrawType DrawAs; 
	enum class ESlateBrushTileType tiling; 
	enum class ESlateBrushMirrorType Mirroring; 
	enum class ESlateBrushImageType ImageType; 
	char bIsDynamicallyLoaded : 1; 
	char bHasUObject : 1; 
};

// ScriptStruct SlateCore.SlateColor
struct FSlateColor {
	struct FLinearColor SpecifiedColor; 
	enum class ESlateColorStylingMode ColorUseRule; 
};

// ScriptStruct SlateCore.Margin
struct FMargin {
	float Left; 
	float Top; 
	float Right; 
	float Bottom; 
};

// ScriptStruct SlateCore.InputEvent
struct FInputEvent {
};

// ScriptStruct SlateCore.PointerEvent
struct FPointerEvent : FInputEvent {
};

// ScriptStruct SlateCore.CharacterEvent
struct FCharacterEvent : FInputEvent {
};

// ScriptStruct SlateCore.KeyEvent
struct FKeyEvent : FInputEvent {
};

// ScriptStruct SlateCore.NavigationEvent
struct FNavigationEvent : FInputEvent {
};

// ScriptStruct SlateCore.AnalogInputEvent
struct FAnalogInputEvent : FKeyEvent {
};

// ScriptStruct SlateCore.SlateFontInfo
struct FSlateFontInfo {
	struct UObject* FontObject; 
	struct UObject* FontMaterial; 
	struct FFontOutlineSettings OutlineSettings; 
	struct FName TypefaceFontName; 
	int32_t Size; 
	int32_t LetterSpacing; 
};

// ScriptStruct SlateCore.FontOutlineSettings
struct FFontOutlineSettings {
	int32_t OutlineSize; 
	bool bSeparateFillAlpha; 
	bool bApplyOutlineToDropShadows; 
	struct UObject* OutlineMaterial; 
	struct FLinearColor OutlineColor; 
};

// ScriptStruct SlateCore.SlateWidgetStyle
struct FSlateWidgetStyle {
};

// ScriptStruct SlateCore.TableRowStyle
struct FTableRowStyle : FSlateWidgetStyle {
	struct FSlateBrush SelectorFocusedBrush; 
	struct FSlateBrush ActiveHoveredBrush; 
	struct FSlateBrush ActiveBrush; 
	struct FSlateBrush InactiveHoveredBrush; 
	struct FSlateBrush InactiveBrush; 
	struct FSlateBrush EvenRowBackgroundHoveredBrush; 
	struct FSlateBrush EvenRowBackgroundBrush; 
	struct FSlateBrush OddRowBackgroundHoveredBrush; 
	struct FSlateBrush OddRowBackgroundBrush; 
	struct FSlateColor TextColor; 
	struct FSlateColor SelectedTextColor; 
	struct FSlateBrush DropIndicator_Above; 
	struct FSlateBrush DropIndicator_Onto; 
	struct FSlateBrush DropIndicator_Below; 
	struct FSlateBrush ActiveHighlightedBrush; 
	struct FSlateBrush InactiveHighlightedBrush; 
};

// ScriptStruct SlateCore.ComboBoxStyle
struct FComboBoxStyle : FSlateWidgetStyle {
	struct FComboButtonStyle ComboButtonStyle; 
	struct FSlateSound PressedSlateSound; 
	struct FSlateSound SelectionChangeSlateSound; 
};

// ScriptStruct SlateCore.SlateSound
struct FSlateSound {
	struct UObject* ResourceObject; 
};

// ScriptStruct SlateCore.ComboButtonStyle
struct FComboButtonStyle : FSlateWidgetStyle {
	struct FButtonStyle ButtonStyle; 
	struct FSlateBrush DownArrowImage; 
	struct FVector2D ShadowOffset; 
	struct FLinearColor ShadowColorAndOpacity; 
	struct FSlateBrush MenuBorderBrush; 
	struct FMargin MenuBorderPadding; 
};

// ScriptStruct SlateCore.ButtonStyle
struct FButtonStyle : FSlateWidgetStyle {
	struct FSlateBrush Normal; 
	struct FSlateBrush Hovered; 
	struct FSlateBrush Pressed; 
	struct FSlateBrush Disabled; 
	struct FMargin NormalPadding; 
	struct FMargin PressedPadding; 
	struct FSlateSound PressedSlateSound; 
	struct FSlateSound HoveredSlateSound; 
};

// ScriptStruct SlateCore.EditableTextStyle
struct FEditableTextStyle : FSlateWidgetStyle {
	struct FSlateFontInfo Font; 
	struct FSlateColor ColorAndOpacity; 
	struct FSlateBrush BackgroundImageSelected; 
	struct FSlateBrush BackgroundImageComposing; 
	struct FSlateBrush CaretImage; 
};

// ScriptStruct SlateCore.EditableTextBoxStyle
struct FEditableTextBoxStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundImageNormal; 
	struct FSlateBrush BackgroundImageHovered; 
	struct FSlateBrush BackgroundImageFocused; 
	struct FSlateBrush BackgroundImageReadOnly; 
	struct FMargin Padding; 
	struct FSlateFontInfo Font; 
	struct FSlateColor ForegroundColor; 
	struct FSlateColor BackgroundColor; 
	struct FSlateColor ReadOnlyForegroundColor; 
	struct FMargin HScrollBarPadding; 
	struct FMargin VScrollBarPadding; 
	struct FScrollBarStyle ScrollBarStyle; 
};

// ScriptStruct SlateCore.ScrollBarStyle
struct FScrollBarStyle : FSlateWidgetStyle {
	struct FSlateBrush HorizontalBackgroundImage; 
	struct FSlateBrush VerticalBackgroundImage; 
	struct FSlateBrush VerticalTopSlotImage; 
	struct FSlateBrush HorizontalTopSlotImage; 
	struct FSlateBrush VerticalBottomSlotImage; 
	struct FSlateBrush HorizontalBottomSlotImage; 
	struct FSlateBrush NormalThumbImage; 
	struct FSlateBrush HoveredThumbImage; 
	struct FSlateBrush DraggedThumbImage; 
};

// ScriptStruct SlateCore.TextBlockStyle
struct FTextBlockStyle : FSlateWidgetStyle {
	struct FSlateFontInfo Font; 
	struct FSlateColor ColorAndOpacity; 
	struct FVector2D ShadowOffset; 
	struct FLinearColor ShadowColorAndOpacity; 
	struct FSlateColor SelectedBackgroundColor; 
	struct FLinearColor HighlightColor; 
	struct FSlateBrush HighlightShape; 
	struct FSlateBrush StrikeBrush; 
	struct FSlateBrush UnderlineBrush; 
};

// ScriptStruct SlateCore.SpinBoxStyle
struct FSpinBoxStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundBrush; 
	struct FSlateBrush HoveredBackgroundBrush; 
	struct FSlateBrush ActiveFillBrush; 
	struct FSlateBrush InactiveFillBrush; 
	struct FSlateBrush ArrowsImage; 
	struct FSlateColor ForegroundColor; 
	struct FMargin TextPadding; 
};

// ScriptStruct SlateCore.FocusEvent
struct FFocusEvent {
};

// ScriptStruct SlateCore.MotionEvent
struct FMotionEvent : FInputEvent {
};

// ScriptStruct SlateCore.SearchBoxStyle
struct FSearchBoxStyle : FSlateWidgetStyle {
	struct FEditableTextBoxStyle TextBoxStyle; 
	struct FSlateFontInfo ActiveFontInfo; 
	struct FSlateBrush UpArrowImage; 
	struct FSlateBrush DownArrowImage; 
	struct FSlateBrush GlassImage; 
	struct FSlateBrush ClearImage; 
	struct FMargin ImagePadding; 
	bool bLeftAlignButtons; 
};

// ScriptStruct SlateCore.CompositeFont
struct FCompositeFont {
	struct FTypeface DefaultTypeface; 
	struct FCompositeFallbackFont FallbackTypeface; 
	struct TArray<struct FCompositeSubFont> SubTypefaces; 
};

// ScriptStruct SlateCore.CompositeFallbackFont
struct FCompositeFallbackFont {
	struct FTypeface Typeface; 
	float ScalingFactor; 
};

// ScriptStruct SlateCore.Typeface
struct FTypeface {
	struct TArray<struct FTypefaceEntry> Fonts; 
};

// ScriptStruct SlateCore.TypefaceEntry
struct FTypefaceEntry {
	struct FName Name; 
	struct FFontData Font; 
};

// ScriptStruct SlateCore.FontData
struct FFontData {
	struct FString FontFilename; 
	enum class EFontHinting Hinting; 
	enum class EFontLoadingPolicy LoadingPolicy; 
	int32_t SubFaceIndex; 
	struct UObject* FontFaceAsset; 
};

// ScriptStruct SlateCore.CompositeSubFont
struct FCompositeSubFont : FCompositeFallbackFont {
	struct TArray<struct FInt32Range> CharacterRanges; 
	struct FString Cultures; 
};

// ScriptStruct SlateCore.CaptureLostEvent
struct FCaptureLostEvent {
};

// ScriptStruct SlateCore.WindowStyle
struct FWindowStyle : FSlateWidgetStyle {
	struct FButtonStyle MinimizeButtonStyle; 
	struct FButtonStyle MaximizeButtonStyle; 
	struct FButtonStyle RestoreButtonStyle; 
	struct FButtonStyle CloseButtonStyle; 
	struct FTextBlockStyle TitleTextStyle; 
	struct FSlateBrush ActiveTitleBrush; 
	struct FSlateBrush InactiveTitleBrush; 
	struct FSlateBrush FlashTitleBrush; 
	struct FSlateColor BackgroundColor; 
	struct FSlateBrush OutlineBrush; 
	struct FSlateColor OutlineColor; 
	struct FSlateBrush BorderBrush; 
	struct FSlateBrush BackgroundBrush; 
	struct FSlateBrush ChildBackgroundBrush; 
};

// ScriptStruct SlateCore.ScrollBorderStyle
struct FScrollBorderStyle : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; 
	struct FSlateBrush BottomShadowBrush; 
};

// ScriptStruct SlateCore.ScrollBoxStyle
struct FScrollBoxStyle : FSlateWidgetStyle {
	struct FSlateBrush TopShadowBrush; 
	struct FSlateBrush BottomShadowBrush; 
	struct FSlateBrush LeftShadowBrush; 
	struct FSlateBrush RightShadowBrush; 
};

// ScriptStruct SlateCore.DockTabStyle
struct FDockTabStyle : FSlateWidgetStyle {
	struct FButtonStyle CloseButtonStyle; 
	struct FSlateBrush NormalBrush; 
	struct FSlateBrush ActiveBrush; 
	struct FSlateBrush ColorOverlayTabBrush; 
	struct FSlateBrush ColorOverlayIconBrush; 
	struct FSlateBrush ForegroundBrush; 
	struct FSlateBrush HoveredBrush; 
	struct FSlateBrush ContentAreaBrush; 
	struct FSlateBrush TabWellBrush; 
	struct FMargin TabPadding; 
	float OverlapWidth; 
	struct FSlateColor FlashColor; 
};

// ScriptStruct SlateCore.HeaderRowStyle
struct FHeaderRowStyle : FSlateWidgetStyle {
	struct FTableColumnHeaderStyle ColumnStyle; 
	struct FTableColumnHeaderStyle LastColumnStyle; 
	struct FSplitterStyle ColumnSplitterStyle; 
	struct FSlateBrush BackgroundBrush; 
	struct FSlateColor ForegroundColor; 
};

// ScriptStruct SlateCore.SplitterStyle
struct FSplitterStyle : FSlateWidgetStyle {
	struct FSlateBrush HandleNormalBrush; 
	struct FSlateBrush HandleHighlightBrush; 
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
struct FTableColumnHeaderStyle : FSlateWidgetStyle {
	struct FSlateBrush SortPrimaryAscendingImage; 
	struct FSlateBrush SortPrimaryDescendingImage; 
	struct FSlateBrush SortSecondaryAscendingImage; 
	struct FSlateBrush SortSecondaryDescendingImage; 
	struct FSlateBrush NormalBrush; 
	struct FSlateBrush HoveredBrush; 
	struct FSlateBrush MenuDropdownImage; 
	struct FSlateBrush MenuDropdownNormalBorderBrush; 
	struct FSlateBrush MenuDropdownHoveredBorderBrush; 
};

// ScriptStruct SlateCore.InlineTextImageStyle
struct FInlineTextImageStyle : FSlateWidgetStyle {
	struct FSlateBrush Image; 
	int16_t Baseline; 
};

// ScriptStruct SlateCore.VolumeControlStyle
struct FVolumeControlStyle : FSlateWidgetStyle {
	struct FSliderStyle SliderStyle; 
	struct FSlateBrush HighVolumeImage; 
	struct FSlateBrush MidVolumeImage; 
	struct FSlateBrush LowVolumeImage; 
	struct FSlateBrush NoVolumeImage; 
	struct FSlateBrush MutedImage; 
};

// ScriptStruct SlateCore.SliderStyle
struct FSliderStyle : FSlateWidgetStyle {
	struct FSlateBrush NormalBarImage; 
	struct FSlateBrush HoveredBarImage; 
	struct FSlateBrush DisabledBarImage; 
	struct FSlateBrush NormalThumbImage; 
	struct FSlateBrush HoveredThumbImage; 
	struct FSlateBrush DisabledThumbImage; 
	float BarThickness; 
};

// ScriptStruct SlateCore.ExpandableAreaStyle
struct FExpandableAreaStyle : FSlateWidgetStyle {
	struct FSlateBrush CollapsedImage; 
	struct FSlateBrush ExpandedImage; 
	float RolloutAnimationSeconds; 
};

// ScriptStruct SlateCore.ProgressBarStyle
struct FProgressBarStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundImage; 
	struct FSlateBrush FillImage; 
	struct FSlateBrush MarqueeImage; 
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	struct FEditableTextBoxStyle EditableTextBoxStyle; 
	struct FTextBlockStyle TextStyle; 
};

// ScriptStruct SlateCore.HyperlinkStyle
struct FHyperlinkStyle : FSlateWidgetStyle {
	struct FButtonStyle UnderlineStyle; 
	struct FTextBlockStyle TextStyle; 
	struct FMargin Padding; 
};

// ScriptStruct SlateCore.CheckBoxStyle
struct FCheckBoxStyle : FSlateWidgetStyle {
	enum class ESlateCheckBoxType CheckBoxType; 
	struct FSlateBrush UncheckedImage; 
	struct FSlateBrush UncheckedHoveredImage; 
	struct FSlateBrush UncheckedPressedImage; 
	struct FSlateBrush CheckedImage; 
	struct FSlateBrush CheckedHoveredImage; 
	struct FSlateBrush CheckedPressedImage; 
	struct FSlateBrush UndeterminedImage; 
	struct FSlateBrush UndeterminedHoveredImage; 
	struct FSlateBrush UndeterminedPressedImage; 
	struct FMargin Padding; 
	struct FSlateColor ForegroundColor; 
	struct FSlateColor BorderBackgroundColor; 
	struct FSlateSound CheckedSlateSound; 
	struct FSlateSound UncheckedSlateSound; 
	struct FSlateSound HoveredSlateSound; 
};


// Enum Slate.ETextJustify
enum class ETextJustify : uint8 {
	Left = 0,
	Center = 1,
	Right = 2,
	ETextJustify_MAX = 3
};

// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8 {
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ETextFlowDirection_MAX = 3
};

// Enum Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8 {
	TextChangeOnDismiss = 0,
	TextCommitOnAccept = 1,
	TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction_MAX = 3
};

// Enum Slate.EVirtualKeyboardTrigger
enum class EVirtualKeyboardTrigger : uint8 {
	OnFocusByPointer = 0,
	OnAllFocusEvents = 1,
	EVirtualKeyboardTrigger_MAX = 2
};

// Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8 {
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy_MAX = 2
};

// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8 {
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3
};

// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8 {
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4
};

// Enum Slate.EMultiBlockType
enum class EMultiBlockType : uint8 {
	None = 0,
	ButtonRow = 1,
	EditableText = 2,
	Heading = 3,
	MenuEntry = 4,
	Separator = 5,
	ToolBarButton = 6,
	ToolBarComboButton = 7,
	Widget = 8,
	EMultiBlockType_MAX = 9
};

// Enum Slate.EMultiBoxType
enum class EMultiBoxType : uint8 {
	MenuBar = 0,
	ToolBar = 1,
	VerticalToolBar = 2,
	UniformToolBar = 3,
	Menu = 4,
	ButtonRow = 5,
	EMultiBoxType_MAX = 6
};

// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8 {
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	TopToBottom = 3,
	BottomToTop = 4,
	EProgressBarFillType_MAX = 5
};

// Enum Slate.EStretch
enum class EStretch : uint8 {
	None = 0,
	Fill = 1,
	ScaleToFit = 2,
	ScaleToFitX = 3,
	ScaleToFitY = 4,
	ScaleToFill = 5,
	ScaleBySafeZone = 6,
	UserSpecified = 7,
	EStretch_MAX = 8
};

// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8 {
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3
};

// Enum Slate.EScrollWhenFocusChanges
enum class EScrollWhenFocusChanges : uint8 {
	NoScroll = 0,
	InstantScroll = 1,
	AnimatedScroll = 2,
	EScrollWhenFocusChanges_MAX = 3
};

// Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8 {
	IntoView = 0,
	TopOrLeft = 1,
	Center = 2,
	BottomOrRight = 3,
	EDescendantScrollDestination_MAX = 4
};

// Enum Slate.EListItemAlignment
enum class EListItemAlignment : uint8 {
	EvenlyDistributed = 0,
	EvenlySize = 1,
	EvenlyWide = 2,
	LeftAligned = 3,
	RightAligned = 4,
	CenterAligned = 5,
	Fill = 6,
	EListItemAlignment_MAX = 7
};

// Enum Slate.ETextTransformPolicy
enum class ETextTransformPolicy : uint8 {
	None = 0,
	ToLower = 1,
	ToUpper = 2,
	ETextTransformPolicy_MAX = 3
};

// Enum Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8 {
	None = 0,
	Visible = 1,
	Hidden = 2,
	ECustomizedToolMenuVisibility_MAX = 3
};

// Enum Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8 {
	Primary = 0,
	Secondary = 1,
	NumChords = 2,
	EMultipleKeyBindingIndex_MAX = 3
};

// Enum Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8 {
	None = 0,
	Button = 1,
	ToggleButton = 2,
	RadioButton = 3,
	Check = 4,
	CollapsedButton = 5,
	EUserInterfaceActionType_MAX = 6
};

// ScriptStruct Slate.VirtualKeyboardOptions
struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; 
};

// ScriptStruct Slate.InputChord
struct FInputChord {
	struct FKey Key; 
	char bShift : 1; 
	char bCtrl : 1; 
	char bAlt : 1; 
	char bCmd : 1; 
};

// ScriptStruct Slate.Anchors
struct FAnchors {
	struct FVector2D Minimum; 
	struct FVector2D Maximum; 
};

// ScriptStruct Slate.CustomizedToolMenu
struct FCustomizedToolMenu {
	struct FName Name; 
	struct TMap<struct FName, struct FCustomizedToolMenuEntry> Entries; 
	struct TMap<struct FName, struct FCustomizedToolMenuSection> Sections; 
	struct TMap<struct FName, struct FCustomizedToolMenuNameArray> EntryOrder; 
	struct TArray<struct FName> SectionOrder; 
};

// ScriptStruct Slate.CustomizedToolMenuNameArray
struct FCustomizedToolMenuNameArray {
	struct TArray<struct FName> Names; 
};

// ScriptStruct Slate.CustomizedToolMenuSection
struct FCustomizedToolMenuSection {
	enum class ECustomizedToolMenuVisibility Visibility; 
};

// ScriptStruct Slate.CustomizedToolMenuEntry
struct FCustomizedToolMenuEntry {
	enum class ECustomizedToolMenuVisibility Visibility; 
};


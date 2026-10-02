// Enum Icarus.EGOAPCharacterStance
enum class EGOAPCharacterStance : uint8 {
	Standing = 0,
	Sitting = 1,
	Lying = 2,
	EGOAPCharacterStance_MAX = 3
};

// Enum Icarus.EViewTraceResultPriority
enum class EViewTraceResultPriority : uint8 {
	Blocking = 0,
	Ignore = 1,
	Low = 2,
	Normal = 3,
	High = 4,
	EViewTraceResultPriority_MAX = 5
};

// Enum Icarus.EViewTraceHitType
enum class EViewTraceHitType : uint8 {
	None = 0,
	LineTrace = 1,
	VolumeTrace = 2,
	EViewTraceHitType_MAX = 3
};

// Enum Icarus.EBuildingDestroyReason
enum class EBuildingDestroyReason : uint8 {
	Stability = 0,
	Player = 1,
	Damaged = 2,
	Replaced = 3,
	EBuildingDestroyReason_MAX = 4
};

// Enum Icarus.EStealthAttackType
enum class EStealthAttackType : uint8 {
	NoStealth = 0,
	PartialStealth = 1,
	FullStealth = 2,
	EStealthAttackType_MAX = 3
};

// Enum Icarus.EProjectileBreakModifier
enum class EProjectileBreakModifier : uint8 {
	NoChange = 0,
	Unbreakable = 1,
	MustBreak = 2,
	EProjectileBreakModifier_MAX = 3
};

// Enum Icarus.ETalentState
enum class ETalentState : uint8 {
	Locked = 0,
	Available = 1,
	Unlocked = 2,
	Completed = 3,
	ETalentState_MAX = 4
};

// Enum Icarus.EDynamicItemProperties
enum class EDynamicItemProperties : uint8 {
	AssociatedItemInventoryId = 0,
	AssociatedItemInventorySlot = 1,
	DynamicState = 2,
	GunCurrentMagSize = 3,
	CurrentAmmoType = 4,
	BuildingVariation = 5,
	Durability = 6,
	ItemableStack = 7,
	MillijoulesRemaining = 8,
	TransmutableUnits = 9,
	Fillable_StoredUnits = 10,
	Fillable_Type = 11,
	Decayable_CurrentSpoilTime = 12,
	InventoryContainer_LinkedInventoryId = 13,
	MaxDynamicItemProperties = 14,
	EDynamicItemProperties_MAX = 15
};

// Enum Icarus.EBestiaryUnlockPopup
enum class EBestiaryUnlockPopup : uint8 {
	Creature = 0,
	Stat1 = 1,
	Stat2 = 2,
	Lore1 = 3,
	Lore2 = 4,
	Lore3 = 5,
	Weaknesses = 6,
	Loot = 7,
	EBestiaryUnlockPopup_MAX = 8
};

// Enum Icarus.ELastProspectHostType
enum class ELastProspectHostType : uint8 {
	LocalHost = 0,
	SteamP2P = 1,
	DedicatedServer = 2,
	ELastProspectHostType_MAX = 3
};

// Enum Icarus.EEndProspectSessionContext
enum class EEndProspectSessionContext : uint8 {
	Undefined = 0,
	HostLeavingSession = 1,
	ExpiredProspect = 2,
	Error_InvalidHost = 3,
	Error_FailedToHostSession = 4,
	EEndProspectSessionContext_MAX = 5
};

// Enum Icarus.EOverallSetting
enum class EOverallSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	EOverallSetting_MAX = 256
};

// Enum Icarus.EViewDistanceSetting
enum class EViewDistanceSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	EViewDistanceSetting_MAX = 256
};

// Enum Icarus.EPostProcessingSetting
enum class EPostProcessingSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	EPostProcessingSetting_MAX = 256
};

// Enum Icarus.EShadowsSetting
enum class EShadowsSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	EShadowsSetting_MAX = 256
};

// Enum Icarus.EShadowFilterMethodSetting
enum class EShadowFilterMethodSetting : uint8 {
	PCF = 0,
	PCSS = 1,
	NumSettings = 2,
	Custom = 255,
	EShadowFilterMethodSetting_MAX = 256
};

// Enum Icarus.ETexturesSetting
enum class ETexturesSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	ETexturesSetting_MAX = 256
};

// Enum Icarus.EEffectsSetting
enum class EEffectsSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	EEffectsSetting_MAX = 256
};

// Enum Icarus.EFoliageSetting
enum class EFoliageSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	EFoliageSetting_MAX = 256
};

// Enum Icarus.EShadingSetting
enum class EShadingSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	EShadingSetting_MAX = 256
};

// Enum Icarus.EAntiAliasingSetting
enum class EAntiAliasingSetting : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	NumSettings = 5,
	Custom = 255,
	EAntiAliasingSetting_MAX = 256
};

// Enum Icarus.ESkyboxQualitySetting
enum class ESkyboxQualitySetting : uint8 {
	Low = 0,
	Normal = 1,
	NumSettings = 2,
	Custom = 255,
	ESkyboxQualitySetting_MAX = 256
};

// Enum Icarus.ESuperResolutionSetting
enum class ESuperResolutionSetting : uint8 {
	Off = 0,
	Auto = 1,
	Quality = 2,
	Balanced = 3,
	Performance = 4,
	Ultra_Performance = 5,
	NumSettings = 6,
	Custom = 255,
	ESuperResolutionSetting_MAX = 256
};

// Enum Icarus.ENVIDIAReflexLowLatencySetting
enum class ENVIDIAReflexLowLatencySetting : uint8 {
	Off = 0,
	On = 1,
	On_Plus_Boost = 2,
	NumSettings = 3,
	Custom = 255,
	ENVIDIAReflexLowLatencySetting_MAX = 256
};

// Enum Icarus.EFSRModeSetting
enum class EFSRModeSetting : uint8 {
	Off = 0,
	Performance = 1,
	Balanced = 2,
	Quality = 3,
	Ultra_Quality = 4,
	NumSettings = 5,
	Custom = 255,
	EFSRModeSetting_MAX = 256
};

// Enum Icarus.EDisplayTemperatureSetting
enum class EDisplayTemperatureSetting : uint8 {
	Celsius = 0,
	Fahrenheit = 1,
	NumSettings = 2,
	Custom = 255,
	EDisplayTemperatureSetting_MAX = 256
};

// Enum Icarus.ECrosshairColorSetting
enum class ECrosshairColorSetting : uint8 {
	White = 0,
	Red = 1,
	Green = 2,
	Blue = 3,
	Yellow = 4,
	Pink = 5,
	Cyan = 6,
	Black = 7,
	NumSettings = 8,
	Custom = 255,
	ECrosshairColorSetting_MAX = 256
};

// Enum Icarus.ECrosshairStyleSetting
enum class ECrosshairStyleSetting : uint8 {
	Dot = 0,
	Chevron = 1,
	Circle = 2,
	Cross = 3,
	Plus = 4,
	Diamond = 5,
	Notched = 6,
	Scope = 7,
	Bullseye = 8,
	Spread = 9,
	Target = 10,
	NumSettings = 11,
	Custom = 255,
	ECrosshairStyleSetting_MAX = 256
};

// Enum Icarus.EInputTypeSetting
enum class EInputTypeSetting : uint8 {
	Keyboard = 0,
	Controller = 1,
	NumSettings = 2,
	Custom = 255,
	EInputTypeSetting_MAX = 256
};

// Enum Icarus.EControllerIconsSetting
enum class EControllerIconsSetting : uint8 {
	Xbox = 0,
	Playstation = 1,
	Switch = 2,
	NumSettings = 3,
	Custom = 255,
	EControllerIconsSetting_MAX = 256
};

// Enum Icarus.ERemoteUserSetting
enum class ERemoteUserSetting : uint8 {
	DisableCameraFocusOnProcessor = 0,
	ERemoteUserSetting_MAX = 1
};

// Enum Icarus.EEventEndReason
enum class EEventEndReason : uint8 {
	InvalidReason = 0,
	Completed = 1,
	Timeout = 2,
	Aborted = 3,
	EEventEndReason_MAX = 4
};

// Enum Icarus.ESettlementNPCAilment
enum class ESettlementNPCAilment : uint8 {
	None = 0,
	Sick = 1,
	Injured = 2,
	ESettlementNPCAilment_MAX = 3
};

// Enum Icarus.ESettlementTaskOrigin
enum class ESettlementTaskOrigin : uint8 {
	Pooled = 0,
	ActivityDefault = 1,
	IncapacitatedOverride = 2,
	BehaviourOverride = 3,
	ESettlementTaskOrigin_MAX = 4
};

// Enum Icarus.ESettlementNPCActivity
enum class ESettlementNPCActivity : uint8 {
	Work = 0,
	Eat = 1,
	Sleep = 2,
	Idle = 3,
	UnderAttack = 4,
	ESettlementNPCActivity_MAX = 5
};

// Enum Icarus.ESettlementVisitorLeaveReason
enum class ESettlementVisitorLeaveReason : uint8 {
	Rejected = 0,
	StayExpired = 1,
	ESettlementVisitorLeaveReason_MAX = 2
};

// Enum Icarus.ESettlementBuildState
enum class ESettlementBuildState : uint8 {
	NotStarted = 0,
	Scheduled = 1,
	InProgress = 2,
	Complete = 3,
	Damaged = 4,
	Destroyed = 5,
	ESettlementBuildState_MAX = 6
};

// Enum Icarus.ELevel
enum class ELevel : uint8 {
	NoLogging = 0,
	Error = 1,
	Warning = 2,
	Info = 3,
	ELevel_MAX = 4
};

// Enum Icarus.ERequestPlayerPersonaErrorCode
enum class ERequestPlayerPersonaErrorCode : uint8 {
	NoError = 0,
	InvalidId = 1,
	RequestTimedOut = 2,
	ERequestPlayerPersonaErrorCode_MAX = 3
};

// Enum Icarus.EDeviceState
enum class EDeviceState : uint8 {
	On = 0,
	Idle = 1,
	Off = 2,
	EDeviceState_MAX = 3
};

// Enum Icarus.EActionableEventType
enum class EActionableEventType : uint8 {
	Undefined = 0,
	Primary = 1,
	Secondary = 2,
	Tertiary = 3,
	Reload = 4,
	MAX_VALUE = 5,
	EActionableEventType_MAX = 6
};

// Enum Icarus.EActionableTrigger
enum class EActionableTrigger : uint8 {
	ActionPressed = 0,
	ActionReleased = 1,
	ActionHeld = 2,
	EActionableTrigger_MAX = 3
};

// Enum Icarus.EPlantGrowthStates
enum class EPlantGrowthStates : uint8 {
	Unseeded = 0,
	Stage1 = 1,
	Stage2 = 2,
	Stage3 = 3,
	Stage4 = 4,
	Mature = 5,
	Decayed = 6,
	EPlantGrowthStates_MAX = 7
};

// Enum Icarus.EProcessorStoppedReason
enum class EProcessorStoppedReason : uint8 {
	GenericFailure = 0,
	NoEnergy = 1,
	NoResources = 2,
	NoRecipe = 3,
	NoQueue = 4,
	NoSpace = 5,
	NotTurnedOn = 6,
	NoResourceRemaining = 7,
	PlayerStopped = 8,
	EProcessorStoppedReason_MAX = 9
};

// Enum Icarus.ECaveLightType
enum class ECaveLightType : uint8 {
	Spot = 0,
	Rect = 1,
	ECaveLightType_MAX = 2
};

// Enum Icarus.EAliveState
enum class EAliveState : uint8 {
	Alive = 0,
	Dead = 1,
	EAliveState_MAX = 2
};

// Enum Icarus.EAIAudioState
enum class EAIAudioState : uint8 {
	Undefined = 0,
	Idle = 1,
	Fleeing = 2,
	Attacking = 3,
	Dead = 4,
	Relaxing = 5,
	Mounted = 6,
	Stalking = 7,
	EAIAudioState_MAX = 8
};

// Enum Icarus.EAIEventRequestResponse
enum class EAIEventRequestResponse : uint8 {
	Invalid = 0,
	FailedToStart = 1,
	EventStarted = 2,
	PendingLoad = 3,
	EAIEventRequestResponse_MAX = 4
};

// Enum Icarus.EHeatmapColorChannel
enum class EHeatmapColorChannel : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	AnyChannel = 4,
	EHeatmapColorChannel_MAX = 5
};

// Enum Icarus.ERelationshipType
enum class ERelationshipType : uint8 {
	Neutral = 0,
	Hostile = 1,
	Friendly = 2,
	ERelationshipType_MAX = 3
};

// Enum Icarus.EAIVocalisationType
enum class EAIVocalisationType : uint8 {
	Attack = 0,
	Flinch = 1,
	Death = 2,
	EAIVocalisationType_MAX = 3
};

// Enum Icarus.EAnimStateFMODParam
enum class EAnimStateFMODParam : uint8 {
	NotAnimating = 0,
	Animating = 1,
	EAnimStateFMODParam_MAX = 2
};

// Enum Icarus.EArcadeMachineRankingType
enum class EArcadeMachineRankingType : uint8 {
	LowerIsBetter = 0,
	GreaterIsBetter = 1,
	EArcadeMachineRankingType_MAX = 2
};

// Enum Icarus.EGenderedArmourType
enum class EGenderedArmourType : uint8 {
	Invalid = 0,
	MaleThirdPerson = 1,
	FemaleThirdPerson = 2,
	GenericFirstPerson = 3,
	EGenderedArmourType_MAX = 4
};

// Enum Icarus.EArmourType
enum class EArmourType : uint8 {
	Undefined = 0,
	Head = 1,
	Chest = 2,
	Hands = 3,
	Legs = 4,
	Feet = 5,
	Undersuit = 6,
	Skin_Head = 7,
	Undersuit_Helmet = 8,
	Skin_Head_Hair = 9,
	Backpack = 10,
	Gauntlet = 11,
	EArmourType_MAX = 12
};

// Enum Icarus.EAssetType
enum class EAssetType : uint8 {
	Object = 0,
	Class = 1,
	EAssetType_MAX = 2
};

// Enum Icarus.EAudioOcclusionMode
enum class EAudioOcclusionMode : uint8 {
	Complex = 0,
	SourceSimple = 1,
	SourceAndListenerSimple = 2,
	EAudioOcclusionMode_MAX = 3
};

// Enum Icarus.EAudioShelterState
enum class EAudioShelterState : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	EAudioShelterState_MAX = 3
};

// Enum Icarus.EAuthorityType
enum class EAuthorityType : uint8 {
	ClientOnly = 0,
	ServerOnly = 1,
	Both = 2,
	EAuthorityType_MAX = 3
};

// Enum Icarus.ERateLimitedRequests
enum class ERateLimitedRequests : uint8 {
	None = 0,
	GetDropships = 1,
	GetMetaResources = 2,
	GetMetaInventory = 3,
	GetDropInventory = 4,
	GetWorkshopPacks = 5,
	GetCredits = 6,
	GetNotifications = 7,
	SyncTalents = 8,
	ERateLimitedRequests_MAX = 9
};

// Enum Icarus.EPayloadDeploymentType
enum class EPayloadDeploymentType : uint8 {
	OnProjectileMovementComplete = 0,
	OnLaunch = 1,
	OnBounceImmediate = 2,
	OnBounceWaitForHalt = 3,
	OnTimerElapsed = 4,
	EPayloadDeploymentType_MAX = 5
};

// Enum Icarus.EBiomeImageType
enum class EBiomeImageType : uint8 {
	None = 0,
	Small = 1,
	Medium = 2,
	Large = 3,
	EBiomeImageType_MAX = 4
};

// Enum Icarus.EBuildingPieceType
enum class EBuildingPieceType : uint8 {
	Floor = 0,
	Wall = 1,
	Frame = 2,
	Ramp = 3,
	EBuildingPieceType_MAX = 4
};

// Enum Icarus.EBuildingOpenFMODParam
enum class EBuildingOpenFMODParam : uint8 {
	Closed = 0,
	Open = 1,
	EBuildingOpenFMODParam_MAX = 2
};

// Enum Icarus.EBuildingMeshType
enum class EBuildingMeshType : uint8 {
	Invalid = 0,
	BaseMesh = 1,
	FrameMesh = 2,
	EBuildingMeshType_MAX = 3
};

// Enum Icarus.EBuildingUnzipFMODParam
enum class EBuildingUnzipFMODParam : uint8 {
	Normal = 0,
	Unzipping = 1,
	EBuildingUnzipFMODParam_MAX = 2
};

// Enum Icarus.ECameraPathMode
enum class ECameraPathMode : uint8 {
	Idle = 0,
	Recording = 1,
	Playing = 2,
	ECameraPathMode_MAX = 3
};

// Enum Icarus.ECaveContextFMODParam
enum class ECaveContextFMODParam : uint8 {
	None = 0,
	ListenerOutSourceOut = 1,
	ListenerOutSourceInCave = 2,
	ListenerInCaveSourceOut = 3,
	ListenerInCaveSourceInCave = 4,
	ECaveContextFMODParam_MAX = 5
};

// Enum Icarus.ECombinedCaveComponentFlags
enum class ECombinedCaveComponentFlags : uint8 {
	None = 0,
	EntranceComponent = 1,
	Void = 2,
	ECombinedCaveComponentFlags_MAX = 3
};

// Enum Icarus.EChallengeTypes
enum class EChallengeTypes : uint8 {
	KillCreature = 0,
	CriticalHit = 1,
	StealthAttack = 2,
	SkinCreature = 3,
	HarvestCreatureItem = 4,
	HarvestPlant = 5,
	FellTree = 6,
	CollectTreeItem = 7,
	FullyMineVoxel = 8,
	MineResource = 9,
	EChallengeTypes_MAX = 10
};

// Enum Icarus.ECharacterCustomisationContext
enum class ECharacterCustomisationContext : uint8 {
	Undefined = 0,
	CharacterCreation = 1,
	HABCustomisation = 2,
	ECharacterCustomisationContext_MAX = 3
};

// Enum Icarus.ECharacterBodyType
enum class ECharacterBodyType : uint8 {
	Masculine = 0,
	Feminine = 1,
	Neutral = 2,
	ECharacterBodyType_MAX = 3
};

// Enum Icarus.ECharacterOptionCategory
enum class ECharacterOptionCategory : uint8 {
	Head = 0,
	Body = 1,
	BodyColor = 2,
	HairStyle = 3,
	HairColor = 4,
	Head_Tattoo = 5,
	Head_Scar = 6,
	Head_FacialHair = 7,
	SkinTone = 8,
	Color = 9,
	EyeColor = 10,
	Decal = 11,
	ECharacterOptionCategory_MAX = 12
};

// Enum Icarus.EControllerIconSet
enum class EControllerIconSet : uint8 {
	None = 0,
	Xbox = 1,
	Playstation = 2,
	NintendoSwitch = 3,
	EControllerIconSet_MAX = 4
};

// Enum Icarus.ERefundPermission
enum class ERefundPermission : uint8 {
	Inherit = 0,
	Block = 1,
	Allow = 2,
	ERefundPermission_MAX = 3
};

// Enum Icarus.ECreatureAudioThreatTargetType
enum class ECreatureAudioThreatTargetType : uint8 {
	Invalid = 0,
	OtherPlayer = 1,
	LocalPlayer = 2,
	OtherCreature = 3,
	Stimulus = 4,
	ECreatureAudioThreatTargetType_MAX = 5
};

// Enum Icarus.ECreatureFoliageFMODParam
enum class ECreatureFoliageFMODParam : uint8 {
	NotInFoliage = 0,
	InFoliage = 1,
	ECreatureFoliageFMODParam_MAX = 2
};

// Enum Icarus.ECreatureFootstepTypeFMODParam
enum class ECreatureFootstepTypeFMODParam : uint8 {
	FrontFoot = 0,
	RearFoot = 1,
	Jump = 2,
	JumpLand = 3,
	ECreatureFootstepTypeFMODParam_MAX = 4
};

// Enum Icarus.ECustomGameStatType
enum class ECustomGameStatType : uint8 {
	Bool = 0,
	Int = 1,
	DropDown = 2,
	ECustomGameStatType_MAX = 3
};

// Enum Icarus.ECustomGameStatCategory
enum class ECustomGameStatCategory : uint8 {
	Player = 0,
	Weather = 1,
	Creatures = 2,
	Misc = 3,
	ECustomGameStatCategory_MAX = 4
};

// Enum Icarus.ECustomGameStatChangeability
enum class ECustomGameStatChangeability : uint8 {
	OnProspectCreation = 0,
	OnProspectLoad = 1,
	Anytime = 2,
	ECustomGameStatChangeability_MAX = 3
};

// Enum Icarus.EDamageTypeFMODParam
enum class EDamageTypeFMODParam : uint8 {
	Undefined = 0,
	Pure = 1,
	Physical = 2,
	Melee = 3,
	Ranged = 4,
	Fire = 5,
	FallDamage = 6,
	Collision = 7,
	Poison = 8,
	Wind = 9,
	EDamageTypeFMODParam_MAX = 10
};

// Enum Icarus.EDataValid
enum class EDataValid : uint8 {
	DataValid = 0,
	DataInvalid = 1,
	EDataValid_MAX = 2
};

// Enum Icarus.EWorldPlacementType
enum class EWorldPlacementType : uint8 {
	GroundPlacement = 0,
	WallPlacement = 1,
	WaterPlacement = 2,
	GroundOrWallPlacement = 3,
	CeilingPlacement = 4,
	LavaPlacement = 5,
	EWorldPlacementType_MAX = 6
};

// Enum Icarus.EDeployableSnapBehaviour
enum class EDeployableSnapBehaviour : uint8 {
	WorldPlacementOnly = 0,
	SnapPlacementOnly = 1,
	WorldAndSnap = 2,
	EDeployableSnapBehaviour_MAX = 3
};

// Enum Icarus.EDialogueRedirectCondition
enum class EDialogueRedirectCondition : uint8 {
	None = 0,
	IsOpenWorldProspect = 1,
	IsMissionProspect = 2,
	EDialogueRedirectCondition_MAX = 3
};

// Enum Icarus.EDropAbundance
enum class EDropAbundance : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	EDropAbundance_MAX = 3
};

// Enum Icarus.EDropTemperature
enum class EDropTemperature : uint8 {
	Cold = 0,
	Normal = 1,
	Hot = 2,
	EDropTemperature_MAX = 3
};

// Enum Icarus.EDropshipDescentStateFMODParam
enum class EDropshipDescentStateFMODParam : uint8 {
	MainEngines = 0,
	Booster = 1,
	Freefall = 2,
	Landed = 3,
	EnterSeat = 4,
	CrashBegin = 5,
	CrashEnd = 6,
	EDropshipDescentStateFMODParam_MAX = 7
};

// Enum Icarus.EDynamicQuestDifficulty
enum class EDynamicQuestDifficulty : uint8 {
	None = 0,
	Easy = 1,
	Medium = 2,
	Hard = 3,
	EDynamicQuestDifficulty_MAX = 4
};

// Enum Icarus.EEnvironmentLightningTargetFMODParam
enum class EEnvironmentLightningTargetFMODParam : uint8 {
	Random = 0,
	Player = 1,
	Tree = 2,
	Building = 3,
	EEnvironmentLightningTargetFMODParam_MAX = 4
};

// Enum Icarus.EExperienceSource
enum class EExperienceSource : uint8 {
	XP_None = 0,
	XP_OnAction = 1,
	XP_OnInteract = 2,
	XP_OnHit = 3,
	XP_OnDamaged = 4,
	XP_OnDeath = 5,
	XP_OnCraft = 6,
	XP_OnAchievement = 7,
	XP_Misc = 8,
	XP_MAX = 9
};

// Enum Icarus.ECropMeshRotationType
enum class ECropMeshRotationType : uint8 {
	NoRotation = 0,
	Random90 = 1,
	FullyRandom = 2,
	ECropMeshRotationType_MAX = 3
};

// Enum Icarus.EFieldGuideItemHotToObtain
enum class EFieldGuideItemHotToObtain : uint8 {
	Unobtainium = 0,
	Harvest = 1,
	Craft = 2,
	Kill = 4,
	Fishing = 8,
	PickAxe = 16,
	SledgeHammer = 32,
	DrillOrExtract = 64,
	Buy_At_Workshop = 128,
	EFieldGuideItemHotToObtain_MAX = 129
};

// Enum Icarus.EFirearmAttachType
enum class EFirearmAttachType : uint8 {
	Weapon = 0,
	Player = 1,
	EFirearmAttachType_MAX = 2
};

// Enum Icarus.EFireExtinguishResult
enum class EFireExtinguishResult : uint8 {
	Failed = 0,
	ExtinguishedCombustion = 1,
	ExtinguishedPyrolysis = 2,
	EFireExtinguishResult_MAX = 3
};

// Enum Icarus.EFireMode
enum class EFireMode : uint8 {
	Semiauto = 0,
	Burst = 1,
	Auto = 2,
	EFireMode_MAX = 3
};

// Enum Icarus.EFireStateFMODParam
enum class EFireStateFMODParam : uint8 {
	NotOnFire = 0,
	OnFire = 1,
	EFireStateFMODParam_MAX = 2
};

// Enum Icarus.EFishType
enum class EFishType : uint8 {
	None = 0,
	Saltwater = 1,
	Freshwater = 2,
	EFishType_MAX = 3
};

// Enum Icarus.EFishRarity
enum class EFishRarity : uint8 {
	None = 0,
	Common = 1,
	Uncommon = 2,
	Rare = 3,
	Unique = 4,
	EFishRarity_MAX = 5
};

// Enum Icarus.EFlagsTableType
enum class EFlagsTableType : uint8 {
	D_CharacterFlags = 0,
	D_SessionFlags = 1,
	D_AccountFlags = 2,
	D_DLCPackageData = 3,
	None = 255,
	EFlagsTableType_MAX = 256
};

// Enum Icarus.EFlammableAudioLocationType
enum class EFlammableAudioLocationType : uint8 {
	ActorLocation = 0,
	BoundsOrigin = 1,
	BoundsBase = 2,
	EFlammableAudioLocationType_MAX = 3
};

// Enum Icarus.EFlammablePropagationType
enum class EFlammablePropagationType : uint8 {
	None = 0,
	Self = 1,
	FireInstance = 2,
	EFlammablePropagationType_MAX = 3
};

// Enum Icarus.EFlammableState
enum class EFlammableState : uint8 {
	None = 0,
	Detached = 1,
	Pyrolysis = 2,
	Combusting = 3,
	Combusted = 4,
	Destroyed = 5,
	EFlammableState_MAX = 6
};

// Enum Icarus.EFLODActorState
enum class EFLODActorState : uint8 {
	Undefined = 0,
	Revealing = 2,
	Revealed = 4,
	Concealing = 8,
	Concealed = 16,
	EFLODActorState_MAX = 17
};

// Enum Icarus.EFLODLevelInfluenceType
enum class EFLODLevelInfluenceType : uint8 {
	None = 0,
	ViewTrace = 1,
	Distance = 2,
	EFLODLevelInfluenceType_MAX = 3
};

// Enum Icarus.EAnimOverlayState
enum class EAnimOverlayState : uint8 {
	Default = 0,
	OneHanded = 1,
	Bow = 2,
	TwoHandedRifle = 3,
	Driving = 4,
	Spear = 5,
	Carrying = 6,
	Firearm = 7,
	Fishing = 8,
	EAnimOverlayState_MAX = 9
};

// Enum Icarus.ECreatureSex
enum class ECreatureSex : uint8 {
	Unknown = 0,
	Female = 1,
	Male = 2,
	ECreatureSex_MAX = 3
};

// Enum Icarus.EGlobalDropStateFMODParam
enum class EGlobalDropStateFMODParam : uint8 {
	Hab = 0,
	Dropship = 1,
	Prospect = 2,
	LoadingProspect = 3,
	EGlobalDropStateFMODParam_MAX = 4
};

// Enum Icarus.EGlobalEnvironmentBiomeFMODParam
enum class EGlobalEnvironmentBiomeFMODParam : uint8 {
	None = 0,
	Conifer = 1,
	Arctic = 2,
	Desert = 3,
	Lava = 4,
	Wetlands = 5,
	Grasslands = 6,
	EGlobalEnvironmentBiomeFMODParam_MAX = 7
};

// Enum Icarus.EGlobalEnvironmentTerrainZoneFMODParam
enum class EGlobalEnvironmentTerrainZoneFMODParam : uint8 {
	Default = 0,
	Canyon_Narrow = 1,
	Canyon_Med = 2,
	Canyon_Wide = 3,
	EGlobalEnvironmentTerrainZoneFMODParam_MAX = 4
};

// Enum Icarus.EGlobalLoadingScreenStateFMODParam
enum class EGlobalLoadingScreenStateFMODParam : uint8 {
	LoadingScreen_Inactive = 0,
	LoadingScreen_Active = 1,
	LoadingScreen_MAX = 2
};

// Enum Icarus.EGlobalPlayerCharacterVoiceFMODParam
enum class EGlobalPlayerCharacterVoiceFMODParam : uint8 {
	None = 0,
	VoiceA = 1,
	VoiceB = 2,
	EGlobalPlayerCharacterVoiceFMODParam_MAX = 3
};

// Enum Icarus.EActionRangeCheckBehaviour
enum class EActionRangeCheckBehaviour : uint8 {
	ValidMove = 0,
	CustomFunction = 1,
	Both = 2,
	EActionRangeCheckBehaviour_MAX = 3
};

// Enum Icarus.EGraphicsCardVendor
enum class EGraphicsCardVendor : uint8 {
	Invalid = 0,
	Unknown = 1,
	Nvidia = 2,
	AMD = 3,
	Intel = 4,
	EGraphicsCardVendor_MAX = 5
};

// Enum Icarus.EGreatHuntMissionType
enum class EGreatHuntMissionType : uint8 {
	None = 0,
	Standard = 1,
	Choice = 2,
	Optional = 3,
	Final = 4,
	EGreatHuntMissionType_MAX = 5
};

// Enum Icarus.EInstancedLevelPickType
enum class EInstancedLevelPickType : uint8 {
	FirstItem = 0,
	EInstancedLevelPickType_MAX = 1
};

// Enum Icarus.EHuntingClueType
enum class EHuntingClueType : uint8 {
	Footprint = 0,
	BloodTrail = 1,
	EHuntingClueType_MAX = 2
};

// Enum Icarus.EIcarusActorDestroyReason
enum class EIcarusActorDestroyReason : uint8 {
	Other = 0,
	Pickup = 1,
	Durability = 2,
	EIcarusActorDestroyReason_MAX = 3
};

// Enum Icarus.EProgressState
enum class EProgressState : uint8 {
	Prototype = 0,
	Review = 1,
	Complete = 2,
	NumStates = 3,
	EProgressState_MAX = 4
};

// Enum Icarus.ERollResult
enum class ERollResult : uint8 {
	Success = 0,
	Failure = 1,
	ERollResult_MAX = 2
};

// Enum Icarus.ECheatsEnabled
enum class ECheatsEnabled : uint8 {
	Enabled = 0,
	NotEnabled = 1,
	ECheatsEnabled_MAX = 2
};

// Enum Icarus.EIcarusClaimLaunchConfirmationStep
enum class EIcarusClaimLaunchConfirmationStep : uint8 {
	ClaimingProspect = 0,
	LoadingProspect = 1,
	EIcarusClaimLaunchConfirmationStep_MAX = 2
};

// Enum Icarus.ELookAtType
enum class ELookAtType : uint8 {
	PitchAndYaw = 0,
	VectorLocation = 1,
	AbsoluteLocation = 2,
	ELookAtType_MAX = 3
};

// Enum Icarus.EIcarusDamageType
enum class EIcarusDamageType : uint8 {
	Undefined = 0,
	Pure = 1,
	Melee = 2,
	Projectile = 3,
	Fire = 4,
	FallDamage = 5,
	Collision = 6,
	Poison = 7,
	Wind = 8,
	Shield = 9,
	Returned = 10,
	Frost = 11,
	Electric = 12,
	Explosive = 13,
	Shatter = 14,
	Felling = 15,
	Laser = 16,
	EIcarusDamageType_MAX = 17
};

// Enum Icarus.EErrorTarget
enum class EErrorTarget : uint8 {
	Log = 0,
	Widget = 1,
	Dialog = 2,
	EErrorTarget_MAX = 3
};

// Enum Icarus.EErrorAction
enum class EErrorAction : uint8 {
	Immediate = 0,
	Kick = 1,
	Queue = 2,
	AppClose = 3,
	EErrorAction_MAX = 4
};

// Enum Icarus.ECanHitResult
enum class ECanHitResult : uint8 {
	CantHit = 0,
	Miss = 1,
	Hit = 2,
	ECanHitResult_MAX = 3
};

// Enum Icarus.EFound
enum class EFound : uint8 {
	Found = 0,
	NotFound = 1,
	EFound_MAX = 2
};

// Enum Icarus.EMissionState
enum class EMissionState : uint8 {
	InProgress = 0,
	Completed = 1,
	Abandoned = 2,
	Failed = 3,
	MAX = 4
};

// Enum Icarus.ESettingsCategory
enum class ESettingsCategory : uint8 {
	Display = 0,
	Audio = 1,
	Gameplay = 2,
	Controls = 3,
	ESettingsCategory_MAX = 4
};

// Enum Icarus.EDisplayMode
enum class EDisplayMode : uint8 {
	Fullscreen = 0,
	Borderless = 1,
	Windowed = 2,
	EDisplayMode_MAX = 3
};

// Enum Icarus.ESettingType
enum class ESettingType : uint8 {
	Bool = 0,
	Int = 1,
	Float = 2,
	Enum = 3,
	String = 4,
	ESettingType_MAX = 5
};

// Enum Icarus.EGOAPFactSource
enum class EGOAPFactSource : uint8 {
	VisionPerception = 0,
	SoundPerception = 1,
	DamagePerception = 2,
	ProtectiveMotivation = 3,
	EGOAPFactSource_MAX = 4
};

// Enum Icarus.EGOAPObjectType
enum class EGOAPObjectType : uint8 {
	Food = 0,
	Water = 1,
	Enemy = 2,
	MaxObjectTypes = 3,
	EGOAPObjectType_MAX = 4
};

// Enum Icarus.EGOAPProperty
enum class EGOAPProperty : uint8 {
	Hungry = 0,
	Thirsty = 1,
	HasFood = 2,
	HasWater = 3,
	FoundFood = 4,
	FoundWater = 5,
	Wander = 6,
	Scared = 7,
	RunForSafety = 8,
	MaxProperties = 9,
	EGOAPProperty_MAX = 10
};

// Enum Icarus.EIcarusItemContext
enum class EIcarusItemContext : uint8 {
	None = 0,
	World = 1,
	EquipHand = 2,
	EquipBack = 3,
	Vehicle = 4,
	Deployable = 5,
	Slotable = 6,
	Buildable = 7,
	DropshipPart = 8,
	Gravestone = 9,
	Light = 10,
	EIcarusItemContext_MAX = 11
};

// Enum Icarus.EIcarusJoinConfirmationStep
enum class EIcarusJoinConfirmationStep : uint8 {
	FindingSession = 0,
	JoiningProspect = 1,
	LoadingProspect = 2,
	EIcarusJoinConfirmationStep_MAX = 3
};

// Enum Icarus.EDestroyPattern
enum class EDestroyPattern : uint8 {
	RadialOutward = 0,
	RadialInward = 1,
	Random = 2,
	EDestroyPattern_MAX = 3
};

// Enum Icarus.EDirtierMode
enum class EDirtierMode : uint8 {
	OwningActor = 0,
	AffectedObjectsList = 1,
	EDirtierMode_MAX = 2
};

// Enum Icarus.EGOAPControllerState
enum class EGOAPControllerState : uint8 {
	Idle = 0,
	GetNewAction = 1,
	MoveToAction = 2,
	PerformAction = 3,
	EGOAPControllerState_MAX = 4
};

// Enum Icarus.EIcarusOrchestrationStateFlag
enum class EIcarusOrchestrationStateFlag : uint8 {
	None = 0,
	DatabaseReloadRequired = 1,
	DatabaseReloadBegin = 2,
	DatabaseReloadComplete = 3,
	ActorsReloadedToDatabaseState = 4,
	IcarusBeginPlay = 5,
	ClearedAllConcerns = 6,
	RaiseCurtain = 7,
	GameModeBeginPlay = 8,
	AllRequiredActorsSpawned = 9,
	EIcarusOrchestrationStateFlag_MAX = 10
};

// Enum Icarus.EMetaHashResult
enum class EMetaHashResult : uint8 {
	None = 0,
	FilesNotFound = 1,
	BadFileSize = 2,
	ExtraFilesFound = 4,
	ModFilesFound = 8,
	All = 255,
	EMetaHashResult_MAX = 256
};

// Enum Icarus.EInteractableHitLookupType
enum class EInteractableHitLookupType : uint8 {
	None = 0,
	FLOD_Instance = 1,
	EInteractableHitLookupType_MAX = 2
};

// Enum Icarus.EDataValidity
enum class EDataValidity : uint8 {
	Valid = 0,
	Invalid = 1,
	EDataValidity_MAX = 2
};

// Enum Icarus.ESurvivalConsumableType
enum class ESurvivalConsumableType : uint8 {
	Food = 0,
	Water = 1,
	Oxygen = 2,
	ESurvivalConsumableType_MAX = 3
};

// Enum Icarus.ERequestResourceComponentDataSource
enum class ERequestResourceComponentDataSource : uint8 {
	ViewTrace = 0,
	OpenUI = 1,
	ERequestResourceComponentDataSource_MAX = 2
};

// Enum Icarus.EForceRemovePlayerReason
enum class EForceRemovePlayerReason : uint8 {
	Initialisation_NotApproved = 0,
	KickedByHostingPlayer = 1,
	EForceRemovePlayerReason_MAX = 2
};

// Enum Icarus.ELeaveProspectSessionType
enum class ELeaveProspectSessionType : uint8 {
	None = 0,
	Quit = 1,
	ReturnToCharacterSelect = 2,
	LeaveByDropship = 3,
	ReturnToTitlescreen = 4,
	Disconnected = 5,
	ELeaveProspectSessionType_MAX = 6
};

// Enum Icarus.EResourceLibraryExec
enum class EResourceLibraryExec : uint8 {
	Valid = 0,
	Invalid = 1,
	EResourceLibraryExec_MAX = 2
};

// Enum Icarus.EIcarusResourceType
enum class EIcarusResourceType : uint8 {
	None = 0,
	Energy = 1,
	Water = 2,
	Fuel = 3,
	Oxygen = 4,
	Hydrazine = 5,
	Crude_Oil = 6,
	Refined_Oil = 7,
	Chute = 8,
	MaxResourceTypes = 9,
	EIcarusResourceType_MAX = 10
};

// Enum Icarus.EIcarusResumeConfirmationStep
enum class EIcarusResumeConfirmationStep : uint8 {
	ResumeRequest = 0,
	ConfirmationHost = 1,
	ConfirmationJoin = 2,
	LoadingProspectHost = 3,
	FindingSessionJoin = 4,
	LoadingProspectJoin = 5,
	Mismatch = 6,
	EIcarusResumeConfirmationStep_MAX = 7
};

// Enum Icarus.EResumeStep
enum class EResumeStep : uint8 {
	None = 0,
	AskHost = 1,
	AskJoin = 2,
	ShouldHost = 3,
	ShouldJoin = 4,
	ShouldMismatch = 5,
	EResumeStep_MAX = 6
};

// Enum Icarus.ERocketState
enum class ERocketState : uint8 {
	Inactive = 0,
	Descending = 1,
	Landed = 2,
	Ascending = 3,
	ERocketState_MAX = 4
};

// Enum Icarus.ERocketPartConnectionType
enum class ERocketPartConnectionType : uint8 {
	Undefined = 0,
	MK1_TOP = 1,
	MK1_BOTTOM = 2,
	MK2_TOP = 3,
	MK2_BOTTOM = 4,
	ERocketPartConnectionType_MAX = 5
};

// Enum Icarus.ENavigationType
enum class ENavigationType : uint8 {
	Jump = 0,
	Teleport = 1,
	MaxNavigationTypes = 2,
	ENavigationType_MAX = 3
};

// Enum Icarus.EStatDisplayOperation
enum class EStatDisplayOperation : uint8 {
	None = 0,
	Multiply = 1,
	Division = 2,
	Addition = 3,
	EStatDisplayOperation_MAX = 4
};

// Enum Icarus.EStateRecorderOwnerResolvePolicy
enum class EStateRecorderOwnerResolvePolicy : uint8 {
	FindOnly = 0,
	RespawnOnly = 1,
	FindOrRespawn = 2,
	ManuallyResolved = 3,
	EStateRecorderOwnerResolvePolicy_MAX = 4
};

// Enum Icarus.ETamingTemperatureState
enum class ETamingTemperatureState : uint8 {
	JustRight = 0,
	TooHot = 1,
	TooCold = 2,
	ETamingTemperatureState_MAX = 3
};

// Enum Icarus.ETamedState
enum class ETamedState : uint8 {
	NotTamed = 0,
	Tamed = 1,
	Domesticated = 2,
	ETamedState_MAX = 3
};

// Enum Icarus.ETestRailState
enum class ETestRailState : uint8 {
	Inactive = 0,
	Initialising = 1,
	Running = 2,
	Complete = 3,
	ETestRailState_MAX = 4
};

// Enum Icarus.EIcarusWeatherDifficulty
enum class EIcarusWeatherDifficulty : uint8 {
	Light = 0,
	Medium = 1,
	Heavy = 2,
	Extreme = 3,
	EIcarusWeatherDifficulty_MAX = 4
};

// Enum Icarus.EFeatureLevelCheckResult
enum class EFeatureLevelCheckResult : uint8 {
	Unchecked = 0,
	Fail_FeatureLevel = 1,
	Fail_Flag = 2,
	Unknown_CouldNotCheckFlag = 3,
	Pass = 4,
	EFeatureLevelCheckResult_MAX = 5
};

// Enum Icarus.EInteractType
enum class EInteractType : uint8 {
	Undefined = 0,
	WorldPress = 1,
	WorldHold = 2,
	WorldAltPress = 3,
	WorldAltHold = 4,
	EInteractType_MAX = 5
};

// Enum Icarus.EItemDestructionContext
enum class EItemDestructionContext : uint8 {
	Decayed = 0,
	Dismantled = 1,
	FellOutOfWorld = 2,
	EItemDestructionContext_MAX = 3
};

// Enum Icarus.ESetDataSuccess
enum class ESetDataSuccess : uint8 {
	Success = 0,
	Failed = 1,
	ESetDataSuccess_MAX = 2
};

// Enum Icarus.EInventorySortType
enum class EInventorySortType : uint8 {
	ByTag = 0,
	ByWeight = 1,
	ByStackCount = 2,
	ByAlphaNumeric = 3,
	EInventorySortType_MAX = 4
};

// Enum Icarus.EHandedness
enum class EHandedness : uint8 {
	Right = 0,
	Left = 1,
	Both = 2,
	EHandedness_MAX = 3
};

// Enum Icarus.EItemCraftingTypeFMODParam
enum class EItemCraftingTypeFMODParam : uint8 {
	Player = 0,
	World = 1,
	EItemCraftingTypeFMODParam_MAX = 2
};

// Enum Icarus.ECanUseItemResult
enum class ECanUseItemResult : uint8 {
	VisibleAndEnabled = 0,
	VisibleAndDisabled = 1,
	Hidden = 2,
	ECanUseItemResult_MAX = 3
};

// Enum Icarus.ESecondaryItemTypes
enum class ESecondaryItemTypes : uint8 {
	Generic = 0,
	Helmet = 1,
	Chest = 2,
	Gloves = 3,
	Pants = 4,
	Boots = 5,
	Envirosuit = 6,
	FoodResource = 7,
	WaterResource = 8,
	OxygenResource = 9,
	Utility = 10,
	FuelA = 11,
	FuelB = 12,
	FuelC = 13,
	ESecondaryItemTypes_MAX = 14
};

// Enum Icarus.EPrimaryItemTypes
enum class EPrimaryItemTypes : uint8 {
	Generic = 0,
	Actionable = 1,
	Armor = 2,
	Ballistic = 3,
	Buildable = 4,
	Consumable = 5,
	Combustible = 6,
	Deployable = 7,
	Energy = 8,
	Equippable = 9,
	Highlightable = 10,
	Interactable = 11,
	Itemable = 12,
	Meshable = 13,
	Processing = 14,
	Useable = 15,
	Weight = 16,
	Tool = 17,
	Resource = 18,
	Rocketable = 19,
	EPrimaryItemTypes_MAX = 20
};

// Enum Icarus.EKeybindVisibility
enum class EKeybindVisibility : uint8 {
	VisibleRemap = 0,
	VisibleNoRemap = 1,
	Invisible = 2,
	EKeybindVisibility_MAX = 3
};

// Enum Icarus.EInputContext
enum class EInputContext : uint8 {
	Both = 0,
	KeyboardOnly = 1,
	ControllerOnly = 2,
	EInputContext_MAX = 3
};

// Enum Icarus.ELineDrawMethod
enum class ELineDrawMethod : uint8 {
	Unspecified = 0,
	NoLine = 1,
	ShortestDistance = 2,
	XThenY = 3,
	YThenX = 4,
	ELineDrawMethod_MAX = 5
};

// Enum Icarus.ELobbyPrivacy
enum class ELobbyPrivacy : uint8 {
	Unknown = 0,
	FriendsOnly = 1,
	Private = 2,
	ELobbyPrivacy_MAX = 3
};

// Enum Icarus.EMapTileRadarFlag
enum class EMapTileRadarFlag : uint8 {
	NotScanned = 0,
	NoResource = 1,
	FoundResource = 2,
	Scanning = 3,
	FogOfWar = 4,
	EMapTileRadarFlag_MAX = 5
};

// Enum Icarus.ESessionFilterState
enum class ESessionFilterState : uint8 {
	None = 0,
	ShowOnly = 1,
	HideOnly = 2,
	ESessionFilterState_MAX = 3
};

// Enum Icarus.ESessionSortDirection
enum class ESessionSortDirection : uint8 {
	Ascending = 0,
	Descending = 1,
	ESessionSortDirection_MAX = 2
};

// Enum Icarus.ESessionSortType
enum class ESessionSortType : uint8 {
	None = 0,
	LobbyName = 1,
	ProspectName = 2,
	Duration = 3,
	Difficulty = 4,
	PlayerCount = 5,
	Ping = 6,
	Hardcore = 7,
	ESessionSortType_MAX = 8
};

// Enum Icarus.ESteamSearchType
enum class ESteamSearchType : uint8 {
	Internet = 0,
	Favorites = 1,
	History = 2,
	Spectate = 3,
	Lan = 4,
	Friends = 5,
	ESteamSearchType_MAX = 6
};

// Enum Icarus.ESessionSearchType
enum class ESessionSearchType : uint8 {
	PlayerHosted = 0,
	Dedicated = 1,
	ESessionSearchType_MAX = 2
};

// Enum Icarus.EModifierMergeType
enum class EModifierMergeType : uint8 {
	Stack = 0,
	LongestDuration = 1,
	Replace = 2,
	Count = 3,
	EModifierMergeType_MAX = 4
};

// Enum Icarus.EModifierType
enum class EModifierType : uint8 {
	Buff = 0,
	Debuff = 1,
	Biome = 2,
	Aura_Positive = 3,
	Aura_Negative = 4,
	Radiation = 5,
	Item = 6,
	EModifierType_MAX = 7
};

// Enum Icarus.EMountAction
enum class EMountAction : uint8 {
	Invalid = 0,
	Eating = 1,
	Drinking = 2,
	Sleeping = 3,
	Attacking = 4,
	Escaping = 5,
	Socialising = 6,
	EMountAction_MAX = 7
};

// Enum Icarus.EMountGrazingBehaviourState
enum class EMountGrazingBehaviourState : uint8 {
	Invalid = 0,
	Any = 1,
	Foliage = 2,
	Carcasses = 3,
	None = 4,
	EMountGrazingBehaviourState_MAX = 5
};

// Enum Icarus.EMountConsumptionBehaviourState
enum class EMountConsumptionBehaviourState : uint8 {
	Invalid = 0,
	Any = 1,
	Assigned = 2,
	None = 3,
	EMountConsumptionBehaviourState_MAX = 4
};

// Enum Icarus.EMountCombatBehaviourState
enum class EMountCombatBehaviourState : uint8 {
	Invalid = 0,
	DoNotEngage = 1,
	NeutralEngagement = 2,
	AggressiveEngagement = 3,
	EMountCombatBehaviourState_MAX = 4
};

// Enum Icarus.EMountMovementBehaviourState
enum class EMountMovementBehaviourState : uint8 {
	Invalid = 0,
	Follow = 1,
	IdleWander = 2,
	IdleStanding = 3,
	IdleLying = 4,
	EMountMovementBehaviourState_MAX = 5
};

// Enum Icarus.EMovementState
enum class EMovementState : uint8 {
	Undefined = 0,
	Stationary = 1,
	Sneak = 2,
	Walk = 3,
	Jog = 4,
	Run = 5,
	Sprint = 6,
	Attacking = 7,
	Following = 8,
	EMovementState_MAX = 9
};

// Enum Icarus.EMusicConditionCombatState
enum class EMusicConditionCombatState : uint8 {
	None = 0,
	Idle = 1,
	InCombat = 2,
	InCombat_Boss = 4,
	InCombat_EpicBoss = 8,
	EMusicConditionCombatState_MAX = 9
};

// Enum Icarus.EMusicConditionDisaster
enum class EMusicConditionDisaster : uint8 {
	None = 0,
	Normal = 1,
	Fire = 2,
	EMusicConditionDisaster_MAX = 3
};

// Enum Icarus.EMusicConditionDropState
enum class EMusicConditionDropState : uint8 {
	None = 0,
	DropShipDescending = 1,
	Prospect = 2,
	DropShipAscending = 4,
	Hab = 8,
	LoadingProspect = 16,
	EMusicConditionDropState_MAX = 17
};

// Enum Icarus.EMusicConditionDropTime
enum class EMusicConditionDropTime : uint8 {
	None = 0,
	Normal = 1,
	TimeRunningOut = 2,
	EMusicConditionDropTime_MAX = 3
};

// Enum Icarus.EMusicConditionGameplayEvent
enum class EMusicConditionGameplayEvent : uint8 {
	None = 0,
	DiscoveredMetaResource = 1,
	Revived = 2,
	EMusicConditionGameplayEvent_MAX = 3
};

// Enum Icarus.EMusicConditionPlayerState
enum class EMusicConditionPlayerState : uint8 {
	None = 0,
	Alive = 1,
	Dead = 2,
	LowHealth = 4,
	EMusicConditionPlayerState_MAX = 5
};

// Enum Icarus.EMusicConditionTimeOfDay
enum class EMusicConditionTimeOfDay : uint8 {
	None = 0,
	Dawn = 1,
	Day = 2,
	Dusk = 4,
	Night = 8,
	EMusicConditionTimeOfDay_MAX = 9
};

// Enum Icarus.EMusicConditionWeather
enum class EMusicConditionWeather : uint8 {
	None = 0,
	Normal = 1,
	Storm_Ramp = 2,
	Storm_Damage = 4,
	Storm_Chaos = 8,
	EMusicConditionWeather_MAX = 9
};

// Enum Icarus.EObjectSlotType
enum class EObjectSlotType : uint8 {
	ObjectSlotInput = 0,
	ObjectSlotOutput = 1,
	ObjectSlotStorage = 2,
	EObjectSlotType_MAX = 3
};

// Enum Icarus.EOcclusionShelterContextFMODParam
enum class EOcclusionShelterContextFMODParam : uint8 {
	None = 0,
	ListenerLowSourceLow = 1,
	ListenerLowSourceMed = 2,
	ListenerLowSourceHigh = 3,
	ListenerMedSourceLow = 4,
	ListenerMedSourceMed = 5,
	ListenerMedSourceHigh = 6,
	ListenerHighSourceLow = 7,
	ListenerHighSourceMed = 8,
	ListenerHighSourceHigh = 9,
	EOcclusionShelterContextFMODParam_MAX = 10
};

// Enum Icarus.EMigrationStep
enum class EMigrationStep : uint8 {
	Start = 0,
	CreatePlayerDataFolder = 1,
	MigrateMetaInventoryFormat = 2,
	OnlineGetUserProfile = 3,
	OnlineGetCharacterData = 4,
	OnlineGetCharacterLoadouts = 5,
	OnlineGetMetaInventory = 6,
	SwitchToOffline = 7,
	CacheOfflineManagers = 8,
	OfflineGetUserProfile = 9,
	OfflineGetCharacterData = 10,
	OfflineGetCharacterLoadouts = 11,
	OfflineGetMetaInventory = 12,
	MergeProfileData = 13,
	MergeCharacterData = 14,
	MergeLoadoutData = 15,
	MergeMetaInventories = 16,
	MergeOutpostFiles = 17,
	UpdateLoadoutData = 18,
	MigrateSaveFormat = 19,
	DeletingOldFiles = 20,
	FinaliseMigration = 21,
	EMigrationStep_MAX = 22
};

// Enum Icarus.EPlayerArmourTypeFMODParam
enum class EPlayerArmourTypeFMODParam : uint8 {
	None = 0,
	Fiber = 1,
	Fur = 2,
	Leather = 3,
	Ghillie = 4,
	Carbon = 5,
	Composite = 6,
	Polar = 7,
	Scale = 8,
	Bone = 9,
	Obsidian = 10,
	Metal = 11,
	EPlayerArmourTypeFMODParam_MAX = 12
};

// Enum Icarus.EPlayerAudioFoliageType
enum class EPlayerAudioFoliageType : uint8 {
	Undefined = 0,
	Tree = 1,
	Bush = 2,
	EPlayerAudioFoliageType_MAX = 3
};

// Enum Icarus.EFishUnlockPopup
enum class EFishUnlockPopup : uint8 {
	None = 0,
	FishCaught = 1,
	Quality = 2,
	Weight = 4,
	Length = 8,
	All = 255,
	EFishUnlockPopup_MAX = 256
};

// Enum Icarus.EPlayerFoliageFMODParam
enum class EPlayerFoliageFMODParam : uint8 {
	None = 0,
	Bush = 1,
	BushDry = 2,
	BushLow = 3,
	BushTwiggy = 4,
	Flower = 5,
	Bramble = 6,
	EPlayerFoliageFMODParam_MAX = 7
};

// Enum Icarus.EPlayerGroundStateFMODParam
enum class EPlayerGroundStateFMODParam : uint8 {
	Earth = 0,
	Air = 1,
	Water = 2,
	EPlayerGroundStateFMODParam_MAX = 3
};

// Enum Icarus.EPlayerStanceFMODParam
enum class EPlayerStanceFMODParam : uint8 {
	Jogging = 0,
	Sprinting = 1,
	Crouching = 2,
	Walking = 3,
	EPlayerStanceFMODParam_MAX = 4
};

// Enum Icarus.ETrackerSetType
enum class ETrackerSetType : uint8 {
	Overwrite = 0,
	KeepHighest = 1,
	ETrackerSetType_MAX = 2
};

// Enum Icarus.ETagRequirement
enum class ETagRequirement : uint8 {
	HasAllTags = 0,
	HasAnyTags = 1,
	ETagRequirement_MAX = 2
};

// Enum Icarus.EPlayerTypeFMODParam
enum class EPlayerTypeFMODParam : uint8 {
	LocalPlayerFirstPerson = 0,
	LocalPlayerThirdPerson = 1,
	OtherPlayer = 2,
	EPlayerTypeFMODParam_MAX = 3
};

// Enum Icarus.EProcessorPurpose
enum class EProcessorPurpose : uint8 {
	Crafting = 0,
	Repairing = 1,
	EProcessorPurpose_MAX = 2
};

// Enum Icarus.EOnProspectAvailability
enum class EOnProspectAvailability : uint8 {
	None = 0,
	Base = 1,
	Upgrade1 = 2,
	Upgrade2 = 3,
	Upgrade3 = 4,
	EOnProspectAvailability_MAX = 5
};

// Enum Icarus.EProspectRequiredTech
enum class EProspectRequiredTech : uint8 {
	None = 0,
	Tier1 = 1,
	Tier2 = 2,
	Tier3 = 3,
	Tier4 = 4,
	Tier5 = 5,
	EProspectRequiredTech_MAX = 6
};

// Enum Icarus.EIcarusProspectDifficulty
enum class EIcarusProspectDifficulty : uint8 {
	Easy = 0,
	Normal = 1,
	Hard = 2,
	Extreme = 3,
	EIcarusProspectDifficulty_MAX = 4
};

// Enum Icarus.ECraftingContainerType
enum class ECraftingContainerType : uint8 {
	Recipes = 0,
	RecipeSets = 1,
	Query = 2,
	ECraftingContainerType_MAX = 3
};

// Enum Icarus.EInventoryContainerType
enum class EInventoryContainerType : uint8 {
	Items = 0,
	Query = 1,
	EInventoryContainerType_MAX = 2
};

// Enum Icarus.EQuestModifiersTableType
enum class EQuestModifiersTableType : uint8 {
	D_QuestWeatherModifiers = 0,
	D_QuestEnemyModifiers = 1,
	D_QuestVocalisationModifiers = 2,
	None = 255,
	EQuestModifiersTableType_MAX = 256
};

// Enum Icarus.EDialogueEvents
enum class EDialogueEvents : uint8 {
	None = 0,
	QuestStart = 1,
	QuestEnd = 2,
	EDialogueEvents_MAX = 3
};

// Enum Icarus.EPrebuiltStructureState
enum class EPrebuiltStructureState : uint8 {
	Built = 0,
	NotBuilt = 1,
	EPrebuiltStructureState_MAX = 2
};

// Enum Icarus.EQuestActorState
enum class EQuestActorState : uint8 {
	Valid = 0,
	Invalid = 1,
	EQuestActorState_MAX = 2
};

// Enum Icarus.EQuestState
enum class EQuestState : uint8 {
	Complete = 0,
	Incomplete = 1,
	EQuestState_MAX = 2
};

// Enum Icarus.EQuestVocalisationType
enum class EQuestVocalisationType : uint8 {
	InitialAudio = 0,
	UpdateAudio = 1,
	FinishAudio = 2,
	EQuestVocalisationType_MAX = 3
};

// Enum Icarus.ERCONCommandPlatformContext
enum class ERCONCommandPlatformContext : uint8 {
	Any = 0,
	DedicatedServer = 1,
	P2P = 2,
	ERCONCommandPlatformContext_MAX = 3
};

// Enum Icarus.ERCONCommandContext
enum class ERCONCommandContext : uint8 {
	Any = 0,
	ServerLobby = 1,
	Survival = 2,
	ERCONCommandContext_MAX = 3
};

// Enum Icarus.EReloadType
enum class EReloadType : uint8 {
	Magazine = 0,
	Chambered = 1,
	EReloadType_MAX = 2
};

// Enum Icarus.ERepairItemTier
enum class ERepairItemTier : uint8 {
	RepairTierUnknown = 0,
	RepairTier1 = 1,
	RepairTier2 = 2,
	RepairTier3 = 3,
	RepairTier4 = 4,
	RepairTier5 = 5,
	RepairTierWorkshop = 6,
	ERepairItemTier_MAX = 7
};

// Enum Icarus.ECanRepair
enum class ECanRepair : uint8 {
	HaveIngredients = 0,
	RequiresIngredients = 1,
	NeedsPower = 2,
	ToResolve = 3,
	ECanRepair_MAX = 4
};

// Enum Icarus.EClassRepPolicy
enum class EClassRepPolicy : uint8 {
	NotRouted = 0,
	ManuallyRouted = 1,
	RelevantAllConnections = 2,
	Spatialize_Static = 3,
	Spatialize_Dynamic = 4,
	Spatialize_Dormancy = 5,
	EClassRepPolicy_MAX = 6
};

// Enum Icarus.EResourceNetworkFlowType
enum class EResourceNetworkFlowType : uint8 {
	Consume = 0,
	Produce = 1,
	Store = 2,
	EResourceNetworkFlowType_MAX = 3
};

// Enum Icarus.RiverAudioState
enum class RiverAudioState : uint8 {
	InfrequentlyChecking = 0,
	FrequentlyChecking = 1,
	ActivelyUpdating = 2,
	RiverAudioState_MAX = 3
};

// Enum Icarus.ERocketPartType
enum class ERocketPartType : uint8 {
	Undefined = 0,
	ERocketPartType_MAX = 1
};

// Enum Icarus.ESettlementBoundsBuildRule
enum class ESettlementBoundsBuildRule : uint8 {
	BuildWithinSettlement = 0,
	BuildOutsideSettlement = 1,
	BuildAnywhere = 2,
	ESettlementBoundsBuildRule_MAX = 3
};

// Enum Icarus.ENPCNameGender
enum class ENPCNameGender : uint8 {
	Male = 0,
	Female = 1,
	Both = 2,
	ENPCNameGender_MAX = 3
};

// Enum Icarus.ESplineLoopDirection
enum class ESplineLoopDirection : uint8 {
	Undetermined = 0,
	Anticlockwise = 1,
	Clockwise = 2,
	ESplineLoopDirection_MAX = 3
};

// Enum Icarus.EStaminaBracket
enum class EStaminaBracket : uint8 {
	Empty = 0,
	Low = 1,
	Normal = 2,
	Full = 3,
	EStaminaBracket_MAX = 4
};

// Enum Icarus.EComparisonType
enum class EComparisonType : uint8 {
	Equals = 0,
	NotEquals = 1,
	LessThan = 2,
	LessThanOrEqual = 3,
	GreaterThan = 4,
	GreaterThanOrEqual = 5,
	EComparisonType_MAX = 6
};

// Enum Icarus.EFunctionOutcome
enum class EFunctionOutcome : uint8 {
	Success = 0,
	Failure = 1,
	EFunctionOutcome_MAX = 2
};

// Enum Icarus.EInputStatSourceType
enum class EInputStatSourceType : uint8 {
	Aiming = 0,
	EInputStatSourceType_MAX = 1
};

// Enum Icarus.EStatSources
enum class EStatSources : uint8 {
	Base = 0,
	FromServer = 1,
	Armour = 2,
	Buff = 3,
	Item = 4,
	Durable = 5,
	Buildable = 6,
	DropShip = 7,
	Attributes = 8,
	Perks = 9,
	Projectile = 10,
	GOAP = 11,
	EquippedItems = 12,
	MapManager = 13,
	ArmourSetBonus = 14,
	AIManager = 15,
	Talents = 16,
	Biome = 17,
	TimeOfDay = 18,
	Weather = 19,
	BackingStatsContainer = 20,
	Weight = 21,
	World = 22,
	Ruleset = 23,
	AISetup = 24,
	AISpawner = 25,
	EpicCreature = 26,
	DamageEnabledAnimNotify = 27,
	BTTaskPerformAction = 28,
	Input = 29,
	GOAPAction = 30,
	CriticalHit = 31,
	GenericBehaviourTree = 32,
	Alteration = 33,
	TamingComponent = 34,
	Atmosphere = 35,
	Shield = 36,
	Mount = 37,
	CreatureModifiers = 38,
	BestiaryProgress = 39,
	IcarusMountCharacter = 40,
	Movement = 41,
	OffHandActor = 42,
	InstancedLevel = 43,
	Actionable = 44,
	Genetics = 45,
	Settlement = 46,
	SettlementTrait = 47,
	SettlementSkill = 48,
	EStatSources_MAX = 49
};

// Enum Icarus.ESurfaceFMODParam
enum class ESurfaceFMODParam : uint8 {
	Default = 0,
	Dirt = 1,
	Sand = 2,
	Grass = 3,
	Wood = 4,
	Rock = 5,
	Plastic = 6,
	Metal = 7,
	Carpet = 8,
	Snow = 9,
	Water = 10,
	Gravel = 11,
	Flesh = 12,
	Concrete = 13,
	Mud = 14,
	Ice = 15,
	Tree = 16,
	VoxelRock = 17,
	VoxelMetal = 18,
	Bush = 19,
	Glass = 20,
	Thatch = 21,
	Cactus = 22,
	Bone = 23,
	CorrugatedIron = 24,
	Lava = 25,
	Slime = 26,
	ESurfaceFMODParam_MAX = 27
};

// Enum Icarus.ESurveyLaserFMODParam
enum class ESurveyLaserFMODParam : uint8 {
	LaserOff = 0,
	LaserOn = 1,
	ESurveyLaserFMODParam_MAX = 2
};

// Enum Icarus.ESurveyTransmitFMODParam
enum class ESurveyTransmitFMODParam : uint8 {
	NotTransmitting = 0,
	Transmitting = 1,
	ESurveyTransmitFMODParam_MAX = 2
};

// Enum Icarus.ESurvivalStatType
enum class ESurvivalStatType : uint8 {
	Food = 0,
	Water = 1,
	Oxygen = 2,
	ESurvivalStatType_MAX = 3
};

// Enum Icarus.ETalentNodeType
enum class ETalentNodeType : uint8 {
	Talent = 0,
	Reroute = 1,
	MutuallyExclusive = 2,
	ETalentNodeType_MAX = 3
};

// Enum Icarus.ETalentModelStorage
enum class ETalentModelStorage : uint8 {
	None = 0,
	Character = 1,
	Account = 2,
	Creature = 3,
	World = 4,
	Settlement = 5,
	ETalentModelStorage_MAX = 6
};

// Enum Icarus.ERefundTalentResponse
enum class ERefundTalentResponse : uint8 {
	Invalid = 0,
	Success = 1,
	NullModel = 2,
	NotUnlocked = 3,
	IsDependency = 4,
	InvalidatesRank = 5,
	ERefundTalentResponse_MAX = 6
};

// Enum Icarus.ETamedCreatureType
enum class ETamedCreatureType : uint8 {
	Juvenile = 0,
	TamedCreature = 1,
	Both = 2,
	ETamedCreatureType_MAX = 3
};

// Enum Icarus.ETargetRangeState
enum class ETargetRangeState : uint8 {
	Waiting = 0,
	Active = 1,
	ETargetRangeState_MAX = 2
};

// Enum Icarus.ETerrainAnchorState
enum class ETerrainAnchorState : uint8 {
	Undefined = 0,
	Valid = 1,
	Invalid = 2,
	ETerrainAnchorState_MAX = 3
};

// Enum Icarus.ESleepResult
enum class ESleepResult : uint8 {
	Valid = 0,
	InvalidTime = 1,
	ESleepResult_MAX = 2
};

// Enum Icarus.ETowerMinigameFMODParam
enum class ETowerMinigameFMODParam : uint8 {
	Finding = 0,
	Found = 1,
	ETowerMinigameFMODParam_MAX = 2
};

// Enum Icarus.ETreeDetachContextFMODParam
enum class ETreeDetachContextFMODParam : uint8 {
	Collision = 0,
	PlayerCollision = 1,
	PlayerActionIndirect = 2,
	PlayerActionDirect = 3,
	ETreeDetachContextFMODParam_MAX = 4
};

// Enum Icarus.ETreePrimitiveDetachContext
enum class ETreePrimitiveDetachContext : uint8 {
	None = 0,
	PlayerAction_Direct = 1,
	PlayerAction_Indirect = 2,
	Collision = 3,
	Fire = 4,
	Storm = 5,
	ETreePrimitiveDetachContext_MAX = 6
};

// Enum Icarus.ETreePrimitiveItemReplaceMethod
enum class ETreePrimitiveItemReplaceMethod : uint8 {
	None = 0,
	SpawnWorldItem = 1,
	DirectIntoInventory = 2,
	ETreePrimitiveItemReplaceMethod_MAX = 3
};

// Enum Icarus.ETreePrimitiveType
enum class ETreePrimitiveType : uint8 {
	None = 0,
	Root = 1,
	Trunk = 2,
	Branch = 3,
	Leaf = 4,
	Socketable = 5,
	ETreePrimitiveType_MAX = 6
};

// Enum Icarus.EFloatRoundingMode
enum class EFloatRoundingMode : uint8 {
	Round = 0,
	Floor = 1,
	Ceiling = 2,
	EFloatRoundingMode_MAX = 3
};

// Enum Icarus.EIcarusGameVersionFlags
enum class EIcarusGameVersionFlags : uint8 {
	None = 0,
	Major = 1,
	Minor = 2,
	Patch = 4,
	Changelist = 8,
	BuildType = 16,
	FeatureLevel = 32,
	Numbers = 15,
	All = 63,
	EIcarusGameVersionFlags_MAX = 64
};

// Enum Icarus.EVocalisationPlayResult
enum class EVocalisationPlayResult : uint8 {
	Cancelled = 0,
	Played = 1,
	Queued = 2,
	EVocalisationPlayResult_MAX = 3
};

// Enum Icarus.EVocalisationPriority
enum class EVocalisationPriority : uint8 {
	Lowest = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Highest = 4,
	EVocalisationPriority_MAX = 5
};

// Enum Icarus.EVocalisationInterruptType
enum class EVocalisationInterruptType : uint8 {
	Interrupt = 0,
	Cancel = 1,
	Queue = 2,
	EVocalisationInterruptType_MAX = 3
};

// Enum Icarus.EVoxelMinedState
enum class EVoxelMinedState : uint8 {
	NotMined = 0,
	PartiallyMined = 1,
	FullyMined = 2,
	EVoxelMinedState_MAX = 3
};

// Enum Icarus.EUVWrapMethod
enum class EUVWrapMethod : uint8 {
	UV_TripleProjection = 0,
	UV_ZProjection = 1,
	UV_Spherical = 2,
	UV_MAX = 3
};

// Enum Icarus.EVoxelResourceCategory
enum class EVoxelResourceCategory : uint8 {
	None = 0,
	Stone = 1,
	Metal = 2,
	Oxite = 3,
	Copper = 4,
	Gold = 5,
	Bauxite = 6,
	Sulfur = 7,
	Silica = 8,
	Ice = 9,
	Platinum = 10,
	Titanium = 11,
	Coal = 12,
	Exotic_A = 13,
	Salt = 14,
	Limestone = 15,
	Lithium = 16,
	Ruby = 17,
	EVoxelResourceCategory_MAX = 18
};

// Enum Icarus.EWaterStoredFMODParam
enum class EWaterStoredFMODParam : uint8 {
	None = 0,
	Some = 1,
	EWaterStoredFMODParam_MAX = 2
};

// Enum Icarus.EWeaponAimingFMODParam
enum class EWeaponAimingFMODParam : uint8 {
	NotAiming = 0,
	Aiming = 1,
	EWeaponAimingFMODParam_MAX = 2
};

// Enum Icarus.EWeaponChargingFMODParam
enum class EWeaponChargingFMODParam : uint8 {
	NotCharging = 0,
	Charging = 1,
	EWeaponChargingFMODParam_MAX = 2
};

// Enum Icarus.EWeaponReloadingFMODParam
enum class EWeaponReloadingFMODParam : uint8 {
	NotReloading = 0,
	Reloading = 1,
	EWeaponReloadingFMODParam_MAX = 2
};

// Enum Icarus.EWeaponSilencedFMODParam
enum class EWeaponSilencedFMODParam : uint8 {
	STANDARD = 0,
	SILENCED = 1,
	EWeaponSilencedFMODParam_MAX = 2
};

// ScriptStruct Icarus.IcarusDamagePacket
struct FIcarusDamagePacket {
	struct FDamageEvent DamageEvent; 
	int32_t TotalDamage; 
	int32_t AppliedDamage; 
	bool bSuppressDamageNumbers; 
	struct AController* EventInstigator; 
	struct AActor* DamageCauser; 
	struct FHitResult HitResult; 
	float Timestamp; 
	bool bWasRadialDamage; 
	bool bIsKillCam; 
	struct FCriticalHitAreasEnum CriticalHitArea; 
	bool bIsStealthHit; 
};

// ScriptStruct Icarus.CriticalHitAreasEnum
struct FCriticalHitAreasEnum : FRowEnum {
};

// ScriptStruct Icarus.ExperienceEventsRowHandle
struct FExperienceEventsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ViewTraceResult
struct FViewTraceResult {
	struct FHitResult Hit; 
	enum class EViewTraceHitType Type; 
};

// ScriptStruct Icarus.StatCategoriesEnum
struct FStatCategoriesEnum : FRowEnum {
};

// ScriptStruct Icarus.ProjectileFireParams
struct FProjectileFireParams {
	float RangedWeaponDamageMultiplier; 
	bool bUnbreakable; 
	enum class EProjectileBreakModifier ProjectileBreakModifier; 
	enum class EStealthAttackType StealthAttack; 
	bool bOwnerHighlightProjectile; 
	int32_t RicochetCount; 
	int32_t PierceCount; 
};

// ScriptStruct Icarus.GOAPPropertiesRowHandle
struct FGOAPPropertiesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FLODInstanceID
struct FFLODInstanceID {
	struct TWeakObjectPtr<struct AFLODTile> FLODTile; 
	int32_t RecordIndex; 
	int32_t InstanceIndex; 
};

// ScriptStruct Icarus.FLODActorRecordInstance
struct FFLODActorRecordInstance : FFLODInstanceID {
	int32_t LevelIndex; 
	struct FName TileName; 
};

// ScriptStruct Icarus.TalentsRowHandle
struct FTalentsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.WeatherEventsRowHandle
struct FWeatherEventsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TalentModelData
struct FTalentModelData {
	enum class ETalentState State; 
	int32_t Rank; 
	int32_t MaxRank; 
	bool bLocked; 
};

// ScriptStruct Icarus.ItemData
struct FItemData : FIcarusTableRowBase {
	struct FItemsStaticRowHandle ItemStaticData; 
	struct TArray<struct FItemDynamicData> ItemDynamicData; 
	struct TArray<struct FIcarusStatReplicated> ItemCustomStats; 
	struct FCustomProperties CustomProperties; 
	struct FCachedItemStatContainer CachedStats; 
	bool bIsItemInstance; 
	struct FString DatabaseGUID; 
	int32_t ItemOwnerLookupId; 
	struct FGameplayTagContainer RuntimeTags; 
};

// ScriptStruct Icarus.CachedItemStatContainer
struct FCachedItemStatContainer {
	struct FStatContainer StatContainer; 
	bool bHasBuilt; 
	bool bIsHeldItem; 
	bool bIncludesAlterations; 
};

// ScriptStruct Icarus.StatContainer
struct FStatContainer {
	struct UIcarusStatContainer* IcarusStatComponent; 
};

// ScriptStruct Icarus.CustomProperties
struct FCustomProperties {
	struct TArray<struct FIcarusStatReplicated> StaticWorldStats; 
	struct TArray<struct FIcarusStatReplicated> StaticWorldHeldStats; 
	struct TArray<struct FIcarusStatReplicated> Stats; 
	struct TArray<struct FAlterationsEnum> Alterations; 
	struct TArray<struct FLivingItemUpgradeSlot> LivingItemSlots; 
};

// ScriptStruct Icarus.LivingItemUpgradeSlot
struct FLivingItemUpgradeSlot {
	struct FLivingItemUpgradesEnum UpgradeSelection; 
	int32_t UnlockProgress; 
};

// ScriptStruct Icarus.LivingItemUpgradesEnum
struct FLivingItemUpgradesEnum : FRowEnum {
};

// ScriptStruct Icarus.AlterationsEnum
struct FAlterationsEnum : FRowEnum {
};

// ScriptStruct Icarus.IcarusStatReplicated
struct FIcarusStatReplicated {
	struct FStatsEnum Stat; 
	int32_t Value; 
};

// ScriptStruct Icarus.StatsEnum
struct FStatsEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemDynamicData
struct FItemDynamicData {
	enum class EDynamicItemProperties PropertyType; 
	int32_t Value; 
};

// ScriptStruct Icarus.ItemsStaticRowHandle
struct FItemsStaticRowHandle : FRowHandle {
};

// ScriptStruct Icarus.IcarusPlayerChatMessage
struct FIcarusPlayerChatMessage {
	struct FString PlayerID; 
	struct FString PlayerName; 
	struct UTexture2D* PlayerIcon; 
	struct FColor PlayerColour; 
	struct FString Message; 
};

// ScriptStruct Icarus.BestiaryDataRowHandle
struct FBestiaryDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FishTypeTracking
struct FFishTypeTracking {
	struct FFishDataRowHandle FishRow; 
	int32_t MaxQuality; 
	int32_t MaxWeight; 
	int32_t MaxLength; 
	int32_t CaughtCount; 
};

// ScriptStruct Icarus.FishDataRowHandle
struct FFishDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemResourceGeneratedAlterationResult
struct FItemResourceGeneratedAlterationResult {
	struct FItemData Item; 
	struct TArray<struct FAlterationsEnum> ResourceGeneratedAlterations; 
};

// ScriptStruct Icarus.IcarusResourcesEnum
struct FIcarusResourcesEnum : FRowEnum {
};

// ScriptStruct Icarus.AssociatedProspectInfo
struct FAssociatedProspectInfo {
	struct FProspectInfo AssociatedProspect; 
	struct FLastProspectHostInfo HostedBy; 
};

// ScriptStruct Icarus.LastProspectHostInfo
struct FLastProspectHostInfo {
	enum class ELastProspectHostType LastHostType; 
	struct FString SteamP2PHostId; 
	struct FString DedicatedServerIP; 
	struct FString CachedServerName; 
};

// ScriptStruct Icarus.FieldGuideCategoriesRowHandle
struct FFieldGuideCategoriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DialogueRowHandle
struct FDialogueRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FactionMissionsRowHandle
struct FFactionMissionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ProspectForecastRowHandle
struct FProspectForecastRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ProcessorRecipesRowHandle
struct FProcessorRecipesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FarmingSeedsRowHandle
struct FFarmingSeedsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.StatsRowHandle
struct FStatsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.StatAfflictionsRowHandle
struct FStatAfflictionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.IcarusAttachmentsRowHandle
struct FIcarusAttachmentsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MetaCurrencyRowHandle
struct FMetaCurrencyRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ModifierStatesRowHandle
struct FModifierStatesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TimeLockedMissionInfo
struct FTimeLockedMissionInfo {
	struct FFactionMissionsRowHandle Mission; 
	int32_t LockedUntilProspectTime; 
};

// ScriptStruct Icarus.PlayerLoadoutData
struct FPlayerLoadoutData {
	struct FItemData EnviroSuit; 
	struct FDropship Dropship; 
	struct TArray<struct FItemData> MetaItems; 
	struct FProspectInfo AssociatedProspect; 
	struct FLastProspectHostInfo HostedBy; 
	bool bInsured; 
	bool bSettled; 
	int64_t LoadoutClaimTime; 
	int32_t ChrSlot; 
	struct FString Guid; 
};

// ScriptStruct Icarus.MountSaveData
struct FMountSaveData {
	struct FString DatabaseGUID; 
	struct FStateRecorderBlob RecorderBlob; 
	struct FString MountName; 
	int32_t MountLevel; 
	struct FString MountType; 
	struct FString MountIconName; 
	struct AActor* ActorRepresentation; 
};

// ScriptStruct Icarus.StateRecorderBlob
struct FStateRecorderBlob {
	struct FString ComponentClassName; 
	struct TArray<char> BinaryData; 
};

// ScriptStruct Icarus.ErrorCodesEnum
struct FErrorCodesEnum : FRowEnum {
};

// ScriptStruct Icarus.SettlementEventOutcomeData
struct FSettlementEventOutcomeData {
	struct FText DisplayName; 
	struct FText Description; 
	struct TArray<struct FCraftingInput> ItemCost; 
	struct TArray<struct FQueryInput> QueryItemCost; 
	struct TArray<struct FResourceItem> ResourceCost; 
	struct FSettlementNPCRolesRowHandle RequiredRole; 
	int32_t RequiredRoleCount; 
	struct TArray<struct FCraftingInput> ItemRewards; 
	struct TArray<struct FResourceItem> ResourceRewards; 
	struct FExperienceEventsRowHandle ExperienceReward; 
	float CostDeviation; 
	float RewardDeviation; 
	struct TArray<struct FSettlementOutcomeModifier> Modifiers; 
	struct FSettlementRaidsRowHandle RaidConfig; 
	enum class ESettlementNPCAilment InflictAilment; 
	int32_t InflictAilmentCount; 
};

// ScriptStruct Icarus.SettlementRaidsRowHandle
struct FSettlementRaidsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SettlementOutcomeModifier
struct FSettlementOutcomeModifier {
	struct FModifierStatesRowHandle Modifier; 
	int32_t DurationDays; 
};

// ScriptStruct Icarus.ResourceItem
struct FResourceItem {
	struct FIcarusResourcesEnum Type; 
	int32_t RequiredUnits; 
};

// ScriptStruct Icarus.CraftingInput
struct FCraftingInput {
	struct FItemsStaticRowHandle Element; 
	int32_t Count; 
};

// ScriptStruct Icarus.SettlementNPCRolesRowHandle
struct FSettlementNPCRolesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.QueryInput
struct FQueryInput {
	struct FCraftingTagsRowHandle Query; 
	int32_t Count; 
};

// ScriptStruct Icarus.CraftingTagsRowHandle
struct FCraftingTagsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SettlementNPCTask
struct FSettlementNPCTask {
	struct FGuid TaskId; 
	struct FSettlementNPCTaskTypesRowHandle ActiveTaskType; 
	struct TWeakObjectPtr<struct AActor> Target; 
	struct TWeakObjectPtr<struct AActor> Source; 
	float Progress; 
	char Priority; 
	struct FGuid AssignedNpcId; 
	enum class ESettlementTaskOrigin Origin; 
};

// ScriptStruct Icarus.SettlementNPCTaskTypesRowHandle
struct FSettlementNPCTaskTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SettlementVisitor
struct FSettlementVisitor {
	struct FSettlementNPC NPC; 
	int32_t ArrivalDay; 
};

// ScriptStruct Icarus.SettlementNPC
struct FSettlementNPC {
	struct FGuid NpcId; 
	struct FText DisplayName; 
	char Gender; 
	int32_t DaysInSettlement; 
	struct FSettlementNPCRolesRowHandle Role; 
	int32_t AssignedBuildingId; 
	struct FGuid ActiveTaskId; 
	int32_t PlayerAssignedBuildingId; 
	struct FSettlementNPCTaskTypesRowHandle BehaviourOverrideType; 
	float BehaviourOverrideExpiry; 
	struct FSettlementNPCSurvivalValues SurvivalValues; 
	float WorkEfficiency; 
	int32_t LowMoodDays; 
	float SleepMinutesToday; 
	enum class ESettlementNPCAilment Ailment; 
	int32_t AilmentSeverity; 
	int32_t IncapacitatedDays; 
	struct TArray<struct FSettlementNPCScheduleEntry> DailySchedule; 
	struct FRowHandle CosmeticVariant; 
	int32_t Seed; 
	struct FSettlementNPCItemsRowHandle HeldItem; 
	struct TArray<struct FSettlementNPCTraitsRowHandle> Traits; 
	struct TArray<struct FSettlementNPCSkillProgress> Skills; 
};

// ScriptStruct Icarus.SettlementNPCSkillProgress
struct FSettlementNPCSkillProgress {
	struct FSettlementNPCSkillsRowHandle Skill; 
	float XP; 
	float PassionMultiplier; 
};

// ScriptStruct Icarus.SettlementNPCSkillsRowHandle
struct FSettlementNPCSkillsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SettlementNPCTraitsRowHandle
struct FSettlementNPCTraitsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SettlementNPCItemsRowHandle
struct FSettlementNPCItemsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SettlementNPCScheduleEntry
struct FSettlementNPCScheduleEntry {
	enum class ESettlementNPCActivity Activity; 
	int32_t StartHour; 
	int32_t EndHour; 
};

// ScriptStruct Icarus.SettlementNPCSurvivalValues
struct FSettlementNPCSurvivalValues {
	int32_t Hunger; 
	int32_t Water; 
	int32_t Oxygen; 
	int32_t Rest; 
	int32_t Mood; 
};

// ScriptStruct Icarus.SettlementEventsRowHandle
struct FSettlementEventsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.IcarusLogEntry
struct FIcarusLogEntry {
	struct FLogCategoriesEnum OutputCategory; 
	enum class ELevel LogLevel; 
	struct FString LogMessage; 
	struct FDateTime Timestamp; 
};

// ScriptStruct Icarus.LogCategoriesEnum
struct FLogCategoriesEnum : FRowEnum {
};

// ScriptStruct Icarus.AccoladeCompletedState
struct FAccoladeCompletedState {
	struct FAccoladesRowHandle Accolade; 
	struct FDateTime TimeCompleted; 
	struct FString ProspectID; 
};

// ScriptStruct Icarus.AccoladesRowHandle
struct FAccoladesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GetIcarusPlayerPersonaResult
struct FGetIcarusPlayerPersonaResult {
	struct FIcarusPlayerPersona Persona; 
	enum class ERequestPlayerPersonaErrorCode ErrorCode; 
	bool bSuccess; 
};

// ScriptStruct Icarus.IcarusPlayerPersona
struct FIcarusPlayerPersona {
	struct FString PlayerID; 
	struct FText Name; 
	struct UTexture2D* Avatar; 
};

// ScriptStruct Icarus.ConnectedPlayer
struct FConnectedPlayer {
	struct FPlayerCharacterID PlayerCharacterID; 
	struct AIcarusPlayerController* PlayerController; 
	struct AIcarusPlayerCharacter* PlayerCharacter; 
	struct AIcarusPlayerState* PlayerState; 
	float ConnectionStartTime; 
	float ConnectionCompleteTime; 
};

// ScriptStruct Icarus.PlayerCharacterID
struct FPlayerCharacterID {
	struct FString PlayerID; 
	int32_t ChrSlot; 
};

// ScriptStruct Icarus.PlayerTrackersRowHandle
struct FPlayerTrackersRowHandle : FRowHandle {
};

// ScriptStruct Icarus.Subtitle
struct FSubtitle {
	struct FText Text; 
	struct FText SpeakerName; 
	float Length; 
	float Time; 
};

// ScriptStruct Icarus.ResourceNetworkInspectorData
struct FResourceNetworkInspectorData {
	struct FIcarusResourcesEnum SelectedResourceType; 
	bool bRequireFullUpdate; 
	struct TArray<struct FCompactNetworkDeviceData> SupplyDevices; 
	struct TArray<struct FCompactNetworkDeviceData> DemandDevices; 
	struct TArray<struct FCompactNetworkStorageDeviceData> StorageDevices; 
	int32_t TotalSupply; 
	int32_t TotalMaxSupply; 
	int32_t TotalDemand; 
	int32_t SatisfiedDemand; 
	int32_t TotalPriorityDemand; 
	int32_t SatisfiedPriorityDemand; 
};

// ScriptStruct Icarus.CompactNetworkStorageDeviceData
struct FCompactNetworkStorageDeviceData {
	struct AIcarusActor* IcarusActor; 
	enum class EDeviceState DeviceState; 
	int32_t FlowRateCurrent; 
	int32_t FlowRateMax; 
	int32_t StorageValueCurrent; 
	int32_t StorageValueMax; 
};

// ScriptStruct Icarus.CompactNetworkDeviceData
struct FCompactNetworkDeviceData {
	struct FName DeviceNameRowName; 
	int32_t NumPriority; 
	int32_t NumOn; 
	int32_t NumIdle; 
	int32_t NumOff; 
	int32_t TotalCurrentFlow; 
	int32_t TotalMaxFlow; 
	struct TArray<struct FNetworkDeviceInstanceData> InstanceData; 
};

// ScriptStruct Icarus.NetworkDeviceInstanceData
struct FNetworkDeviceInstanceData {
	struct AIcarusActor* DeviceActor; 
	enum class EDeviceState State; 
	bool bHasPriority; 
	int32_t CurrentFlow; 
	int32_t MaxFlow; 
};

// ScriptStruct Icarus.BiomesRowHandle
struct FBiomesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ProcessingItem
struct FProcessingItem {
	struct TWeakObjectPtr<struct AIcarusPlayerCharacter> CraftingPlayer; 
	struct FProcessorRecipesRowHandle Recipe; 
	int32_t CraftCount; 
};

// ScriptStruct Icarus.AccoladeData
struct FAccoladeData : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct FText Description; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	struct TSoftClassPtr<UObject> AccoladeImpl; 
	struct FPlayerAccoladeCategoriesEnum Category; 
	struct FPlayerTrackersRowHandle Tracker; 
	struct FGameplayTagContainer Tags; 
	struct TArray<struct FRowHandle> ExtraDatas; 
	int32_t GoalCount; 
	struct FName SteamAchievementId; 
};

// ScriptStruct Icarus.PlayerAccoladeCategoriesEnum
struct FPlayerAccoladeCategoriesEnum : FRowEnum {
};

// ScriptStruct Icarus.AccoladeSaveData
struct FAccoladeSaveData {
	struct TArray<struct FAccoladeCompletedState> CompletedAccolades; 
	struct TMap<struct FPlayerTrackersRowHandle, int32_t> PlayerTrackers; 
	struct TMap<struct FPlayerTrackersRowHandle, struct FTrackerTaskListProgress> PlayerTaskListTrackers; 
};

// ScriptStruct Icarus.TrackerTaskListProgress
struct FTrackerTaskListProgress {
	struct TSet<struct FName> CompletedTasks; 
};

// ScriptStruct Icarus.AccoladesEnum
struct FAccoladesEnum : FRowEnum {
};

// ScriptStruct Icarus.AccoladeTaskState
struct FAccoladeTaskState {
	struct FText TaskName; 
	bool bComplete; 
};

// ScriptStruct Icarus.AccountFlag
struct FAccountFlag : FIcarusTableRowBase {
	struct TArray<struct FItemTemplateRowHandle> BlueprintUnlocks; 
	struct TArray<struct FWorkshopItemsRowHandle> WorkshopUnlocks; 
	struct TArray<struct FPlayerTalentModifiersRowHandle> TalentModifierUnlocks; 
	struct TArray<struct FLivingItemShopItemsRowHandle> LegendaryRewards; 
	struct TArray<struct FProspectListRowHandle> RewardedFromMissions; 
};

// ScriptStruct Icarus.ProspectListRowHandle
struct FProspectListRowHandle : FRowHandle {
};

// ScriptStruct Icarus.LivingItemShopItemsRowHandle
struct FLivingItemShopItemsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PlayerTalentModifiersRowHandle
struct FPlayerTalentModifiersRowHandle : FRowHandle {
};

// ScriptStruct Icarus.WorkshopItemsRowHandle
struct FWorkshopItemsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemTemplateRowHandle
struct FItemTemplateRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AccountFlagsEnum
struct FAccountFlagsEnum : FRowEnum {
};

// ScriptStruct Icarus.AccountFlagsRowHandle
struct FAccountFlagsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ActionStaminaCostEventPairing
struct FActionStaminaCostEventPairing {
	enum class EActionableEventType Event; 
	struct FStaminaActionCostsRowHandle StaminaCost; 
};

// ScriptStruct Icarus.StaminaActionCostsRowHandle
struct FStaminaActionCostsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ActionableData
struct FActionableData : FIcarusTableRowBase {
	struct TMap<struct FActionsRowHandle, struct FActionList> ActionMapping; 
	bool bUseClientPrediction; 
	struct TArray<struct FRowHandle> GenericData; 
	bool bSimultaneousActionExecution; 
};

// ScriptStruct Icarus.ActionsRowHandle
struct FActionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ActionList
struct FActionList {
	struct TMap<enum class EActionableEventType, struct FStaminaActionCostsRowHandle> InputTypes; 
	struct FModifierStatesRowHandle ModifierState; 
};

// ScriptStruct Icarus.ActionableEnum
struct FActionableEnum : FRowEnum {
};

// ScriptStruct Icarus.ActionableRowHandle
struct FActionableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ActionData
struct FActionData : FIcarusTableRowBase {
	struct UActionableBehaviour* Behaviour; 
	struct TSoftObjectPtr<UAnimMontage> TP_ActionMontage; 
	struct TArray<struct FSuccessAnimSet> TP_SuccessAnimations; 
	struct TArray<struct FName> TP_ActionFailMontageVariations; 
	struct TArray<struct FName> TP_ActionMissMontageVariations; 
	struct TSoftObjectPtr<UAnimMontage> FP_ActionMontage; 
	struct TArray<struct FSuccessAnimSet> FP_SuccessAnimations; 
	struct TArray<struct FName> FP_ActionFailMontageVariations; 
	struct TArray<struct FName> FP_ActionMissMontageVariations; 
	struct FName BeginStaminaActionNotify; 
	bool WaitForActionComplete; 
	float ActionCooldown; 
	struct TArray<struct FStatsEnum> CooldownMultipliers; 
	struct FStatsEnum RequiredStat; 
};

// ScriptStruct Icarus.SuccessAnimSet
struct FSuccessAnimSet {
	struct FValidHitTypesRowHandle SuccessType; 
	struct TArray<struct FName> SuccessMontageVariations; 
};

// ScriptStruct Icarus.ValidHitTypesRowHandle
struct FValidHitTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ActionsEnum
struct FActionsEnum : FRowEnum {
};

// ScriptStruct Icarus.PrefabTriggerBox
struct FPrefabTriggerBox {
	struct FTransform Transform; 
	struct FVector BoxExtent; 
};

// ScriptStruct Icarus.PrefabFoliage
struct FPrefabFoliage {
	struct TSoftObjectPtr<UFoliageType> FoliageType; 
	struct TArray<struct FTransform> Instances; 
};

// ScriptStruct Icarus.PrefabLavaFlowPoint
struct FPrefabLavaFlowPoint {
	struct FTransform Transform; 
	float FlowSpeed; 
	float BaseToFlowing; 
	float Dryness; 
	float EdgeTaper; 
	float EdgeNoise; 
	struct FVector2D Scale; 
};

// ScriptStruct Icarus.PrefabWaterfall
struct FPrefabWaterfall {
	struct FTransform Transform; 
	float Width; 
	float Height; 
	float Curve; 
	int32_t MeshType; 
	bool bUseCalmVariant; 
	bool bIsInCave; 
	bool bIsLava; 
	struct FWaterfallDetails WaterfallDetails; 
};

// ScriptStruct Icarus.WaterfallDetails
struct FWaterfallDetails {
	struct FLinearColor WaterfallColor; 
	float RVTTopBlend; 
	float FarDistanceBlend; 
	float NearWaterMistIntensity; 
	float NearPatternX; 
	float NearPatternY; 
	float NearFallsSpeed; 
	float FarWaterMistIntensity; 
	float FarPatternX; 
	float FarPatternY; 
	float FarFallsSpeed; 
	float DisplacementMultiplier; 
};

// ScriptStruct Icarus.PrefabLake
struct FPrefabLake {
	struct FTransform Transform; 
	struct FWaterSetupRowHandle WaterSetup; 
	enum class ESplineLoopDirection SplineDirection; 
	struct TArray<struct FVector> EdgeSplinePoints; 
	float EdgeSplineDensity; 
	float LakeDepth; 
};

// ScriptStruct Icarus.WaterSetupRowHandle
struct FWaterSetupRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PrefabTransform
struct FPrefabTransform {
	struct FTransform Transform; 
};

// ScriptStruct Icarus.PrefabActorClass
struct FPrefabActorClass {
	struct AActor* ActorClass; 
	struct FTransform Transform; 
};

// ScriptStruct Icarus.PrefabCaveLight
struct FPrefabCaveLight {
	struct FTransform Transform; 
	enum class ECaveLightType LightType; 
	bool bTrackSun; 
	float SunlightPercentage; 
	struct FColor LightTint; 
	float Intensity; 
	bool bCastShadows; 
	float VolumetricScatteringIntensity; 
	bool bCastVolumetricShadow; 
	float MaxDrawDistance; 
	float Temperature; 
	bool bUseTemperature; 
	float AttenuationRadius; 
	float InnerConeAngle; 
	float OuterConeAngle; 
	float SourceRadius; 
	float SourceWidth; 
	float SourceHeight; 
	float BarnDoorAngle; 
};

// ScriptStruct Icarus.PrefabStaticMesh
struct FPrefabStaticMesh {
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; 
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> MaterialOverrides; 
	struct FTransform Transform; 
};

// ScriptStruct Icarus.ModifierStateSaveData
struct FModifierStateSaveData {
	struct FName RowName; 
	float TimeRemaining; 
	float InitialModifierLifeTime; 
	float DurationBuffModifier; 
	int32_t ModifierEffectiveness; 
};

// ScriptStruct Icarus.SerializedActorArray
struct FSerializedActorArray {
};

// ScriptStruct Icarus.SerializedIcarusActorRef
struct FSerializedIcarusActorRef {
};

// ScriptStruct Icarus.FLODActorComponentSaveData
struct FFLODActorComponentSaveData {
	struct FName TileName; 
	int32_t LevelIndex; 
	int32_t RecordIndex; 
	int32_t InstanceIndex; 
	bool bSpawnedFromPool; 
	bool bIsReservingInstance; 
	int32_t CurrentFLODState; 
};

// ScriptStruct Icarus.InventorySaveData
struct FInventorySaveData {
	struct TArray<struct FInventorySlotSaveData> Slots; 
	int32_t InventoryID; 
};

// ScriptStruct Icarus.InventorySlotSaveData
struct FInventorySlotSaveData {
	int32_t Location; 
	struct FName ItemStaticData; 
	struct FString ItemGuid; 
	int32_t ItemOwnerLookupId; 
	struct TArray<struct FInventorySlotDynamicData> DynamicData; 
	struct TArray<struct FInventorySlotStatData> AdditionalStats; 
	struct TArray<struct FInventorySlotAlterationData> Alterations; 
	struct TArray<struct FLivingItemSlotSaveData> LivingItemSlots; 
};

// ScriptStruct Icarus.LivingItemSlotSaveData
struct FLivingItemSlotSaveData {
	int32_t CurrentProgress; 
	struct FString CurrentUpgrade; 
};

// ScriptStruct Icarus.InventorySlotAlterationData
struct FInventorySlotAlterationData {
	struct FString Name; 
};

// ScriptStruct Icarus.InventorySlotStatData
struct FInventorySlotStatData {
	int32_t Index; 
	struct FString Name; 
	int32_t Value; 
};

// ScriptStruct Icarus.InventorySlotDynamicData
struct FInventorySlotDynamicData {
	int32_t Index; 
	int32_t Value; 
};

// ScriptStruct Icarus.ResourceComponentRecord
struct FResourceComponentRecord {
	bool bDeviceActive; 
	bool bDeviceManuallyShutdown; 
	uint32_t ConnectionPriorityMask; 
};

// ScriptStruct Icarus.GeneratorTraitRecord
struct FGeneratorTraitRecord {
	bool bActive; 
};

// ScriptStruct Icarus.WaterTraitRecord
struct FWaterTraitRecord {
	bool bActive; 
};

// ScriptStruct Icarus.EnergyTraitRecord
struct FEnergyTraitRecord {
	bool bActive; 
};

// ScriptStruct Icarus.LinearColorVariableRecord
struct FLinearColorVariableRecord {
	struct FName VariableName; 
	struct FLinearColor Variable; 
};

// ScriptStruct Icarus.ActorTextVariableRecord
struct FActorTextVariableRecord {
	struct FName VariableName; 
	struct FText Variable; 
};

// ScriptStruct Icarus.ActorNameVariableRecord
struct FActorNameVariableRecord {
	struct FName VariableName; 
	struct FName Variable; 
};

// ScriptStruct Icarus.ActorBoolVariableRecord
struct FActorBoolVariableRecord {
	struct FName VariableName; 
	bool bVariable; 
};

// ScriptStruct Icarus.ActorIntVariableRecord
struct FActorIntVariableRecord {
	struct FName VariableName; 
	int32_t iVariable; 
};

// ScriptStruct Icarus.AfflictionChance
struct FAfflictionChance : FIcarusTableRowBase {
	struct TArray<struct FModifierStatesRowHandle> Afflictions; 
	struct FStatsEnum ChanceStat; 
	int32_t ChanceInPercent; 
	int32_t DurationInSeconds; 
};

// ScriptStruct Icarus.AfflictionChanceEnum
struct FAfflictionChanceEnum : FRowEnum {
};

// ScriptStruct Icarus.AfflictionChanceRowHandle
struct FAfflictionChanceRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AIAudioData
struct FAIAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> FootstepSound; 
	struct FName FrontFootSocket; 
	struct FName RearFootSocket; 
	struct FName JumpSocket; 
	struct TSoftObjectPtr<UFMODEvent> MovementSound; 
	struct TSoftObjectPtr<UFMODEvent> DeathCollisionSound; 
	struct FName DeathCollisionSocket; 
	struct TSoftObjectPtr<UFMODEvent> WaterDeathSound; 
	struct FName VocalisationSocket; 
	struct FVocalisationsRowHandle AttackVocalisation; 
	struct FVocalisationsRowHandle FlinchVocalisation; 
	struct FVocalisationsRowHandle DeathVocalisation; 
	struct TMap<enum class EAIAudioState, struct FAIStateVocalisation> StateVocalisations; 
	struct TSoftClassPtr<UObject> ThreatComponentClass; 
	int32_t ThreatLevel; 
	struct FCreatureAudioThreatDataRowHandle ThreatConfig; 
	enum class EMusicConditionCombatState CombatMusicConditionOverride; 
	int32_t MusicConditionOverrideMinThreatLevel; 
	float FootstepMaxDistance; 
	float FoliageCheckMaxDistance; 
	bool bUsesShelter; 
};

// ScriptStruct Icarus.CreatureAudioThreatDataRowHandle
struct FCreatureAudioThreatDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AIStateVocalisation
struct FAIStateVocalisation {
	struct FVocalisationsRowHandle StateEnteredVocalisation; 
	struct FVocalisationsRowHandle StatePersistentVocalisation; 
	struct FVocalisationsRowHandle StateExitedVocalisation; 
};

// ScriptStruct Icarus.VocalisationsRowHandle
struct FVocalisationsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AIAudioDataEnum
struct FAIAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.AIAudioDataRowHandle
struct FAIAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.EventCooldownList
struct FEventCooldownList {
	struct TArray<float> Cooldowns; 
};

// ScriptStruct Icarus.ActiveEvent
struct FActiveEvent {
	struct AAIEvent* Event; 
	struct AActor* InstigatorActor; 
};

// ScriptStruct Icarus.AICreatureType
struct FAICreatureType : FIcarusTableRowBase {
	struct FText CreatureName; 
	struct FGameplayTag Tag; 
	struct FVirtualStatsEnum SpawnStat; 
	struct FVirtualStatsEnum AdditionalDamageStat; 
	struct FVirtualStatsEnum AdditionalResistanceStat; 
	struct FExperienceEventsRowHandle SkinningXPEvent; 
	struct FGameplayTag ParentCreatureTag; 
};

// ScriptStruct Icarus.VirtualStatsEnum
struct FVirtualStatsEnum : FStatsEnum {
};

// ScriptStruct Icarus.AICreatureTypeEnum
struct FAICreatureTypeEnum : FRowEnum {
};

// ScriptStruct Icarus.AICreatureTypeRowHandle
struct FAICreatureTypeRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AIDescriptor
struct FAIDescriptor : FIcarusTableRowBase {
	struct FGameplayTagContainer Tags; 
	struct TArray<struct FStatsEnum> DescriptorStats; 
};

// ScriptStruct Icarus.AIDescriptorsEnum
struct FAIDescriptorsEnum : FRowEnum {
};

// ScriptStruct Icarus.AIDescriptorsRowHandle
struct FAIDescriptorsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AIEventData
struct FAIEventData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> AIEventBehaviourClass; 
	int32_t MaxSimultaneousEvents; 
	int32_t CooldownDuration; 
	int32_t CooldownRandomDeviation; 
	bool bStartOnCooldown; 
};

// ScriptStruct Icarus.AIEventsEnum
struct FAIEventsEnum : FRowEnum {
};

// ScriptStruct Icarus.AIEventsRowHandle
struct FAIEventsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AIGrowth
struct FAIGrowth : FIcarusTableRowBase {
	struct TMap<struct FBaseStatsEnum, int32_t> Base; 
	struct UCurveFloat* Health; 
	struct UCurveFloat* MeleeDamage; 
	struct UCurveFloat* MovementSpeed; 
	struct TArray<struct FCustomScaledStat> CustomStats; 
	struct UCurveFloat* ExperienceMultiplier; 
	struct UCurveFloat* ProtectiveThreatOverDistance; 
};

// ScriptStruct Icarus.CustomScaledStat
struct FCustomScaledStat {
	struct FBaseStatsEnum Stat; 
	struct UCurveFloat* Curve; 
};

// ScriptStruct Icarus.BaseStatsEnum
struct FBaseStatsEnum : FStatsEnum {
};

// ScriptStruct Icarus.AIGrowthEnum
struct FAIGrowthEnum : FRowEnum {
};

// ScriptStruct Icarus.AIGrowthRowHandle
struct FAIGrowthRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AIRelationshipData
struct FAIRelationshipData : FIcarusTableRowBase {
	struct TArray<struct FAIRelationshipsRowHandle> HostileRelationships; 
	struct TArray<struct FAIRelationshipsRowHandle> NeutralRelationships; 
	struct TArray<struct FAIRelationshipsRowHandle> FriendlyRelationships; 
};

// ScriptStruct Icarus.AIRelationshipsRowHandle
struct FAIRelationshipsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AIRelationshipsEnum
struct FAIRelationshipsEnum : FRowEnum {
};

// ScriptStruct Icarus.AISetup
struct FAISetup : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> ActorClass; 
	struct TSoftClassPtr<UObject> ControllerClass; 
	struct FAICreatureTypeRowHandle CreatureType; 
	struct TArray<struct FAIDescriptorsRowHandle> Descriptors; 
	struct FItemsStaticRowHandle DeadItem; 
	struct FGOAPSetupRowHandle GOAPSetup; 
	struct UNavigationQueryFilter* DefaultNavigationFilter; 
	struct FAIRelationshipsRowHandle Relationships; 
	struct TArray<struct FTagQueriesRowHandle> NotifiedNPCTypes; 
	bool bNotifySelfType; 
	struct FAIGrowthRowHandle AIGrowth; 
	struct TMap<enum class EMovementState, struct FMovementStateData> MovementMapping; 
	struct FHuntingSetupRowHandle HuntingSetup; 
	struct TArray<struct FCriticalHitLocation> CriticalHitBones; 
	struct FAIAudioDataRowHandle Audio; 
	struct TArray<struct FName> CollisionHitEventBones; 
	int32_t LatentDeathDuration; 
	struct FGameplayTagQuery ValidBaitTagQuery; 
	struct FItemRewardsRowHandle Trophy; 
	struct FItemRewardsRowHandle Loot; 
	struct FItemRewardsRowHandle Hitable; 
	struct FExperienceRowHandle Experience; 
	bool bUseSurvivalCharacterState; 
	bool bStartWithSurvivalTickDisabled; 
	struct FBestiaryDataRowHandle BestiaryGroup; 
	struct TArray<struct FCriticalHitLocation> BlacklistBones; 
	int32_t PercentChanceToSpawn; 
	struct TArray<struct FAISetupRowHandle> AdditionalAIToSpawn; 
};

// ScriptStruct Icarus.AISetupRowHandle
struct FAISetupRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CriticalHitLocation
struct FCriticalHitLocation {
	struct FName BoneName; 
	bool AffectsChildren; 
};

// ScriptStruct Icarus.ExperienceRowHandle
struct FExperienceRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemRewardsRowHandle
struct FItemRewardsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.HuntingSetupRowHandle
struct FHuntingSetupRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MovementStateData
struct FMovementStateData {
	float MaxWalkSpeed; 
	float GroundFriction; 
	float BrakingFriction; 
	float MaxAcceleration; 
	float BrakingDeceleration; 
	float RotationRate; 
	float MaxSwimSpeed; 
};

// ScriptStruct Icarus.TagQueriesRowHandle
struct FTagQueriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GOAPSetupRowHandle
struct FGOAPSetupRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AISetupEnum
struct FAISetupEnum : FRowEnum {
};

// ScriptStruct Icarus.AISpawnConfigData
struct FAISpawnConfigData : FIcarusTableRowBase {
	struct TMap<struct FAISetupEnum, struct FAISpawnRulesList> AISpawnRules; 
	struct TSoftObjectPtr<UGameplayTexture> SpawnMap; 
	struct TArray<struct FAISpawnZoneSetup> SpawnZones; 
	struct TArray<struct FAutonomousSpawnsRowHandle> TerrainAutonomousSpawners; 
};

// ScriptStruct Icarus.AutonomousSpawnsRowHandle
struct FAutonomousSpawnsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AISpawnZoneSetup
struct FAISpawnZoneSetup {
	struct FColor Color; 
	struct FAISpawnZonesRowHandle SpawnZone; 
};

// ScriptStruct Icarus.AISpawnZonesRowHandle
struct FAISpawnZonesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AISpawnRulesList
struct FAISpawnRulesList {
	struct TArray<struct FAISpawnRulesEnum> SpawnRules; 
};

// ScriptStruct Icarus.AISpawnRulesEnum
struct FAISpawnRulesEnum : FRowEnum {
};

// ScriptStruct Icarus.HeatmapAISpawnData
struct FHeatmapAISpawnData {
	struct TSoftObjectPtr<UGameplayTexture> HeatmapTexture; 
	enum class EHeatmapColorChannel HeatmapTextureChannel; 
	int32_t HeatmapSpawnWeight; 
};

// ScriptStruct Icarus.BiomeAISpawnData
struct FBiomeAISpawnData {
	struct TArray<struct FAISpawnListItemData> AISpawnList; 
	struct TMap<struct FWorldStatsEnum, struct FAISpawnListItemData> WorldStatInjection; 
	int32_t BiomeSpawnDensity; 
	struct TArray<struct FAutonomousSpawnsRowHandle> RelevantAutonomousSpawners; 
};

// ScriptStruct Icarus.WorldStatsEnum
struct FWorldStatsEnum : FStatsEnum {
};

// ScriptStruct Icarus.AISpawnListItemData
struct FAISpawnListItemData {
	struct FAISetupEnum AISetup; 
	int32_t SpawnWeight; 
	struct FEpicCreaturesEnum EpicCreature; 
};

// ScriptStruct Icarus.EpicCreaturesEnum
struct FEpicCreaturesEnum : FRowEnum {
};

// ScriptStruct Icarus.AISpawnConfigEnum
struct FAISpawnConfigEnum : FRowEnum {
};

// ScriptStruct Icarus.AISpawnConfigRowHandle
struct FAISpawnConfigRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SpawnBlocker
struct FSpawnBlocker {
	struct FVector BlockerLocation; 
	float ExpirationTime; 
	float Duration; 
	bool bHasPlayerLeftArea; 
};

// ScriptStruct Icarus.TileSpawnData
struct FTileSpawnData {
	struct TArray<struct FVector> SpawnPoints; 
};

// ScriptStruct Icarus.AISpawnRuleData
struct FAISpawnRuleData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> SpawnFilter; 
	bool InverseCondition; 
	struct TMap<struct FString, int32_t> FilterParams; 
};

// ScriptStruct Icarus.AISpawnRulesRowHandle
struct FAISpawnRulesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AISpawnZones
struct FAISpawnZones : FIcarusTableRowBase {
	struct FBiomeAISpawnData Creatures; 
	int32_t MinLevel; 
	int32_t MedianLevel; 
	int32_t MaxLevel; 
};

// ScriptStruct Icarus.AISpawnZonesEnum
struct FAISpawnZonesEnum : FRowEnum {
};

// ScriptStruct Icarus.Alteration
struct FAlteration : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	struct FText Description; 
	struct TSoftObjectPtr<UTexture2D> RankIcon; 
	struct TMap<struct FStatsEnum, int32_t> Stats; 
};

// ScriptStruct Icarus.AlterationModifiers
struct FAlterationModifiers : FIcarusTableRowBase {
	struct FAlterationsEnum Alteration; 
	float ModifierDuration; 
	struct FModifierStatesRowHandle Modifier; 
	int32_t Priority; 
	bool bIsCrafted; 
	bool bCannotBeFurtherAltered; 
	int32_t ModifierEffectiveness; 
};

// ScriptStruct Icarus.AlterationModifiersEnum
struct FAlterationModifiersEnum : FRowEnum {
};

// ScriptStruct Icarus.AlterationModifiersRowHandle
struct FAlterationModifiersRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AlterationsRowHandle
struct FAlterationsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AmmoTypeData
struct FAmmoTypeData : FIcarusTableRowBase {
	int32_t ProjectileCount; 
	int32_t ProjectileDamage; 
	struct FVector2D ProjectileAccuracy; 
	struct TMap<struct FStatsEnum, int32_t> Stats; 
};

// ScriptStruct Icarus.AmmoTypesEnum
struct FAmmoTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.AmmoTypesRowHandle
struct FAmmoTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AnimNode_ExtensionLimit
struct FAnimNode_ExtensionLimit : FAnimNode_SkeletalControlBase {
	struct TArray<struct FExtensionLimitLimbDefinition> LimbDefinitions; 
};

// ScriptStruct Icarus.ExtensionLimitLimbDefinition
struct FExtensionLimitLimbDefinition {
	struct FBoneReference IKLimbBone; 
	struct FBoneReference FKLimbBone; 
	int32_t NumBonesInLimb; 
};

// ScriptStruct Icarus.AnimNode_SpeedWarping3D
struct FAnimNode_SpeedWarping3D : FAnimNode_SkeletalControlBase {
	struct TArray<struct FSpeedWarping3DLimbDefinition> LimbDefinitions; 
	enum class EBoneControlSpace Space; 
	enum class ECollisionChannel TraceProfile; 
	struct FVector Direction; 
	float SpeedScaling; 
};

// ScriptStruct Icarus.SpeedWarping3DLimbDefinition
struct FSpeedWarping3DLimbDefinition {
	struct FBoneReference IKLimbBone; 
	struct FBoneReference FKLimbBone; 
	struct FBoneReference IKLimbTargetBone; 
	int32_t NumBonesInLimb; 
};

// ScriptStruct Icarus.ArcadeMachineScore
struct FArcadeMachineScore {
	struct FPlayerCharacterID PlayerCharacterID; 
	struct FString PlayerName; 
	float Score; 
};

// ScriptStruct Icarus.ArmourSet
struct FArmourSet : FIcarusTableRowBase {
	struct TArray<struct FArmourSetBonusRowHandle> SetBonus; 
	enum class EPlayerArmourTypeFMODParam FMODParam; 
};

// ScriptStruct Icarus.ArmourSetBonusRowHandle
struct FArmourSetBonusRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ArmourSetBonus
struct FArmourSetBonus : FIcarusTableRowBase {
	int32_t RequiredGear; 
	struct FText Description; 
	struct TMap<struct FBaseStatsEnum, int32_t> StatsGranted; 
};

// ScriptStruct Icarus.ArmourData
struct FArmourData : FIcarusTableRowBase {
	struct TSoftObjectPtr<USkeletalMesh> ArmourMesh; 
	struct TSoftObjectPtr<USkeletalMesh> HabArmourMesh; 
	struct TSoftObjectPtr<USkeletalMesh> FemaleMeshVariant; 
	struct TSoftObjectPtr<USkeletalMesh> FirstPersonMeshVariant; 
	bool bHideFirstPersonUndersuit; 
	struct TSoftClassPtr<UObject> AnimBlueprintClass; 
	struct TSoftClassPtr<UObject> FemaleAnimBlueprintClass; 
	struct TSoftClassPtr<UObject> FirstPersonAnimBlueprintClass; 
	struct TSoftClassPtr<UObject> TPFurClass; 
	struct TSoftClassPtr<UObject> FPFurClass; 
	struct TMap<struct FBaseStatsEnum, int32_t> ArmourStats; 
	enum class EArmourType ArmourType; 
	struct FArmourSetsRowHandle ArmourSet; 
	struct TArray<struct FArmourRowHandle> ImplicitDefaultArmour; 
	bool bOverrideDefaultMaterials; 
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> ArmourMeshMaterialOverrides; 
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> FemaleArmourMeshMaterialOverrides; 
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> FPArmourMeshMaterialOverrides; 
};

// ScriptStruct Icarus.ArmourRowHandle
struct FArmourRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ArmourSetsRowHandle
struct FArmourSetsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ArmourEnum
struct FArmourEnum : FRowEnum {
};

// ScriptStruct Icarus.ArmourSetBonusEnum
struct FArmourSetBonusEnum : FRowEnum {
};

// ScriptStruct Icarus.ArmourSetsEnum
struct FArmourSetsEnum : FRowEnum {
};

// ScriptStruct Icarus.AssetReferenceData
struct FAssetReferenceData : FIcarusTableRowBase {
	enum class EAssetType AssetType; 
	struct TSoftClassPtr<UObject> SoftClassPtr; 
	struct TSoftObjectPtr<UObject> SoftObjectPtr; 
	struct UObject* HardClassPtr; 
	struct UObject* HardObjectPtr; 
	bool bHardReference; 
	bool bPreload; 
};

// ScriptStruct Icarus.AssetReferencesEnum
struct FAssetReferencesEnum : FRowEnum {
};

// ScriptStruct Icarus.AssetReferencesRowHandle
struct FAssetReferencesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AtmospheresEnum
struct FAtmospheresEnum : FRowEnum {
};

// ScriptStruct Icarus.AtmospheresRowHandle
struct FAtmospheresRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AttachmentIcon
struct FAttachmentIcon : FIcarusTableRowBase {
	struct FTagQueriesRowHandle TagQuery; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
};

// ScriptStruct Icarus.AttachmentIconsEnum
struct FAttachmentIconsEnum : FRowEnum {
};

// ScriptStruct Icarus.AttachmentIconsRowHandle
struct FAttachmentIconsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AudioContextCaveColliderSet
struct FAudioContextCaveColliderSet {
	struct TSet<struct UPrimitiveComponent*> Colliders; 
};

// ScriptStruct Icarus.AudioContextSubscriber
struct FAudioContextSubscriber {
	struct UFMODAudioComponent* AudioComponent; 
};

// ScriptStruct Icarus.AudioOcclusionSocketTracePoint
struct FAudioOcclusionSocketTracePoint {
	struct FName TraceName; 
	struct FName TargetSocket; 
	struct USceneComponent* Target; 
};

// ScriptStruct Icarus.AudioOcclusionTracePoint
struct FAudioOcclusionTracePoint {
	struct FName Name; 
	struct FVector Location; 
};

// ScriptStruct Icarus.AudioOcclusionTraceResult
struct FAudioOcclusionTraceResult {
};

// ScriptStruct Icarus.AuraInfo
struct FAuraInfo : FIcarusTableRowBase {
	struct FModifierStatesRowHandle Modifier; 
	struct FStatsEnum Stat; 
};

// ScriptStruct Icarus.FindAuraResult
struct FFindAuraResult {
	struct FModifierStatesRowHandle AuraType; 
	struct UModifierStateComponent* Component; 
};

// ScriptStruct Icarus.ActiveModifiers
struct FActiveModifiers {
	struct TArray<struct FActiveModifierUIDs> ActiveModifiers; 
};

// ScriptStruct Icarus.ActiveModifierUIDs
struct FActiveModifierUIDs {
	struct FModifierStatesRowHandle ModifierRow; 
	struct TArray<int32_t> UIDs; 
};

// ScriptStruct Icarus.AuraInstances
struct FAuraInstances {
	struct TArray<struct FAuraInstance> Instances; 
};

// ScriptStruct Icarus.AuraInstance
struct FAuraInstance {
	struct FModifierStateData AuraModifier; 
	struct FModifierStatesRowHandle ModifierRow; 
	struct UModifierStateComponent* OwningStateComp; 
	struct TMap<struct AActor*, int32_t> CurrentAffectedActors; 
	int32_t AuraRange; 
};

// ScriptStruct Icarus.ModifierStateData
struct FModifierStateData : FIcarusTableRowBase {
	struct UTexture2D* ModifierIcon; 
	enum class EModifierType Type; 
	struct FText ModifierName; 
	struct FText ModifierDescription; 
	bool VisibleToPlayer; 
	struct TSoftClassPtr<UObject> CosmeticAttachComponent; 
	struct FModifierStateAudioDataRowHandle AudioData; 
	struct TMap<struct FStatsEnum, int32_t> GrantedStats; 
	struct TArray<struct FStatsEnum> ModifierEffectivenessAffectors; 
	bool bAura; 
	int32_t AuraRange; 
	struct FAuraFlags AuraFlags; 
	struct FModifierStatesRowHandle ModifierGrantedByAura; 
	bool bEscalates; 
	struct FAfflictionChanceRowHandle Escalation; 
	float EscalationTime; 
	bool bRemovedOnEscalation; 
	struct TSoftClassPtr<UObject> Behaviour; 
	struct TMap<struct FString, struct FRandomRangeValue> ModifierVariables; 
	bool ShouldTick; 
	bool TickOnApply; 
	float ModifierTickRate; 
	struct TArray<struct FStatsEnum> ModifierLifetimeAffectors; 
	bool RemovedOnDeath; 
	enum class EModifierMergeType MergeType; 
	int32_t MaxStackNum; 
	struct FGameplayTagContainer ModifierTags; 
	struct FGameplayTagQuery ModifierAllowedQuery; 
	struct FTagQueriesRowHandle EffectsCustomActor; 
	bool bEffectsObjects; 
	bool bEffectsNPCs; 
	bool bEffectsPlayers; 
	bool SaveToDatabase; 
	bool RemovedOnClick; 
};

// ScriptStruct Icarus.RandomRangeValue
struct FRandomRangeValue {
	float BaseValue; 
	float Deviation; 
};

// ScriptStruct Icarus.AuraFlags
struct FAuraFlags {
	bool EffectsSelf; 
	bool EffectsPlayers; 
	bool EffectsNPCs; 
	bool EffectsDeployables; 
};

// ScriptStruct Icarus.ModifierStateAudioDataRowHandle
struct FModifierStateAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.AutonomousSpawnData
struct FAutonomousSpawnData : FIcarusTableRowBase {
	struct FAISetupEnum AISetup; 
	struct TSoftClassPtr<UObject> IcarusActorClass; 
	struct TSoftClassPtr<UObject> AISpawnBehaviour; 
	int32_t MaxNumAroundPlayers; 
	int32_t MaxSpawnCount; 
	int32_t MaxDistanceToPlayers; 
	struct FGameplayTagContainer GameplayTagsToApply; 
	struct FWorldStatsEnum RequiredStat; 
};

// ScriptStruct Icarus.AutonomousSpawnsEnum
struct FAutonomousSpawnsEnum : FRowEnum {
};

// ScriptStruct Icarus.PendingInventorySwap
struct FPendingInventorySwap {
};

// ScriptStruct Icarus.BagPriorityData
struct FBagPriorityData : FIcarusTableRowBase {
	struct FTagQueriesRowHandle ItemQuery; 
	struct TArray<struct FItemsStaticRowHandle> BagItems; 
};

// ScriptStruct Icarus.BagPriorityEnum
struct FBagPriorityEnum : FRowEnum {
};

// ScriptStruct Icarus.BagPriorityRowHandle
struct FBagPriorityRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FireData
struct FFireData {
	struct FVector Impulse; 
	struct FVector InstigatorVelocity; 
	struct FProjectileFireParams AdvancedParameters; 
	struct AActor* Instigator; 
	bool bIsDataValid; 
	int32_t TimeFired; 
};

// ScriptStruct Icarus.BallisticData
struct FBallisticData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; 
	float Damage; 
	int32_t DamageVariationPercentage; 
	bool bCanStealthAttack; 
	bool bHomingProjectile; 
	bool bCanKillCam; 
	bool bUnbreakableDuringKillCam; 
	float Weight; 
	float GravityScale; 
	bool AllowPickupAfterSettle; 
	struct TSoftClassPtr<UObject> PayloadClass; 
	enum class EPayloadDeploymentType PayloadDeploymentType; 
	float PayloadDeploymentTimerDelay; 
	struct TSoftObjectPtr<UFXSystemAsset> TrailParticle; 
	bool bPlayHitEffects; 
	float BreakChance; 
	int32_t DurabilityDamage; 
	float PostDeployLifetime; 
	int32_t CullDistanceSquared; 
	bool AttachOnHit; 
	struct FBounceSettings ProjectileBounceSettings; 
	struct TSoftObjectPtr<UStaticMesh> OverrideStaticMesh; 
	struct TSoftObjectPtr<USkeletalMesh> OverrideSkeletalMesh; 
	struct TSoftObjectPtr<UPhysicsAsset> OverridePhysicsAsset; 
	bool RotationFollowsVelocity; 
	struct FRotator VelocityRotationOffset; 
	struct FRotator AngularRotation; 
	struct FVector SpawnPositionOffset; 
	struct FBallisticAudioData AudioData; 
	bool bUseActorPooling; 
	bool bDisableRecorderComponent; 
	float OnHitAINoiseEventRange; 
	float DelaySpawningVisibilityTime; 
	bool bUseProjectileWeightForLauncher; 
	float LauncherProjectileAdditionalForceMultiplier; 
	bool bIgnorePayloadDeployOverride; 
};

// ScriptStruct Icarus.BallisticAudioData
struct FBallisticAudioData {
	struct TSoftObjectPtr<UFMODEvent> FlySound; 
	struct TSoftObjectPtr<UFMODEvent> ImpactSound; 
	bool bPlayImpactSoundOnPayload; 
};

// ScriptStruct Icarus.BounceSettings
struct FBounceSettings {
	bool bBounceAngleAffectsFriction; 
	float Bounciness; 
	float Friction; 
	float BounceVelocityStopSimulatingThreshold; 
	float MinFrictionFraction; 
	float MinTimeBetweenBounces; 
};

// ScriptStruct Icarus.BallisticEnum
struct FBallisticEnum : FRowEnum {
};

// ScriptStruct Icarus.BallisticRowHandle
struct FBallisticRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FiredProjectileInfo
struct FFiredProjectileInfo {
	struct FTransform SpawnTransform; 
	float SpawnTimeInGameSeconds; 
	struct TWeakObjectPtr<struct AIcarusItem> Projectile; 
};

// ScriptStruct Icarus.InstancedLevelData
struct FInstancedLevelData {
};

// ScriptStruct Icarus.BaseLevelTeleportRepInfo
struct FBaseLevelTeleportRepInfo {
	struct FTransform BaseMeshTransform; 
	struct FTransform PlacementMeshTransform; 
	struct UStaticMesh* BaseMeshRef; 
	struct TArray<struct UMaterialInterface*> BaseMeshMaterials; 
};

// ScriptStruct Icarus.FishDataFastArray
struct FFishDataFastArray : FFastArraySerializer {
	struct TArray<struct FFishDataFastArrayItem> FishEntries; 
};

// ScriptStruct Icarus.FishDataFastArrayItem
struct FFishDataFastArrayItem : FFastArraySerializerItem {
	struct FFishDataRowHandle FishRow; 
	int32_t MaxQuality; 
	int32_t MaxWeight; 
	int32_t MaxLength; 
	int32_t CaughtCount; 
};

// ScriptStruct Icarus.BestiaryFastArray
struct FBestiaryFastArray : FFastArraySerializer {
	struct TArray<struct FBestiaryFastArrayItem> BestiaryEntries; 
};

// ScriptStruct Icarus.BestiaryFastArrayItem
struct FBestiaryFastArrayItem : FFastArraySerializerItem {
	struct FBestiaryDataRowHandle BestiaryRowHandle; 
	int32_t PointScore; 
};

// ScriptStruct Icarus.BestiaryData
struct FBestiaryData : FIcarusTableRowBase {
	struct FText CreatureName; 
	struct TSoftObjectPtr<UTexture2D> Image; 
	float PopupImageScale; 
	struct FVector2D PopupImageOffset; 
	enum class EBiomeImageType BiomeImageType; 
	struct TSoftObjectPtr<UFMODEvent> CreatureSound; 
	struct TArray<struct FAISetupRowHandle> SpecificCreatures; 
	struct TArray<struct FAtmospheresRowHandle> Biomes; 
	struct TArray<struct FTerrainsRowHandle> Maps; 
	int32_t TotalPointsRequired; 
	struct FText Lore1; 
	struct FText Lore2; 
	struct FText Lore3; 
	struct TArray<struct FBestiaryTraitsRowHandle> Traits; 
	struct TMap<struct FBaseStatsEnum, int32_t> StatsUnlock1; 
	struct TMap<struct FBaseStatsEnum, int32_t> StatsUnlock2; 
	struct TArray<struct FBaseStatsEnum> ProgressiveStat; 
	bool bIsBoss; 
};

// ScriptStruct Icarus.BestiaryTraitsRowHandle
struct FBestiaryTraitsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TerrainsRowHandle
struct FTerrainsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BestiaryDataEnum
struct FBestiaryDataEnum : FRowEnum {
};

// ScriptStruct Icarus.FishCategory
struct FFishCategory {
	struct TMap<enum class EFishRarity, struct FFishRarity> Rarity; 
};

// ScriptStruct Icarus.FishRarity
struct FFishRarity {
	struct TArray<struct FFishDataRowHandle> Fish; 
};

// ScriptStruct Icarus.BestiaryCategory
struct FBestiaryCategory {
	struct TMap<struct FAtmospheresRowHandle, struct FBestiaryBiome> Biomes; 
};

// ScriptStruct Icarus.BestiaryBiome
struct FBestiaryBiome {
	struct TArray<struct FBestiaryDataRowHandle> Creatures; 
};

// ScriptStruct Icarus.BestiaryPoints
struct FBestiaryPoints : FIcarusTableRowBase {
	int32_t PointsAwarded; 
};

// ScriptStruct Icarus.BestiaryPointsEnum
struct FBestiaryPointsEnum : FRowEnum {
};

// ScriptStruct Icarus.BestiaryPointsRowHandle
struct FBestiaryPointsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BestiaryTraitData
struct FBestiaryTraitData : FIcarusTableRowBase {
	struct FText TraitName; 
	struct FBestiaryTraitTypesRowHandle Type; 
	struct FLinearColor OverrideColor; 
	struct TSoftObjectPtr<UTexture2D> OverrideIcon; 
};

// ScriptStruct Icarus.BestiaryTraitTypesRowHandle
struct FBestiaryTraitTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BestiaryTraitsEnum
struct FBestiaryTraitsEnum : FRowEnum {
};

// ScriptStruct Icarus.BestiaryTraitType
struct FBestiaryTraitType : FIcarusTableRowBase {
	struct FLinearColor Color; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
};

// ScriptStruct Icarus.BestiaryTraitTypesEnum
struct FBestiaryTraitTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.BiomeAudioData
struct FBiomeAudioData : FIcarusTableRowBase {
	enum class EGlobalEnvironmentBiomeFMODParam BiomeFMODParam; 
	struct FMusicLocationConditionsRowHandle MusicLocationCondition; 
	struct TSoftObjectPtr<UFMODEvent> AudioAmbienceBase; 
	struct TSoftObjectPtr<UFMODEvent> AudioAmbienceTransitional; 
};

// ScriptStruct Icarus.MusicLocationConditionsRowHandle
struct FMusicLocationConditionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BiomeAudioDataEnum
struct FBiomeAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.BiomeAudioDataRowHandle
struct FBiomeAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BiomesEnum
struct FBiomesEnum : FRowEnum {
};

// ScriptStruct Icarus.PersistentBlockerRecord
struct FPersistentBlockerRecord {
	struct FString BlockerActorClassName; 
	int32_t BlockerActorIcarusUID; 
};

// ScriptStruct Icarus.BlueprintUnlock
struct FBlueprintUnlock : FIcarusTableRowBase {
	struct FItemableRowHandle Itemable; 
	struct TArray<struct FCharacterFlagsRowHandle> Requirements; 
	struct TArray<struct FCharacterFlagsRowHandle> Unlocks; 
	int32_t RequiredPointsToUnlock; 
	int32_t RequiredLevel; 
};

// ScriptStruct Icarus.CharacterFlagsRowHandle
struct FCharacterFlagsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemableRowHandle
struct FItemableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BlueprintUnlocksEnum
struct FBlueprintUnlocksEnum : FRowEnum {
};

// ScriptStruct Icarus.BlueprintUnlocksRowHandle
struct FBlueprintUnlocksRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BreakableRockData
struct FBreakableRockData : FIcarusTableRowBase {
	struct FItemRewardsRowHandle ItemReward; 
	struct FItemTemplateRowHandle PyriticCrustItemType; 
	struct FDurableRowHandle Durable; 
	struct FStatsEnum RewardStat; 
	struct FGameplayTagContainer Tags; 
	struct TSoftObjectPtr<UFMODEvent> BreakSound; 
};

// ScriptStruct Icarus.DurableRowHandle
struct FDurableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BreakableRockDataEnum
struct FBreakableRockDataEnum : FRowEnum {
};

// ScriptStruct Icarus.BreakableRockDataRowHandle
struct FBreakableRockDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FunctionContext
struct FFunctionContext {
	struct UObject* ContextClass; 
	struct FString FunctionToExecute; 
};

// ScriptStruct Icarus.BuildableAudioData
struct FBuildableAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> BuildingPlacedSound; 
	struct TSoftObjectPtr<UFMODEvent> BuildingStressDamageSound; 
	struct TSoftObjectPtr<UFMODEvent> BuildingDestroyedSound; 
	struct TSoftObjectPtr<UFMODEvent> BuildingDamagedSound; 
	struct TSoftObjectPtr<UFMODEvent> BuildingDestructibleDamagedSound; 
	struct TSoftObjectPtr<UFMODEvent> BuildingWeatherDamageSound; 
	struct TSoftObjectPtr<UFMODEvent> BuildingWeatherDamageStrippedSound; 
	struct TSoftObjectPtr<UFMODEvent> BuildingWeatherUnzippingSound; 
	struct TSoftObjectPtr<UFMODEvent> BuildingRepairedSound; 
	float BuildingOcclusionValue; 
};

// ScriptStruct Icarus.BuildableAudioDataEnum
struct FBuildableAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.BuildableAudioDataRowHandle
struct FBuildableAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BuildableData
struct FBuildableData : FIcarusTableRowBase {
	struct UBuildableComponent* Behaviour; 
	struct FBuildingStabilityRowHandle Stability; 
	struct FBuildingTypesRowHandle Type; 
	enum class EBuildingPieceType PieceType; 
	struct TArray<struct FBuildingVariation> Variations; 
	struct TMap<struct FStatsEnum, int32_t> Stats; 
};

// ScriptStruct Icarus.BuildingVariation
struct FBuildingVariation {
	struct FTalentsRowHandle Requirement; 
	struct FBuildingPiecesRowHandle Piece; 
};

// ScriptStruct Icarus.BuildingPiecesRowHandle
struct FBuildingPiecesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BuildingTypesRowHandle
struct FBuildingTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BuildingStabilityRowHandle
struct FBuildingStabilityRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BuildableEnum
struct FBuildableEnum : FRowEnum {
};

// ScriptStruct Icarus.BuildableRowHandle
struct FBuildableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BlockerVolume
struct FBlockerVolume {
};

// ScriptStruct Icarus.WeightTransferRelationship
struct FWeightTransferRelationship {
	struct UShapeComponent* ShapeComponent; 
	struct UWeightComponent* WeightComponent; 
	struct TArray<struct ABuildingBase*> Buildings; 
	float CachedWeight; 
};

// ScriptStruct Icarus.GridPoint
struct FGridPoint {
	struct TArray<struct ABuildingBase*> Buildings; 
};

// ScriptStruct Icarus.VectorPair
struct FVectorPair {
	struct FVector StartPoint; 
	struct FVector EndPoint; 
};

// ScriptStruct Icarus.BuildingList
struct FBuildingList {
	struct TArray<struct ABuildingBase*> Buildings; 
};

// ScriptStruct Icarus.SerializedGrid
struct FSerializedGrid {
	struct FTransform GridTrans; 
	struct TArray<struct ABuildingBase*> BuildingClasses; 
	struct TArray<struct FTransform> BuildingTrans; 
	struct TArray<struct FItemData> BuildingItemData; 
};

// ScriptStruct Icarus.DatabaseBuildingGrid
struct FDatabaseBuildingGrid {
	struct FTransform GridTransform; 
	struct TArray<struct FDatabaseBuildingType> BuildingTypes; 
};

// ScriptStruct Icarus.DatabaseBuildingType
struct FDatabaseBuildingType {
	struct FName BuildableRowName; 
	struct FName BuildingItemStaticRowName; 
	struct TArray<struct FBuildingInstance> BuildingInstances; 
};

// ScriptStruct Icarus.BuildingInstance
struct FBuildingInstance {
	struct FTransform Transform; 
	int32_t Variation; 
	int32_t IcarusUID; 
	float BurnTimeRemaining; 
};

// ScriptStruct Icarus.BuildingGridSaveData
struct FBuildingGridSaveData {
	struct FTransform GridTransform; 
	struct TArray<struct FDatabaseBuildingData> BuildingTypes; 
};

// ScriptStruct Icarus.DatabaseBuildingData
struct FDatabaseBuildingData {
	struct FName BuildableRowName; 
	struct FName BuildingItemStaticRowName; 
	struct TArray<struct FBuildingInfo> BuildingInstances; 
};

// ScriptStruct Icarus.BuildingInfo
struct FBuildingInfo {
	struct FTransform Transform; 
	int32_t Variation; 
	int32_t IcarusUID; 
	float BurnTimeRemaining; 
	int32_t HealthPercentage; 
	struct TArray<struct FBuildingRecordStatData> AdditionalStats; 
	struct TArray<struct FBuildingRecordAlterationData> Alterations; 
	bool bIsInCave; 
	bool bSupportedByGround; 
	float AnchorStrength; 
	struct TArray<struct FModifierStateSaveData> Modifiers; 
};

// ScriptStruct Icarus.BuildingRecordAlterationData
struct FBuildingRecordAlterationData {
	struct FName Alteration; 
	int32_t Value; 
};

// ScriptStruct Icarus.BuildingRecordStatData
struct FBuildingRecordStatData {
	struct FName Stat; 
	int32_t Value; 
};

// ScriptStruct Icarus.BuildingLookup
struct FBuildingLookup : FIcarusTableRowBase {
	struct FText PieceName; 
	bool AccumulationEnabled; 
	struct FBuildingPiecesRowHandle Thatch; 
	struct FBuildingPiecesRowHandle Wood; 
	struct FBuildingPiecesRowHandle Refined_Wood; 
	struct FBuildingPiecesRowHandle Stone; 
	struct FBuildingPiecesRowHandle Concrete; 
	struct FBuildingPiecesRowHandle Aluminium; 
	struct FBuildingPiecesRowHandle Glass; 
	struct FBuildingPiecesRowHandle ClayBrick; 
	struct FBuildingPiecesRowHandle Scoria; 
	struct FBuildingPiecesRowHandle ScoriaBrick; 
	struct FBuildingPiecesRowHandle Ice; 
	struct FBuildingPiecesRowHandle Dirt; 
	struct FBuildingPiecesRowHandle Steel; 
	struct FBuildingPiecesRowHandle StoneBrick; 
	struct FBuildingPiecesRowHandle Limestone; 
	struct FBuildingPiecesRowHandle BeeswaxWood; 
	struct FBuildingPiecesRowHandle GlassTempered; 
};

// ScriptStruct Icarus.BuildingLookupEnum
struct FBuildingLookupEnum : FRowEnum {
};

// ScriptStruct Icarus.BuildingLookupRowHandle
struct FBuildingLookupRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BuildingPiece
struct FBuildingPiece : FIcarusTableRowBase {
	struct FBuildingLookupRowHandle Type; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	struct TSoftClassPtr<UObject> Blueprint; 
	struct FBuildableAudioDataRowHandle Audio; 
	struct FBuildingSkinsRowHandle Skin; 
};

// ScriptStruct Icarus.BuildingSkinsRowHandle
struct FBuildingSkinsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.BuildingPiecesEnum
struct FBuildingPiecesEnum : FRowEnum {
};

// ScriptStruct Icarus.BuildingSkin
struct FBuildingSkin : FIcarusTableRowBase {
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> BaseMeshMaterialSlotOverrides; 
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> FrameMaterialSlotOverrides; 
};

// ScriptStruct Icarus.BuildingSkinsEnum
struct FBuildingSkinsEnum : FRowEnum {
};

// ScriptStruct Icarus.BuildingStability
struct FBuildingStability : FIcarusTableRowBase {
	float BuildingTier; 
	float MaxHardStability; 
	int32_t HardStabilityMaxRange; 
	float MinimumUnstableStability; 
	float StabilityPassMultiplier; 
	float MaxAnchoredStability; 
	float LowestGreenStability; 
	float YellowStability; 
	float HighestRedStability; 
};

// ScriptStruct Icarus.BuildingStabilityEnum
struct FBuildingStabilityEnum : FRowEnum {
};

// ScriptStruct Icarus.BuildingTypesEnum
struct FBuildingTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.CameraPath
struct FCameraPath {
	struct FString PathName; 
	float Duration; 
	bool bCapturedFOV; 
	struct TArray<struct FCameraPathSample> Samples; 
};

// ScriptStruct Icarus.CameraPathSample
struct FCameraPathSample {
	float Time; 
	struct FTransform RelativeTransform; 
	float FOV; 
};

// ScriptStruct Icarus.CargoLandingPadRecord
struct FCargoLandingPadRecord {
	int32_t LeftSlotUID; 
	int32_t RightSlotUID; 
};

// ScriptStruct Icarus.CaveActorSpawnTimeStamp
struct FCaveActorSpawnTimeStamp {
	struct FString CaveActorClassName; 
	struct TArray<float> SpawnTimestamps; 
};

// ScriptStruct Icarus.Challenge
struct FChallenge : FIcarusTableRowBase {
	struct FText ChallengeName; 
	struct FText ChallengeDescription; 
	enum class EChallengeTypes Type; 
	int32_t RequiredCount; 
	struct FGameplayTagContainer OptionalRequiredTags; 
};

// ScriptStruct Icarus.ChallengesEnum
struct FChallengesEnum : FRowEnum {
};

// ScriptStruct Icarus.ChallengesRowHandle
struct FChallengesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CharacterCreationData
struct FCharacterCreationData : FIcarusTableRowBase {
	struct FText DisplayName; 
	enum class ECharacterOptionCategory Category; 
	enum class ECharacterBodyType BodyType; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	struct FItemTemplateRowHandle Item; 
	struct TArray<struct FColor> Color; 
	float ScalarParamValue; 
	struct TSoftObjectPtr<UTexture2D> TextureParamValue; 
	struct TMap<struct TSoftObjectPtr<UMaterialInterface>, struct TSoftObjectPtr<UMaterialInterface>> MaterialOverrides; 
	bool bEnabled; 
	struct FDLCPackageDataRowHandle RequiredPackageID; 
};

// ScriptStruct Icarus.DLCPackageDataRowHandle
struct FDLCPackageDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CharacterCreationDataEnum
struct FCharacterCreationDataEnum : FRowEnum {
};

// ScriptStruct Icarus.CharacterCreationDataRowHandle
struct FCharacterCreationDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CharacterFlag
struct FCharacterFlag : FIcarusTableRowBase {
	struct FText Description; 
};

// ScriptStruct Icarus.CharacterFlagsEnum
struct FCharacterFlagsEnum : FRowEnum {
};

// ScriptStruct Icarus.CharacterGrowth
struct FCharacterGrowth : FIcarusTableRowBase {
	struct UCurveFloat* ExperienceCurve; 
	struct UCurveFloat* AttributeCurve; 
	struct UCurveFloat* BlueprintPointsPerLevel; 
	struct UCurveFloat* TalentPointsPerLevel; 
	struct UCurveFloat* SoloPointsPerLevel; 
	int32_t MaxDisplayLevel; 
	int32_t MaxLevel; 
};

// ScriptStruct Icarus.CharacterGrowthEnum
struct FCharacterGrowthEnum : FRowEnum {
};

// ScriptStruct Icarus.CharacterGrowthRowHandle
struct FCharacterGrowthRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CharacterPerk
struct FCharacterPerk : FIcarusTableRowBase {
	struct FText Name; 
	struct FText Description; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	enum class ECharacterAttribute Attribute; 
	int32_t RequiredAttributeLevel; 
	struct TMap<struct FStatsEnum, int32_t> StatsGranted; 
};

// ScriptStruct Icarus.CharacterPerksEnum
struct FCharacterPerksEnum : FRowEnum {
};

// ScriptStruct Icarus.CharacterPerksRowHandle
struct FCharacterPerksRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CharacterStartingStatsEnum
struct FCharacterStartingStatsEnum : FRowEnum {
};

// ScriptStruct Icarus.CharacterStartingStatsRowHandle
struct FCharacterStartingStatsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CharacterTimeline
struct FCharacterTimeline : FIcarusTableRowBase {
	int32_t Level; 
	struct TSoftObjectPtr<UTexture2D> Image; 
	struct TArray<struct FTimelineRanksRowHandle> TimelineRanks; 
	bool FeatureLocked; 
};

// ScriptStruct Icarus.TimelineRanksRowHandle
struct FTimelineRanksRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CharacterTimelineEnum
struct FCharacterTimelineEnum : FRowEnum {
};

// ScriptStruct Icarus.CharacterTimelineRowHandle
struct FCharacterTimelineRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CharacterVoiceData
struct FCharacterVoiceData : FIcarusTableRowBase {
	struct FText DisplayName; 
	enum class EGlobalPlayerCharacterVoiceFMODParam VoiceFMODParam; 
};

// ScriptStruct Icarus.CharacterVoicesEnum
struct FCharacterVoicesEnum : FRowEnum {
};

// ScriptStruct Icarus.CharacterVoicesRowHandle
struct FCharacterVoicesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ChargedModifiers
struct FChargedModifiers : FIcarusTableRowBase {
	struct FModifierStatesRowHandle Modifier; 
	struct FIcarusResourcesEnum Resource; 
};

// ScriptStruct Icarus.ChargedModifiersEnum
struct FChargedModifiersEnum : FRowEnum {
};

// ScriptStruct Icarus.ChargedModifiersRowHandle
struct FChargedModifiersRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CollectableNote
struct FCollectableNote : FIcarusTableRowBase {
	struct FItemableRowHandle Item; 
	struct FText Text; 
	struct TSoftObjectPtr<UTexture2D> Image; 
	struct FDialogueRowHandle Dialogue; 
};

// ScriptStruct Icarus.CollectableNotesEnum
struct FCollectableNotesEnum : FRowEnum {
};

// ScriptStruct Icarus.CollectableNotesRowHandle
struct FCollectableNotesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CombustibleData
struct FCombustibleData : FIcarusTableRowBase {
	int32_t MillijoulesProvided; 
	struct FItemTemplateRowHandle ProducesItem; 
	struct FName DescriptionText; 
};

// ScriptStruct Icarus.CombustibleEnum
struct FCombustibleEnum : FRowEnum {
};

// ScriptStruct Icarus.CombustibleRowHandle
struct FCombustibleRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ComponentPicker
struct FComponentPicker {
	struct FName ComponentName; 
	struct TWeakObjectPtr<struct USceneComponent> CachedComponent; 
};

// ScriptStruct Icarus.ConfirmationPopupDetails
struct FConfirmationPopupDetails {
	struct FText Description; 
	struct FText OptionA; 
	struct FText OptionB; 
	struct UFMODEvent* OptionAAudioOverride; 
	struct UFMODEvent* OptionBAudioOverride; 
	struct UUserWidget* ContentWidget; 
	struct UUserWidget* ContentWidgetClass; 
	struct UTexture2D* OptionAIcon; 
	struct UTexture2D* OptionBIcon; 
	struct FLinearColor OptionATint; 
	struct FLinearColor OptionBTint; 
};

// ScriptStruct Icarus.ConsumableData
struct FConsumableData : FIcarusTableRowBase {
	struct TMap<struct FStatsEnum, int32_t> Stats; 
	struct FModifier Modifier; 
	struct FName DescriptionText; 
	struct TArray<struct FItemTemplateRowHandle> Byproducts; 
};

// ScriptStruct Icarus.Modifier
struct FModifier {
	struct FModifierStatesRowHandle Modifier; 
	float ModifierLifetime; 
	int32_t ModifierEffectiveness; 
};

// ScriptStruct Icarus.ConsumableEnum
struct FConsumableEnum : FRowEnum {
};

// ScriptStruct Icarus.ConsumableRowHandle
struct FConsumableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ContextMenuItemData
struct FContextMenuItemData {
	struct FName ItemIdentifier; 
	int32_t ItemPayload; 
	struct FContextMenuGroupTypesRowHandle GroupType; 
	struct FText Label; 
	int32_t StackCount; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	bool bEnabled; 
	struct FFeatureLevelsRowHandle FeatureLevel; 
	struct FDelegate ItemClickedDelegate; 
	struct TArray<struct UWidget*> ContextWidgets; 
};

// ScriptStruct Icarus.ContextMenuGroupTypesRowHandle
struct FContextMenuGroupTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ContextMenuGroupType
struct FContextMenuGroupType : FIcarusTableRowBase {
	struct FText GroupName; 
	struct UTexture2D* GroupIcon; 
};

// ScriptStruct Icarus.ContextMenuGroupTypesEnum
struct FContextMenuGroupTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.CraftingAudioData
struct FCraftingAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> RecipeCraftedSound; 
	struct TMap<struct FProcessingRowHandle, struct TSoftObjectPtr<UFMODEvent>> ProcessorOverrideSounds; 
	bool bOnlyPlayForLastItemInQueue; 
};

// ScriptStruct Icarus.ProcessingRowHandle
struct FProcessingRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CraftingAudioDataEnum
struct FCraftingAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.CraftingAudioDataRowHandle
struct FCraftingAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ProcessorRecipe
struct FProcessorRecipe : FIcarusTableRowBase {
	bool bForceDisableRecipe; 
	struct FTalentsRowHandle Requirement; 
	struct FFlagsMultiRowHandle SessionRequirement; 
	struct FCharacterFlagsRowHandle CharacterRequirement; 
	int32_t RequiredMillijoules; 
	struct TArray<struct FRecipeSetsRowHandle> RecipeSets; 
	struct TArray<struct FStatsEnum> ResourceCostMultipliers; 
	struct TArray<struct FCraftingInput> Inputs; 
	struct TArray<struct FQueryInput> QueryInputs; 
	struct TArray<struct FResourceItem> ResourceInputs; 
	struct FIcarusResourcesEnum Container; 
	bool bSelectOutputItemRandomly; 
	bool bContainsContainer; 
	struct FItemData ItemIconOverride; 
	struct TArray<struct FCraftingOutput> Outputs; 
	struct TArray<struct FResourceItem> ResourceOutputs; 
	enum class ERefundPermission Refundable; 
	float ExperienceMultiplier; 
	struct FCraftingAudioDataRowHandle Audio; 
};

// ScriptStruct Icarus.CraftingOutput
struct FCraftingOutput {
	struct FItemTemplateRowHandle Element; 
	int32_t Count; 
	struct TArray<struct FItemDynamicData> DynamicProperties; 
	struct TArray<struct FAlterationsRowHandle> Alterations; 
};

// ScriptStruct Icarus.RecipeSetsRowHandle
struct FRecipeSetsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FlagsMultiRowHandle
struct FFlagsMultiRowHandle : FMultiRowHandle {
	enum class EFlagsTableType DataTableName; 
};

// ScriptStruct Icarus.CraftingTag
struct FCraftingTag : FIcarusTableRowBase {
	struct FText TagName; 
	struct TSoftObjectPtr<UTexture2D> TagIcon; 
	struct FTagQueriesRowHandle Query; 
};

// ScriptStruct Icarus.RecipeSet
struct FRecipeSet : FIcarusTableRowBase {
	struct FText RecipeSetName; 
	struct FText DisplayText; 
	struct TSoftObjectPtr<UTexture2D> RecipeSetIcon; 
	float ExperienceMultiplier; 
	bool bAllowRefundOfRecipesOnDestroy; 
};

// ScriptStruct Icarus.CraftingModifications
struct FCraftingModifications : FIcarusTableRowBase {
	struct FTagQueriesRowHandle Query; 
	struct FStatsEnum StatRequirement; 
	struct TArray<struct FAlterationsEnum> StatGrantedAlteration; 
	struct FResourceRequirement ResourceRequirement; 
	struct FAlterationsEnum ResourceGrantedAlteration; 
};

// ScriptStruct Icarus.ResourceRequirement
struct FResourceRequirement {
	struct FIcarusResourcesEnum Resource; 
	int32_t FlowRate; 
};

// ScriptStruct Icarus.CraftingModificationsEnum
struct FCraftingModificationsEnum : FRowEnum {
};

// ScriptStruct Icarus.CraftingModificationsRowHandle
struct FCraftingModificationsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CraftingTagsEnum
struct FCraftingTagsEnum : FRowEnum {
};

// ScriptStruct Icarus.CreatureAudioThreatData
struct FCreatureAudioThreatData : FIcarusTableRowBase {
	struct TMap<enum class ECreatureAudioThreatTargetType, struct FCreatureAudioThreatSetting> ThreatSettings; 
};

// ScriptStruct Icarus.CreatureAudioThreatSetting
struct FCreatureAudioThreatSetting {
	struct UCurveFloat* DistanceModifierCurve; 
	float GracePeriod; 
};

// ScriptStruct Icarus.CreatureAudioThreatDataEnum
struct FCreatureAudioThreatDataEnum : FRowEnum {
};

// ScriptStruct Icarus.CriticalHitArea
struct FCriticalHitArea : FIcarusTableRowBase {
	struct FStatsEnum DamageReductionStat; 
	struct FStatsEnum DamageReductionMitigatingStat; 
	struct FStatsEnum DamageMultiplierStat; 
	struct FStatsEnum DamageIgnoreStat; 
	float ReductionStatMultiplier; 
	float MultiplierStatMultiplier; 
	struct TArray<enum class EIcarusDamageType> WhitelistedDamageTypes; 
	struct TArray<struct FModifierStatesRowHandle> ModifiersToApply; 
	int32_t Priority; 
	struct FCriticalHitAreaAudioDataRowHandle AudioData; 
};

// ScriptStruct Icarus.CriticalHitAreaAudioDataRowHandle
struct FCriticalHitAreaAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CriticalHitAreaAudioData
struct FCriticalHitAreaAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> PlayerFeedbackSound; 
	bool bShouldCritZoneSuppressHitAudio; 
};

// ScriptStruct Icarus.CriticalHitAreaAudioDataEnum
struct FCriticalHitAreaAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.CriticalHitAreasRowHandle
struct FCriticalHitAreasRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CriticalHitSetup
struct FCriticalHitSetup : FIcarusTableRowBase {
	struct FCriticalHitPlayer PlayerConfig; 
	struct FCriticalHitProjectile ProjectileConfig; 
	struct FCritialHitTarget TargetConfig; 
	float FinishTime; 
};

// ScriptStruct Icarus.CritialHitTarget
struct FCritialHitTarget {
	float TimeScale; 
	float TimeLength; 
	float FOV; 
	float RotationOffset; 
	struct FVector PivotOffset; 
	struct FVector CameraOffset; 
	struct FRotator CameraRotationOffset; 
};

// ScriptStruct Icarus.CriticalHitProjectile
struct FCriticalHitProjectile {
	float TimeScale; 
	struct FVector CameraOffset; 
	struct FRotator CameraRotationOffset; 
	float FOV; 
	struct UMatineeCameraShake* CameraShake; 
};

// ScriptStruct Icarus.CriticalHitPlayer
struct FCriticalHitPlayer {
	float TimeScale; 
	float TimeLength; 
	float FOV; 
	float RotationOffset; 
	struct FVector PivotOffset; 
	struct FVector CameraOffset; 
	struct FRotator CameraRotationOffset; 
};

// ScriptStruct Icarus.CriticalHitSetupEnum
struct FCriticalHitSetupEnum : FRowEnum {
};

// ScriptStruct Icarus.CriticalHitSetupRowHandle
struct FCriticalHitSetupRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ResourceNetworkData
struct FResourceNetworkData : FIcarusTableRowBase {
	enum class EResourceNetworkFlowType FlowType; 
	bool AlwaysActive; 
	bool AutoActivate; 
	int32_t ResourceFlowRate; 
	bool bAllowPullingResourceFromInventory; 
	bool bAllowPushingResourceToInventory; 
	bool bStorageIsInFlowOnly; 
	struct FModifierStatesRowHandle BrownOutModifier; 
	int32_t AutoShutoffFlowPercent; 
	bool bAllowAutoRestart; 
	bool bIsOptional; 
	struct FOptionalResourceFlowsRowHandle OptionalFlowType; 
};

// ScriptStruct Icarus.OptionalResourceFlowsRowHandle
struct FOptionalResourceFlowsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CrudeOilData
struct FCrudeOilData : FResourceNetworkData {
};

// ScriptStruct Icarus.CrudeOilEnum
struct FCrudeOilEnum : FRowEnum {
};

// ScriptStruct Icarus.CrudeOilRowHandle
struct FCrudeOilRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CultivationSaveData
struct FCultivationSaveData {
	struct FName Seed; 
	float GrowthTime; 
	int32_t GrowthState; 
	bool bWasKilled; 
};

// ScriptStruct Icarus.CurrencyConversion
struct FCurrencyConversion : FIcarusTableRowBase {
	struct FMetaCurrencyRowHandle StartingCurrency; 
	int32_t StartingAmount; 
	struct FMetaCurrencyRowHandle ConvertedCurrency; 
	int32_t ConvertedAmount; 
};

// ScriptStruct Icarus.CurrencyConversionsEnum
struct FCurrencyConversionsEnum : FRowEnum {
};

// ScriptStruct Icarus.CurrencyConversionsRowHandle
struct FCurrencyConversionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.CustomGameStat
struct FCustomGameStat : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct FText Description; 
	bool bHidden; 
	enum class ECustomGameStatCategory Category; 
	enum class ECustomGameStatChangeability StatChangeability; 
	enum class ECustomGameStatType StatType; 
	int32_t DefaultValue; 
	struct FStatsRowHandle Stat; 
	int32_t MinIntValue; 
	int32_t MaxIntValue; 
	struct TArray<struct FCustomGameStatDropDownOption> DropDownOptions; 
};

// ScriptStruct Icarus.CustomGameStatDropDownOption
struct FCustomGameStatDropDownOption {
	struct FText OptionName; 
	struct TArray<struct FCustomGameStatDropDownValue> StatValues; 
};

// ScriptStruct Icarus.CustomGameStatDropDownValue
struct FCustomGameStatDropDownValue {
	struct FStatsRowHandle Stat; 
	int32_t Value; 
};

// ScriptStruct Icarus.CustomGameStatsEnum
struct FCustomGameStatsEnum : FRowEnum {
};

// ScriptStruct Icarus.CustomGameStatsRowHandle
struct FCustomGameStatsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DamageTypeInfo
struct FDamageTypeInfo : FIcarusTableRowBase {
	enum class EIcarusDamageType DamageType; 
	struct FColor Color; 
	struct FTagQueriesRowHandle RequiredDefenderQuery; 
	struct FStatsEnum DamageStat; 
	struct FStatsEnum DamageVariationStat; 
	struct FStatsEnum ResistanceStat; 
	struct TArray<struct FDamageTypeInfoModifier> ResistanceOverride; 
	struct TArray<struct FDamageTypeInfoModifier> DefenderMultipliers; 
	bool bAddStealthMultiplier; 
};

// ScriptStruct Icarus.DamageTypeInfoModifier
struct FDamageTypeInfoModifier {
	struct FTagQueriesRowHandle Tag; 
	struct FStatsEnum Stat; 
};

// ScriptStruct Icarus.DamageTypeInfoEnum
struct FDamageTypeInfoEnum : FRowEnum {
};

// ScriptStruct Icarus.DamageTypeInfoRowHandle
struct FDamageTypeInfoRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DecayableData
struct FDecayableData : FIcarusTableRowBase {
	int32_t DecayTime; 
	int32_t SpoilTime; 
	struct FItemTemplateRowHandle SpoiledItem; 
	int32_t ResourceLeakage; 
	bool bEmptyContainer; 
};

// ScriptStruct Icarus.DecayableEnum
struct FDecayableEnum : FRowEnum {
};

// ScriptStruct Icarus.DecayableRowHandle
struct FDecayableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DeltaTimeBuffer
struct FDeltaTimeBuffer {
};

// ScriptStruct Icarus.DensityAudioRecordSet
struct FDensityAudioRecordSet {
	struct TArray<struct UObject*> Records; 
};

// ScriptStruct Icarus.SerializedDeployable
struct FSerializedDeployable {
	struct FItemData Deployable; 
	struct FTransform DeployableTransform; 
};

// ScriptStruct Icarus.DeployableData
struct FDeployableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; 
	struct TMap<struct FStatsEnum, int32_t> Stats; 
	struct TArray<struct FDeployableSetupRowHandle> Variants; 
	float AudioOcclusionAmount; 
	bool EffectedByWeather; 
	bool bForceShowShelterIcon; 
	bool bMustBeOutside; 
};

// ScriptStruct Icarus.DeployableSetupRowHandle
struct FDeployableSetupRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DeployableEnum
struct FDeployableEnum : FRowEnum {
};

// ScriptStruct Icarus.TameInteractableRecord
struct FTameInteractableRecord {
	struct TArray<int32_t> WhitelistedActors; 
	bool bIsWhitelistOnly; 
};

// ScriptStruct Icarus.DeployableRecord
struct FDeployableRecord {
	struct FString FoundationActorClassName; 
	int32_t FoundationActorIcarusUID; 
};

// ScriptStruct Icarus.DeployableRowHandle
struct FDeployableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DeployableSetup
struct FDeployableSetup : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> DeployableBlueprint; 
	struct TSoftObjectPtr<UTexture2D> DeployableIcon; 
	struct FText DeployableName; 
	struct TSoftObjectPtr<UStaticMesh> PreviewStaticMesh; 
	struct TSoftObjectPtr<UFMODEvent> DeployedSound; 
	struct TMap<struct FItemsStaticRowHandle, struct TSoftObjectPtr<UFMODEvent>> ItemAddedSounds; 
	float AudioOcclusionAmount; 
	bool SnapToSurfaceNormal; 
	float MaxSurfaceSnapAngle; 
	bool SupportsCustomRotation; 
	enum class EWorldPlacementType WorldPlacementType; 
	bool HideInvalidPlacementPreview; 
	enum class EDeployableSnapBehaviour SnapBehaviour; 
	struct TArray<struct FName> SnapActorTags; 
	struct TArray<struct FName> SnapSocketsOrTags; 
	bool IgnoreCollisionWhenSnapped; 
	bool UseSnapSocketRotation; 
	bool UseSnapSocketScale; 
	bool bCanAffectNavigation; 
	struct UNavArea* NavAreaClass; 
	struct FVector NavigationFallbackExtents; 
	int32_t MaxRestackingAmount; 
	struct FVector DeployCollisionExtentOffset; 
	struct FVector DeployCollisionLocationOffset; 
	struct FVector DeployPlacementOffset; 
};

// ScriptStruct Icarus.DeployableSetupEnum
struct FDeployableSetupEnum : FRowEnum {
};

// ScriptStruct Icarus.DeployableTypesEnum
struct FDeployableTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.DeployableTypesRowHandle
struct FDeployableTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.Dialogue
struct FDialogue : FIcarusTableRowBase {
	struct TMap<enum class EDialogueRedirectCondition, struct FDialogueRowHandle> Redirects; 
	struct TSoftObjectPtr<UFMODEvent> Audio; 
	float AudioLength; 
	float Delay; 
	int32_t Priority; 
	struct FDialogueSpeakerRowHandle Speaker; 
	struct TArray<struct FText> Text; 
	bool bUseSubtitleOverrides; 
	struct TArray<struct FDialogueSubtitleOverride> SubtitleOverrides; 
};

// ScriptStruct Icarus.DialogueSubtitleOverride
struct FDialogueSubtitleOverride {
	struct FString ReferenceText; 
	float OverrideLength; 
	struct FDialogueSpeakerRowHandle SpeakerOverride; 
};

// ScriptStruct Icarus.DialogueSpeakerRowHandle
struct FDialogueSpeakerRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DialogueEnum
struct FDialogueEnum : FRowEnum {
};

// ScriptStruct Icarus.DialoguePool
struct FDialoguePool : FIcarusTableRowBase {
	struct TArray<struct FDialogueRowHandle> Pool; 
};

// ScriptStruct Icarus.DialoguePoolEnum
struct FDialoguePoolEnum : FRowEnum {
};

// ScriptStruct Icarus.DialoguePoolRowHandle
struct FDialoguePoolRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DialogueSpeaker
struct FDialogueSpeaker : FIcarusTableRowBase {
	struct FText Speaker; 
};

// ScriptStruct Icarus.DialogueSpeakerEnum
struct FDialogueSpeakerEnum : FRowEnum {
};

// ScriptStruct Icarus.DirtMoundModification
struct FDirtMoundModification : FIcarusTableRowBase {
	int32_t CropPlotTier; 
	struct FTagQueriesRowHandle MatchingItemTagQuery; 
	struct FModifierStatesRowHandle Modifier; 
	int32_t ModifierEffectiveness; 
};

// ScriptStruct Icarus.DirtMoundModificationsEnum
struct FDirtMoundModificationsEnum : FRowEnum {
};

// ScriptStruct Icarus.DirtMoundModificationsRowHandle
struct FDirtMoundModificationsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DLCPackageData
struct FDLCPackageData : FIcarusTableRowBase {
	int32_t PackageID; 
	struct FText DLCName; 
	struct FString WebsiteAddress; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	struct FText HoverText; 
	struct TSoftObjectPtr<UTexture2D> DLCIconOwned; 
	struct TSoftObjectPtr<UTexture2D> DLCIconUnowned; 
	struct TSoftObjectPtr<UTexture2D> CapsuleImage; 
};

// ScriptStruct Icarus.DLCPackageDataEnum
struct FDLCPackageDataEnum : FRowEnum {
};

// ScriptStruct Icarus.DrillSaveData
struct FDrillSaveData {
	bool bDrillActive; 
	bool bDrillCanAutoRestart; 
};

// ScriptStruct Icarus.DropGroupCosmeticData
struct FDropGroupCosmeticData : FIcarusTableRowBase {
	struct FText DropGroupName; 
	struct FText DropGroupDescription; 
	struct TSoftObjectPtr<UTexture2D> DropGroupIcon; 
	struct TSoftObjectPtr<UTexture2D> DropGroupBackground; 
	bool bVisibleInDropSelectionScreen; 
	struct FTerrainsRowHandle AssociatedTerrain; 
	int32_t DropGroupIndex; 
	bool bIsRecommended; 
	enum class EDropTemperature Temperature; 
	enum class EDropAbundance Food; 
	enum class EDropAbundance Water; 
	enum class EDropAbundance Oxygen; 
	enum class EDropAbundance Wood; 
	enum class EDropAbundance Rock; 
	enum class EDropAbundance Ore; 
	enum class EDropAbundance AggressiveCreatures; 
	enum class EDropAbundance PassiveCreatures; 
};

// ScriptStruct Icarus.DropGroupAttribute
struct FDropGroupAttribute {
	struct FText AttributeTitle; 
	struct TSoftObjectPtr<UTexture2D> AttributeIcon; 
	struct FText AttributeQuality; 
};

// ScriptStruct Icarus.DropGroupsEnum
struct FDropGroupsEnum : FRowEnum {
};

// ScriptStruct Icarus.DropGroupsRowHandle
struct FDropGroupsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DropShipActionsEnum
struct FDropShipActionsEnum : FRowEnum {
};

// ScriptStruct Icarus.DropShipActionsRowHandle
struct FDropShipActionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DropShipEvent
struct FDropShipEvent : FIcarusTableRowBase {
	struct FDropShipActionsRowHandle Action; 
	float TriggerTime; 
	bool Complete; 
};

// ScriptStruct Icarus.DropShipAction
struct FDropShipAction : FIcarusTableRowBase {
};

// ScriptStruct Icarus.DropShipSequence
struct FDropShipSequence : FIcarusTableRowBase {
	struct TArray<struct FDropShipEvent> Events; 
	struct UCurveFloat* Trajectory; 
};

// ScriptStruct Icarus.DropShipSequencesEnum
struct FDropShipSequencesEnum : FRowEnum {
};

// ScriptStruct Icarus.DropShipSequencesRowHandle
struct FDropShipSequencesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DurableData
struct FDurableData : FIcarusTableRowBase {
	int32_t Max_Durability; 
	bool Destroyed_At_Zero; 
	struct TArray<struct FRepairData> ItemsForRepair; 
	struct TArray<struct FRecipeSetsRowHandle> NoRecipe_RequiredRecipeSet; 
};

// ScriptStruct Icarus.RepairData
struct FRepairData {
	struct FItemsStaticRowHandle Item; 
	int32_t Amount; 
};

// ScriptStruct Icarus.DurableEnum
struct FDurableEnum : FRowEnum {
};

// ScriptStruct Icarus.DynamicQuest
struct FDynamicQuest : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct FText Description; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	struct FFactionMissionsRowHandle Quest; 
	int32_t Weighting; 
};

// ScriptStruct Icarus.DynamicQuestReward
struct FDynamicQuestReward : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct FText Description; 
	struct TArray<struct FQuestRewardItemEntry> PotentialRewards; 
	int32_t Weighting; 
};

// ScriptStruct Icarus.QuestRewardItemEntry
struct FQuestRewardItemEntry {
	struct FDynamicQuestRewardItemsRowHandle Item; 
	bool bScales; 
};

// ScriptStruct Icarus.DynamicQuestRewardItemsRowHandle
struct FDynamicQuestRewardItemsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DynamicQuestRewardItem
struct FDynamicQuestRewardItem : FIcarusTableRowBase {
	struct TArray<struct FRewardItemEntry> Rewards; 
};

// ScriptStruct Icarus.RewardItemEntry
struct FRewardItemEntry {
	struct FItemTemplateRowHandle Item; 
	int32_t MinimumStack; 
	int32_t MaximumStack; 
	int32_t Weighting; 
};

// ScriptStruct Icarus.DynamicQuestRewardItemsEnum
struct FDynamicQuestRewardItemsEnum : FRowEnum {
};

// ScriptStruct Icarus.DynamicQuestRewardsEnum
struct FDynamicQuestRewardsEnum : FRowEnum {
};

// ScriptStruct Icarus.DynamicQuestRewardsRowHandle
struct FDynamicQuestRewardsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DynamicQuestsEnum
struct FDynamicQuestsEnum : FRowEnum {
};

// ScriptStruct Icarus.DynamicQuestsRowHandle
struct FDynamicQuestsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.EnergyData
struct FEnergyData : FResourceNetworkData {
};

// ScriptStruct Icarus.EnergyEnum
struct FEnergyEnum : FRowEnum {
};

// ScriptStruct Icarus.EnergyRowHandle
struct FEnergyRowHandle : FRowHandle {
};

// ScriptStruct Icarus.EpicCreatures
struct FEpicCreatures : FIcarusTableRowBase {
	struct TArray<struct FText> CreatureNames; 
	struct FAISetupRowHandle AISetup; 
	struct TMap<struct FBaseStatsEnum, int32_t> AdditionalStats; 
};

// ScriptStruct Icarus.EpicCreaturesRowHandle
struct FEpicCreaturesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.EquippableData
struct FEquippableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> EquippableModifier; 
	struct TMap<struct FStatsEnum, int32_t> GrantedStats; 
	bool bStackedModifiersGiveDiminishingReturns; 
	struct TSoftClassPtr<UObject> GlobalStat_ActorClass; 
	struct TMap<struct FStatsEnum, int32_t> GlobalStat_GrantedStats; 
	bool bAppliesInAllInventories; 
	bool bBindToAllInventoryUpdates; 
	bool bPreventReinitialisation; 
};

// ScriptStruct Icarus.EquippableEnum
struct FEquippableEnum : FRowEnum {
};

// ScriptStruct Icarus.EquippableRowHandle
struct FEquippableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ErrorCode
struct FErrorCode : FIcarusTableRowBase {
	struct FText Code; 
	struct FText Description; 
	bool bReportToSentry; 
};

// ScriptStruct Icarus.ErrorCodesRowHandle
struct FErrorCodesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ExoticSpawn
struct FExoticSpawn : FIcarusTableRowBase {
};

// ScriptStruct Icarus.ExoticSpawnEnum
struct FExoticSpawnEnum : FRowEnum {
};

// ScriptStruct Icarus.ExoticSpawnRowHandle
struct FExoticSpawnRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ExperienceData
struct FExperienceData : FIcarusTableRowBase {
	struct TMap<enum class EExperienceSource, struct FExperienceInfo> ExperienceEvents; 
};

// ScriptStruct Icarus.ExperienceInfo
struct FExperienceInfo {
	struct FExperienceEventsRowHandle ExperienceEvent; 
	int32_t GainedExperience; 
};

// ScriptStruct Icarus.ExperienceEnum
struct FExperienceEnum : FRowEnum {
};

// ScriptStruct Icarus.ExperienceEvent
struct FExperienceEvent : FIcarusTableRowBase {
	struct FText EventDescription; 
	bool SharedExperience; 
	int32_t ExperienceGranted; 
};

// ScriptStruct Icarus.ExperienceEventsEnum
struct FExperienceEventsEnum : FRowEnum {
};

// ScriptStruct Icarus.FactionInfo
struct FFactionInfo : FIcarusTableRowBase {
	struct UTexture2D* Icon; 
	struct FText FactionName; 
	struct FText Description; 
	struct FDialoguePoolRowHandle BriefingPool; 
	struct FDialoguePoolRowHandle LandingPool; 
	struct FDialoguePoolRowHandle MissionCompletePool; 
};

// ScriptStruct Icarus.FactionInfoEnum
struct FFactionInfoEnum : FRowEnum {
};

// ScriptStruct Icarus.FactionInfoRowHandle
struct FFactionInfoRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FactionMission
struct FFactionMission : FIcarusTableRowBase {
	struct TArray<struct FMissionObjectiveEntry> MissionObjectives; 
	struct FFactionInfoRowHandle Faction; 
	struct TArray<struct FMissionTypesRowHandle> Types; 
	struct TArray<struct FWorkshopCost> CurrencyCost; 
	struct FQuestsRowHandle InitialQuest; 
	bool bUseOpenWorldRetryTimeout; 
	struct TArray<struct FRulesetsRowHandle> AdditionalRulesets; 
	struct TArray<struct FItemTemplateRowHandle> ItemsRewarded; 
	struct TArray<struct FAccountFlagsRowHandle> AccountFlagsRewarded; 
	struct TArray<struct FCharacterFlagsRowHandle> CharacterFlagsRewarded; 
	struct TArray<struct FTalentsRowHandle> TalentsRewarded; 
	struct TArray<struct FWorkshopCost> CurrencyRewarded; 
	struct TArray<struct FTalentsRowHandle> GreatHuntReward; 
	int32_t AccountExperience; 
	int32_t FactionExperience; 
};

// ScriptStruct Icarus.WorkshopCost
struct FWorkshopCost {
	struct FMetaCurrencyRowHandle Meta; 
	int32_t Amount; 
};

// ScriptStruct Icarus.RulesetsRowHandle
struct FRulesetsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.QuestsRowHandle
struct FQuestsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MissionTypesRowHandle
struct FMissionTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MissionObjectiveEntry
struct FMissionObjectiveEntry {
	struct FQuestsRowHandle QuestRow; 
	int32_t Depth; 
};

// ScriptStruct Icarus.FactionMissionsEnum
struct FFactionMissionsEnum : FRowEnum {
};

// ScriptStruct Icarus.FarmableData
struct FFarmableData : FIcarusTableRowBase {
	struct TArray<struct FFarmingSeedsRowHandle> AllowedSeeds; 
	int32_t NumberOfCultivations; 
	bool bReseedsAfterHarvest; 
};

// ScriptStruct Icarus.FarmableEnum
struct FFarmableEnum : FRowEnum {
};

// ScriptStruct Icarus.FarmableRowHandle
struct FFarmableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FarmingGrowthState
struct FFarmingGrowthState : FIcarusTableRowBase {
	float TimeToNextState; 
	struct TSoftObjectPtr<UStaticMesh> StageMesh; 
	struct FVector MeshScale; 
};

// ScriptStruct Icarus.FarmingGrowthStatesEnum
struct FFarmingGrowthStatesEnum : FRowEnum {
};

// ScriptStruct Icarus.FarmingGrowthStatesRowHandle
struct FFarmingGrowthStatesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FarmingSeedData
struct FFarmingSeedData : FIcarusTableRowBase {
	struct FItemRewardsRowHandle CropRewards; 
	struct FItemRewardsRowHandle DecayedRewards; 
	struct FFarmingSeedAudioData Audio; 
	struct TArray<struct FAtmospheresRowHandle> OptimalBiomes; 
	struct FFarmingGrowthStatesRowHandle Stage1; 
	struct FFarmingGrowthStatesRowHandle Stage2; 
	struct FFarmingGrowthStatesRowHandle Stage3; 
	struct FFarmingGrowthStatesRowHandle Stage4; 
	struct FFarmingGrowthStatesRowHandle Mature; 
	struct FFarmingGrowthStatesRowHandle Decayed; 
	struct FItemableRowHandle Itemable; 
	struct FDeployableRowHandle Deployable; 
	enum class ECropMeshRotationType RotationType; 
	struct FModifierStatesRowHandle FatigueModifier; 
	int32_t FatigueIncreaseEachHarvest; 
};

// ScriptStruct Icarus.FarmingSeedAudioData
struct FFarmingSeedAudioData {
	struct TSoftObjectPtr<UFMODEvent> PlantedSound; 
	struct TSoftObjectPtr<UFMODEvent> HarvestedSound; 
	struct TSoftObjectPtr<UFMODEvent> ClearedSound; 
};

// ScriptStruct Icarus.CropRewards
struct FCropRewards {
	int32_t Amount; 
	struct FItemsStaticRowHandle ItemType; 
};

// ScriptStruct Icarus.FarmingSeedsEnum
struct FFarmingSeedsEnum : FRowEnum {
};

// ScriptStruct Icarus.FieldGuideCategories
struct FFieldGuideCategories : FIcarusTableRowBase {
	struct UFieldGuidePageWidgetBase* IndexView; 
	struct UFieldGuidePageWidgetBase* DetailView; 
	int32_t DisplayOrder; 
	struct FText DisplayName; 
	struct TSoftObjectPtr<UTexture2D> DisplayIcon; 
	struct FTagQueriesRowHandle TagQuery; 
};

// ScriptStruct Icarus.FieldGuideCategoriesEnum
struct FFieldGuideCategoriesEnum : FRowEnum {
};

// ScriptStruct Icarus.FieldGuideRecipeInfo
struct FFieldGuideRecipeInfo {
	struct TArray<struct FCraftingInput> CraftingInputsOut; 
	struct TArray<struct FQueryInput> QueryInputsOut; 
	struct TArray<struct FItemsStaticRowHandle> CraftedAtOut; 
	int32_t OutputCount; 
	struct TArray<struct FResourceItem> CraftingResourcesRequired; 
};

// ScriptStruct Icarus.FieldGuideBackButtonItem
struct FFieldGuideBackButtonItem {
	struct FFieldGuideCategoriesRowHandle CategoryRow; 
	struct FItemsStaticRowHandle ItemRow; 
};

// ScriptStruct Icarus.ItemDLCData
struct FItemDLCData {
	struct FItemsStaticRowHandle RowHandle; 
	struct FDLCPackageDataRowHandle DLC; 
};

// ScriptStruct Icarus.FieldGuideMetaData
struct FFieldGuideMetaData : FIcarusTableRowBase {
	struct FItemsStaticRowHandle Item; 
	struct TSoftObjectPtr<UTexture2D> Image1; 
	struct FText Description1; 
	struct TSoftObjectPtr<UTexture2D> Image2; 
	struct FText Description2; 
	struct TSoftObjectPtr<UTexture2D> Image3; 
	struct FText Description3; 
};

// ScriptStruct Icarus.FieldGuideMetaDataEnum
struct FFieldGuideMetaDataEnum : FRowEnum {
};

// ScriptStruct Icarus.FieldGuideMetaDataRowHandle
struct FFieldGuideMetaDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FieldGuideRedirectEnum
struct FFieldGuideRedirectEnum : FRowEnum {
};

// ScriptStruct Icarus.FieldGuideRedirectRowHandle
struct FFieldGuideRedirectRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FieldGuideRedirectData
struct FFieldGuideRedirectData : FIcarusTableRowBase {
	struct FItemsStaticRowHandle DisplayItem; 
	struct TArray<struct FItemsStaticRowHandle> HiddenItems; 
	struct FTagQueriesRowHandle QueryMatchHiddenItem; 
};

// ScriptStruct Icarus.FieldGuideSets
struct FFieldGuideSets : FIcarusTableRowBase {
	struct TArray<struct FItemsStaticRowHandle> SetItems; 
};

// ScriptStruct Icarus.FieldGuideSetsEnum
struct FFieldGuideSetsEnum : FRowEnum {
};

// ScriptStruct Icarus.FieldGuideSetsRowHandle
struct FFieldGuideSetsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FillableData
struct FFillableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; 
	struct TArray<struct FIcarusResourcesEnum> ResourceTypes; 
	int32_t MaximumStoredUnits; 
};

// ScriptStruct Icarus.FillableEnum
struct FFillableEnum : FRowEnum {
};

// ScriptStruct Icarus.FillableRowHandle
struct FFillableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FindItemSlotInfo
struct FFindItemSlotInfo {
	struct UInventory* Inventory; 
	int32_t Slot; 
};

// ScriptStruct Icarus.FindItemSlotInfoInvType
struct FFindItemSlotInfoInvType {
	struct FInventoryIDEnum InventoryID; 
	int32_t Slot; 
};

// ScriptStruct Icarus.InventoryIDEnum
struct FInventoryIDEnum : FRowEnum {
};

// ScriptStruct Icarus.FirearmAudioData
struct FFirearmAudioData : FIcarusTableRowBase {
	struct TArray<struct FFirearmSoundData> FireSounds; 
	struct TArray<struct FFirearmSoundData> PersistentSounds; 
	struct TArray<struct FFirearmSoundData> NoFireSounds; 
};

// ScriptStruct Icarus.FirearmSoundData
struct FFirearmSoundData {
	struct TSoftObjectPtr<UFMODEvent> Event; 
	struct FName AttachPoint; 
	bool bUseChargeParameter; 
	bool bUseChargingParameter; 
	bool bUseAmmoCountParameter; 
	bool bUseReloadingParameter; 
	bool bUseAimingParameter; 
};

// ScriptStruct Icarus.FirearmAudioDataEnum
struct FFirearmAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.FirearmAudioDataRowHandle
struct FFirearmAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FirearmData
struct FFirearmData : FIcarusTableRowBase {
	struct FVector2D HipAccuracy; 
	struct FVector2D AimAccuracy; 
	int32_t LaunchForce; 
	struct FFirearmChargeData ChargeData; 
	struct FFirearmVisualData VisualData; 
	struct FFirearmStaminaData StaminaData; 
	struct FVector2D RecoilAmount; 
	float DamageMultiplier; 
	struct TArray<enum class EFireMode> FireModes; 
	enum class EReloadType ReloadType; 
	struct FValidAmmoTypesRowHandle ValidAmmoTypes; 
	bool bUnlimitedAmmo; 
	int32_t AmmoCapacity; 
	int32_t RoundsPerMinute; 
	float ReloadTime; 
	struct TMap<struct FStatsEnum, int32_t> Stats; 
	struct FFirearmAudioDataRowHandle AudioData; 
	float WeaponLoudness; 
	struct FFirearmScopeDataRowHandle ScopeRow; 
};

// ScriptStruct Icarus.FirearmScopeDataRowHandle
struct FFirearmScopeDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ValidAmmoTypesRowHandle
struct FValidAmmoTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FirearmStaminaData
struct FFirearmStaminaData {
	int32_t StaminaChargeCost; 
	int32_t StaminaChargeHoldCost; 
};

// ScriptStruct Icarus.FirearmVisualData
struct FFirearmVisualData {
	bool bUsesPreviewItem; 
	enum class EFirearmAttachType PreviewItemAttachType; 
	struct FName PreviewItemAttachSocket1P; 
	struct FName PreviewItemAttachSocket3P; 
	struct UMatineeCameraShake* FireShake; 
	bool bFireShakeHold; 
	float FireShakeScale; 
	float FireShakeAimScale; 
	float FireShakeCrouchScale; 
	struct UMatineeCameraShake* ChargeShake; 
	float ChargeShakeScale; 
	float ChargeShakeAimScale; 
	float ChargeShakeCrouchScale; 
	float ChargeShakeStartDelay; 
	float ChargeShakeApplyDelay; 
	float ChargeShakeAccuracyMultiplier; 
	struct TSoftObjectPtr<UFXSystemAsset> FireParticle; 
	struct TSoftObjectPtr<UFXSystemAsset> TrailParticle; 
	float VisualRecoil; 
	float IdleFOVMultiplier; 
	float AimFOVMultiplier; 
	float ChargeFOVMultiplier; 
	struct FFirearmAnimData SkeletalItemAnimData; 
	struct FFirearmAnimData FirstPersonAnimData; 
	struct FFirearm3PAnimData ThirdPersonAnimData; 
	struct FFirearm3PNewAnimData NewThirdPersonAnimData; 
};

// ScriptStruct Icarus.Firearm3PNewAnimData
struct FFirearm3PNewAnimData {
	struct TSoftObjectPtr<UAnimSequence> Poses; 
	struct TSoftObjectPtr<UAnimSequence> Run; 
	struct TSoftObjectPtr<UAnimSequence> Sprint; 
	struct TSoftObjectPtr<UAnimSequence> Impulse; 
	struct TSoftObjectPtr<UAnimSequence> Aim_Sweep; 
	struct TSoftObjectPtr<UAnimSequence> Crouch_Aim_Sweep; 
	struct TSoftObjectPtr<UAnimMontage> Reload; 
	struct TSoftObjectPtr<UAnimMontage> Fire; 
};

// ScriptStruct Icarus.Firearm3PAnimData
struct FFirearm3PAnimData {
	struct TSoftObjectPtr<UAnimSequence> Idle; 
	struct TSoftObjectPtr<UAnimSequence> Charge; 
	struct TSoftObjectPtr<UAnimSequence> Aim; 
	struct TSoftObjectPtr<UAnimSequence> AimCharge; 
	struct TSoftObjectPtr<UBlendSpace1D> Fire; 
	struct TSoftObjectPtr<UBlendSpace1D> AimFire; 
	struct TSoftObjectPtr<UBlendSpace1D> Reload; 
	struct TSoftObjectPtr<UAnimMontage> ReloadMontage; 
};

// ScriptStruct Icarus.FirearmAnimData
struct FFirearmAnimData {
	struct TSoftObjectPtr<UAnimSequence> Idle; 
	struct TSoftObjectPtr<UAnimSequence> Charge; 
	struct TSoftObjectPtr<UAnimSequence> Aim; 
	struct TSoftObjectPtr<UAnimSequence> AimCharge; 
	struct TSoftObjectPtr<UAnimMontage> Fire; 
	struct TSoftObjectPtr<UAnimMontage> AimFire; 
	struct TSoftObjectPtr<UAnimMontage> Reload; 
};

// ScriptStruct Icarus.FirearmChargeData
struct FFirearmChargeData {
	bool bCanCharge; 
	float ChargeSpeed; 
	float UnchargeSpeed; 
	float MinimumChargeRequired; 
	bool bFireCanCharge; 
	bool bAimCanCharge; 
	bool bReloadCanCancel; 
	struct UCurveFloat* LaunchForceMultiplier; 
};

// ScriptStruct Icarus.FirearmScopeData
struct FFirearmScopeData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UTexture> ScopeTexture; 
	int32_t TargetFOV; 
	float ScopeTime; 
	struct FVector FirstPersonADSOffset; 
};

// ScriptStruct Icarus.FirearmDataEnum
struct FFirearmDataEnum : FRowEnum {
};

// ScriptStruct Icarus.FirearmDataRowHandle
struct FFirearmDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FirearmScopeDataEnum
struct FFirearmScopeDataEnum : FRowEnum {
};

// ScriptStruct Icarus.FishSetup
struct FFishSetup : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> FishActor; 
	float MovementSpeed; 
	struct FVector2D SizeRange; 
	struct FItemRewardsRowHandle ItemReward; 
	bool bAwarenessEnabled; 
	float AwarenessMovementSpeed; 
	float MaxAwarenessDistance; 
	bool bAggressive; 
	float AttackDamage; 
	struct TSoftObjectPtr<UFMODEvent> MovementSound; 
	struct TSoftObjectPtr<UFMODEvent> AttackSound; 
};

// ScriptStruct Icarus.FishBoardRecord
struct FFishBoardRecord {
	struct FString ID; 
	struct FString Name; 
	struct FString Fish; 
	int32_t Value; 
};

// ScriptStruct Icarus.FishData
struct FFishData : FIcarusTableRowBase {
	struct FItemTemplateRowHandle Fish; 
	struct FFishSetupRowHandle FishSetup; 
	struct TSoftObjectPtr<UTexture2D> Image; 
	struct FText Lore; 
	enum class EFishRarity Rarity; 
	enum class EFishType Type; 
	struct TArray<struct FTerrainsRowHandle> Maps; 
	struct TArray<struct FBiomesEnum> Biomes; 
	int32_t MinWeight; 
	int32_t MaxWeight; 
	int32_t MinLength; 
	int32_t MaxLength; 
	struct TArray<struct FItemsStaticRowHandle> Lures; 
	struct FStatsEnum CaptureStat; 
};

// ScriptStruct Icarus.FishSetupRowHandle
struct FFishSetupRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FishDataEnum
struct FFishDataEnum : FRowEnum {
};

// ScriptStruct Icarus.FishSetupEnum
struct FFishSetupEnum : FRowEnum {
};

// ScriptStruct Icarus.FishSpawnConfig
struct FFishSpawnConfig : FIcarusTableRowBase {
	struct TSoftObjectPtr<UGameplayTexture> SpawnMap; 
	struct TArray<struct FFIshSpawnZoneSetup> SpawnZones; 
};

// ScriptStruct Icarus.FIshSpawnZoneSetup
struct FFIshSpawnZoneSetup {
	struct FColor Color; 
	struct FFishSpawnZonesRowHandle SpawnZone; 
};

// ScriptStruct Icarus.FishSpawnZonesRowHandle
struct FFishSpawnZonesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FishSpawnConfigEnum
struct FFishSpawnConfigEnum : FRowEnum {
};

// ScriptStruct Icarus.FishSpawnConfigRowHandle
struct FFishSpawnConfigRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FishSpawnZones
struct FFishSpawnZones : FIcarusTableRowBase {
	struct TMap<struct FFishDataEnum, int32_t> SpawnList; 
	float ZoneFishQuality; 
};

// ScriptStruct Icarus.FishSpawnZonesEnum
struct FFishSpawnZonesEnum : FRowEnum {
};

// ScriptStruct Icarus.FlammableAudioData
struct FFlammableAudioData {
	float Weighting; 
	enum class EFlammableAudioLocationType LocationType; 
};

// ScriptStruct Icarus.FlammableData
struct FFlammableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; 
	struct FFlammableAudioData AudioData; 
	float CombustionFuelDensity; 
	float CombustionFuelDensityVariance; 
	bool bInfiniteCombustionFuel; 
	float ThermalConductivity; 
	float HeatCapacity; 
	float SurfaceAreaMultiplier; 
	struct FVector CombustingBoundsScale; 
	float HeatOfCombustion; 
	float HeatReleaseRate; 
	bool bDetachAfterCombusted; 
	float MinCombustionTemperature; 
	float MaxCombustionTemperature; 
	bool bAffectsTemperature; 
	float TemperatureFalloffStrength; 
};

// ScriptStruct Icarus.FlammableEnum
struct FFlammableEnum : FRowEnum {
};

// ScriptStruct Icarus.FlammableFISMVQueuedVisualData
struct FFlammableFISMVQueuedVisualData {
	bool bFISMDirty; 
	bool bEffectsMeshDirty; 
};

// ScriptStruct Icarus.FlammableFISMVisualData
struct FFlammableFISMVisualData {
	float MainFireSpread; 
	float MainFireTemperature; 
	float EffectsMeshFireSpread; 
};

// ScriptStruct Icarus.FlammableRepStateArray
struct FFlammableRepStateArray : FFastArraySerializer {
	struct TArray<struct FFlammableRepState> States; 
};

// ScriptStruct Icarus.FlammableRepState
struct FFlammableRepState : FFastArraySerializerItem {
	enum class EFlammableState FlammableState; 
	float DesiredTemperature; 
	int32_t InstanceIndex; 
};

// ScriptStruct Icarus.FlammableRowHandle
struct FFlammableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FlammableTarget
struct FFlammableTarget {
	struct AActor* Actor; 
	struct UFLODFISMComponent* FISM; 
	int32_t FISMInstanceIndex; 
	struct AActor* Causer; 
};

// ScriptStruct Icarus.FlammableTargetExtinguish
struct FFlammableTargetExtinguish : FFlammableTarget {
	float ExtinguishRampTime; 
	float ExtinguishTime; 
	bool bStopCombustionImmediately; 
};

// ScriptStruct Icarus.FlammableTargetIgnite
struct FFlammableTargetIgnite : FFlammableTarget {
	float DesiredTemperatureValue; 
	bool bFromPropagation; 
};

// ScriptStruct Icarus.FloatableData
struct FFloatableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; 
	float MeshDensity; 
	float FluidDensity; 
	float FluidLinearDamping; 
	float FluidAngularDamping; 
	bool bClampMaxVelocity; 
	float MaxUnderwaterVelocity; 
};

// ScriptStruct Icarus.FloatableEnum
struct FFloatableEnum : FRowEnum {
};

// ScriptStruct Icarus.FloatableRowHandle
struct FFloatableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PendingRegisterFISM
struct FPendingRegisterFISM {
	int32_t CachedDescriptionIndex; 
	struct TWeakObjectPtr<struct UFLODFISMComponent> FISM; 
};

// ScriptStruct Icarus.FLODDescriptionsEnum
struct FFLODDescriptionsEnum : FRowEnum {
};

// ScriptStruct Icarus.FLODDescriptionsRowHandle
struct FFLODDescriptionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FLODInstanceInfluence
struct FFLODInstanceInfluence {
	struct FFLODInstanceID InfluencedInstance; 
	int32_t InfluenceLevelIndex; 
	struct FTimerHandle TimeoutHandle; 
};

// ScriptStruct Icarus.DelayedTreeRestore
struct FDelayedTreeRestore {
	struct UObject* WorldContextObject; 
};

// ScriptStruct Icarus.FLODRecordPendingInstanceChange
struct FFLODRecordPendingInstanceChange {
	int32_t InstanceIndex; 
	int32_t FromLevelIndex; 
	int32_t ToLevelIndex; 
};

// ScriptStruct Icarus.FLODRecordInstanceChangeSet
struct FFLODRecordInstanceChangeSet {
	struct TArray<int32_t> ConcealIndices; 
	struct TArray<int32_t> RevealIndices; 
	struct TArray<struct FFLODRecordInstanceChange> InstanceChanges; 
};

// ScriptStruct Icarus.FLODRecordInstanceChange
struct FFLODRecordInstanceChange {
	int32_t InstanceIndex; 
	struct FFLODRecordInstanceChangeDetails From; 
	struct FFLODRecordInstanceChangeDetails To; 
	int32_t TransitionFrame; 
	int32_t TransitionFinishFrame; 
};

// ScriptStruct Icarus.FLODRecordInstanceChangeDetails
struct FFLODRecordInstanceChangeDetails {
	int32_t LevelIndex; 
	struct TWeakObjectPtr<struct AActor> Actor; 
	uint32_t AddedFrame; 
};

// ScriptStruct Icarus.FLODRecordInstanceIndices
struct FFLODRecordInstanceIndices {
	struct TSet<int32_t> InstanceIndices; 
};

// ScriptStruct Icarus.FLODRecordStateView
struct FFLODRecordStateView : FFLODRecordInstanceIndices {
	struct TArray<struct FFLODRecordInstance> Instances; 
	struct TArray<struct FFLODRecordInstanceIndices> LevelStateViews; 
	struct TSet<int32_t> DestroyedIndices; 
};

// ScriptStruct Icarus.FLODRecordInstance
struct FFLODRecordInstance : FFastArraySerializerItem {
	int32_t InstanceIndex; 
	int32_t LevelIndex; 
	struct TWeakObjectPtr<struct AActor> Actor; 
	uint32_t AddedFrame; 
};

// ScriptStruct Icarus.FLODRecordDynamicInstanceArray
struct FFLODRecordDynamicInstanceArray : FFastArraySerializer {
	struct TArray<struct FFLODRecordDynamicInstance> Instances; 
};

// ScriptStruct Icarus.FLODRecordDynamicInstance
struct FFLODRecordDynamicInstance : FFastArraySerializerItem {
	int32_t InstanceIndex; 
	struct FVector_NetQuantize100 WorldLocation; 
	struct FVector_NetQuantize100 WorldRotation; 
	struct FVector_NetQuantize100 WorldScale; 
};

// ScriptStruct Icarus.FLODRecordInstanceArray
struct FFLODRecordInstanceArray : FFastArraySerializer {
	struct TArray<struct FFLODRecordInstance> Instances; 
};

// ScriptStruct Icarus.FLODRecorderRecord
struct FFLODRecorderRecord {
	int32_t NumTiles; 
};

// ScriptStruct Icarus.FLODDescriptionDVInfo
struct FFLODDescriptionDVInfo {
	struct UFoliageInstancedStaticMeshComponent* FoliageClass; 
	struct FName FoliageCollisionProfile; 
};

// ScriptStruct Icarus.FLODDescription
struct FFLODDescription : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFoliageType> FoliageType; 
	struct FGameplayTagContainer FoliageTags; 
	bool bDisabled; 
	bool bUseViewTraceInfluence; 
	struct TSoftClassPtr<UObject> ViewTraceActor; 
	struct FItemTemplateRowHandle ViewTraceActorItemTemplate; 
	struct FItemableRowHandle ViewTraceActorItemable; 
	struct FItemRewardsRowHandle ViewTraceActorItemRewards; 
	bool bViewTraceClientPredictive; 
	bool bUseDistanceInfluence; 
	struct TArray<struct FFLODDistanceLevelDescription> DistanceLevels; 
	bool bIsFlammable; 
	struct FFlammableRowHandle Flammable; 
	struct FFLODDescriptionsRowHandle BurntFLODEntry; 
	int32_t RecordIndex; 
	struct TArray<struct FFLODLevelDescription> Levels; 
};

// ScriptStruct Icarus.FLODLevelDescription
struct FFLODLevelDescription {
	int32_t LevelIndex; 
	enum class EFLODLevelInfluenceType InfluenceType; 
	bool bClientPredictive; 
	float InfluenceDistance; 
	int32_t ActorPoolBufferSize; 
	struct AActor* ActorReplacementClass; 
	struct FItemTemplateRowHandle ItemTemplate; 
	struct FItemRewardsRowHandle ItemRewards; 
};

// ScriptStruct Icarus.FLODDistanceLevelDescription
struct FFLODDistanceLevelDescription {
	struct TSoftClassPtr<UObject> Actor; 
	float InfluenceDistance; 
	struct FItemTemplateRowHandle ActorItemTemplate; 
	struct FItemRewardsRowHandle ActorItemRewards; 
};

// ScriptStruct Icarus.FLODTileRecorderRecord
struct FFLODTileRecorderRecord {
	struct FName TileName; 
	struct FTransform Transform; 
	float RelevancyRadius; 
	struct TArray<struct FFLODTileRecordRecord> Records; 
};

// ScriptStruct Icarus.FLODTileRecordRecord
struct FFLODTileRecordRecord {
	int32_t RecordIndex; 
	struct FName RecorderName; 
	struct TArray<struct FFLODTileRecordRecordInstance> Instances; 
	struct TArray<struct FFLODTileRecordRecordInstanceDynamic> DynamicInstances; 
	struct TArray<int32_t> DestroyedInstanceIndices; 
};

// ScriptStruct Icarus.FLODTileRecordRecordInstanceDynamic
struct FFLODTileRecordRecordInstanceDynamic {
	int32_t InstanceIndex; 
	struct FTransform Transform; 
};

// ScriptStruct Icarus.FLODTileRecordRecordInstance
struct FFLODTileRecordRecordInstance {
	int32_t InstanceIndex; 
	int32_t LevelIndex; 
};

// ScriptStruct Icarus.FocusableData
struct FFocusableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; 
	struct FItemAttachmentRowHandle AttachmentData; 
	struct FTransform AttachmentOffset; 
	enum class EAnimOverlayState AnimOverlayType; 
	struct FItemAnimationsRowHandle AnimationData; 
	bool bApplyAutomaticSpineBend; 
	struct TSoftObjectPtr<UAnimMontage> FPFocusedMontage; 
	struct TSoftObjectPtr<UBlendSpace1D> FPLocoBlendSpaceOverride; 
	struct TSoftObjectPtr<UAnimSequence> FPIdleAnim; 
	struct TSoftObjectPtr<UAnimMontage> TPFocusedMontage; 
	struct TSoftObjectPtr<UAnimSequence> TPUprightIdle; 
	struct TSoftObjectPtr<UAnimSequence> TPCrouchedIdle; 
	struct TSoftObjectPtr<UAnimSequence> TPPoses; 
	struct TSoftObjectPtr<UAnimMontage> ItemFocusedMontage; 
};

// ScriptStruct Icarus.ItemAnimationsRowHandle
struct FItemAnimationsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemAttachmentRowHandle
struct FItemAttachmentRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FocusableEnum
struct FFocusableEnum : FRowEnum {
};

// ScriptStruct Icarus.FocusableRowHandle
struct FFocusableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FoodTypesEnum
struct FFoodTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.FoodTypesRowHandle
struct FFoodTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FoundItemEntry
struct FFoundItemEntry {
};

// ScriptStruct Icarus.FuelData
struct FFuelData : FResourceNetworkData {
};

// ScriptStruct Icarus.FuelEnum
struct FFuelEnum : FRowEnum {
};

// ScriptStruct Icarus.FuelRowHandle
struct FFuelRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SpawnRecord
struct FSpawnRecord {
	bool bSpawnedExoticPlants; 
};

// ScriptStruct Icarus.GameModeRecord
struct FGameModeRecord {
	int32_t GameStateSeed; 
	float TimeOfDay; 
	float ProspectGameTime; 
	int32_t SecondsPerGameDay; 
	struct TArray<struct FString> ApprovedPlayerIDs; 
	struct TArray<struct FName> SessionFlagRecords; 
	int32_t LevelTimeElapsedSec; 
	int32_t TotalExoticsExported; 
	int32_t TotalRedExoticsExported; 
	struct TArray<struct FExportedCurrency> ExportedCurrencies; 
};

// ScriptStruct Icarus.ExportedCurrency
struct FExportedCurrency {
	struct FName CurrencyRewardRow; 
	int32_t TotalCurrencyExported; 
};

// ScriptStruct Icarus.StoredPlayerItemsRecord
struct FStoredPlayerItemsRecord {
	struct FString PlayerID; 
	struct TArray<struct FInventorySlotSaveData> Items; 
};

// ScriptStruct Icarus.MissionHistoryRecord
struct FMissionHistoryRecord {
	struct FString Mission; 
	int32_t Status; 
	int32_t MissionEndTime; 
};

// ScriptStruct Icarus.PlayerRewardScheduleRecord
struct FPlayerRewardScheduleRecord {
	struct FString PlayerID; 
	int32_t LastExoticsExported; 
	int32_t TotalExoticsExported; 
	int32_t LastRedExoticsExported; 
	int32_t TotalRedExoticsExported; 
	struct TArray<struct FPlayerRewardEntry> PlayerRewards; 
	bool bMissionCompleted; 
	int32_t CurrentMissionIndex; 
};

// ScriptStruct Icarus.PlayerRewardEntry
struct FPlayerRewardEntry {
	struct FName CurrencyRewardRow; 
	int32_t LastCurrencyExported; 
	int32_t TotalCurrencyExported; 
};

// ScriptStruct Icarus.GameplayConfig
struct FGameplayConfig : FIcarusTableRowBase {
	float FloatValue; 
};

// ScriptStruct Icarus.GameplayConfigEnum
struct FGameplayConfigEnum : FRowEnum {
};

// ScriptStruct Icarus.GameplayConfigRowHandle
struct FGameplayConfigRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GeneratorData
struct FGeneratorData : FIcarusTableRowBase {
	struct FIcarusResourcesEnum Resource; 
	int32_t GenerationRate; 
	float GenerationRatio; 
	float ResourceUnitsRequired; 
	struct TArray<struct FItemsStaticRowHandle> TransmutableItems; 
	struct TArray<struct FIcarusResourcesEnum> TransmutableResources; 
	bool RequiresManualActivation; 
	float OutOfFuelThresholdPercent; 
};

// ScriptStruct Icarus.GeneratorEnum
struct FGeneratorEnum : FRowEnum {
};

// ScriptStruct Icarus.GeneratorRowHandle
struct FGeneratorRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PoseSnapshotRecorder
struct FPoseSnapshotRecorder {
	struct TArray<struct FTransform> LocalTransforms; 
	struct TArray<struct FName> BoneNames; 
	struct FName SkeletalMeshName; 
	struct FName SnapshotName; 
	bool bIsValid; 
};

// ScriptStruct Icarus.CharacterCosmeticsRecorder
struct FCharacterCosmeticsRecorder {
	struct FString Customization_Head; 
	struct FString Customization_Hair; 
	struct FString Customization_HairColor; 
	struct FString Customization_Body; 
	struct FString Customization_BodyColor; 
	struct FString Customization_SkinTone; 
	struct FString Customization_HeadTattoo; 
	struct FString Customization_HeadScar; 
	struct FString Customization_HeadFacialHair; 
	struct FString Customization_CapLogo; 
	bool IsMale; 
	struct FString Customization_Voice; 
	struct FString Customization_EyeColor; 
};

// ScriptStruct Icarus.GeneticLineage
struct FGeneticLineage : FIcarusTableRowBase {
	struct FText Title; 
	int32_t Weighting; 
	struct TMap<struct FBaseStatsEnum, struct UCurveFloat*> Growth; 
	struct TMap<struct FBaseStatsEnum, int32_t> Stats; 
};

// ScriptStruct Icarus.GeneticLineagesEnum
struct FGeneticLineagesEnum : FRowEnum {
};

// ScriptStruct Icarus.GeneticLineagesRowHandle
struct FGeneticLineagesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ChildDNA
struct FChildDNA {
	struct TArray<struct FCreatureGenetics> Genetics; 
	enum class ECreatureSex Sex; 
	struct FGeneticLineagesRowHandle Lineage; 
	int32_t UniqueVariation; 
	struct FString Mother; 
	struct FString Father; 
};

// ScriptStruct Icarus.CreatureGenetics
struct FCreatureGenetics {
	struct FGeneticValuesRowHandle GeneticValue; 
	int32_t Value; 
};

// ScriptStruct Icarus.GeneticValuesRowHandle
struct FGeneticValuesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ChildDNASaveData
struct FChildDNASaveData {
	struct TArray<struct FMountGeneticsSaveData> Genetics; 
	int32_t Sex; 
	int32_t UniqueVariation; 
	struct FName LineageName; 
	struct FString MotherName; 
	struct FString FatherName; 
};

// ScriptStruct Icarus.MountGeneticsSaveData
struct FMountGeneticsSaveData {
	struct FName GeneticValueName; 
	int32_t Value; 
};

// ScriptStruct Icarus.GeneticValue
struct FGeneticValue : FIcarusTableRowBase {
	struct FText Title; 
	struct FText Short; 
	struct TMap<struct FBaseStatsEnum, struct UCurveFloat*> Base; 
};

// ScriptStruct Icarus.GeneticValuesEnum
struct FGeneticValuesEnum : FRowEnum {
};

// ScriptStruct Icarus.GlobalCheatData
struct FGlobalCheatData {
	bool bBuildingIntegrityDisabled; 
	bool bShelteredRequiredDisabled; 
	bool bLandMinesDontExplode; 
};

// ScriptStruct Icarus.GOAPActionsEnum
struct FGOAPActionsEnum : FRowEnum {
};

// ScriptStruct Icarus.GOAPActionsRowHandle
struct FGOAPActionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GOAPGoalsEnum
struct FGOAPGoalsEnum : FRowEnum {
};

// ScriptStruct Icarus.GOAPGoalsRowHandle
struct FGOAPGoalsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GOAPMotivationsEnum
struct FGOAPMotivationsEnum : FRowEnum {
};

// ScriptStruct Icarus.GOAPMotivationsRowHandle
struct FGOAPMotivationsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GOAPPropertiesEnum
struct FGOAPPropertiesEnum : FRowEnum {
};

// ScriptStruct Icarus.GOAPSetupEnum
struct FGOAPSetupEnum : FRowEnum {
};

// ScriptStruct Icarus.GOAPSetup
struct FGOAPSetup : FIcarusTableRowBase {
	struct TArray<struct FGOAPMotivationsRowHandle> Motivations; 
	struct TArray<struct FGOAPActionsRowHandle> Actions; 
	struct TArray<struct FGOAPGoalsRowHandle> Goals; 
	struct FGOAPGoalsRowHandle DefaultGoal; 
	struct FGOAPState DefaultState; 
	struct TMap<struct FGameplayTag, struct UBehaviorTree*> DynamicSubtreeOverrides; 
};

// ScriptStruct Icarus.GOAPState
struct FGOAPState {
	struct TArray<struct FGOAPProperty> Properties; 
};

// ScriptStruct Icarus.GOAPProperty
struct FGOAPProperty {
	struct FGOAPPropertiesRowHandle Property; 
	bool Value; 
};

// ScriptStruct Icarus.GOAPMotivation
struct FGOAPMotivation : FIcarusTableRowBase {
	struct FName Description; 
	float UpdateTick; 
	int32_t MinValue; 
	int32_t MaxValue; 
	int32_t StartingValue; 
	int32_t StartingValueDeviation; 
	struct TArray<struct FGOAPMotivationTrigger> MotivationTriggers; 
	struct TSoftClassPtr<UObject> MotivationBP; 
};

// ScriptStruct Icarus.GOAPMotivationTrigger
struct FGOAPMotivationTrigger {
	int32_t TriggerThreshold; 
	struct FGOAPState ThresholdOutcome; 
	struct TMap<struct FStatsEnum, int32_t> ThresholdStats; 
};

// ScriptStruct Icarus.GOAPGoal
struct FGOAPGoal : FIcarusTableRowBase {
	struct FName Description; 
	struct FGOAPState State; 
	int32_t Priority; 
	bool bIsRepeatable; 
	bool bRepeatOnlyOnSuccess; 
	float CooldownTime; 
	struct TSoftClassPtr<UObject> GoalBP; 
};

// ScriptStruct Icarus.GOAPAction
struct FGOAPAction : FIcarusTableRowBase {
	struct FName Description; 
	struct TArray<struct FGOAPProperty> Preconditions; 
	struct TArray<struct FGOAPProperty> Effects; 
	int32_t Cost; 
	float Timeout; 
	float TickRate; 
	struct UNavigationQueryFilter* DefaultNavFilterOverride; 
	enum class EMovementState AssociatedMovementState; 
	enum class EActionRangeCheckBehaviour RangeCheckBehaviour; 
	struct TSoftClassPtr<UObject> ActionBP; 
	struct TSoftObjectPtr<UBehaviorTree> BehaviourTree; 
	enum class EAIAudioState AudioState; 
	struct TMap<struct FBaseStatsEnum, int32_t> ActionStats; 
};

// ScriptStruct Icarus.GOAPProperties
struct FGOAPProperties : FIcarusTableRowBase {
	struct FName Description; 
};

// ScriptStruct Icarus.GrantedAurasEnum
struct FGrantedAurasEnum : FRowEnum {
};

// ScriptStruct Icarus.GrantedAurasRowHandle
struct FGrantedAurasRowHandle : FRowHandle {
};

// ScriptStruct Icarus.IcarusGraphicsExtraInfo
struct FIcarusGraphicsExtraInfo {
	struct FString GPUDeviceName; 
	int32_t GPUDedicatedMemoryGb; 
	int32_t GPUDedicatedSystemMemoryGb; 
	int32_t GPUSharedSystemMemoryGb; 
	struct FString CPUVendorName; 
	struct FString CPUDeviceName; 
	int32_t CPUCoreCount; 
	int32_t CPUPhysicalMemoryGb; 
};

// ScriptStruct Icarus.GraphicsTierDescriptionMods
struct FGraphicsTierDescriptionMods : FIcarusTableRowBase {
	enum class EGraphicsCardVendor CardVendor; 
	struct FString CardDescriptionModProbe; 
	int32_t CardModPercent; 
};

// ScriptStruct Icarus.GraphicsTierDescription
struct FGraphicsTierDescription : FIcarusTableRowBase {
	enum class EGraphicsCardVendor CardVendor; 
	struct FString CardDescriptionProbe; 
	int32_t CardPercent; 
};

// ScriptStruct Icarus.GraphicsTierDescriptionEnum
struct FGraphicsTierDescriptionEnum : FRowEnum {
};

// ScriptStruct Icarus.GraphicsTierDescriptionModsEnum
struct FGraphicsTierDescriptionModsEnum : FRowEnum {
};

// ScriptStruct Icarus.GraphicsTierDescriptionModsRowHandle
struct FGraphicsTierDescriptionModsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GraphicsTierDescriptionRowHandle
struct FGraphicsTierDescriptionRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GravestoneData
struct FGravestoneData {
	struct FPoseSnapshot DeathPose; 
	struct FVector DeathVelocity; 
	struct FCharacterCosmetics PlayerCosmetics; 
	struct FName UserID; 
	bool bHasSettled; 
	bool bIsDataValid; 
	struct FVector LootBagPosition; 
};

// ScriptStruct Icarus.GravestoneDataRecord
struct FGravestoneDataRecord {
	struct FPoseSnapshotRecorder DeathPose; 
	struct FVector DeathVelocity; 
	struct FCharacterCosmeticsRecorder PlayerCosmetics; 
	struct FName UserID; 
	bool bHasSettled; 
	struct FVector LootBagPosition; 
};

// ScriptStruct Icarus.GreatHunt
struct FGreatHunt : FIcarusTableRowBase {
	struct FTalentArchetypesRowHandle Hunt; 
	struct FProspectListRowHandle Prospect; 
	struct TArray<struct FTalentsRowHandle> ForbiddenTalent; 
	enum class EGreatHuntMissionType Type; 
	struct TMap<struct FWorldStatsEnum, int32_t> WorldStats; 
};

// ScriptStruct Icarus.TalentArchetypesRowHandle
struct FTalentArchetypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GreatHuntCreatureInfo
struct FGreatHuntCreatureInfo : FIcarusTableRowBase {
	struct FAISetupRowHandle AISetup; 
	struct UTexture2D* WeaponImage; 
	struct UTexture2D* BackgroundImage; 
	struct UTexture2D* BackgroundVerticalImage; 
	struct UTexture2D* BossImage; 
	struct FTalentTreesRowHandle GreatHunt; 
	struct FWorldBossesRowHandle WorldBoss; 
	struct FLivingItemShopItemsRowHandle LegendaryWeapon; 
	struct FDLCPackageDataRowHandle DLCData; 
	struct FTerrainsRowHandle Terrain; 
	struct TArray<struct FGreatHuntItemDisplay> ItemDisplays; 
	bool isComingSoon; 
};

// ScriptStruct Icarus.GreatHuntItemDisplay
struct FGreatHuntItemDisplay {
	struct UTexture2D* IconOverride; 
	struct FItemsStaticRowHandle ItemReward; 
};

// ScriptStruct Icarus.WorldBossesRowHandle
struct FWorldBossesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TalentTreesRowHandle
struct FTalentTreesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GreatHuntCreatureInfoEnum
struct FGreatHuntCreatureInfoEnum : FRowEnum {
};

// ScriptStruct Icarus.GreatHuntCreatureInfoRowHandle
struct FGreatHuntCreatureInfoRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GreatHuntsEnum
struct FGreatHuntsEnum : FRowEnum {
};

// ScriptStruct Icarus.GreatHuntsRowHandle
struct FGreatHuntsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GroupedInstancedMapData
struct FGroupedInstancedMapData : FIcarusTableRowBase {
	struct TArray<struct FInstancedMapDataRowHandle> InstancedMaps; 
	enum class EInstancedLevelPickType PickType; 
};

// ScriptStruct Icarus.InstancedMapDataRowHandle
struct FInstancedMapDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.GroupedInstancedMapDataEnum
struct FGroupedInstancedMapDataEnum : FRowEnum {
};

// ScriptStruct Icarus.GroupedInstancedMapDataRowHandle
struct FGroupedInstancedMapDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.HighlightableData
struct FHighlightableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; 
	struct FText DisplayName; 
	struct FText Description; 
	bool bDisableMeshOutline; 
	bool bDisableTooltip; 
};

// ScriptStruct Icarus.HighlightableEnum
struct FHighlightableEnum : FRowEnum {
};

// ScriptStruct Icarus.HighlightableRowHandle
struct FHighlightableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.HintsData
struct FHintsData : FIcarusTableRowBase {
	struct FText Text; 
};

// ScriptStruct Icarus.HintsEnum
struct FHintsEnum : FRowEnum {
};

// ScriptStruct Icarus.HintsRowHandle
struct FHintsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.HitableData
struct FHitableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; 
};

// ScriptStruct Icarus.HitableEnum
struct FHitableEnum : FRowEnum {
};

// ScriptStruct Icarus.HitableRowHandle
struct FHitableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.Horde
struct FHorde : FIcarusTableRowBase {
	struct TArray<struct FHordeWaveRowHandle> Waves; 
	struct FExperienceEventsRowHandle ExperienceEvent; 
	int32_t CompletionsBeforeInert; 
	struct TArray<struct FItemRewardsRowHandle> ItemReward; 
	struct TArray<struct FItemRewardsRowHandle> InertItemReward; 
	struct TArray<struct FQuestQueriesRowHandle> LocationQueries; 
};

// ScriptStruct Icarus.QuestQueriesRowHandle
struct FQuestQueriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.HordeWaveRowHandle
struct FHordeWaveRowHandle : FRowHandle {
};

// ScriptStruct Icarus.HordeEnum
struct FHordeEnum : FRowEnum {
};

// ScriptStruct Icarus.HordeRowHandle
struct FHordeRowHandle : FRowHandle {
};

// ScriptStruct Icarus.HordeWave
struct FHordeWave : FIcarusTableRowBase {
	struct TArray<struct FHordeCreatureSetup> Creatures; 
};

// ScriptStruct Icarus.HordeCreatureSetup
struct FHordeCreatureSetup {
	struct FAISetupRowHandle Creature; 
	struct FEpicCreaturesRowHandle Epic; 
	struct TMap<struct FBaseStatsEnum, int32_t> AdditionalStats; 
	int32_t LevelOverride; 
	struct FVector2D NumberToSpawnAtATime; 
	int32_t TotalToSpawn; 
	int32_t ExtraSpawnCountPerAdditionalNearbyPlayer; 
	float InitialSpawnDelay; 
	struct FVector2D TimeBetweenSpawns; 
};

// ScriptStruct Icarus.HordeWaveEnum
struct FHordeWaveEnum : FRowEnum {
};

// ScriptStruct Icarus.HuntingClueSetup
struct FHuntingClueSetup : FIcarusTableRowBase {
	enum class EHuntingClueType ClueType; 
	float ClueLifespan; 
	float MaxClueDistance; 
	float MinDistanceBetweenClues; 
	float MaxDistanceBetweenClues; 
	float MinTimeBetweenClues; 
	float MaxTimeBetweenClues; 
	struct TSoftClassPtr<UObject> HuntingClue; 
	struct TSoftClassPtr<UObject> HuntingWidget; 
	bool HasTrail; 
	float TrailSegmentLength; 
};

// ScriptStruct Icarus.HuntingClueSetupEnum
struct FHuntingClueSetupEnum : FRowEnum {
};

// ScriptStruct Icarus.HuntingClueSetupRowHandle
struct FHuntingClueSetupRowHandle : FRowHandle {
};

// ScriptStruct Icarus.HuntingSetup
struct FHuntingSetup : FIcarusTableRowBase {
	struct TArray<struct FHuntingClueSetupRowHandle> HuntingClues; 
};

// ScriptStruct Icarus.HuntingSetupEnum
struct FHuntingSetupEnum : FRowEnum {
};

// ScriptStruct Icarus.IcarusAtmosphere
struct FIcarusAtmosphere : FIcarusTableRowBase {
	struct FText AtmosphereName; 
	struct TSoftObjectPtr<UTexture2D> Image_Small; 
	struct TSoftObjectPtr<UTexture2D> Image_Medium; 
	struct TSoftObjectPtr<UTexture2D> Image_Large; 
	struct UCurveLinearColor* FogColour; 
	struct UCurveLinearColor* SunColour; 
	struct UCurveLinearColor* RayleighScatteringColour; 
	struct UCurveFloat* SunIntensity; 
	struct UCurveFloat* MoonIntensity; 
	struct UCurveFloat* SkyLightIntensity; 
	struct UCurveFloat* OvercastScattering; 
	struct UCurveVector* Bloom; 
	float DistFogScale; 
	struct FName MaterialParameterName; 
	struct TSoftObjectPtr<UTextureCube> Cubemap; 
};

// ScriptStruct Icarus.IcarusAttachment
struct FIcarusAttachment : FIcarusTableRowBase {
	struct FAlterationsRowHandle GrantedAlteration; 
};

// ScriptStruct Icarus.IcarusAttachmentsEnum
struct FIcarusAttachmentsEnum : FRowEnum {
};

// ScriptStruct Icarus.IcarusBiome
struct FIcarusBiome : FIcarusTableRowBase {
	struct FName BiomeName; 
	struct FText DisplayName; 
	struct FColor Color; 
	struct UCurveFloat* BiomeTemperatureCurve; 
	int32_t WeatherFrequency; 
	struct FAtmospheresRowHandle AtmosphereType; 
	struct FBiomeAudioDataRowHandle Audio; 
	bool bOrbitalCommunicationBlocked; 
	struct FModifierStatesRowHandle BiomeModifier; 
};

// ScriptStruct Icarus.IcarusBuildingType
struct FIcarusBuildingType : FIcarusTableRowBase {
	struct FTagQueriesRowHandle TagQuery; 
	struct TMap<struct FStatsEnum, int32_t> Stats; 
};

// ScriptStruct Icarus.CaveSpawnLoadedData
struct FCaveSpawnLoadedData {
	struct FString CaveActorClassName; 
	struct TArray<float> TimeStamps; 
};

// ScriptStruct Icarus.CaveSpawnConfig
struct FCaveSpawnConfig {
	int32_t MinSpawnNumber; 
	int32_t MaxSpawnNumber; 
	struct TArray<struct FTransform> SpawnPoints; 
	struct TArray<struct AActor*> SpawnedActors; 
	struct TArray<float> DeathTimestamps; 
};

// ScriptStruct Icarus.IcarusCharacterRecord
struct FIcarusCharacterRecord {
	int32_t CurrentHealth; 
};

// ScriptStruct Icarus.SerializedPlayerLoadout
struct FSerializedPlayerLoadout {
	struct TArray<struct FItemData> SerializedItemData; 
};

// ScriptStruct Icarus.SavedInventoryContainerData
struct FSavedInventoryContainerData {
	int32_t InventoryIndex; 
	struct FName InventoryInfo; 
	struct FInventorySaveData InventorySaveData; 
	bool bInventoryWantsTick; 
};

// ScriptStruct Icarus.IcarusDeployableType
struct FIcarusDeployableType : FIcarusTableRowBase {
	struct FTagQueriesRowHandle TagQuery; 
};

// ScriptStruct Icarus.IcarusFoodType
struct FIcarusFoodType : FIcarusTableRowBase {
	struct FTagQueriesRowHandle TagQuery; 
};

// ScriptStruct Icarus.StaticMeshCollisionGeo
struct FStaticMeshCollisionGeo {
	struct TArray<struct FStaticMeshSphereCollider> Spheres; 
	struct TArray<struct FStaticMeshBoxCollider> Boxes; 
	struct TArray<struct FStaticMeshCapsuleCollider> Capsules; 
};

// ScriptStruct Icarus.StaticMeshCapsuleCollider
struct FStaticMeshCapsuleCollider {
	struct FVector Center; 
	struct FRotator Rotation; 
	float Radius; 
	float Length; 
};

// ScriptStruct Icarus.StaticMeshBoxCollider
struct FStaticMeshBoxCollider {
	struct FVector Center; 
	struct FRotator Rotation; 
	struct FVector Extents; 
};

// ScriptStruct Icarus.StaticMeshSphereCollider
struct FStaticMeshSphereCollider {
	struct FVector Center; 
	float Radius; 
};

// ScriptStruct Icarus.LaunchItemReturnInfo
struct FLaunchItemReturnInfo {
	struct FString OwningPlayerID; 
	struct TArray<struct FItemData> Items; 
};

// ScriptStruct Icarus.TransientLandingPadInfo
struct FTransientLandingPadInfo {
	struct TSoftObjectPtr<AIcarusPlayerControllerSurvival> PlayerController; 
	struct TSoftObjectPtr<AActor> LandingPad; 
};

// ScriptStruct Icarus.TransientDropshipInfo
struct FTransientDropshipInfo {
	struct AIcarusPlayerControllerSurvival* PlayerController; 
	struct AIcarusDropShipSpawnLocator* SpawnLocator; 
	int32_t GroupIndex; 
};

// ScriptStruct Icarus.MissionStatus
struct FMissionStatus {
	struct FFactionMissionsRowHandle Mission; 
	enum class EMissionState MissionState; 
	int32_t MissionEndTime; 
};

// ScriptStruct Icarus.StoredPlayerItems
struct FStoredPlayerItems {
	struct TArray<struct FItemData> Items; 
};

// ScriptStruct Icarus.PlayerRewardSchedule
struct FPlayerRewardSchedule {
	struct TArray<struct FPlayerRewardEntry> RewardCounts; 
	bool bMissionCompleteRewardCollected; 
	int32_t CurrentMissionIndex; 
};

// ScriptStruct Icarus.BanInfo
struct FBanInfo {
	struct FString AccountId; 
	struct FString AccountJson; 
	struct FText BanReason; 
	struct FString PlayerNameDuringBan; 
};

// ScriptStruct Icarus.DamageNumberDetail
struct FDamageNumberDetail {
	struct FVector Location; 
	enum class EIcarusDamageType DamageType; 
	int32_t DamageValue; 
	struct FCriticalHitAreasEnum CriticalHit; 
	struct TWeakObjectPtr<struct AController> Instigator; 
};

// ScriptStruct Icarus.RefreshData
struct FRefreshData {
	struct UObject* Object; 
};

// ScriptStruct Icarus.IcarusGOAPAIFact
struct FIcarusGOAPAIFact {
	struct AActor* Target; 
	struct FVector Location; 
	enum class EGOAPObjectType ObjectType; 
	struct FAIStimulus LastAIStimulus; 
	enum class EGOAPFactSource FactSource; 
};

// ScriptStruct Icarus.IcarusGOAPProperty
struct FIcarusGOAPProperty {
	enum class EGOAPProperty Key; 
	bool bValue; 
};

// ScriptStruct Icarus.IcarusGOAPSearchNode
struct FIcarusGOAPSearchNode {
};

// ScriptStruct Icarus.IcarusGOAPState
struct FIcarusGOAPState {
	struct TArray<struct FIcarusGOAPProperty> Properties; 
};

// ScriptStruct Icarus.IcarusIntRange
struct FIcarusIntRange {
	int32_t Min; 
	int32_t Max; 
};

// ScriptStruct Icarus.IcarusItemConstructionParameters
struct FIcarusItemConstructionParameters {
	bool bSimulatePhysics; 
	struct FString MeshAssetPath; 
	struct FName CollisionProfile; 
	enum class EComponentMobility Mobility; 
	bool bHiddenInGame; 
	bool bDisableItemStaticDataTraits; 
	bool bReplicateStatArray; 
	bool bForceNoReplication; 
};

// ScriptStruct Icarus.IcarusItemSpawnParameters
struct FIcarusItemSpawnParameters {
	struct FName Name; 
	struct AActor* Template; 
	struct AActor* Owner; 
	struct APawn* Instigator; 
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride; 
	struct FIcarusItemConstructionParameters ConstructionParameters; 
	int32_t ForcedUID; 
	struct FIcarusItemSpawnParametersAdvanced Advanced; 
};

// ScriptStruct Icarus.IcarusItemSpawnParametersAdvanced
struct FIcarusItemSpawnParametersAdvanced {
	struct AIcarusItem* OverrideActorClass; 
	struct TSoftObjectPtr<UStreamableRenderAsset> OverrideMeshPtr; 
	bool bDisableActorRecording; 
	bool bNoFail; 
	bool bDeferConstruction; 
	bool bAllowDuringConstructionScript; 
};

// ScriptStruct Icarus.LargeScaleDestroyParams
struct FLargeScaleDestroyParams {
	enum class EIcarusDamageType DamageType; 
	enum class EDestroyPattern Pattern; 
	int32_t DamageToDestroyRatio; 
	int32_t StructuresDamageAmount; 
	int32_t NPCDamageAmount; 
	int32_t PlayerDamageAmount; 
	struct FVector Location; 
	int32_t DamageRadiusCm; 
	int32_t PlayerDamageRadiusCm; 
	float DamageDurationSec; 
	float CleanupAfterDelay; 
	struct TArray<struct AActor*> IgnoreActors; 
};

// ScriptStruct Icarus.IcarusMount
struct FIcarusMount : FIcarusTableRowBase {
	struct FAISetupRowHandle AISetup; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	struct TArray<struct FMountVariation> Variations; 
	struct FTagQueriesRowHandle RelevantSaddleQuery; 
	struct TArray<enum class EMountCombatBehaviourState> SupportedCombatStates; 
	struct TArray<enum class EMountMovementBehaviourState> SupportedMovementStates; 
	struct TArray<enum class EMountConsumptionBehaviourState> SupportedConsumptionStates; 
	struct TArray<enum class EMountGrazingBehaviourState> SupportedGrazingStates; 
	struct TMap<struct FGameplayTag, struct TSoftObjectPtr<UAnimMontage>> Animations; 
	struct FPreviewCameraSettingsRowHandle InventoryPreviewCameraSettings; 
	struct TArray<struct FText> DefaultNames; 
	struct FMapIconsRowHandle MapIcon; 
	struct FVector RelativeFeetOffset; 
	struct FVector RelativeHandsOffset; 
	struct FVector RelativeLightOffset; 
	float SpringArmTargetDistance; 
	struct FTalentArchetypesRowHandle MountTalentArchetype; 
	struct FCharacterGrowthRowHandle GrowthCurve; 
	bool bUseTemperature; 
	struct FVector2D ComfortableTemperatureRange; 
	int32_t ColdTemperatureResistance; 
	int32_t HotTemperatureResistance; 
};

// ScriptStruct Icarus.MapIconsRowHandle
struct FMapIconsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PreviewCameraSettingsRowHandle
struct FPreviewCameraSettingsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MountVariation
struct FMountVariation {
	bool bCanBeSelected; 
	bool bCanBeSelectedByForcedEvolution; 
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInstance>> MeshMaterials; 
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInstance>> GFurMaterials; 
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInstance>> CarcassMeshMaterials; 
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInstance>> CarcassGFurMaterials; 
	int32_t Weighting; 
};

// ScriptStruct Icarus.MountTalentSaveData
struct FMountTalentSaveData {
	struct FString TalentRowName; 
	int32_t TalentRank; 
};

// ScriptStruct Icarus.ActionAnimData
struct FActionAnimData {
	struct TSoftObjectPtr<UAnimMontage> ActionMontage; 
	struct TMap<struct FName, float> PossibleMontageSections; 
	struct FName ActionNotify; 
};

// ScriptStruct Icarus.PakMetaDetail
struct FPakMetaDetail {
	struct FPakFileDetails MissingFilesPak; 
	struct FPakFileDetails BadFileSizesPak; 
	struct FPakFileDetails ExtraFilesPak; 
	struct FPakFileDetails ModFilesPak; 
	struct FString Path; 
	struct FString PakHash; 
	int32_t Result; 
};

// ScriptStruct Icarus.PakFileDetails
struct FPakFileDetails {
	struct TArray<struct FPakFileNameAndSize> PakFiles; 
	struct FString PakHash; 
};

// ScriptStruct Icarus.PakFileNameAndSize
struct FPakFileNameAndSize {
	struct FString Filename; 
	int64_t FileSize; 
};

// ScriptStruct Icarus.InteractableHitLookup
struct FInteractableHitLookup {
	enum class EInteractableHitLookupType Type; 
	struct FReplicatedHitResult Hit; 
	struct AFLODTile* Tile; 
	int32_t RecordIndex; 
	int32_t InstanceIndex; 
};

// ScriptStruct Icarus.ReplicatedHitResult
struct FReplicatedHitResult {
	bool bBlockingHit; 
	struct TWeakObjectPtr<struct AActor> HitActor; 
	struct TWeakObjectPtr<struct UPrimitiveComponent> HitComponent; 
	struct FVector_NetQuantize10 Location; 
	struct FVector_NetQuantize10 Normal; 
};

// ScriptStruct Icarus.ArmourComponentData
struct FArmourComponentData {
	struct TArray<struct FArmourRowHandle> AssociatedRowHandles; 
	struct TArray<struct USkeletalMeshComponent*> ArmourComponents; 
	struct TArray<struct USkeletalMeshComponent*> SimpleTPArmourComponents; 
	struct TArray<struct USkeletalMeshComponent*> FPArmourComponents; 
};

// ScriptStruct Icarus.FocusedItemData
struct FFocusedItemData {
	struct UInventory* FocusedItemInventory; 
	int32_t FocusedItemSlot; 
};

// ScriptStruct Icarus.ItemPriority
struct FItemPriority {
	struct FTagQueriesRowHandle QueryRow; 
	struct FInventoryIDEnum InventoryID; 
};

// ScriptStruct Icarus.IcarusProjectileType
struct FIcarusProjectileType : FIcarusTableRowBase {
	struct FTagQueriesRowHandle TagQuery; 
};

// ScriptStruct Icarus.InitialQuestRecord
struct FInitialQuestRecord {
	struct FString QuestActorName; 
	int32_t RelevantActorIcarusUID; 
};

// ScriptStruct Icarus.QuestVariableRecord
struct FQuestVariableRecord {
	struct FString VariableName; 
	bool bVariable; 
	float fVariable; 
	int32_t iVariable; 
};

// ScriptStruct Icarus.SubQuestRecord
struct FSubQuestRecord {
	struct FString SubQuestName; 
	struct FName SubQuestRowName; 
	int32_t RelevantActorIcarusUID; 
};

// ScriptStruct Icarus.RelevantQuestActorRecord
struct FRelevantQuestActorRecord {
	struct FString RelevantActorClassName; 
	struct FString Key; 
	int32_t RelevantActorIcarusUID; 
};

// ScriptStruct Icarus.IcarusResource
struct FIcarusResource : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct FText Units; 
	struct FColor Color; 
	struct TSoftObjectPtr<UTexture2D> Resource_Icon; 
	struct TSoftObjectPtr<UTexture2D> Recipe_Icon; 
	struct TSoftObjectPtr<UMaterialInstance> Container_Icon; 
};

// ScriptStruct Icarus.ClientResourceComponentValues
struct FClientResourceComponentValues {
	int32_t StorageFlowRate; 
	uint32_t ConnectionPriorityMask; 
	struct TArray<struct FClientResourceNetworkComponentValues> ResourceValues; 
};

// ScriptStruct Icarus.ClientResourceNetworkComponentValues
struct FClientResourceNetworkComponentValues {
	struct FIcarusResourcesEnum ResourceType; 
	int32_t CurrentFlowRate; 
	int32_t DesiredFlowRate; 
	int32_t BrownOutStrength; 
};

// ScriptStruct Icarus.IcarusResourcesRowHandle
struct FIcarusResourcesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.IcarusSession
struct FIcarusSession {
	struct FProspectInfo ProspectInfo; 
	struct FBlueprintSessionResult Session; 
	bool FromServer; 
	bool Locked; 
	bool DedicatedServer; 
	struct FString GameVersion; 
};

// ScriptStruct Icarus.IcarusSortTypePriority
struct FIcarusSortTypePriority : FIcarusTableRowBase {
	struct TArray<struct FTagQueriesRowHandle> TagPriority; 
};

// ScriptStruct Icarus.IcarusStat
struct FIcarusStat {
	struct FStatsRowHandle Stat; 
	int32_t Value; 
};

// ScriptStruct Icarus.IcarusStatDescription
struct FIcarusStatDescription : FIcarusTableRowBase {
	struct FText Title; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	struct FText PositiveTitleFormat; 
	struct FText NegativeTitleFormat; 
	struct FText PositiveDescription; 
	struct FText NegativeDescription; 
	bool bIsReplicated; 
	struct TArray<struct FStatDisplayCalculation> DisplayOperations; 
	bool bIsWorldStat; 
	struct FStatCategoriesRowHandle StatCategory; 
	bool bHideStatInUserInterface; 
	bool bShowStatOnModifiers; 
};

// ScriptStruct Icarus.StatCategoriesRowHandle
struct FStatCategoriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.StatDisplayCalculation
struct FStatDisplayCalculation {
	enum class EStatDisplayOperation Operation; 
	float Value; 
};

// ScriptStruct Icarus.BackingStatContainer
struct FBackingStatContainer {
};

// ScriptStruct Icarus.StatList
struct FStatList {
};

// ScriptStruct Icarus.StatSource
struct FStatSource {
};

// ScriptStruct Icarus.StatsRepArray
struct FStatsRepArray : FFastArraySerializer {
	struct TArray<struct FStatPairRepState> StatList; 
};

// ScriptStruct Icarus.StatPairRepState
struct FStatPairRepState : FFastArraySerializerItem {
	int32_t Stat; 
	int32_t Value; 
};

// ScriptStruct Icarus.IcarusTamingData
struct FIcarusTamingData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; 
	int32_t TameDurationInSeconds; 
	struct FVector2D DesiredTemperatureRange; 
	int32_t DesiredShelterPercentage; 
	int32_t DesiredNutritionPercentage; 
	struct TArray<struct FModifierStatesRowHandle> RequiredTamingModifiers; 
	struct TArray<struct FModifierStatesRowHandle> ProhibitedTamingModifiers; 
	struct FAISetupRowHandle TamedAI; 
	struct TMap<struct FAISetupRowHandle, struct FIcarusStatReplicated> TamedAIOverride; 
	struct FAISetupRowHandle MatureCreatureType; 
	struct FAISetupRowHandle JuvenileCreatureType; 
	bool bAutomaticallySpawnJuvenileWithParent; 
	int32_t PercentChanceToSpawnJuvenile; 
	int32_t MaxNearbyAutoSpawnedJuveniles; 
	int32_t TimeToSpawnDynamicCharacter; 
	int32_t TimeToSpawnDynamicCharacterRandomDeviation; 
	struct TArray<struct FAtmospheresEnum> TrappingSupportedAtmospheres; 
	int32_t GestationPeriodSeconds; 
};

// ScriptStruct Icarus.IcarusTerrain
struct FIcarusTerrain : FIcarusTableRowBase {
	struct FText TerrainName; 
	struct TSoftObjectPtr<UWorld> Level; 
	struct TSoftObjectPtr<UGameplayTexture> TemperatureMap; 
	struct FVector2D TemperatureMapRange; 
	struct TSoftObjectPtr<UGameplayTexture> BiomeMap; 
	struct TSoftObjectPtr<UGameplayTexture> Bounds; 
	struct FAISpawnConfigRowHandle SpawnConfig; 
	struct FFishSpawnConfigRowHandle FishConfig; 
	struct TMap<struct FWorldBossesRowHandle, struct FVector2D> WorldBosses; 
	struct TSoftObjectPtr<UGameplayTexture> AudioZoneMap; 
};

// ScriptStruct Icarus.TestProfileData
struct FTestProfileData {
	float LatestWindowedFrameAverage; 
	float MinWindowedFrameAverage; 
	float MaxWindowedFrameAverage; 
	float MaxWindowedFrametimeRailPosition; 
	float MinFrametime; 
	float MaxFrametime; 
	float MaxFrametimeRailPosition; 
};

// ScriptStruct Icarus.IcarusTimeSpan
struct FIcarusTimeSpan {
	struct FIcarusIntRange Days; 
	struct FIcarusIntRange Hours; 
	struct FIcarusIntRange Mins; 
	struct FIcarusIntRange Seconds; 
};

// ScriptStruct Icarus.IcarusToolType
struct FIcarusToolType : FIcarusTableRowBase {
	struct FTagQueriesRowHandle TagQuery; 
};

// ScriptStruct Icarus.IcarusWeatherActionData
struct FIcarusWeatherActionData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> WeatherActionComponent; 
	bool bIsRampingUp; 
	struct TSoftObjectPtr<UTexture2D> TimelineIcon; 
	struct FSlateColor TimelineTailBrush; 
	float ExposureMultiplier; 
	struct TMap<float, struct FModifier> ExposureModifiers; 
	bool bEnableVisuals_Rain; 
	float Severity_RainStart; 
	float Severity_RainEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_Rain; 
	bool bEnableFillable_Rain; 
	float Rainfall_Millilitre_Start; 
	float Rainfall_Millilitre_End; 
	bool bEnableVisuals_Clouds; 
	float Severity_CloudsStart; 
	float Severity_CloudsEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_Clouds; 
	bool bGeneratesLightning; 
	float MinLightningInterval; 
	float MaxLightningInterval; 
	bool bGeneratesThunder; 
	float ThunderIntensity; 
	bool bEnableVisuals_Debris; 
	float Severity_DebrisStart; 
	float Severity_DebrisEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_Debris; 
	bool bEnableAction_Temperature; 
	float Temperature_Start; 
	float Temperature_End; 
	int32_t Perception_Percentage; 
	bool bEnableVisuals_Wind; 
	bool bEnableAction_Wind; 
	float Severity_WindStart; 
	float Severity_WindEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_Wind; 
	float StormTier; 
	float StormWindDamagePeriod; 
	float UnzipChance; 
	float UnzipbuildingCountMultiplier; 
	float UnzipbuildingDamageMultiplier; 
	bool bEnableEndAllWindDamageTrigger; 
	struct TSoftObjectPtr<UCurveFloat> Curve_EndAllWindDamageTrigger; 
	bool bWindTopplesTrees; 
	float TreeToppleMinInterval; 
	float TreeToppleMaxInterval; 
	float TreeToppleStrengthThreshold; 
	bool bEnableDamage_Deployables; 
	float Damage_Deployables_MinInterval; 
	float Damage_Deployables_MaxInterval; 
	float Damage_Deployables_Intensity; 
	bool bEnableDamage_Players; 
	float Damage_Players_MinInterval; 
	float Damage_Players_MaxInterval; 
	float Damage_Players_Intensity; 
	bool bEnableFireExtinguish; 
	float FireExtinguish_RollChanceMulti; 
	float FireExtinguish_MinInterval; 
	float FireExtinguish_MaxInterval; 
	bool bEnableVisuals_Sand; 
	float Severity_SandStart; 
	float Severity_SandEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_Sand; 
	bool bEnableVisuals_Sand_Buildup; 
	float Severity_Sand_BuildupStart; 
	float Severity_Sand_BuildupEnd; 
	bool bEnableVisuals_Snow; 
	float Severity_SnowStart; 
	float Severity_SnowEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_Snow; 
	bool bEnableVisuals_Snow_Buildup; 
	float Severity_Snow_BuildupStart; 
	float Severity_Snow_BuildupEnd; 
	bool bEnableVisuals_Snow_Storm; 
	float Severity_Snow_StormStart; 
	float Severity_Snow_StormEnd; 
	bool bEnableVisuals_Ash; 
	float Severity_AshStart; 
	float Severity_AshEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_Ash; 
	bool bEnableVisuals_Ash_Buildup; 
	float Severity_Ash_BuildupStart; 
	float Severity_Ash_BuildupEnd; 
	bool bEnableVisuals_Embers; 
	float Severity_EmbersStart; 
	float Severity_EmbersEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_Embers; 
	bool bEnableVisuals_Smoke; 
	float Severity_SmokeStart; 
	float Severity_SmokeEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_Smoke; 
	bool bEnableVisuals_AcidRain; 
	float Severity_AcidRainStart; 
	float Severity_AcidRainEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_AcidRain; 
	bool bEnableVisuals_Hail; 
	float Severity_HailStart; 
	float Severity_HailEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_HailRain; 
	bool bEnableVisuals_Radiation; 
	float Severity_RadiationStart; 
	float Severity_RadiationEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_Radiation; 
	bool bEnableVisuals_FogColor; 
	float Severity_FogColorStart; 
	float Severity_FogColorEnd; 
	struct FLinearColor FogColorLinear; 
	bool bEnableVisuals_FogDensity; 
	float Severity_FogDensityStart; 
	float Severity_FogDensityEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_FogDensity; 
	bool bEnableVisuals_FogExtinction; 
	float Severity_FogExtinctionStart; 
	float Severity_FogExtinctionEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_FogExtinction; 
	bool bEnableVisuals_Whiteout; 
	float Severity_WhiteoutStart; 
	float Severity_WhiteoutEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_Whiteout; 
	bool bEnableVisuals_LightningCloud; 
	float Severity_LightningCloudStart; 
	float Severity_LightningCloudEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_LightningCloud; 
	bool bEnableVisuals_RadiationWind; 
	float Severity_RadiationWindStart; 
	float Severity_RadiationWindEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_RadiationWind; 
	bool bEnableVisuals_Speckles; 
	float Severity_SpecklesStart; 
	float Severity_SpecklesEnd; 
	struct TSoftObjectPtr<UCurveFloat> Curve_Speckles; 
	bool bEnableDamageTag; 
	struct TSoftObjectPtr<UCurveFloat> Curve_DamageTag; 
	float DamageTag_Intensity; 
	float DamageTag_DutyCycle; 
	struct FTagQueriesRowHandle DamageTag_Query; 
	enum class EIcarusDamageType DamageTag_DamageType; 
	bool bEnableProcessorClog; 
	struct TSoftObjectPtr<UCurveFloat> Curve_ProcessorClog; 
	bool bEnablePlayerItemDamageTag; 
	bool bDamageFocusedItem; 
	struct TSoftObjectPtr<UCurveFloat> Curve_PlayerItemDamageTag; 
	float PlayerItemDamageTag_Intensity; 
	float PlayerItemDamageTag_DutyCycle; 
	struct FTagQueriesRowHandle PlayerItemDamageTag_Query; 
	struct FInventoryIDEnum InventoryID; 
	enum class EIcarusDamageType PlayerItemDamageTag_DamageType; 
};

// ScriptStruct Icarus.IcarusWeatherBiomeGroup
struct FIcarusWeatherBiomeGroup : FIcarusTableRowBase {
	struct TArray<struct FBiomesRowHandle> AvaliableBiomes; 
};

// ScriptStruct Icarus.IcarusWeatherEvent
struct FIcarusWeatherEvent : FIcarusTableRowBase {
	enum class EIcarusWeatherDifficulty Difficulty; 
	int32_t Tier; 
	int32_t DurationSeconds; 
	int32_t DurationMinutes; 
	struct TArray<struct FWeatherBiomeGroupsRowHandle> BiomeGroups; 
	struct UTexture2D* WeatherImage; 
	struct FText WeatherName; 
	struct FText WeatherDescription; 
	struct TArray<struct FWeatherAction> WeatherActions; 
	struct TArray<struct FWeatherMusicCue> MusicCues; 
	struct TArray<struct FScriptedEventSetup> ScriptedEventConfig; 
	float ChanceToActivateScriptedEvent; 
};

// ScriptStruct Icarus.ScriptedEventSetup
struct FScriptedEventSetup {
	struct FScriptedEventsRowHandle ScriptedEvent; 
	int32_t RandomChanceWeight; 
	struct TSet<int32_t> ActiveWeatherStages; 
};

// ScriptStruct Icarus.ScriptedEventsRowHandle
struct FScriptedEventsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.WeatherMusicCue
struct FWeatherMusicCue {
	enum class EMusicConditionWeather MusicCondition; 
	int32_t TriggerTime; 
};

// ScriptStruct Icarus.WeatherAction
struct FWeatherAction {
	struct FWeatherActionsRowHandle Action; 
	float TimeInSeconds; 
};

// ScriptStruct Icarus.WeatherActionsRowHandle
struct FWeatherActionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.WeatherBiomeGroupsRowHandle
struct FWeatherBiomeGroupsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.IcarusWeatherPoolData
struct FIcarusWeatherPoolData : FIcarusTableRowBase {
	struct TArray<struct FWeatherPoolEntry> WeatherEvents; 
	struct TArray<struct FWeatherPoolEntryMeta> ContainedTiers; 
};

// ScriptStruct Icarus.WeatherPoolEntryMeta
struct FWeatherPoolEntryMeta {
	int32_t Tier; 
	int32_t NumEvents; 
	int32_t MinEventDurationMinutes; 
	struct TArray<struct FString> BiomesGroupsIncluded; 
};

// ScriptStruct Icarus.WeatherPoolEntry
struct FWeatherPoolEntry {
	struct FWeatherEventsRowHandle Event; 
	float Weight; 
};

// ScriptStruct Icarus.CaveLocation
struct FCaveLocation {
	struct FVector Location; 
	struct TSoftObjectPtr<UCavePrefabAsset> Prefab; 
};

// ScriptStruct Icarus.InstancedLevelSaveDataRecord
struct FInstancedLevelSaveDataRecord {
	int32_t SelectedSlot; 
	struct FVector LoadedLocation; 
	struct FString UniqueLevelName; 
	struct FInstancedBlobSave InstancedSave; 
	struct TArray<int32_t> InstancedInventories; 
};

// ScriptStruct Icarus.InstancedBlobSave
struct FInstancedBlobSave {
	struct FString Key; 
	struct FString Hash; 
	int32_t TotalLength; 
	int32_t DataLength; 
	int32_t UncompressedLength; 
	struct FString BinaryBlob; 
};

// ScriptStruct Icarus.EdInstancedLevelDetail
struct FEdInstancedLevelDetail {
	struct FInstancedMapData Data; 
	struct FString ShortenedName; 
	bool bIsUpdate; 
	struct FString LogDetail; 
};

// ScriptStruct Icarus.InstancedMapData
struct FInstancedMapData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UWorld> MapAsset; 
	struct FBox MapBounds; 
	int32_t CaveID; 
	int32_t NumEntrances; 
	struct FBox RVTBounds; 
};

// ScriptStruct Icarus.InstancedMapDataEnum
struct FInstancedMapDataEnum : FRowEnum {
};

// ScriptStruct Icarus.InstancedSaveStateHeader
struct FInstancedSaveStateHeader {
	int32_t Version; 
	struct FString UniqueLevelName; 
	int32_t SubCaveID; 
	struct FDateTime LastSavedDateTime; 
	struct TArray<struct FStateRecorderBlob> StateRecorderBlobs; 
};

// ScriptStruct Icarus.InteractStack
struct FInteractStack {
	struct TArray<struct UInteractableBehaviour*> Stack; 
};

// ScriptStruct Icarus.InteractData
struct FInteractData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; 
	enum class EAuthorityType AuthorityType; 
	float InteractCooldown; 
	struct FText InteractionText; 
	struct FStaminaActionCostsRowHandle InteractStaminaCost; 
	bool bShowInteractionWhenUnavailable; 
	bool bCanPerformInteractionWhileSeated; 
};

// ScriptStruct Icarus.InteractableData
struct FInteractableData : FIcarusTableRowBase {
	struct TArray<struct FInteractionHandleWithRequiredTag> WorldPressInteracts; 
	struct TArray<struct FInteractionHandleWithRequiredTag> WorldHoldInteracts; 
	struct TArray<struct FInteractionHandleWithRequiredTag> WorldAltPressInteracts; 
	struct TArray<struct FInteractionHandleWithRequiredTag> WorldAltHoldInteracts; 
	struct TArray<struct FRowHandle> GenericData; 
};

// ScriptStruct Icarus.InteractionHandleWithRequiredTag
struct FInteractionHandleWithRequiredTag {
	struct FInteractionsRowHandle InteractionRow; 
	struct FString Tag; 
};

// ScriptStruct Icarus.InteractionsRowHandle
struct FInteractionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.InteractableEnum
struct FInteractableEnum : FRowEnum {
};

// ScriptStruct Icarus.InteractableRowHandle
struct FInteractableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.InteractionsEnum
struct FInteractionsEnum : FRowEnum {
};

// ScriptStruct Icarus.InventoryBag
struct FInventoryBag {
	struct TWeakObjectPtr<struct UInventory> Inventory; 
	int32_t CurrentSlotIndex; 
};

// ScriptStruct Icarus.EquippableModifierList
struct FEquippableModifierList {
	struct TArray<struct UEquippableModifier*> Modifiers; 
};

// ScriptStruct Icarus.FindAllStacksResult
struct FFindAllStacksResult {
	struct UInventory* Inventory; 
	int32_t InventorySlotIndex; 
	struct FItemData ItemTypeInstance; 
	int32_t TotalStacksCount; 
};

// ScriptStruct Icarus.ManuallyAddedInventoryItems
struct FManuallyAddedInventoryItems {
	struct TArray<struct FItemRewardEntry> ItemRewards; 
};

// ScriptStruct Icarus.ItemRewardEntry
struct FItemRewardEntry {
	struct FItemTemplateRowHandle Item; 
	float DropChance; 
	struct FStatsRowHandle DropChanceAdditiveStat; 
	struct FStatsRowHandle RequiredStatToDrop; 
	int32_t MinRandomStackCount; 
	int32_t MaxRandomStackCount; 
	bool bRewardsScale; 
	struct FStatsRowHandle StackAdditiveStat; 
	struct FStatsRowHandle StackMultiplicativeStat; 
};

// ScriptStruct Icarus.InventoryContainerData
struct FInventoryContainerData : FIcarusTableRowBase {
	struct FInventoryInfoRowHandle InventoryInfo; 
	int32_t AttachmentSlot; 
	bool bCanInventoryTick; 
};

// ScriptStruct Icarus.InventoryInfoRowHandle
struct FInventoryInfoRowHandle : FRowHandle {
};

// ScriptStruct Icarus.InventoryContainerEnum
struct FInventoryContainerEnum : FRowEnum {
};

// ScriptStruct Icarus.InventoryContainerRowHandle
struct FInventoryContainerRowHandle : FRowHandle {
};

// ScriptStruct Icarus.InventoryData
struct FInventoryData : FIcarusTableRowBase {
	struct TArray<struct FInventoryInfoRowHandle> Inventories; 
};

// ScriptStruct Icarus.InventoryInfo
struct FInventoryInfo : FIcarusTableRowBase {
	struct FInventoryIDEnum InventoryID; 
	struct FTagQueriesRowHandle SlotTemplate; 
	int32_t StartingSlots; 
	struct TArray<struct FInventorySlotOverride> SlotOverrides; 
	bool RemoveOnly; 
	bool bIsClientSideOnly; 
	struct TMap<struct FStatsEnum, int32_t> Stats; 
};

// ScriptStruct Icarus.InventorySlotOverride
struct FInventorySlotOverride : FIcarusTableRowBase {
	struct FTagQueriesRowHandle Query; 
	int32_t Location; 
};

// ScriptStruct Icarus.InventorySlotsFastArray
struct FInventorySlotsFastArray : FFastArraySerializer {
	struct TArray<struct FInventorySlot> Slots; 
};

// ScriptStruct Icarus.InventorySlot
struct FInventorySlot : FFastArraySerializerItem {
	struct FItemData ItemData; 
	struct FTagQueriesRowHandle Query; 
	bool Locked; 
	struct FItemsStaticRowHandle LastItem; 
	bool Slotable; 
	int32_t Index; 
};

// ScriptStruct Icarus.InventoryIdentification
struct FInventoryIdentification {
	struct FInventoryIDEnum ID; 
};

// ScriptStruct Icarus.InventoryEnum
struct FInventoryEnum : FRowEnum {
};

// ScriptStruct Icarus.InventoryID
struct FInventoryID : FIcarusTableRowBase {
	bool PlayerInventory; 
};

// ScriptStruct Icarus.InventoryIDRowHandle
struct FInventoryIDRowHandle : FRowHandle {
};

// ScriptStruct Icarus.InventoryInfoEnum
struct FInventoryInfoEnum : FRowEnum {
};

// ScriptStruct Icarus.ProcessorRecipeResult
struct FProcessorRecipeResult {
	struct FProcessorRecipesRowHandle Recipe; 
	struct TArray<struct FTagQueriesRowHandle> SuccessfulQueries; 
};

// ScriptStruct Icarus.RefundResult
struct FRefundResult {
	struct TArray<struct FRefundItem> RefundedItems; 
};

// ScriptStruct Icarus.RefundItem
struct FRefundItem {
	struct FItemsStaticRowHandle ItemType; 
	int32_t StackSize; 
};

// ScriptStruct Icarus.InventoryRowHandle
struct FInventoryRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemableData
struct FItemableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; 
	struct FText DisplayName; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	struct TSoftObjectPtr<UTexture2D> Override_Glow_Icon; 
	struct FText Description; 
	struct FText FlavorText; 
	struct TArray<struct FText> FieldGuideKeywords; 
	int32_t Weight; 
	bool bAllowZeroWeight; 
	int32_t MaxStack; 
};

// ScriptStruct Icarus.ItemableEnum
struct FItemableEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemAnimationData
struct FItemAnimationData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UAnimSequence> FPJumpStart; 
	struct TSoftObjectPtr<UAnimSequence> FPJumpLoop; 
	struct TSoftObjectPtr<UAnimSequence> FPJumpEnd; 
	struct TSoftObjectPtr<UBlendSpace1D> FPLocoBlendSpace; 
	struct TSoftObjectPtr<UAnimSequence> TPJumpStart; 
	struct TSoftObjectPtr<UAnimSequence> TPJumpLoop; 
	struct TSoftObjectPtr<UAnimSequence> TPJumpEnd; 
	struct FLocomotionAnims TPLocomotionAnims; 
	struct TSoftObjectPtr<UBlendSpace1D> UpToDownBlendSpace; 
};

// ScriptStruct Icarus.LocomotionAnims
struct FLocomotionAnims {
	struct TSoftObjectPtr<UAnimSequence> WalkF; 
	struct TSoftObjectPtr<UAnimSequence> WalkR; 
	struct TSoftObjectPtr<UAnimSequence> WalkB; 
	struct TSoftObjectPtr<UAnimSequence> WalkL; 
	struct TSoftObjectPtr<UAnimSequence> RunF; 
	struct TSoftObjectPtr<UAnimSequence> RunR; 
	struct TSoftObjectPtr<UAnimSequence> RunB; 
	struct TSoftObjectPtr<UAnimSequence> RunL; 
	struct TSoftObjectPtr<UAnimSequence> SprintF; 
	struct TSoftObjectPtr<UAnimSequence> CrouchWalkF; 
	struct TSoftObjectPtr<UAnimSequence> CrouchWalkR; 
	struct TSoftObjectPtr<UAnimSequence> CrouchWalkB; 
	struct TSoftObjectPtr<UAnimSequence> CrouchWalkL; 
};

// ScriptStruct Icarus.ItemAnimationsEnum
struct FItemAnimationsEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemAttachmentData
struct FItemAttachmentData : FIcarusTableRowBase {
	struct FName TPAttachmentSocketName; 
	struct FName FPAttachmentSocketName; 
	struct FName BackAttachmentSocketName; 
	enum class EHandedness EquippableHandedness; 
};

// ScriptStruct Icarus.ItemAttachmentEnum
struct FItemAttachmentEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemAudioData
struct FItemAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> PickUpSound; 
	struct TSoftObjectPtr<UFMODEvent> DropSound; 
	struct TSoftObjectPtr<UFMODEvent> HitSound; 
	struct TSoftObjectPtr<UFMODEvent> DamagedSound; 
	struct TSoftObjectPtr<UFMODEvent> BrokenSound; 
	struct TSoftObjectPtr<UFMODEvent> UseWhenBrokenSound; 
	struct TSoftObjectPtr<UFMODEvent> RepairedSound; 
	struct TSoftObjectPtr<UFMODEvent> DestroyedSound; 
	struct TSoftObjectPtr<UFMODEvent> SlottedSound; 
	struct TSoftObjectPtr<UFMODEvent> ConsumedSound; 
	struct TSoftObjectPtr<UFMODEvent> ConsumeFailedSound; 
	struct TSoftObjectPtr<UFMODEvent> ConsumableExpiredSound; 
	struct TSoftObjectPtr<UFMODEvent> BackpackSound; 
	struct TSoftObjectPtr<UFMODEvent> BackpackFootstepSound; 
	struct TSoftObjectPtr<UFMODEvent> WeatherSound; 
	struct TMap<struct FName, struct FItemAudioAnimData> AnimSounds; 
};

// ScriptStruct Icarus.ItemAudioAnimData
struct FItemAudioAnimData {
	struct TArray<struct TSoftObjectPtr<UFMODEvent>> FMODEvents; 
};

// ScriptStruct Icarus.ItemAudioDataEnum
struct FItemAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemAudioDataRowHandle
struct FItemAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemClassificationsIconsData
struct FItemClassificationsIconsData : FIcarusTableRowBase {
	struct FTagQueriesRowHandle TagQuery; 
	struct UTexture2D* Icon; 
	struct FText Tooltip; 
};

// ScriptStruct Icarus.ItemClassificationsIconsEnum
struct FItemClassificationsIconsEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemClassificationsIconsRowHandle
struct FItemClassificationsIconsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemConstructionData
struct FItemConstructionData {
	struct FItemsStaticRowHandle ItemStatic; 
	struct TArray<struct FItemDynamicContainer> ItemDynamic; 
};

// ScriptStruct Icarus.ItemDynamicContainer
struct FItemDynamicContainer {
	struct UTraitComponent* Component; 
	struct TArray<struct FItemDynamicData> Properties; 
};

// ScriptStruct Icarus.ItemStaticData
struct FItemStaticData : FIcarusTableRowBase {
	struct FMeshableRowHandle Meshable; 
	struct FItemableRowHandle Itemable; 
	struct FInteractableRowHandle Interactable; 
	struct FHitableRowHandle Hitable; 
	struct FEquippableRowHandle Equippable; 
	struct FFocusableRowHandle Focusable; 
	struct FHighlightableRowHandle Highlightable; 
	struct FActionableRowHandle Actionable; 
	struct FBuildableRowHandle Buildable; 
	struct FConsumableRowHandle Consumable; 
	struct FUsableRowHandle Usable; 
	struct FCombustibleRowHandle Combustible; 
	struct FDeployableRowHandle Deployable; 
	struct FArmourRowHandle Armour; 
	struct FBallisticRowHandle Ballistic; 
	struct FFillableRowHandle Fillable; 
	struct FDurableRowHandle Durable; 
	struct FFloatableRowHandle Floatable; 
	struct FRocketableRowHandle Rocketable; 
	struct FInventoryRowHandle Inventory; 
	struct FProcessingRowHandle Processing; 
	struct FThermalRowHandle Thermal; 
	struct FExperienceRowHandle Experience; 
	struct FSlotableRowHandle Slotable; 
	struct FDecayableRowHandle Decayable; 
	struct FFlammableRowHandle Flammable; 
	struct FTransmutableRowHandle Transmutable; 
	struct FGeneratorRowHandle Generator; 
	struct FWeightRowHandle Weight; 
	struct FFarmableRowHandle Farmable; 
	struct FInventoryContainerRowHandle InventoryContainer; 
	struct FLivingItemRowHandle LivingItem; 
	struct FResourceRowHandle Resource; 
	struct FToolDamageRowHandle ToolDamage; 
	struct FAmmoTypesRowHandle AmmoType; 
	struct FItemAudioDataRowHandle Audio; 
	struct FRangedWeaponDataRowHandle RangedWeaponData; 
	struct FFirearmDataRowHandle FirearmData; 
	struct FFLODDescriptionsRowHandle FLODData; 
	struct FTurretRowHandle TurretData; 
	struct TMap<struct FBaseStatsEnum, int32_t> AdditionalStats; 
	struct FIcarusAttachmentsRowHandle Attachments; 
	int32_t CraftingExperience; 
	struct FGameplayTagContainer Manual_Tags; 
	struct FGameplayTagContainer Generated_Tags; 
};

// ScriptStruct Icarus.TurretRowHandle
struct FTurretRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RangedWeaponDataRowHandle
struct FRangedWeaponDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ToolDamageRowHandle
struct FToolDamageRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ResourceRowHandle
struct FResourceRowHandle : FRowHandle {
};

// ScriptStruct Icarus.LivingItemRowHandle
struct FLivingItemRowHandle : FRowHandle {
};

// ScriptStruct Icarus.WeightRowHandle
struct FWeightRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TransmutableRowHandle
struct FTransmutableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SlotableRowHandle
struct FSlotableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ThermalRowHandle
struct FThermalRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RocketableRowHandle
struct FRocketableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.UsableRowHandle
struct FUsableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MeshableRowHandle
struct FMeshableRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemRank
struct FItemRank : FIcarusTableRowBase {
	struct FTagQueriesRowHandle TagQuery; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
};

// ScriptStruct Icarus.ItemRanksEnum
struct FItemRanksEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemRanksRowHandle
struct FItemRanksRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemRewards
struct FItemRewards : FIcarusTableRowBase {
	struct TArray<struct FItemRewardEntry> Rewards; 
};

// ScriptStruct Icarus.ItemReward
struct FItemReward {
	struct FItemTemplateRowHandle ItemTemplate; 
	bool bUseRandomStackCount; 
	int32_t MinRandomStackCount; 
	int32_t MaxRandomStackCount; 
};

// ScriptStruct Icarus.ItemRewardsEnum
struct FItemRewardsEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemsStaticEnum
struct FItemsStaticEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemStack
struct FItemStack {
	struct FItemsStaticRowHandle Item; 
	int32_t Count; 
};

// ScriptStruct Icarus.ItemRecordAlterationData
struct FItemRecordAlterationData {
	struct FName Alteration; 
};

// ScriptStruct Icarus.ItemRecordStatData
struct FItemRecordStatData {
	struct FName Stat; 
	int32_t Value; 
};

// ScriptStruct Icarus.ItemRecordDynamicData
struct FItemRecordDynamicData {
	int32_t Type; 
	int32_t Value; 
};

// ScriptStruct Icarus.ItemTemplateEnum
struct FItemTemplateEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemTraitMask
struct FItemTraitMask : FIcarusTableRowBase {
	bool bMeshable; 
	bool bItemable; 
	bool bInteractable; 
	bool bHitable; 
	bool bEquippable; 
	bool bFocusable; 
	bool bHighlightable; 
	bool bActionable; 
	bool bBuildable; 
	bool bConsumable; 
	bool bUsable; 
	bool bCombustible; 
	bool bDeployable; 
	bool bArmour; 
	bool bBallistic; 
	bool bFillable; 
	bool bDurable; 
	bool bFloatable; 
	bool bRocketable; 
	bool bInventory; 
	bool bProcessing; 
	bool bResource; 
	bool bThermal; 
	bool bExperience; 
	bool bSlotable; 
	bool bDecayable; 
	bool bFlammable; 
	bool bTransmutable; 
	bool bGenerator; 
	bool bWeight; 
	bool bFarmable; 
	bool bInventoryContainer; 
	bool bLivingItem; 
};

// ScriptStruct Icarus.ItemTraitMasksEnum
struct FItemTraitMasksEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemTraitMasksRowHandle
struct FItemTraitMasksRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ItemWeightStatQueries
struct FItemWeightStatQueries : FIcarusTableRowBase {
	struct FStatsEnum WeightStatToApply; 
	struct FTagQueriesRowHandle ItemTagQuery; 
};

// ScriptStruct Icarus.ItemWeightStatQueriesEnum
struct FItemWeightStatQueriesEnum : FRowEnum {
};

// ScriptStruct Icarus.ItemWeightStatQueriesRowHandle
struct FItemWeightStatQueriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.KeybindContextsEnum
struct FKeybindContextsEnum : FRowEnum {
};

// ScriptStruct Icarus.KeybindContextsRowHandle
struct FKeybindContextsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.KeybindData
struct FKeybindData : FIcarusTableRowBase {
	struct FName ActionName; 
	bool bOverrideActionName; 
	struct FName ActionNameOverride; 
	struct FText DisplayName; 
	struct FKeybindContextsRowHandle BindContext; 
	enum class EInputContext InputContext; 
	bool bIsAxis; 
	enum class EKeybindVisibility Visibility; 
	struct FInputActionKeyMapping KeyboardActionMapping; 
	struct FInputAxisKeyMapping KeyboardAxisMapping; 
	struct FInputActionKeyMapping GamepadActionMapping; 
	struct FInputAxisKeyMapping GamepadAxisMapping; 
};

// ScriptStruct Icarus.KeybindContext
struct FKeybindContext : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct TArray<struct FKeybindContextsRowHandle> SharedWithContexts; 
};

// ScriptStruct Icarus.KeybindingsEnum
struct FKeybindingsEnum : FRowEnum {
};

// ScriptStruct Icarus.KeybindingsRowHandle
struct FKeybindingsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.KeyData
struct FKeyData : FIcarusTableRowBase {
	struct FKey Key; 
	struct FText DisplayNameOverride; 
};

// ScriptStruct Icarus.KeyIconData
struct FKeyIconData : FIcarusTableRowBase {
	struct TArray<struct FKey> Keys; 
	bool bHideText; 
	enum class EControllerIconSet IconSet; 
	struct UTexture2D* IconPress; 
	struct UTexture2D* IconHold; 
	struct FLinearColor IconTint; 
	struct FLinearColor TextColor; 
};

// ScriptStruct Icarus.KeyIconsEnum
struct FKeyIconsEnum : FRowEnum {
};

// ScriptStruct Icarus.KeyIconsRowHandle
struct FKeyIconsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.KeysEnum
struct FKeysEnum : FRowEnum {
};

// ScriptStruct Icarus.KeysRowHandle
struct FKeysRowHandle : FRowHandle {
};

// ScriptStruct Icarus.LandingPadRecord
struct FLandingPadRecord {
	int32_t LeveTimeBuilt; 
	struct FPlayerCharacterID PlayerID; 
};

// ScriptStruct Icarus.LanguagesData
struct FLanguagesData : FIcarusTableRowBase {
	bool bEnabled; 
	int32_t Coverage; 
};

// ScriptStruct Icarus.LanguagesEnum
struct FLanguagesEnum : FRowEnum {
};

// ScriptStruct Icarus.LanguagesRowHandle
struct FLanguagesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.LavaRiverFlowPointData
struct FLavaRiverFlowPointData {
	struct FVector2D Location; 
	struct FVector2D Extent; 
	float FlowSpeed; 
	float BaseToFlowing; 
};

// ScriptStruct Icarus.LevelSequencesData
struct FLevelSequencesData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UWorld> Level; 
	struct TMap<struct FName, struct ULevelSequence*> LevelSequences; 
};

// ScriptStruct Icarus.LevelSequencesEnum
struct FLevelSequencesEnum : FRowEnum {
};

// ScriptStruct Icarus.LevelSequencesRowHandle
struct FLevelSequencesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.LivingItemSlotState
struct FLivingItemSlotState {
	int32_t SlotIndex; 
	int32_t ChallengeProgress; 
	bool bIsActiveChallenge; 
	bool bSlotUnlocked; 
	struct FLivingItemUpgradeSlotData SlotData; 
	struct FLivingItemUpgradesRowHandle CurrentUpgrade; 
};

// ScriptStruct Icarus.LivingItemUpgradesRowHandle
struct FLivingItemUpgradesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.LivingItemUpgradeSlotData
struct FLivingItemUpgradeSlotData {
	struct FVector2D SlotPosition2D; 
	struct FVector2D PinPosition2D; 
	struct FVector2D PinBendPosition2D; 
	struct TArray<struct FLivingItemUpgradesRowHandle> AvailableUpgrades; 
	struct FChallengesRowHandle ChallengeToUnlock; 
	struct TArray<struct FMeshCustomisationData> DefaultSlotMeshes; 
};

// ScriptStruct Icarus.MeshCustomisationData
struct FMeshCustomisationData {
	struct FName SocketName; 
	struct TSoftObjectPtr<UStaticMesh> StaticMeshToSocket; 
	bool bHABPreviewOnly; 
};

// ScriptStruct Icarus.LivingItemData
struct FLivingItemData : FIcarusTableRowBase {
	struct TArray<struct FLivingItemUpgradeSlotData> UpgradeSlots; 
	struct FVector ItemPreviewOffset; 
	struct FRotator ItemPreviewRotation; 
	struct TSoftObjectPtr<USkeletalMesh> PreviewMeshOverride; 
	struct TSoftClassPtr<UObject> BehaviourOverride; 
};

// ScriptStruct Icarus.LivingItemEnum
struct FLivingItemEnum : FRowEnum {
};

// ScriptStruct Icarus.LivingItemShopItemData
struct FLivingItemShopItemData : FIcarusTableRowBase {
	struct FItemTemplateRowHandle ItemTemplate; 
	struct TArray<struct FWorkshopCost> Cost; 
	struct TSoftObjectPtr<UTexture2D> ItemImage; 
	struct TSoftObjectPtr<UTexture2D> ItemBackground; 
	struct TSoftObjectPtr<UTexture2D> ShopBackground; 
	struct TSoftObjectPtr<UTexture2D> BossIcon; 
	struct FItemsStaticRowHandle Biomass; 
	struct FDLCPackageDataRowHandle RequiredPackageToPurchase; 
	struct FAccountFlagsRowHandle RequiredAccountFlag; 
};

// ScriptStruct Icarus.LivingItemShopItemsEnum
struct FLivingItemShopItemsEnum : FRowEnum {
};

// ScriptStruct Icarus.LivingItemUpgradeData
struct FLivingItemUpgradeData : FIcarusTableRowBase {
	struct FAlterationsRowHandle AlterationToApply; 
	struct TArray<struct FWorkshopCost> UpgradeCost; 
	struct TArray<struct FMeshCustomisationData> MeshCustomisations; 
};

// ScriptStruct Icarus.LogCategoriesRowHandle
struct FLogCategoriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.IcarusLogCategory
struct FIcarusLogCategory : FIcarusTableRowBase {
	struct FText Name; 
	struct FText Description; 
};

// ScriptStruct Icarus.MapIconsData
struct FMapIconsData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> WidgetClass; 
	struct UTexture2D* MapIcon; 
	struct FColor Color; 
	struct FStatsEnum RequiredPlayerStatToShow; 
	struct FStatsEnum RequiredActorStatToShow; 
	bool RequireOwnershipToShow; 
	float ZOrder; 
	float ScaleFactor; 
	bool GetsRotation; 
	struct FVector2D BrushSize; 
	bool UpdateOnTick; 
	bool bShowNameOnHover; 
	struct FText HoverName; 
	bool bDisplayOnCompass; 
	int32_t MaxCompassDisplayDistance; 
	struct UUserWidget* CompassWidgetClass; 
};

// ScriptStruct Icarus.MapIconsEnum
struct FMapIconsEnum : FRowEnum {
};

// ScriptStruct Icarus.MapRow
struct FMapRow {
	struct TArray<enum class EMapTileRadarFlag> ColumnTiles; 
};

// ScriptStruct Icarus.RadarV3ScanData
struct FRadarV3ScanData {
	struct FVector Location; 
	float SizeInKM; 
	float Direction; 
	float ArcLengthInPercent; 
	float RandomOffset; 
	float Distance; 
	float Intensity; 
	int32_t UID; 
};

// ScriptStruct Icarus.MapManagerRecord
struct FMapManagerRecord {
	struct TMap<struct FIntPoint, int32_t> TileFlags; 
	struct TArray<struct FRadarV3ScanData> RadarV3Scans; 
};

// ScriptStruct Icarus.MapSearchArea
struct FMapSearchArea : FIcarusTableRowBase {
	struct TSoftObjectPtr<UTexture2D> Image; 
	struct FLinearColor Color; 
};

// ScriptStruct Icarus.MapSearchAreaEnum
struct FMapSearchAreaEnum : FRowEnum {
};

// ScriptStruct Icarus.MapSearchAreaRowHandle
struct FMapSearchAreaRowHandle : FRowHandle {
};

// ScriptStruct Icarus.FavoriteEntry
struct FFavoriteEntry {
};

// ScriptStruct Icarus.SessionQuery
struct FSessionQuery {
	enum class ESessionSortType SortType; 
	enum class ESessionSortDirection SortDirection; 
	struct FSessionFilters Filters; 
};

// ScriptStruct Icarus.SessionFilters
struct FSessionFilters {
	enum class ESessionFilterState Friends; 
	enum class ESessionFilterState Locked; 
	enum class ESessionFilterState Version; 
	struct FString SearchString; 
};

// ScriptStruct Icarus.MeshableData
struct FMeshableData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UStreamableRenderAsset> ItemMesh; 
	struct TSoftClassPtr<UObject> ItemActor; 
	struct TSoftObjectPtr<UStreamableRenderAsset> EquipHandMesh; 
	struct TSoftClassPtr<UObject> EquipHandActor; 
	struct TSoftObjectPtr<UStreamableRenderAsset> EquipBackMesh; 
	struct TSoftClassPtr<UObject> EquipBackActor; 
	struct TSoftObjectPtr<UStreamableRenderAsset> VehicleMesh; 
	struct TSoftClassPtr<UObject> VehicleActor; 
	struct TSoftClassPtr<UObject> DeployableActor; 
	struct TSoftObjectPtr<UStreamableRenderAsset> ExtraMesh; 
	struct TSoftClassPtr<UObject> ExtraActor; 
};

// ScriptStruct Icarus.MeshableEnum
struct FMeshableEnum : FRowEnum {
};

// ScriptStruct Icarus.MetaCurrency
struct FMetaCurrency : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	struct FColor Color; 
	struct FText Description; 
	struct FItemsStaticRowHandle ItemStaticData; 
	struct FString DecoratorText; 
	struct FString DecoratorImage; 
	bool bDisplayOnMainScreen; 
};

// ScriptStruct Icarus.MetaCurrencyEnum
struct FMetaCurrencyEnum : FRowEnum {
};

// ScriptStruct Icarus.MetaInventory
struct FMetaInventory {
	enum class EMetaInventoryID InventoryID; 
	struct TArray<struct FItemData> Items; 
};

// ScriptStruct Icarus.MetaResourceNodeInfo
struct FMetaResourceNodeInfo : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> ResourceBP; 
	struct FOreDepositRowHandle Resource; 
};

// ScriptStruct Icarus.OreDepositRowHandle
struct FOreDepositRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MetaResourceNodesEnum
struct FMetaResourceNodesEnum : FRowEnum {
};

// ScriptStruct Icarus.MetaResourceNodesRowHandle
struct FMetaResourceNodesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MetaSpawn
struct FMetaSpawn {
	struct FExoticSpawnEnum SpawnLocation; 
	int32_t MinMetaAmount; 
	int32_t MaxMetaAmount; 
};

// ScriptStruct Icarus.WorkshopItem
struct FWorkshopItem : FIcarusTableRowBase {
	struct FItemTemplateRowHandle Item; 
	struct TArray<struct FWorkshopCost> ResearchCost; 
	struct TArray<struct FWorkshopCost> ReplicationCost; 
	struct FTalentsRowHandle RequiredMission; 
};

// ScriptStruct Icarus.MissionNPCHeldItem
struct FMissionNPCHeldItem {
	struct TSoftObjectPtr<UStreamableRenderAsset> HeldItemMesh; 
	struct FName AttachSocketName; 
	struct FTransform RelativeTransformOffset; 
};

// ScriptStruct Icarus.MissionNPCData
struct FMissionNPCData : FIcarusTableRowBase {
	struct FHighlightableRowHandle Highlightable; 
	struct FDialogueSpeakerRowHandle Speaker; 
	struct TArray<struct FDialogueEntry> Dialogue; 
	struct FDialoguePoolRowHandle Fallback; 
};

// ScriptStruct Icarus.DialogueEntry
struct FDialogueEntry {
	struct FSessionFlagsEnum Flag; 
	struct FDialogueRowHandle Dialogue; 
};

// ScriptStruct Icarus.SessionFlagsEnum
struct FSessionFlagsEnum : FRowEnum {
};

// ScriptStruct Icarus.MissionNPCEnum
struct FMissionNPCEnum : FRowEnum {
};

// ScriptStruct Icarus.MissionNPCRowHandle
struct FMissionNPCRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MissionReport
struct FMissionReport {
	struct FProspectInfo ProspectInfo; 
	struct TArray<struct FMissionReportCurrency> Currency; 
	struct TArray<struct FFactionMissionsRowHandle> CompletedMissions; 
};

// ScriptStruct Icarus.MissionReportCurrency
struct FMissionReportCurrency {
	struct FMetaCurrencyEnum Currency; 
	int32_t Total; 
};

// ScriptStruct Icarus.MissionType
struct FMissionType : FIcarusTableRowBase {
	struct FText DisplayText; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
};

// ScriptStruct Icarus.MissionTypesEnum
struct FMissionTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.ModifierStateAudioData
struct FModifierStateAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> PlayerModifierAddedSound; 
	bool bReplayOnStack; 
	float CooldownTime; 
	struct TSoftObjectPtr<UFMODEvent> PlayerModifierLoopSound; 
	bool bApplyStackCountParameterToLoop; 
	struct TSoftObjectPtr<UFMODEvent> PlayerModifierRemovedSound; 
	bool bApplyExposedVocalisation; 
	int32_t ExposedVocalisationMinEffectiveness; 
	bool bApplyEffectivenessParameter; 
};

// ScriptStruct Icarus.ModifierStateAudioDataEnum
struct FModifierStateAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.AuraActor
struct FAuraActor {
	struct AActor* Actor; 
	int32_t ModifierUID; 
};

// ScriptStruct Icarus.ModifierStatesEnum
struct FModifierStatesEnum : FRowEnum {
};

// ScriptStruct Icarus.SavedMounts
struct FSavedMounts {
	struct TArray<struct FMountSaveData> SavedMounts; 
};

// ScriptStruct Icarus.MountsEnum
struct FMountsEnum : FRowEnum {
};

// ScriptStruct Icarus.MountsRowHandle
struct FMountsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MultiPointAudioNode
struct FMultiPointAudioNode {
	struct UObject* TargetObject; 
};

// ScriptStruct Icarus.MultiPointAudioNodeArray
struct FMultiPointAudioNodeArray {
	struct TArray<struct FMultiPointAudioNode> Nodes; 
	struct TArray<struct FMultiPointAudioNode> PendingNodes; 
};

// ScriptStruct Icarus.MusicLocationCondition
struct FMusicLocationCondition : FIcarusTableRowBase {
};

// ScriptStruct Icarus.MusicLocationConditionsEnum
struct FMusicLocationConditionsEnum : FRowEnum {
};

// ScriptStruct Icarus.MusicQuestCondition
struct FMusicQuestCondition : FIcarusTableRowBase {
};

// ScriptStruct Icarus.MusicQuestConditionsEnum
struct FMusicQuestConditionsEnum : FRowEnum {
};

// ScriptStruct Icarus.MusicQuestConditionsRowHandle
struct FMusicQuestConditionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MusicSubsystemConfig
struct FMusicSubsystemConfig {
	float MinWaitTimeBetweenTracks; 
	float MaxWaitTimeBetweenTracks; 
};

// ScriptStruct Icarus.MusicTrack
struct FMusicTrack : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> Event; 
	struct UCurveFloat* FadeInCurve; 
	struct UCurveFloat* FadeOutCurve; 
	struct UCurveFloat* PrevTrackOverrideFadeOutCurve; 
	bool bTrackCanBePaused; 
	char PlayerStateFlags; 
	struct TSet<struct FMusicLocationConditionsRowHandle> Locations; 
	char CombatFlags; 
	char TimeOfDayFlags; 
	char WeatherFlags; 
	char DropTimeFlags; 
	char DropStateFlags; 
	char GameplayEventFlags; 
	char DisasterFlags; 
	struct TSet<struct FMusicQuestConditionsRowHandle> Quests; 
	struct FMusicTrackStateGroupsRowHandle StateGroup; 
	float Tempo; 
	struct FName Key; 
	struct FName TimeSignature; 
};

// ScriptStruct Icarus.MusicTrackStateGroupsRowHandle
struct FMusicTrackStateGroupsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MusicTracksEnum
struct FMusicTracksEnum : FRowEnum {
};

// ScriptStruct Icarus.MusicTracksRowHandle
struct FMusicTracksRowHandle : FRowHandle {
};

// ScriptStruct Icarus.MusicTrackStateGroup
struct FMusicTrackStateGroup : FIcarusTableRowBase {
};

// ScriptStruct Icarus.MusicTrackStateGroupsEnum
struct FMusicTrackStateGroupsEnum : FRowEnum {
};

// ScriptStruct Icarus.NationalFlag
struct FNationalFlag : FIcarusTableRowBase {
	struct FItemableRowHandle Item; 
	struct TSoftObjectPtr<UTexture2D> FlagTexture; 
};

// ScriptStruct Icarus.NationalFlagsEnum
struct FNationalFlagsEnum : FRowEnum {
};

// ScriptStruct Icarus.NationalFlagsRowHandle
struct FNationalFlagsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.NetworkingStatus
struct FNetworkingStatus {
	struct FString CurrentHostPlayerName; 
	struct FString BackupHostPlayerName; 
	struct TArray<struct FString> PlayerNames; 
	struct TArray<int32_t> PlayerPing; 
	bool bSavedLocally; 
	float TimeBetweenStateSaves; 
	float TimeSinceDatabaseSave; 
	float TimeBetweenHeartbeats; 
	float TimeSinceHeartbeat; 
	float EndProspectUpdateTimeout; 
	int32_t UpdateProspectStateFailedCounter; 
	int32_t UpdateUnrealSessionFailedCounter; 
};

// ScriptStruct Icarus.NPCWeaponData
struct FNPCWeaponData : FIcarusTableRowBase {
	struct FText DisplayName; 
	bool bIsRangedWeapon; 
	struct TMap<struct FStatsEnum, int32_t> WeaponStats; 
	struct FAmmoTypesRowHandle AmmoType; 
	struct TSoftObjectPtr<UAnimMontage> AttackMontage; 
	struct TSoftObjectPtr<UAnimMontage> ReloadMontage; 
	struct FName ProjectileSpawnSocket; 
	struct TSoftObjectPtr<UFXSystemAsset> MuzzleFX; 
	struct FFirearmAudioDataRowHandle AudioData; 
};

// ScriptStruct Icarus.NPCWeaponEnum
struct FNPCWeaponEnum : FRowEnum {
};

// ScriptStruct Icarus.NPCWeaponRowHandle
struct FNPCWeaponRowHandle : FRowHandle {
};

// ScriptStruct Icarus.OptionalResourceFlowData
struct FOptionalResourceFlowData : FIcarusTableRowBase {
	struct FText DisplayedMessage; 
	struct FText ShortMessage; 
};

// ScriptStruct Icarus.OptionalResourceFlowsEnum
struct FOptionalResourceFlowsEnum : FRowEnum {
};

// ScriptStruct Icarus.OrchestrationEventDescription
struct FOrchestrationEventDescription : FIcarusTableRowBase {
	struct TSet<struct FOrchestrationStateFlagsRowHandle> RequiredFlags; 
	struct FOrchestrationStateFlagsRowHandle StateFlagToSetOnExecute; 
};

// ScriptStruct Icarus.OrchestrationStateFlagsRowHandle
struct FOrchestrationStateFlagsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.OrchestrationEventsEnum
struct FOrchestrationEventsEnum : FRowEnum {
};

// ScriptStruct Icarus.OrchestrationEventsRowHandle
struct FOrchestrationEventsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.OrchestrationStateFlag
struct FOrchestrationStateFlag : FIcarusTableRowBase {
	struct FString FlagDescriptor; 
};

// ScriptStruct Icarus.OrchestrationStateFlagsEnum
struct FOrchestrationStateFlagsEnum : FRowEnum {
};

// ScriptStruct Icarus.OreDeposit
struct FOreDeposit : FIcarusTableRowBase {
	struct FItemTemplateRowHandle ResourceType; 
	struct FHighlightableRowHandle HighlightableRow; 
	struct TSoftObjectPtr<UMaterialInterface> RVTNodeMaterial_CF; 
	struct TSoftObjectPtr<UMaterialInterface> RVTNodeMaterial_DC; 
	struct TSoftObjectPtr<UMaterialInterface> NodeMaterial_CF; 
	struct TSoftObjectPtr<UMaterialInterface> NodeMaterial_DC; 
	struct TSoftObjectPtr<UMaterialInterface> RockMaterial; 
	int32_t MinOreAvailable; 
	int32_t MaxOreAvailable; 
	int32_t MiningTimeSeconds; 
	bool ScannerBlacklist; 
};

// ScriptStruct Icarus.OreDepositEnum
struct FOreDepositEnum : FRowEnum {
};

// ScriptStruct Icarus.OutOfBoundsArray
struct FOutOfBoundsArray {
	struct TArray<struct AActor*> OverlappedVolumes; 
};

// ScriptStruct Icarus.Outpost
struct FOutpost : FIcarusTableRowBase {
	struct TSoftObjectPtr<UTexture2D> Icon; 
	struct FProspectListRowHandle ProspectListRowHandle; 
	struct FTalentsRowHandle RequiredMission; 
};

// ScriptStruct Icarus.OutpostsEnum
struct FOutpostsEnum : FRowEnum {
};

// ScriptStruct Icarus.OutpostsRowHandle
struct FOutpostsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.OxygenData
struct FOxygenData : FResourceNetworkData {
};

// ScriptStruct Icarus.OxygenEnum
struct FOxygenEnum : FRowEnum {
};

// ScriptStruct Icarus.OxygenRowHandle
struct FOxygenRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PaintingData
struct FPaintingData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UTexture2D> SmallPaintingImage; 
	struct TSoftObjectPtr<UTexture2D> LargePaintingImage; 
	bool bIsMonitor; 
	struct TSoftObjectPtr<UMaterialInstance> MonitorMaterial; 
};

// ScriptStruct Icarus.PaintingsEnum
struct FPaintingsEnum : FRowEnum {
};

// ScriptStruct Icarus.PaintingsRowHandle
struct FPaintingsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PerPlayerCheatData
struct FPerPlayerCheatData {
	bool bGodMode; 
	bool bUnlimitedResources; 
	bool bAllRecipesUnlocked; 
	bool bVerboseDamageLogging; 
};

// ScriptStruct Icarus.PlayerAccoladeCategory
struct FPlayerAccoladeCategory : FIcarusTableRowBase {
	struct FText DisplayName; 
};

// ScriptStruct Icarus.PlayerAccoladeCategoriesRowHandle
struct FPlayerAccoladeCategoriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PlayerAudioShelterRecord
struct FPlayerAudioShelterRecord {
};

// ScriptStruct Icarus.PlayerBestiaryData
struct FPlayerBestiaryData {
	struct TArray<struct FBestiaryGroupTracking> BestiaryTracking; 
	struct TArray<struct FFishTypeTracking> FishTracking; 
};

// ScriptStruct Icarus.BestiaryGroupTracking
struct FBestiaryGroupTracking {
	struct FBestiaryDataRowHandle BestiaryGroup; 
	int32_t NumPoints; 
};

// ScriptStruct Icarus.PlayerFootstepAudioData
struct FPlayerFootstepAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> FootstepSound; 
	struct TSoftObjectPtr<UFMODEvent> JumpUpSound; 
	struct TSoftObjectPtr<UFMODEvent> JumpLandSound; 
};

// ScriptStruct Icarus.PlayerFootstepAudioDataEnum
struct FPlayerFootstepAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.PlayerFootstepAudioDataRowHandle
struct FPlayerFootstepAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PlayerHistoryEntryRecord
struct FPlayerHistoryEntryRecord {
	struct FString UserID; 
	int32_t ChrSlot; 
	struct FString CachedCharacterName; 
};

// ScriptStruct Icarus.PlayerHistoryEntry
struct FPlayerHistoryEntry {
	struct FString UserID; 
	int32_t ChrSlot; 
	struct FString CachedCharacterName; 
};

// ScriptStruct Icarus.PlayerIdentityData
struct FPlayerIdentityData : FIcarusTableRowBase {
	struct FColor Color; 
	struct UTexture2D* Icon; 
};

// ScriptStruct Icarus.PlayerIdentityEnum
struct FPlayerIdentityEnum : FRowEnum {
};

// ScriptStruct Icarus.PlayerIdentityRowHandle
struct FPlayerIdentityRowHandle : FRowHandle {
};

// ScriptStruct Icarus.LoadoutRecords
struct FLoadoutRecords {
	struct TArray<struct FPlayerLoadoutData> Loadouts; 
};

// ScriptStruct Icarus.PlayerStartingStats
struct FPlayerStartingStats : FIcarusTableRowBase {
	struct TMap<struct FStatsEnum, int32_t> StatsGranted; 
	struct FSurvivalTriggersRowHandle SurvivalTriggers; 
};

// ScriptStruct Icarus.SurvivalTriggersRowHandle
struct FSurvivalTriggersRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PlayerTalentModifier
struct FPlayerTalentModifier : FIcarusTableRowBase {
	int32_t TalentPointModifier; 
	struct TArray<struct FFlagsMultiRowHandle> RequiredFlags; 
};

// ScriptStruct Icarus.PlayerTalentModifiersEnum
struct FPlayerTalentModifiersEnum : FRowEnum {
};

// ScriptStruct Icarus.PlayerTracker
struct FPlayerTracker : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct FText Description; 
	struct FPlayerTrackerCategoriesRowHandle TrackerCategory; 
	struct TArray<struct FGameplayTag> TagsToTrack; 
	enum class ETagRequirement TagRequirement; 
	struct FName SteamStatId; 
	enum class ETrackerSetType SetType; 
};

// ScriptStruct Icarus.PlayerTrackerCategoriesRowHandle
struct FPlayerTrackerCategoriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PlayerTrackerCategory
struct FPlayerTrackerCategory : FIcarusTableRowBase {
	struct FString CategoryDescriptor; 
};

// ScriptStruct Icarus.PlayerTrackerCategoriesEnum
struct FPlayerTrackerCategoriesEnum : FRowEnum {
};

// ScriptStruct Icarus.PlayerTrackersEnum
struct FPlayerTrackersEnum : FRowEnum {
};

// ScriptStruct Icarus.PrebuiltData
struct FPrebuiltData : FIcarusTableRowBase {
	struct FString Filename; 
};

// ScriptStruct Icarus.SerializedStructure
struct FSerializedStructure {
	struct TArray<struct FSerializedGrid> Grids; 
	struct TArray<struct FSerializedDeployable> Deployables; 
	struct TArray<struct FStateRecorderBlob> RecorderBlobs; 
};

// ScriptStruct Icarus.PrebuiltSpawnedActorRecord
struct FPrebuiltSpawnedActorRecord {
	struct FString RelevantActorClassName; 
	int32_t RelevantActorIcarusUID; 
};

// ScriptStruct Icarus.PrebuiltStructuresEnum
struct FPrebuiltStructuresEnum : FRowEnum {
};

// ScriptStruct Icarus.PrebuiltStructuresRowHandle
struct FPrebuiltStructuresRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PreviewCameraSettings
struct FPreviewCameraSettings : FIcarusTableRowBase {
	struct FTransform RelativeOffset; 
	float CameraFOV; 
};

// ScriptStruct Icarus.PreviewCameraSettingsEnum
struct FPreviewCameraSettingsEnum : FRowEnum {
};

// ScriptStruct Icarus.ProcessingData
struct FProcessingData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; 
	struct FRecipeSetsRowHandle DefaultRecipeSet; 
	bool RequiresEnergy; 
	bool bRequiresShelter; 
	bool AutoSelectRecipe; 
	bool ManualActivation; 
	int32_t QueueSize; 
	int32_t MaxMilliwattage; 
	bool EffectedByPlayerStats; 
	bool SendOutputDirectlyToPlayer; 
	bool AutoTurnOffDeviceWhileNotProcessing; 
};

// ScriptStruct Icarus.ProcessingEnum
struct FProcessingEnum : FRowEnum {
};

// ScriptStruct Icarus.ProcessorRecipesEnum
struct FProcessorRecipesEnum : FRowEnum {
};

// ScriptStruct Icarus.ProjectileTypesEnum
struct FProjectileTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.ProjectileTypesRowHandle
struct FProjectileTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.IcarusProspect
struct FIcarusProspect : FIcarusTableRowBase {
	struct FText DropName; 
	struct FString DesignNotes; 
	struct FText Description; 
	struct FText FlavourText; 
	struct UTexture2D* ProspectImage; 
	struct TMap<enum class EMissionDifficulty, struct FDifficultySetup> DifficultySetup; 
	enum class EIcarusProspectDifficulty Difficulty; 
	struct FDialogueRowHandle BriefingDialogue; 
	struct FDialogueRowHandle LandingDialogue; 
	struct FDialogueRowHandle MissionCompleteDialogue; 
	int32_t RequiredLevel; 
	enum class EProspectRequiredTech RequiredTech; 
	struct TArray<struct FCharacterFlagsEnum> RequiredCharacterFlags; 
	struct TArray<struct FCharacterFlagsEnum> ForbiddenCharacterFlags; 
	struct TArray<struct FFlagsMultiRowHandle> RequiredFlags; 
	bool bDisableWorldBosses; 
	struct TMap<struct FWorldBossesRowHandle, struct FVector2D> WorldBosses; 
	struct FProspectForecastRowHandle InitialForecast; 
	struct FProspectForecastRowHandle Forecast; 
	bool bDisabled; 
	struct FTerrainsRowHandle Terrain; 
	struct FFactionMissionsRowHandle FactionMission; 
	bool bIsPersistent; 
	bool bIsOpenWorld; 
	struct FIcarusTimeSpan TimeDuration; 
	int32_t StartingTime; 
	struct UCurveFloat* TimeScaleCurve; 
	struct TArray<struct FRulesetsRowHandle> AdditionalRulesets; 
	int32_t PlayerSpawnGroupIndex; 
	struct TArray<struct FMetaSpawn> MetaDepositSpawns; 
	struct FVector2D DefaultMetaResourceAmount; 
	int32_t NumMetaSpawnsMin; 
	int32_t NumMetaSpawnsMax; 
	struct TArray<struct FProspectStatsRowHandle> WorldStatList; 
	struct TSoftObjectPtr<UGameplayTexture> BoundsOverride; 
	struct FAISpawnConfigRowHandle AISpawnConfigOverride; 
	bool bAbandonOnProspectExpiry; 
	enum class EOnProspectAvailability OnProspectAvailability; 
};

// ScriptStruct Icarus.ProspectStatsRowHandle
struct FProspectStatsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.DifficultySetup
struct FDifficultySetup {
	struct TArray<struct FProspectStatsRowHandle> DifficultyStats; 
	struct FProspectForecastRowHandle Forecast; 
};

// ScriptStruct Icarus.ProspectForecast
struct FProspectForecast : FIcarusTableRowBase {
	struct FWeatherPoolsRowHandle WeatherPool; 
	struct TArray<struct FForecastPattern> Pattern; 
};

// ScriptStruct Icarus.ForecastPattern
struct FForecastPattern {
	int32_t Tier; 
	int32_t DurationMinutes; 
};

// ScriptStruct Icarus.WeatherPoolsRowHandle
struct FWeatherPoolsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ProspectForecastEnum
struct FProspectForecastEnum : FRowEnum {
};

// ScriptStruct Icarus.ProspectListEnum
struct FProspectListEnum : FRowEnum {
};

// ScriptStruct Icarus.ProspectCompletionCondition
struct FProspectCompletionCondition {
	struct FMetaCurrencyRowHandle MetaCurrency; 
	int32_t Amount; 
};

// ScriptStruct Icarus.ProspectSaveData
struct FProspectSaveData {
	struct FProspectInfo ProspectInfo; 
	struct FProspectBlob ProspectBlob; 
};

// ScriptStruct Icarus.ProspectSaveStateHeader
struct FProspectSaveStateHeader {
	int32_t Version; 
	enum class ELobbyPrivacy LobbyPrivacy; 
	struct FProspectInfo ProspectInfo; 
	struct FString ProspectMapName; 
	struct FDateTime LastSavedDateTime; 
	struct FString ProspectID; 
	struct FString ProspectDTKey; 
};

// ScriptStruct Icarus.ProspectSaveState
struct FProspectSaveState : FProspectSaveStateHeader {
	struct TArray<struct FStateRecorderBlob> StateRecorderBlobs; 
};

// ScriptStruct Icarus.ProspectStat
struct FProspectStat : FIcarusTableRowBase {
	struct TMap<struct FWorldStatsEnum, int32_t> WorldStats; 
};

// ScriptStruct Icarus.ProspectStatsEnum
struct FProspectStatsEnum : FRowEnum {
};

// ScriptStruct Icarus.ExistingOutpostData
struct FExistingOutpostData {
	struct FString OutpostName; 
	enum class EMissionDifficulty Difficulty; 
	int32_t SelectedDropIndex; 
};

// ScriptStruct Icarus.ProxyMeshRepState
struct FProxyMeshRepState {
	struct USceneComponent* Component; 
	char bVisible : 1; 
};

// ScriptStruct Icarus.ProxyMeshConditionContainerCrafting
struct FProxyMeshConditionContainerCrafting {
	enum class ECraftingContainerType Type; 
	struct TArray<struct FProcessorRecipesRowHandle> Recipes; 
	struct TArray<struct FRecipeSetsRowHandle> RecipeSets; 
	struct FTagQueriesRowHandle Query; 
	struct FComponentPicker Component; 
};

// ScriptStruct Icarus.ProxyMeshConditionContainerInventory
struct FProxyMeshConditionContainerInventory {
	enum class EInventoryContainerType Type; 
	struct TArray<struct FItemsStaticRowHandle> ValidItems; 
	struct FTagQueriesRowHandle Query; 
	struct TArray<struct FProxyMeshCondition> Conditions; 
};

// ScriptStruct Icarus.ProxyMeshCondition
struct FProxyMeshCondition {
	struct FComponentPicker Component; 
	int32_t MinQuantity; 
};

// ScriptStruct Icarus.SubQuest
struct FSubQuest {
	struct FQuestsEnum QuestEnum; 
	struct AQuest* Quest; 
};

// ScriptStruct Icarus.QuestsEnum
struct FQuestsEnum : FRowEnum {
};

// ScriptStruct Icarus.QuestDescription
struct FQuestDescription : FIcarusTableRowBase {
	struct FText Description; 
	int32_t Depth; 
	bool bComplete; 
	struct AQuest* Quest; 
};

// ScriptStruct Icarus.QuestVariable
struct FQuestVariable {
	struct FString VariableName; 
	bool bVariable; 
	float fVariable; 
	int32_t iVariable; 
};

// ScriptStruct Icarus.QuestCharacter
struct FQuestCharacter {
	struct FString ActorName; 
	struct AIcarusCharacter* RelevantActor; 
};

// ScriptStruct Icarus.QuestActor
struct FQuestActor {
	struct FString ActorName; 
	struct AIcarusActor* RelevantActor; 
};

// ScriptStruct Icarus.QuestModifierData
struct FQuestModifierData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> OverrideClass; 
};

// ScriptStruct Icarus.QuestEnemyModifier
struct FQuestEnemyModifier : FQuestModifierData {
	struct TArray<struct FAISetupRowHandle> PossibleEnemies; 
	int32_t MaxEnemies; 
	bool bSpawnAllInitially; 
	bool bRespawnEnemies; 
	float SpawnInterval; 
	float SpawnDistance; 
};

// ScriptStruct Icarus.QuestEnemyModifiersEnum
struct FQuestEnemyModifiersEnum : FRowEnum {
};

// ScriptStruct Icarus.QuestEnemyModifiersRowHandle
struct FQuestEnemyModifiersRowHandle : FRowHandle {
};

// ScriptStruct Icarus.QuestEvent
struct FQuestEvent : FIcarusTableRowBase {
};

// ScriptStruct Icarus.QuestEventsEnum
struct FQuestEventsEnum : FRowEnum {
};

// ScriptStruct Icarus.QuestEventsRowHandle
struct FQuestEventsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.QuestModifiersMultiRowHandle
struct FQuestModifiersMultiRowHandle : FMultiRowHandle {
	enum class EQuestModifiersTableType DataTableName; 
};

// ScriptStruct Icarus.QuestQueries
struct FQuestQueries : FIcarusTableRowBase {
	struct FGameplayTagQuery Query; 
};

// ScriptStruct Icarus.QuestQueriesEnum
struct FQuestQueriesEnum : FRowEnum {
};

// ScriptStruct Icarus.QuestSetup
struct FQuestSetup : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Class; 
	int32_t Variation; 
	struct FText Description; 
	struct FText InfoText; 
	struct FQuestQueriesRowHandle LocationQuery; 
	struct TMap<enum class EDialogueEvents, struct FDialogueRowHandle> DialogueEvents; 
	struct TMap<enum class EDialogueEvents, struct FDialoguePoolRowHandle> DialoguePoolEvents; 
	struct FMusicQuestConditionsRowHandle MusicCondition; 
	bool bPlayAudioCueOnCompletion; 
	struct TArray<struct FQuestModifiersMultiRowHandle> Modifiers; 
	bool bPreloadQuestClass; 
};

// ScriptStruct Icarus.QuestVocalisationModifier
struct FQuestVocalisationModifier : FQuestModifierData {
	struct FDialogueRowHandle InitialDialogue; 
	struct FDialogueRowHandle FinishDialogue; 
};

// ScriptStruct Icarus.QuestVocalisationModifiersEnum
struct FQuestVocalisationModifiersEnum : FRowEnum {
};

// ScriptStruct Icarus.QuestVocalisationModifiersRowHandle
struct FQuestVocalisationModifiersRowHandle : FRowHandle {
};

// ScriptStruct Icarus.QuestWeatherModifier
struct FQuestWeatherModifier : FQuestModifierData {
};

// ScriptStruct Icarus.QuestWeatherModifiersEnum
struct FQuestWeatherModifiersEnum : FRowEnum {
};

// ScriptStruct Icarus.QuestWeatherModifiersRowHandle
struct FQuestWeatherModifiersRowHandle : FRowHandle {
};

// ScriptStruct Icarus.QueueItem
struct FQueueItem {
};

// ScriptStruct Icarus.QuickMove
struct FQuickMove : FIcarusTableRowBase {
	struct FInventoryIDEnum Source; 
	struct TArray<struct FInventoryIDEnum> Destinations; 
};

// ScriptStruct Icarus.QuickMoveEnum
struct FQuickMoveEnum : FRowEnum {
};

// ScriptStruct Icarus.QuickMoveRowHandle
struct FQuickMoveRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RadialMenuData
struct FRadialMenuData : FIcarusTableRowBase {
	struct TArray<struct FRadialMenuOption> RadialOptions; 
};

// ScriptStruct Icarus.RadialMenuOption
struct FRadialMenuOption : FIcarusTableRowBase {
	struct FRadialOptionsRowHandle RadialOption; 
	struct FText DisplayText; 
	struct TSoftObjectPtr<UTexture2D> Image; 
};

// ScriptStruct Icarus.RadialOptionsRowHandle
struct FRadialOptionsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RadialOption
struct FRadialOption : FIcarusTableRowBase {
};

// ScriptStruct Icarus.RadialMenuDataEnum
struct FRadialMenuDataEnum : FRowEnum {
};

// ScriptStruct Icarus.RadialMenuDataRowHandle
struct FRadialMenuDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RadialOptionsEnum
struct FRadialOptionsEnum : FRowEnum {
};

// ScriptStruct Icarus.RadioactiveInstance
struct FRadioactiveInstance {
	struct AActor* Emitter; 
	float Distance; 
};

// ScriptStruct Icarus.RangedWeaponData
struct FRangedWeaponData : FIcarusTableRowBase {
	struct FVector2D HipAccuracy; 
	struct FVector2D AdsAccuracy; 
	struct UCurveFloat* SwayCurve_X; 
	struct UCurveFloat* SwayCurve_Y; 
	float AdsSwayMultiplier; 
	struct UMatineeCameraShake* WeaponFireShake; 
	float WeaponFireShakeAdsScale; 
	float WeaponFireShakeCrouchScale; 
	float WeaponReloadTime; 
	float HipFOVMultiplier; 
	float AdsFOVMultiplier; 
	float MinRequiredCharge; 
	float MinThrowCharge; 
	float ChargeSpeed; 
	struct UCurveFloat* LaunchForceCurve; 
	struct TArray<struct FItemsStaticRowHandle> ValidAmmoItems; 
	struct TMap<struct FStatsEnum, int32_t> Stats; 
};

// ScriptStruct Icarus.RangedWeaponDataEnum
struct FRangedWeaponDataEnum : FRowEnum {
};

// ScriptStruct Icarus.RCONCommandData
struct FRCONCommandData : FIcarusTableRowBase {
	struct FString ConsoleCommand; 
	struct FText Parameters; 
	struct FText Description; 
	bool bAdminOnly; 
	enum class ERCONCommandContext Context; 
	enum class ERCONCommandPlatformContext PlatformContext; 
};

// ScriptStruct Icarus.RCONCommandEnum
struct FRCONCommandEnum : FRowEnum {
};

// ScriptStruct Icarus.RCONCommandRowHandle
struct FRCONCommandRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RecipeSetsEnum
struct FRecipeSetsEnum : FRowEnum {
};

// ScriptStruct Icarus.RecoveryBeacon
struct FRecoveryBeacon : FIcarusTableRowBase {
	struct FText Display; 
	struct UTexture2D* MapIcon; 
	struct FColor Color; 
};

// ScriptStruct Icarus.RecoveryBeaconsEnum
struct FRecoveryBeaconsEnum : FRowEnum {
};

// ScriptStruct Icarus.RecoveryBeaconsRowHandle
struct FRecoveryBeaconsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RefinedOilData
struct FRefinedOilData : FResourceNetworkData {
};

// ScriptStruct Icarus.RefinedOilEnum
struct FRefinedOilEnum : FRowEnum {
};

// ScriptStruct Icarus.RefinedOilRowHandle
struct FRefinedOilRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RemoteUserSettingAndValue
struct FRemoteUserSettingAndValue {
	enum class ERemoteUserSetting ID; 
	int32_t Value; 
};

// ScriptStruct Icarus.RepairableItem
struct FRepairableItem {
	struct FItemData Item; 
	enum class ECanRepair Status; 
	int32_t HealthPercent; 
	struct TArray<struct FQueueItem> RepairMaterials; 
	bool bIsArmor; 
	enum class ERepairItemTier Tier; 
	struct UInventory* SourceInventory; 
	int32_t SourceInventorySlot; 
};

// ScriptStruct Icarus.RepGraphClassPoliciesEnum
struct FRepGraphClassPoliciesEnum : FRowEnum {
};

// ScriptStruct Icarus.RepGraphClassPoliciesRowHandle
struct FRepGraphClassPoliciesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RepGraphClassSettingsEnum
struct FRepGraphClassSettingsEnum : FRowEnum {
};

// ScriptStruct Icarus.RepGraphClassSettingsRowHandle
struct FRepGraphClassSettingsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RepGraphClassSettings
struct FRepGraphClassSettings : FIcarusTableRowBase {
	struct FString Description; 
	float DistancePriorityScale; 
	float StarvationPriorityScale; 
	float AccumulatedNetPriorityBias; 
	int32_t ReplicationPeriodFrame; 
	int32_t ActorChannelFrameTimeout; 
	float NetCullDistance; 
};

// ScriptStruct Icarus.RepGraphClassPolicy
struct FRepGraphClassPolicy : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Class; 
	struct FString Description; 
	enum class EClassRepPolicy Policy; 
	struct FRepGraphClassSettingsRowHandle Settings; 
};

// ScriptStruct Icarus.ResourceFlowSummary
struct FResourceFlowSummary {
	struct FIcarusResourcesEnum ResourceType; 
	float TotalProduceRate; 
	float TotalConsumeRate; 
	float TotalNetworkFlow; 
	struct TArray<struct FResourceFlow> Flows; 
	int32_t BrownOutStrength; 
	int32_t CurrentFlowRate; 
};

// ScriptStruct Icarus.ResourceFlow
struct FResourceFlow {
	struct TWeakObjectPtr<struct UObject> Source; 
	float FlowRate; 
	bool bConsume; 
};

// ScriptStruct Icarus.ResourceComponentData
struct FResourceComponentData : FIcarusTableRowBase {
	bool bHasEnergyConnection; 
	struct FEnergyRowHandle EnergyFlow; 
	bool bHasWaterConnection; 
	struct FWaterRowHandle WaterFlow; 
	bool bHasFuelConnection; 
	struct FFuelRowHandle FuelFlow; 
	bool bHasOxygenConnection; 
	struct FOxygenRowHandle OxygenFlow; 
	bool bHasCrudeOilConnection; 
	struct FCrudeOilRowHandle CrudeOilFlow; 
	bool bHasRefinedOilConnection; 
	struct FRefinedOilRowHandle RefinedOilFlow; 
};

// ScriptStruct Icarus.WaterRowHandle
struct FWaterRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ResourceEnum
struct FResourceEnum : FRowEnum {
};

// ScriptStruct Icarus.DeviceStorageDelta
struct FDeviceStorageDelta {
};

// ScriptStruct Icarus.StorageDeviceRow
struct FStorageDeviceRow {
	int32_t RowId; 
	struct FText DeviceName; 
	enum class EDeviceState DeviceState; 
	struct FText FlowRateText; 
	int32_t CurrentValue; 
	int32_t MaxValue; 
};

// ScriptStruct Icarus.DeviceDataRow
struct FDeviceDataRow {
	int32_t RowId; 
	struct FText DeviceName; 
	enum class EDeviceState DeviceState; 
	struct FText FlowRateText; 
	bool bIsInRate; 
};

// ScriptStruct Icarus.ConnectedNetworkData
struct FConnectedNetworkData {
	struct FIcarusResourcesEnum NetworkType; 
	int32_t NetworkId; 
};

// ScriptStruct Icarus.ResourceNodeAudioData
struct FResourceNodeAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> HarvestSound; 
	struct TSoftObjectPtr<UFMODEvent> NodeDepletedSound; 
};

// ScriptStruct Icarus.ResourceNodeAudioDataEnum
struct FResourceNodeAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.ResourceNodeAudioDataRowHandle
struct FResourceNodeAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RigUnit_SphereTraceCustom
struct FRigUnit_SphereTraceCustom : FRigUnit {
	struct FVector Start; 
	struct FVector End; 
	enum class ECollisionChannel Channel; 
	float Radius; 
	bool bHit; 
	struct FVector HitLocation; 
	struct FVector HitNormal; 
};

// ScriptStruct Icarus.RiverAudioData
struct FRiverAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> Sound; 
	bool bNeedsAudioContext; 
	bool bUsesLavaFlowPoints; 
};

// ScriptStruct Icarus.RiverAudioDataEnum
struct FRiverAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.RiverAudioDataRowHandle
struct FRiverAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RocketableData
struct FRocketableData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UTexture2D> Image; 
	struct TMap<struct FStatsEnum, int32_t> StatsGranted; 
};

// ScriptStruct Icarus.RocketableEnum
struct FRocketableEnum : FRowEnum {
};

// ScriptStruct Icarus.RocketSpawnStateRecord
struct FRocketSpawnStateRecord {
	struct FString AssignedPlayerID; 
	int32_t ChrSlot; 
};

// ScriptStruct Icarus.RTXGIVolumes
struct FRTXGIVolumes : FIcarusTableRowBase {
	struct FTransform BoxTransform; 
	bool EnableVolume; 
	float UpdatePriority; 
	int32_t LightingPriority; 
	float BlendingDistance; 
	float BlendingCutoffDistance; 
	bool RuntimeStatic; 
	struct FVector LastOrigin; 
	enum class EDDGIRaysPerProbe RaysPerProbe; 
	struct FIntVector ProbeCounts; 
	float ProbeMaxRayDistance; 
	float ProbeHistoryWeight; 
	struct FProbeRelocation ProbeRelocation; 
	bool ScrollProbesInfinitely; 
	float ScrollingVolumeZOffset; 
	bool VisualizeProbes; 
	struct FIntVector ProbeScrollOffset; 
	float probeDistanceExponent; 
	float probeIrradianceEncodingGamma; 
	float probeChangeThreshold; 
	float probeBrightnessThreshold; 
	enum class EDDGISkyLightType SkyLightTypeOnRayMiss; 
	float ViewBias; 
	float NormalBias; 
	float LightMultiplier; 
	float EmissiveMultiplier; 
	float IrradianceScalar; 
	struct FLightingChannels LightingChannels; 
};

// ScriptStruct Icarus.RTXGIVolumesEnum
struct FRTXGIVolumesEnum : FRowEnum {
};

// ScriptStruct Icarus.RTXGIVolumesRowHandle
struct FRTXGIVolumesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RulesetData
struct FRulesetData : FIcarusTableRowBase {
	struct URuleset* RulesetClass; 
	bool bEnabledByDefault; 
	bool bSpawnOnClient; 
};

// ScriptStruct Icarus.RulesetsEnum
struct FRulesetsEnum : FRowEnum {
};

// ScriptStruct Icarus.SaddleData
struct FSaddleData : FIcarusTableRowBase {
	struct FGameplayTag SaddleTag; 
	struct TArray<struct FMountsRowHandle> SupportedMount; 
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh; 
	struct TSoftObjectPtr<UMaterialInterface> SkeletalMeshMaterialOverride; 
	struct TSoftClassPtr<UObject> SaddleAnimBlueprint; 
	struct ASeatBase* SaddleBlueprint; 
	struct FName AttachSocket; 
	struct TSoftObjectPtr<UTexture2D> FurCullMask; 
	struct FSaddlesRowHandle PsudeoSaddles; 
	struct TArray<struct FName> PassengerSaddleSockets; 
	struct FStatsRowHandle RequiredStat; 
	struct TSoftObjectPtr<UFMODEvent> PersistentSound; 
	struct FName AudioSocket; 
};

// ScriptStruct Icarus.SaddlesRowHandle
struct FSaddlesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SaddlesEnum
struct FSaddlesEnum : FRowEnum {
};

// ScriptStruct Icarus.ScaledAISpawnWaveData
struct FScaledAISpawnWaveData {
	struct TArray<struct FScaledSpawnWaveUnit> SpawnedAIConfig; 
	struct FScalingRulesRowHandle SpawnCountScaling; 
	struct FScalingRulesRowHandle SpawnFrequencyScaling; 
	struct FScalingRulesRowHandle SpawnedAILevelScaling; 
	int32_t MaxSpawnedUnits; 
};

// ScriptStruct Icarus.ScalingRulesRowHandle
struct FScalingRulesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ScaledSpawnWaveUnit
struct FScaledSpawnWaveUnit {
	struct FAISetupRowHandle AISetup; 
	struct FEpicCreaturesRowHandle EpicCreature; 
	int32_t SpawnWeight; 
	struct FScalingRulesRowHandle SpawnWeightScalingRule; 
	int32_t BaseSpawnCount; 
	int32_t MaxSpawnCount; 
	struct FVector2D MinMaxSpawnLevel; 
	float SpawnDelay; 
};

// ScriptStruct Icarus.ScalingRuleData
struct FScalingRuleData : FIcarusTableRowBase {
	bool bScaleByNearbyPlayerCount; 
	struct FScalingValueMap NearbyPlayersScaling; 
	struct UCurveFloat* CustomNearbyPlayersCurve; 
	bool bScaleByTargetLevel; 
	struct FScalingValueMap TargetLevelScaling; 
	struct UCurveFloat* CustomTargetLevelCurve; 
	bool bScaleByProspectDifficulty; 
	struct FScalingValueMap ProspectDifficultyScaling; 
	struct UCurveFloat* CustomProspectDifficultyCurve; 
	bool bScaleByAverageNearbyPlayerLevel; 
	struct FScalingValueMap AverageNearbyPlayerLevelScaling; 
	struct UCurveFloat* CustomAverageNearbyPlayerLevelCurve; 
};

// ScriptStruct Icarus.ScalingValueMap
struct FScalingValueMap {
	int32_t InMinValue; 
	int32_t InMaxValue; 
	int32_t OutMinPercentScale; 
	int32_t OutMaxPercentScale; 
	bool bClampOutput; 
};

// ScriptStruct Icarus.ScalingRulesEnum
struct FScalingRulesEnum : FRowEnum {
};

// ScriptStruct Icarus.ScriptedEventData
struct FScriptedEventData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> EventClass; 
	struct FText EventName; 
};

// ScriptStruct Icarus.ScriptedEventsEnum
struct FScriptedEventsEnum : FRowEnum {
};

// ScriptStruct Icarus.SeedModification
struct FSeedModification : FIcarusTableRowBase {
	struct FTagQueriesRowHandle Query; 
	struct FStatsEnum StatRequirement; 
	struct FModifierStatesRowHandle Modifier; 
	int32_t EffectivenessIncrease; 
};

// ScriptStruct Icarus.SeedModificationsEnum
struct FSeedModificationsEnum : FRowEnum {
};

// ScriptStruct Icarus.SeedModificationsRowHandle
struct FSeedModificationsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SessionFlag
struct FSessionFlag : FIcarusTableRowBase {
};

// ScriptStruct Icarus.SessionFlagsRowHandle
struct FSessionFlagsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SettlementBuildingsEnum
struct FSettlementBuildingsEnum : FRowEnum {
};

// ScriptStruct Icarus.SettlementBuildingsRowHandle
struct FSettlementBuildingsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SettlementEventData
struct FSettlementEventData : FIcarusTableRowBase {
	struct FSettlementEventTypesRowHandle EventType; 
	struct FText DisplayName; 
	struct FText Description; 
	struct TArray<struct FSettlementEventOutcomeData> PossibleOutcomes; 
	int32_t MinSettlementLevel; 
	float Weight; 
	int32_t DurationDays; 
	float ProximityTriggerRange; 
	int32_t DefaultOutcomeIndex; 
	struct TArray<struct FModifier> ActiveModifiers; 
	bool bOverridesNPCActivity; 
	enum class ESettlementNPCActivity ActivityOverride; 
	struct FSettlementRaidsRowHandle RaidConfig; 
	bool bResolveAsRaidOnly; 
};

// ScriptStruct Icarus.SettlementEventTypesRowHandle
struct FSettlementEventTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SettlementRaid
struct FSettlementRaid : FIcarusTableRowBase {
	float RaidStrength; 
	float RaidStrengthPerLevel; 
	struct TArray<struct FSettlementRaidWave> RaidSpawnWaves; 
};

// ScriptStruct Icarus.SettlementRaidWave
struct FSettlementRaidWave {
	struct FScaledAISpawnWaveData WaveData; 
	float MinRaidStrengthBeforeSpawn; 
};

// ScriptStruct Icarus.SettlementBuildingData
struct FSettlementBuildingData : FIcarusTableRowBase {
	struct FText BuildingName; 
	struct FText BuildingDescription; 
	struct ASettlementBuilding* BuildingClass; 
	struct TSoftObjectPtr<UStaticMesh> Mesh; 
	struct TMap<struct FBaseStatsEnum, int32_t> BuildingStats; 
	struct FGameplayTagContainer BuildingTags; 
	struct FTalentsRowHandle RequiredTalent; 
	int32_t ConstructionTime; 
	enum class ESettlementBoundsBuildRule BoundaryBuildRule; 
	struct TArray<struct FCraftingInput> ItemConstructionCost; 
	struct TArray<struct FQueryInput> QueryItemConstructionCost; 
	struct TArray<struct FResourceItem> ResourceConstructionCost; 
	struct FExperienceEventsRowHandle ConstructionExperienceReward; 
	struct TArray<struct FSettlementNPCTaskTypesRowHandle> DefaultTasks; 
	struct TArray<struct FSettlementGenerationEntry> Generation; 
};

// ScriptStruct Icarus.SettlementGenerationEntry
struct FSettlementGenerationEntry {
	struct TArray<struct FSettlementGenerationOutput> Outputs; 
	struct FStatsEnum RateStat; 
	enum class ESettlementNPCActivity RequiredActivity; 
	int32_t OutputUnitsPerInput; 
	struct TArray<struct FCraftingInput> InputItems; 
	struct TArray<struct FResourceItem> InputResources; 
};

// ScriptStruct Icarus.SettlementGenerationOutput
struct FSettlementGenerationOutput {
	struct FItemsStaticRowHandle Item; 
	struct FIcarusResourcesEnum Resource; 
	int32_t Quantity; 
	float Chance; 
};

// ScriptStruct Icarus.SettlementEventTypeData
struct FSettlementEventTypeData : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct FText Description; 
};

// ScriptStruct Icarus.SettlementNPCTraitData
struct FSettlementNPCTraitData : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct FText Description; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	struct TMap<struct FStatsEnum, int32_t> StatsGranted; 
	float RollWeight; 
	struct FName ExclusiveGroup; 
	struct TArray<struct FSettlementNPCRolesRowHandle> AllowedRoles; 
};

// ScriptStruct Icarus.SettlementNPCRoleData
struct FSettlementNPCRoleData : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct TArray<struct FSettlementNPCScheduleEntry> DefaultSchedule; 
	struct TMap<enum class ESettlementNPCActivity, struct FSettlementNPCTaskTypesRowHandle> ActivityDefaultTasks; 
	struct FSettlementNPCClothingRowHandle ClothingOverride; 
	struct FAISetupRowHandle AISetup; 
};

// ScriptStruct Icarus.SettlementNPCClothingRowHandle
struct FSettlementNPCClothingRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SettlementNPCItemData
struct FSettlementNPCItemData : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; 
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh; 
	struct TSoftClassPtr<UObject> AnimBlueprint; 
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> MaterialOverrides; 
	struct TSoftObjectPtr<UAnimMontage> EquipMontage; 
	struct TSoftObjectPtr<UAnimMontage> UnequipMontage; 
	struct FName AttachSocket; 
	struct FTransform AttachmentOffset; 
	struct FNPCWeaponRowHandle WeaponConfig; 
};

// ScriptStruct Icarus.SettlementNPCClothingData
struct FSettlementNPCClothingData : FIcarusTableRowBase {
	struct TArray<struct FSettlementNPCClothingItem> Head; 
	struct TArray<struct FSettlementNPCClothingItem> Torso; 
	struct TArray<struct FSettlementNPCClothingItem> Arms; 
	struct TArray<struct FSettlementNPCClothingItem> Legs; 
	struct TArray<struct FSettlementNPCClothingItem> Feet; 
	struct TArray<struct FSettlementNPCClothingItem> Misc; 
};

// ScriptStruct Icarus.SettlementNPCClothingItem
struct FSettlementNPCClothingItem {
	struct TSoftObjectPtr<USkeletalMesh> Mesh; 
	struct TSoftClassPtr<UObject> AnimBP; 
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> MaterialOverrides; 
};

// ScriptStruct Icarus.SettlementNPCTaskTypeData
struct FSettlementNPCTaskTypeData : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct FText DisplayNameVerb; 
	struct TSoftObjectPtr<UTexture2D> TaskIcon; 
	bool bDisplayProgressWidgetForTask; 
	bool bRequiresTarget; 
	bool bRequiresSource; 
	struct TSoftObjectPtr<UBehaviorTree> Behaviour; 
	char Priority; 
	struct FExperienceEventsRowHandle ExperienceReward; 
	struct TArray<enum class ESettlementNPCActivity> SupportedActivities; 
	struct TArray<struct FSettlementNPCRolesRowHandle> WhitelistedNPCRoles; 
	struct FSettlementNPCSkillsRowHandle SkillCategory; 
};

// ScriptStruct Icarus.SettlementNPCSkillData
struct FSettlementNPCSkillData : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct FText Description; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	struct TMap<struct FBaseStatsEnum, struct UCurveFloat*> StatCurves; 
};

// ScriptStruct Icarus.SettlementEventsEnum
struct FSettlementEventsEnum : FRowEnum {
};

// ScriptStruct Icarus.SettlementEventTypesEnum
struct FSettlementEventTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.SettlementNPCClothingEnum
struct FSettlementNPCClothingEnum : FRowEnum {
};

// ScriptStruct Icarus.SettlementNPCItemsEnum
struct FSettlementNPCItemsEnum : FRowEnum {
};

// ScriptStruct Icarus.NPCBackgroundList
struct FNPCBackgroundList {
	struct TArray<struct FString> Backgrounds; 
};

// ScriptStruct Icarus.NPCNameList
struct FNPCNameList {
	struct TArray<struct FNPCNameEntry> FullNames; 
	struct TArray<struct FNPCNameEntry> FirstNames; 
	struct TArray<struct FNPCNameEntry> LastNames; 
};

// ScriptStruct Icarus.NPCNameEntry
struct FNPCNameEntry {
	struct FString Name; 
	enum class ENPCNameGender Gender; 
};

// ScriptStruct Icarus.SettlementNPCRolesEnum
struct FSettlementNPCRolesEnum : FRowEnum {
};

// ScriptStruct Icarus.SettlementNPCSkillsEnum
struct FSettlementNPCSkillsEnum : FRowEnum {
};

// ScriptStruct Icarus.SettlementNPCTaskTypesEnum
struct FSettlementNPCTaskTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.SettlementNPCTraitsEnum
struct FSettlementNPCTraitsEnum : FRowEnum {
};

// ScriptStruct Icarus.SettlementRaidsEnum
struct FSettlementRaidsEnum : FRowEnum {
};

// ScriptStruct Icarus.SettlementTalentRecord
struct FSettlementTalentRecord {
	struct FString RowName; 
	int32_t Rank; 
};

// ScriptStruct Icarus.SettlementTimedModifierRecord
struct FSettlementTimedModifierRecord {
	struct FName ModifierRow; 
	int32_t RemovalDay; 
};

// ScriptStruct Icarus.SettlementVisitorRecord
struct FSettlementVisitorRecord {
	struct FSettlementNPCRecord NPC; 
	int32_t ArrivalDay; 
};

// ScriptStruct Icarus.SettlementNPCRecord
struct FSettlementNPCRecord {
	struct FGuid NpcId; 
	struct FString DisplayName; 
	char Gender; 
	struct FName RoleRow; 
	struct FName HeldItemRow; 
	int32_t AssignedBuildingId; 
	int32_t PlayerAssignedBuildingId; 
	int32_t DaysInSettlement; 
	struct FGuid ActiveTaskId; 
	struct FSettlementNPCSurvivalRecord SurvivalValues; 
	int32_t LowMoodDays; 
	float SleepMinutesToday; 
	enum class ESettlementNPCAilment Ailment; 
	int32_t AilmentSeverity; 
	int32_t IncapacitatedDays; 
	struct TArray<struct FSettlementNPCScheduleEntryRecord> DailySchedule; 
	struct FName CosmeticVariantTable; 
	struct FName CosmeticVariantRow; 
	int32_t Seed; 
	struct TArray<struct FName> TraitRows; 
	struct TArray<struct FSettlementNPCSkillRecord> Skills; 
};

// ScriptStruct Icarus.SettlementNPCSkillRecord
struct FSettlementNPCSkillRecord {
	struct FName SkillRow; 
	float XP; 
	float PassionMultiplier; 
};

// ScriptStruct Icarus.SettlementNPCScheduleEntryRecord
struct FSettlementNPCScheduleEntryRecord {
	enum class ESettlementNPCActivity Activity; 
	int32_t StartHour; 
	int32_t EndHour; 
};

// ScriptStruct Icarus.SettlementNPCSurvivalRecord
struct FSettlementNPCSurvivalRecord {
	int32_t Hunger; 
	int32_t Water; 
	int32_t Oxygen; 
	int32_t Rest; 
	int32_t Mood; 
};

// ScriptStruct Icarus.SettlementTaskRecord
struct FSettlementTaskRecord {
	struct FGuid TaskId; 
	struct FName TaskTypeRow; 
	float Progress; 
	char Priority; 
	struct FGuid AssignedNpcId; 
	int32_t TargetUID; 
	struct FString TargetClassName; 
	int32_t SourceUID; 
	struct FString SourceClassName; 
};

// ScriptStruct Icarus.SettlementWallConfig
struct FSettlementWallConfig {
	float SegmentSpacing; 
	float ExtensionDistance; 
	float RadialVariation; 
	float VariationFrequency; 
	float VariationSeed; 
	bool bIncludeBuildingBounds; 
};

// ScriptStruct Icarus.SlotableData
struct FSlotableData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; 
	struct TArray<struct FSocketStringIDQuery> StringIDQueries; 
};

// ScriptStruct Icarus.SocketStringIDQuery
struct FSocketStringIDQuery {
	struct FString SocketStringID; 
	struct FVector SlotVisualizerScale; 
	struct TSoftObjectPtr<UStaticMesh> SlotVisualizerMesh; 
	float AmountOfPhysicsTime; 
	struct FTagQueriesRowHandle SlotQuery; 
};

// ScriptStruct Icarus.SlotWrapper
struct FSlotWrapper {
	struct FVector SocketWorldLocation; 
	struct FRotator SocketRotation; 
	struct FVector SocketScale; 
	struct FName SocketName; 
	struct AIcarusItem* HeldItem; 
	int32_t SlotableInventoryLocation; 
	struct UStaticMeshComponent* SocketVisualizer; 
	struct TSoftObjectPtr<UStaticMesh> SlotVisualizerMesh; 
	float AmountOfPhysicsTime; 
	struct FSocketStringIDQuery Query; 
};

// ScriptStruct Icarus.SlotableEnum
struct FSlotableEnum : FRowEnum {
};

// ScriptStruct Icarus.SortTypePriorityEnum
struct FSortTypePriorityEnum : FRowEnum {
};

// ScriptStruct Icarus.SortTypePriorityRowHandle
struct FSortTypePriorityRowHandle : FRowHandle {
};

// ScriptStruct Icarus.RecordedSplineActorStruct
struct FRecordedSplineActorStruct {
	struct TMap<int32_t, struct FRecordedSplineIndexStructArray> ConnectionMap; 
	struct TArray<int32_t> StartAtActorIDs; 
	struct TArray<int32_t> EndAtActorIDs; 
	int32_t SplineTypeEnum; 
	int32_t UniqueSplineID; 
	struct TArray<struct FRecordedSplinePoint> SplinePoints; 
};

// ScriptStruct Icarus.RecordedSplinePoint
struct FRecordedSplinePoint {
	struct FVector Location; 
	bool HasNode; 
	struct FTransform NodeTransform; 
	enum class ESplinePointType PointType; 
};

// ScriptStruct Icarus.RecordedSplineIndexStructArray
struct FRecordedSplineIndexStructArray {
	struct TArray<struct FRecordedSplineIndexStruct> IndexArray; 
};

// ScriptStruct Icarus.RecordedSplineIndexStruct
struct FRecordedSplineIndexStruct {
	int32_t SplineActorID; 
	int32_t SplineIndex; 
};

// ScriptStruct Icarus.StaminaActionCostsEnum
struct FStaminaActionCostsEnum : FRowEnum {
};

// ScriptStruct Icarus.StaminaCost
struct FStaminaCost : FIcarusTableRowBase {
	int32_t BeginActionCost; 
	int32_t EndActionCost; 
	int32_t PerSecondCost; 
	struct FVirtualStatsEnum EffectingStat; 
	bool bCanPerformActionWithInsufficientStamina; 
};

// ScriptStruct Icarus.StasisBagData
struct FStasisBagData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> ActorInput; 
	struct FItemTemplateRowHandle ItemOutput; 
};

// ScriptStruct Icarus.StasisBagEnum
struct FStasisBagEnum : FRowEnum {
};

// ScriptStruct Icarus.StasisBagRowHandle
struct FStasisBagRowHandle : FRowHandle {
};

// ScriptStruct Icarus.StatAfflictions
struct FStatAfflictions : FIcarusTableRowBase {
	struct FStatsEnum AfflictionStat; 
	struct FStatsEnum CriticalHitAfflictionStat; 
	struct FStatsEnum ResistanceStat; 
	int32_t DurationInSeconds; 
	struct FStatsEnum StatBasedDuration; 
	struct FModifierStatesRowHandle Modifier; 
	struct FStatsEnum LookupStat; 
	bool bApplyToAttacker; 
	bool bRequiresDamage; 
	bool bTreatStatAsBoolean; 
};

// ScriptStruct Icarus.StatAfflictionsEnum
struct FStatAfflictionsEnum : FRowEnum {
};

// ScriptStruct Icarus.StatCategory
struct FStatCategory : FIcarusTableRowBase {
	struct FText Title; 
};

// ScriptStruct Icarus.StatComparisonResult
struct FStatComparisonResult {
	struct FStatsRowHandle Stat; 
	int32_t OldValue; 
	int32_t NewValue; 
	bool bValueAdded; 
	bool bValueRemoved; 
};

// ScriptStruct Icarus.StatComparison
struct FStatComparison {
	struct FStatsEnum Stat; 
	enum class EComparisonType ComparisonType; 
	int32_t Value; 
};

// ScriptStruct Icarus.StatGameplayTag
struct FStatGameplayTag : FIcarusTableRowBase {
	struct FStatsEnum Stat; 
	struct FGameplayTag GameplayTag; 
};

// ScriptStruct Icarus.StatGameplayTagsEnum
struct FStatGameplayTagsEnum : FRowEnum {
};

// ScriptStruct Icarus.StatGameplayTagsRowHandle
struct FStatGameplayTagsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.Statistic
struct FStatistic : FIcarusTableRowBase {
	struct FText DisplayName; 
};

// ScriptStruct Icarus.StatisticsEnum
struct FStatisticsEnum : FRowEnum {
};

// ScriptStruct Icarus.StatisticsRowHandle
struct FStatisticsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PlayerStatistics
struct FPlayerStatistics {
	struct TMap<struct FStatisticsRowHandle, int32_t> StatisticsMap; 
};

// ScriptStruct Icarus.StatCollection
struct FStatCollection {
	struct TArray<struct FIcarusStatReplicated> Stats; 
};

// ScriptStruct Icarus.BarSegment
struct FBarSegment {
	struct TSoftObjectPtr<UTexture2D> Icon; 
	int32_t SegmentSize; 
};

// ScriptStruct Icarus.StomachContentSaveData
struct FStomachContentSaveData {
	struct FName FoodRowName; 
	struct FName ModifierName; 
};

// ScriptStruct Icarus.StomachContent
struct FStomachContent {
	struct FItemsStaticRowHandle Food; 
	int32_t ModifierID; 
	struct FName CachedModifierName; 
};

// ScriptStruct Icarus.SurfaceAudioReflectionData
struct FSurfaceAudioReflectionData {
	float ReflectionMultiplier; 
	float LowFrequencies; 
	float HighFrequencies; 
};

// ScriptStruct Icarus.SurfacesData
struct FSurfacesData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UPhysicalMaterial> PhysicalMaterial; 
	enum class EPhysicalSurface SurfaceType; 
	struct TSoftObjectPtr<UParticleSystem> ParticleSystem; 
	struct UNiagaraSystem* NiagaraSystem; 
	struct FPlayerFootstepAudioDataRowHandle PlayerFootstepAudioData; 
	enum class ESurfaceFMODParam FMODParam; 
	struct FSurfaceAudioReflectionData AudioReflectionData; 
	float AIPerceptionVolumeMultiplier; 
};

// ScriptStruct Icarus.SurfacesEnum
struct FSurfacesEnum : FRowEnum {
};

// ScriptStruct Icarus.SurfacesRowHandle
struct FSurfacesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.SurvivalTriggers
struct FSurvivalTriggers : FIcarusTableRowBase {
	struct TArray<struct FModifierTrigger> Food; 
	struct TArray<struct FModifierTrigger> Water; 
	struct TArray<struct FModifierTrigger> Oxygen; 
	struct TArray<struct FModifierTrigger> Radiation; 
	struct FTemperatureTrigger Cold; 
	struct FTemperatureTrigger Heat; 
	struct FModifierStatesRowHandle Weight; 
};

// ScriptStruct Icarus.TemperatureTrigger
struct FTemperatureTrigger {
	struct FModifierStatesRowHandle Modifier; 
	struct FTagQueriesRowHandle Query; 
};

// ScriptStruct Icarus.ModifierTrigger
struct FModifierTrigger {
	struct FModifierStatesRowHandle Modifier; 
	float PercentTrigger; 
};

// ScriptStruct Icarus.SurvivalTriggersEnum
struct FSurvivalTriggersEnum : FRowEnum {
};

// ScriptStruct Icarus.TagQueries
struct FTagQueries : FIcarusTableRowBase {
	struct FGameplayTagQuery Query; 
	struct FText DisplayName; 
};

// ScriptStruct Icarus.TagQueriesEnum
struct FTagQueriesEnum : FRowEnum {
};

// ScriptStruct Icarus.Talent
struct FTalent : FIcarusTableRowBase {
	enum class ETalentNodeType TalentType; 
	struct FText DisplayName; 
	struct FText Description; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	struct FRowHandle ExtraData; 
	struct FTalentTreesRowHandle TalentTree; 
	struct FVector2D position; 
	struct FVector2D Size; 
	struct TArray<struct FTalentReward> Rewards; 
	struct TArray<struct FTalentsRowHandle> RequiredTalents; 
	struct TArray<struct FFlagsMultiRowHandle> RequiredFlags; 
	struct TArray<struct FFlagsMultiRowHandle> ForbiddenFlags; 
	struct FTalentRanksRowHandle RequiredRank; 
	int32_t RequiredLevel; 
	bool bDefaultUnlocked; 
	enum class ELineDrawMethod DrawMethodOverride; 
};

// ScriptStruct Icarus.TalentRanksRowHandle
struct FTalentRanksRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TalentReward
struct FTalentReward {
	struct TMap<struct FBaseStatsEnum, int32_t> GrantedStats; 
	struct TArray<struct FCharacterFlagsRowHandle> GrantedFlags; 
};

// ScriptStruct Icarus.TalentArchetype
struct FTalentArchetype : FIcarusTableRowBase {
	struct FTalentModelsRowHandle Model; 
	struct FText DisplayName; 
	struct TSoftObjectPtr<UTexture2D> BackgroundTexture; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	int32_t RequiredLevel; 
};

// ScriptStruct Icarus.TalentModelsRowHandle
struct FTalentModelsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TalentArchetypesEnum
struct FTalentArchetypesEnum : FRowEnum {
};

// ScriptStruct Icarus.TalentModel
struct FTalentModel : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> ModelClass; 
};

// ScriptStruct Icarus.TalentModelsEnum
struct FTalentModelsEnum : FRowEnum {
};

// ScriptStruct Icarus.TalentModelView
struct FTalentModelView : FIcarusTableRowBase {
	struct FTalentViewsRowHandle ViewData; 
	struct FTalentModelsRowHandle ModelData; 
};

// ScriptStruct Icarus.TalentViewsRowHandle
struct FTalentViewsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TalentModelViewsEnum
struct FTalentModelViewsEnum : FRowEnum {
};

// ScriptStruct Icarus.TalentModelViewsRowHandle
struct FTalentModelViewsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TalentRank
struct FTalentRank : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	int32_t Investment; 
	struct FTalentRanksRowHandle NextRank; 
};

// ScriptStruct Icarus.TalentRanksEnum
struct FTalentRanksEnum : FRowEnum {
};

// ScriptStruct Icarus.TalentsEnum
struct FTalentsEnum : FRowEnum {
};

// ScriptStruct Icarus.TalentTree
struct FTalentTree : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct TSoftObjectPtr<UTexture2D> BackgroundTexture; 
	struct TSoftObjectPtr<UTexture2D> Icon; 
	struct FTalentArchetypesRowHandle Archetype; 
	struct FTalentRanksRowHandle FirstRank; 
	int32_t RequiredLevel; 
};

// ScriptStruct Icarus.TalentTreesEnum
struct FTalentTreesEnum : FRowEnum {
};

// ScriptStruct Icarus.TalentView
struct FTalentView : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> ViewClass; 
	struct TSoftClassPtr<UObject> TalentClass; 
	struct TSoftClassPtr<UObject> TooltipClass; 
	int32_t TooltipPoolSize; 
	struct FSlateBrush PanningBrush; 
	enum class EPanningDirection PanningDirection; 
	struct FVector2D InitialPosition; 
	int32_t OverscrollAmount; 
	struct FMargin TreePadding; 
	struct TArray<float> ZoomLevels; 
	int32_t InitialZoomLevel; 
	enum class ELineDrawMethod LineMethod; 
	float LineThickness; 
	struct FScrollBarStyle ScrollBarStyle; 
	struct FVector2D ScrollBarThickness; 
	bool bHideScrollBar; 
	struct FTalentHoverConfig Locked; 
	struct FTalentHoverConfig Available; 
	struct FTalentHoverConfig Unlocked; 
	struct FTalentHoverConfig Completed; 
};

// ScriptStruct Icarus.TalentHoverConfig
struct FTalentHoverConfig {
	struct FSlateColor NormalTextColor; 
	struct FSlateColor HoveredTextColor; 
	struct FSlateColor PressedTextColor; 
	struct FSlateColor DisabledTextColor; 
	struct FSlateColor NormalIconColor; 
	struct FSlateColor HoveredIconColor; 
	struct FSlateColor PressedIconColor; 
	struct FSlateColor DisabledIconColor; 
	struct FButtonStyle ButtonStyle; 
	struct FLinearColor LineColor; 
	struct FSlateBrush NormalCountBrush; 
	struct FSlateBrush HoveredCountBrush; 
	struct FSlateBrush PressedCountBrush; 
};

// ScriptStruct Icarus.TalentViewsEnum
struct FTalentViewsEnum : FRowEnum {
};

// ScriptStruct Icarus.TamedCreatureModifier
struct FTamedCreatureModifier : FIcarusTableRowBase {
	struct FStatsEnum StatRequirement; 
	struct FStatsEnum GrantedStat; 
	enum class ETamedCreatureType Effects; 
};

// ScriptStruct Icarus.TamedCreatureModifiersEnum
struct FTamedCreatureModifiersEnum : FRowEnum {
};

// ScriptStruct Icarus.TamedCreatureModifiersRowHandle
struct FTamedCreatureModifiersRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TamesEnum
struct FTamesEnum : FRowEnum {
};

// ScriptStruct Icarus.TamesRowHandle
struct FTamesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TargetRangeScore
struct FTargetRangeScore {
	struct FString ID; 
	int32_t Score; 
	struct FString Name; 
};

// ScriptStruct Icarus.HighScoreRecord
struct FHighScoreRecord {
	struct FString PlayerID; 
	int32_t Score; 
	struct FString PlayerName; 
};

// ScriptStruct Icarus.TechTreeReference
struct FTechTreeReference {
	struct UPanelWidget* Panel; 
	struct FName WidgetName; 
};

// ScriptStruct Icarus.TeleportInfo
struct FTeleportInfo {
	struct FGroupedInstancedMapDataRowHandle MapSet; 
	struct TSoftObjectPtr<UWorld> DestLevel; 
	struct FBox DestLevelBounds; 
	struct FTransform DestLocation; 
	int32_t SubCaveID; 
	int32_t EntranceID; 
	struct TSoftObjectPtr<UWorld> SourceLevel; 
};

// ScriptStruct Icarus.RegisteredTeleporters
struct FRegisteredTeleporters {
	struct TArray<struct UTeleportComponent*> Components; 
	struct TArray<struct ABaseLevelTeleport*> Caves; 
};

// ScriptStruct Icarus.LoadedLevelInfo
struct FLoadedLevelInfo {
	struct ULevelStreamingDynamic* LoadedDynamicLevel; 
	struct TArray<struct AIcarusPlayerCharacter*> Players; 
	struct TWeakObjectPtr<struct UTeleportComponent> Requestor; 
	int32_t PickedSlot; 
	struct FVector LocationToLoadLevel; 
};

// ScriptStruct Icarus.TerrainsEnum
struct FTerrainsEnum : FRowEnum {
};

// ScriptStruct Icarus.TerrainZoneAudioData
struct FTerrainZoneAudioData : FIcarusTableRowBase {
	struct FColor Color; 
	enum class EGlobalEnvironmentTerrainZoneFMODParam FMODParam; 
};

// ScriptStruct Icarus.TerrainZoneAudioDataEnum
struct FTerrainZoneAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.TerrainZoneAudioDataRowHandle
struct FTerrainZoneAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ThermalData
struct FThermalData : FIcarusTableRowBase {
	int32_t InnerRadius; 
	int32_t OuterRadius; 
	float EffectFalloff; 
	int32_t TemperatureChange; 
	bool bCanBeObstructed; 
	struct FVector OcclusionTraceOffset; 
	struct FVector EffectOriginOffset; 
	bool bStartsEnabled; 
	struct UNavAreaBase* FireNavigationModifierClass; 
	float FireNavigationModifierRadius; 
};

// ScriptStruct Icarus.ThermalEnum
struct FThermalEnum : FRowEnum {
};

// ScriptStruct Icarus.ThreatAudioResult
struct FThreatAudioResult {
	int32_t ThreatLevel; 
	enum class EMusicConditionCombatState MusicConditionOverride; 
};

// ScriptStruct Icarus.TimelineRanks
struct FTimelineRanks : FIcarusTableRowBase {
	struct FText TitleText; 
	struct FText ToolTipText; 
	struct TSoftObjectPtr<UTexture2D> Image; 
};

// ScriptStruct Icarus.TimelineRanksEnum
struct FTimelineRanksEnum : FRowEnum {
};

// ScriptStruct Icarus.TimeOfDay
struct FTimeOfDay : FIcarusTableRowBase {
	int32_t StartingHour; 
	int32_t EndingHour; 
};

// ScriptStruct Icarus.TimeOfDayEnum
struct FTimeOfDayEnum : FRowEnum {
};

// ScriptStruct Icarus.TimeOfDayRowHandle
struct FTimeOfDayRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ToolDamage
struct FToolDamage : FIcarusTableRowBase {
	int32_t Melee_Damage; 
	int32_t DamageVariationPercentage; 
	int32_t Felling_Damage; 
	float Felling_Efficiency; 
	int32_t Mining_Radius; 
	float Mining_Efficiency; 
	float Skinning_Efficiency; 
	float Reaping_Efficiency; 
	int32_t Shattering_Damage; 
	float Shattering_Efficiency; 
};

// ScriptStruct Icarus.ToolDamageEnum
struct FToolDamageEnum : FRowEnum {
};

// ScriptStruct Icarus.ToolTypesEnum
struct FToolTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.ToolTypesRowHandle
struct FToolTypesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TransmutableData
struct FTransmutableData : FIcarusTableRowBase {
	int32_t UnitsProvided; 
	struct FItemTemplateRowHandle ByProductItem; 
	struct FText DescriptionText; 
};

// ScriptStruct Icarus.TransmutableEnum
struct FTransmutableEnum : FRowEnum {
};

// ScriptStruct Icarus.TreeAudioData
struct FTreeAudioData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> DetachTrunkSound; 
	struct TSoftObjectPtr<UFMODEvent> DetachBranchSound; 
	struct TSoftObjectPtr<UFMODEvent> DetachLeafSound; 
	struct TSoftObjectPtr<UFMODEvent> InitialBreakTopSound; 
	struct TSoftObjectPtr<UFMODEvent> InitialBreakTrunkSound; 
	struct TSoftObjectPtr<UFMODEvent> FallSound; 
	struct TSoftObjectPtr<UFMODEvent> TrunkLandSound; 
	bool bTrunkLandSoundUsesSurfaceParameters; 
	struct TSoftObjectPtr<UFMODEvent> HitSound; 
	struct TSoftObjectPtr<UFMODEvent> HitBuildingSound; 
	struct TSoftObjectPtr<UFMODEvent> InstantFellSound; 
};

// ScriptStruct Icarus.TreeAudioDataEnum
struct FTreeAudioDataEnum : FRowEnum {
};

// ScriptStruct Icarus.TreeAudioDataRowHandle
struct FTreeAudioDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.TreeRuntimeConstructArguments
struct FTreeRuntimeConstructArguments {
	struct ATreePrefab* TreePrefabClass; 
	struct FName RootName; 
	struct TArray<int32_t> TreePrimitivesMask; 
	bool bIsPhysicsDynamic; 
	struct UStaticMesh* ProxyMesh; 
	struct ATreeBase* InstigatorTree; 
};

// ScriptStruct Icarus.TreeRuntimeCreateArguments
struct FTreeRuntimeCreateArguments {
	struct AActor* Owner; 
	struct FTransform Transform; 
	struct FTreeRuntimeConstructArguments ConstructArgs; 
};

// ScriptStruct Icarus.TreePrimitivePersistentData
struct FTreePrimitivePersistentData {
	float AccumulatedDamage; 
};

// ScriptStruct Icarus.TreePrimitiveReplacementDescription
struct FTreePrimitiveReplacementDescription {
	enum class ETreePrimitiveDetachContext DetachContext; 
	enum class ETreePrimitiveItemReplaceMethod ReplaceMethod; 
	struct FItemRewardsRowHandle ReplaceRewardsRowHandle; 
};

// ScriptStruct Icarus.TreePrimitiveDetachContext
struct FTreePrimitiveDetachContext {
	enum class ETreePrimitiveDetachContext DetachContext; 
	struct AActor* CollisionActor; 
	struct AIcarusPlayerCharacter* ActionPlayer; 
};

// ScriptStruct Icarus.TurretData
struct FTurretData : FIcarusTableRowBase {
	struct FVector2D MuzzlePitchExtents; 
	float MuzzleYawExtents; 
	struct FVector2D MuzzleMoveSpeed; 
	struct FVector2D MuzzleSpread; 
	float PermitBeginFireAngle; 
	int32_t MaxRange; 
	float BurstFireRate; 
	int32_t BurstFireShots; 
	float LaunchForce; 
	float CheckTargetPeriod; 
	float CoolDownPeriod; 
	struct TSoftObjectPtr<UFXSystemAsset> FireParticle; 
	struct TSoftObjectPtr<UFMODEvent> FireSound; 
	struct FValidAmmoTypesRowHandle ValidAmmoTypes; 
};

// ScriptStruct Icarus.TurretEnum
struct FTurretEnum : FRowEnum {
};

// ScriptStruct Icarus.Uses
struct FUses : FIcarusTableRowBase {
	struct FText DescriptionText; 
	struct TSoftObjectPtr<UTexture2D> Image; 
};

// ScriptStruct Icarus.UsableData
struct FUsableData : FIcarusTableRowBase {
	struct TArray<struct FUseCondition> Uses; 
	bool bAlwaysShowContextMenu; 
};

// ScriptStruct Icarus.UseCondition
struct FUseCondition {
	struct FUsesRowHandle Use; 
	struct FGameplayTagContainer RequiredTags; 
	struct TArray<struct FStatComparison> RequiredStats; 
	bool bMustOwnInventory; 
};

// ScriptStruct Icarus.UsesRowHandle
struct FUsesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.UsableEnum
struct FUsableEnum : FRowEnum {
};

// ScriptStruct Icarus.PerInputUserBindings
struct FPerInputUserBindings {
	struct FUserBindings Controller; 
	struct FUserBindings Keyboard; 
};

// ScriptStruct Icarus.UserBindings
struct FUserBindings {
	struct TArray<struct FInputActionKeyMapping> UserActionMappings; 
	struct TArray<struct FInputAxisKeyMapping> UserAxisMappings; 
};

// ScriptStruct Icarus.UsesEnum
struct FUsesEnum : FRowEnum {
};

// ScriptStruct Icarus.ValidAmmoTypes
struct FValidAmmoTypes : FIcarusTableRowBase {
	struct FText DisplayName; 
	struct TArray<struct FItemsStaticRowHandle> AmmoTypes; 
	struct FText Description; 
};

// ScriptStruct Icarus.ValidAmmoTypesEnum
struct FValidAmmoTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.ValidHitQueriesEnum
struct FValidHitQueriesEnum : FRowEnum {
};

// ScriptStruct Icarus.ValidHitQueriesRowHandle
struct FValidHitQueriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ValidHitQuery
struct FValidHitQuery : FIcarusTableRowBase {
	struct FTagQueriesRowHandle HitSource; 
	struct FTagQueriesRowHandle HitTarget; 
	struct FValidHitTypesRowHandle HitSuccessType; 
};

// ScriptStruct Icarus.ValidHitType
struct FValidHitType : FIcarusTableRowBase {
};

// ScriptStruct Icarus.ValidHitTypesEnum
struct FValidHitTypesEnum : FRowEnum {
};

// ScriptStruct Icarus.ValidInteractQueriesEnum
struct FValidInteractQueriesEnum : FRowEnum {
};

// ScriptStruct Icarus.ValidInteractQueriesRowHandle
struct FValidInteractQueriesRowHandle : FRowHandle {
};

// ScriptStruct Icarus.ValidInteractQuery
struct FValidInteractQuery : FIcarusTableRowBase {
	struct TSoftObjectPtr<UTexture2D> Icon; 
	struct FTagQueriesRowHandle Source; 
	struct FTagQueriesRowHandle Target; 
};

// ScriptStruct Icarus.IcarusBackendVersion
struct FIcarusBackendVersion {
};

// ScriptStruct Icarus.IcarusGameVersion
struct FIcarusGameVersion {
};

// ScriptStruct Icarus.ViewTraceRegistration
struct FViewTraceRegistration {
	float MaxDistance; 
};

// ScriptStruct Icarus.ViewTraceParams
struct FViewTraceParams {
	struct TArray<struct AActor*> IgnoredActors; 
	struct TArray<struct UPrimitiveComponent*> IgnoredComponents; 
	bool bTraceComplex; 
	bool bReturnPhysicalMaterial; 
	float TraceDistance; 
	struct FName DebugTraceFlag; 
};

// ScriptStruct Icarus.VocalisationData
struct FVocalisationData : FIcarusTableRowBase {
	struct TSoftObjectPtr<UFMODEvent> Sound; 
	struct FVocalisationSettingsRowHandle Setting; 
};

// ScriptStruct Icarus.VocalisationSettingsRowHandle
struct FVocalisationSettingsRowHandle : FRowHandle {
};

// ScriptStruct Icarus.VocalisationsEnum
struct FVocalisationsEnum : FRowEnum {
};

// ScriptStruct Icarus.VocalisationSetting
struct FVocalisationSetting : FIcarusTableRowBase {
	enum class EVocalisationInterruptType InterruptType; 
	bool bCanInterruptSelf; 
	float QueueTimeoutLength; 
	enum class EVocalisationPriority Priority; 
};

// ScriptStruct Icarus.VocalisationSettingsEnum
struct FVocalisationSettingsEnum : FRowEnum {
};

// ScriptStruct Icarus.VoxelDistributionRegion
struct FVoxelDistributionRegion : FIcarusTableRowBase {
	struct TMap<struct FVoxelSetupDataRowHandle, int32_t> VoxelDistribution; 
	struct FLinearColor VoxelColor; 
	float Brightness; 
};

// ScriptStruct Icarus.VoxelSetupDataRowHandle
struct FVoxelSetupDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.VoxelDistributionRegionEnum
struct FVoxelDistributionRegionEnum : FRowEnum {
};

// ScriptStruct Icarus.VoxelDistributionRegionRowHandle
struct FVoxelDistributionRegionRowHandle : FRowHandle {
};

// ScriptStruct Icarus.VoxelMaterialMap
struct FVoxelMaterialMap : FIcarusTableRowBase {
	struct TSoftObjectPtr<UStaticMesh> Mesh; 
	struct TMap<enum class EVoxelResourceCategory, struct TSoftObjectPtr<UMaterialInterface>> Materials; 
};

// ScriptStruct Icarus.VoxelMaterialMapEnum
struct FVoxelMaterialMapEnum : FRowEnum {
};

// ScriptStruct Icarus.VoxelMaterialMapRowHandle
struct FVoxelMaterialMapRowHandle : FRowHandle {
};

// ScriptStruct Icarus.PendingTypeChange
struct FPendingTypeChange {
	struct FVoxelSetupDataRowHandle NewSetupRow; 
	struct TSoftObjectPtr<UMaterialInterface> NewMaterialOverride; 
};

// ScriptStruct Icarus.VoxelState
struct FVoxelState {
	struct TArray<struct FMinedSphere> MinedSpheres; 
	char bIsFullyMined : 1; 
	char RegenerationCount; 
};

// ScriptStruct Icarus.MinedSphere
struct FMinedSphere {
	struct FVector Center; 
	float Radius; 
};

// ScriptStruct Icarus.VoxelSetupData
struct FVoxelSetupData : FIcarusTableRowBase {
	enum class EVoxelResourceCategory ResourceCategory; 
	struct FItemTemplateRowHandle ResourceType; 
	struct FItemTemplateRowHandle SecondaryResourceType; 
	struct FItemTemplateRowHandle PyriticCrustResourceType; 
	float DensityMultiplier; 
	struct TSoftObjectPtr<UFMODEvent> FullyMinedSound; 
	struct FExperienceEventsRowHandle ExperienceForMining; 
	struct FStatsEnum RewardStat; 
	struct FGameplayTag VoxelTag; 
};

// ScriptStruct Icarus.VoxelSetupDataEnum
struct FVoxelSetupDataEnum : FRowEnum {
};

// ScriptStruct Icarus.VoxelCorner
struct FVoxelCorner {
};

// ScriptStruct Icarus.VoxelSaveData
struct FVoxelSaveData {
	struct TArray<struct FVoxelMinedSphere> MinedSpheres; 
	bool bIsVoxelFullyMined; 
	int32_t TotalUnminedVoxels; 
	int32_t CurrentUnminedVoxels; 
	int32_t NumResourcesGranted; 
	struct FVector VoxelActorLocation; 
	float TotalResourceCount; 
	struct FName VoxelResourceOverride; 
};

// ScriptStruct Icarus.VoxelMinedSphere
struct FVoxelMinedSphere {
	struct FVector Location; 
	float Radius; 
};

// ScriptStruct Icarus.VoxelThreadSafeEnum
struct FVoxelThreadSafeEnum {
};

// ScriptStruct Icarus.WaterPoint
struct FWaterPoint {
	struct FIntVector Top; 
	int32_t Bottom; 
};

// ScriptStruct Icarus.WaterSetup
struct FWaterSetup : FIcarusTableRowBase {
	struct TSoftObjectPtr<UMaterialInterface> Material; 
	struct TArray<struct FFishSetupRowHandle> Fish; 
	float FishDensity; 
	struct TSoftObjectPtr<UFMODEvent> Sound; 
	bool IsInCave; 
	bool IsDrinkable; 
	struct TArray<struct FModifierStatesRowHandle> WetModifiers; 
	struct FGameplayTagContainer GameplayTags; 
	struct FAlterationsEnum WaterAlteration; 
	struct FHighlightableRowHandle Highlightable; 
};

// ScriptStruct Icarus.WaterData
struct FWaterData : FResourceNetworkData {
};

// ScriptStruct Icarus.WaterEnum
struct FWaterEnum : FRowEnum {
};

// ScriptStruct Icarus.WaterSetupEnum
struct FWaterSetupEnum : FRowEnum {
};

// ScriptStruct Icarus.WeatherActionsEnum
struct FWeatherActionsEnum : FRowEnum {
};

// ScriptStruct Icarus.WeatherAudioSubsystemBiomeRecord
struct FWeatherAudioSubsystemBiomeRecord {
	struct TArray<struct UWeatherAudioComponent*> Components; 
};

// ScriptStruct Icarus.WeatherBiomeGroupsEnum
struct FWeatherBiomeGroupsEnum : FRowEnum {
};

// ScriptStruct Icarus.ActiveWeatherInfo
struct FActiveWeatherInfo {
	struct FWeatherEventsRowHandle WeatherEvent; 
	struct FBiomesRowHandle Biome; 
	struct TArray<struct UIcarusWeatherAction*> Actions; 
	int32_t StartTime; 
};

// ScriptStruct Icarus.ActorCollection
struct FActorCollection {
	struct TArray<struct AIcarusActor*> Actors; 
};

// ScriptStruct Icarus.RecordedForecastWeatherEvent
struct FRecordedForecastWeatherEvent {
	struct FName WeatherEventRowName; 
	struct FName BiomeGroupRowName; 
	int32_t TimeElapsed; 
};

// ScriptStruct Icarus.WeatherEventsEnum
struct FWeatherEventsEnum : FRowEnum {
};

// ScriptStruct Icarus.WeatherForecastItem
struct FWeatherForecastItem {
	int32_t StartTime; 
	int32_t EndTime; 
	int32_t Tier; 
	int32_t PatternIndex; 
};

// ScriptStruct Icarus.RecordedCurrentWeatherBlock
struct FRecordedCurrentWeatherBlock {
	struct FName InitialProspectForecast; 
	struct FName ProspectForecastRowName; 
	int32_t StartTimeDelta; 
	int32_t PatternIndex; 
	int32_t RecordedNow; 
	struct TArray<int32_t> GameStateSeeds; 
};

// ScriptStruct Icarus.WeatherVisualData
struct FWeatherVisualData {
	float Rain; 
	float Sand; 
	float Snow; 
	float Cloudy; 
	float Thunder; 
	float SnowStorm; 
	float WindSpeed; 
	float WindStrength; 
	float WindGust; 
	float Debris; 
	float FogDensity; 
	float FogExtinction; 
	float Ash; 
	float Embers; 
	float Smoke; 
	float AcidRain; 
	float Hail; 
	float Radiation; 
	float LightningCloud; 
	float RadiationWind; 
	float Speckles; 
	struct FLinearColor FogColor; 
	float FogColorAmount; 
	float WhiteoutAmount; 
};

// ScriptStruct Icarus.WeatherGameplayData
struct FWeatherGameplayData {
	struct FBiomesEnum Biome; 
	struct FVector WindDirection; 
	float WindForce; 
	int32_t TemperatureModifier; 
	struct FText CurrentWeatherWarningMessage; 
};

// ScriptStruct Icarus.WeatherPoolsEnum
struct FWeatherPoolsEnum : FRowEnum {
};

// ScriptStruct Icarus.WeatherTierIcon
struct FWeatherTierIcon : FIcarusTableRowBase {
	struct TSoftObjectPtr<UTexture2D> TierIcon; 
	struct FSlateColor BarColor; 
};

// ScriptStruct Icarus.WeatherTierIconEnum
struct FWeatherTierIconEnum : FRowEnum {
};

// ScriptStruct Icarus.WeatherTierIconRowHandle
struct FWeatherTierIconRowHandle : FRowHandle {
};

// ScriptStruct Icarus.WeatherTimeSegment
struct FWeatherTimeSegment {
};

// ScriptStruct Icarus.WeatherBlock
struct FWeatherBlock {
	int32_t Tier; 
	int32_t DurationSeconds; 
	struct FWeatherPoolsRowHandle WeatherPool; 
	int32_t PatternIndex; 
	struct TArray<struct FBiomeGroupForecast> BiomeEvents; 
};

// ScriptStruct Icarus.BiomeGroupForecast
struct FBiomeGroupForecast {
	struct FWeatherBiomeGroupsEnum BiomeGroup; 
	struct TArray<struct FWeatherBlockEvent> Events; 
};

// ScriptStruct Icarus.WeatherBlockEvent
struct FWeatherBlockEvent {
	int32_t EventTime; 
	struct FWeatherEventsRowHandle WeatherEvent; 
};

// ScriptStruct Icarus.WeatherBiomeGroupForecast
struct FWeatherBiomeGroupForecast {
	struct TMap<int32_t, struct FWeatherEventsRowHandle> PlannedEvents; 
};

// ScriptStruct Icarus.WeightData
struct FWeightData : FIcarusTableRowBase {
	struct TSoftClassPtr<UObject> Behaviour; 
	float Weight; 
	bool AddInventoryWeight; 
	float InventoryWeightScale; 
};

// ScriptStruct Icarus.StoredElement
struct FStoredElement {
	struct FWeightedListElement Element; 
	float Roll; 
};

// ScriptStruct Icarus.WeightedListElement
struct FWeightedListElement {
	int32_t Weight; 
	struct FString String; 
	struct UObject* Object; 
};

// ScriptStruct Icarus.WeightEnum
struct FWeightEnum : FRowEnum {
};

// ScriptStruct Icarus.WorkshopItemsEnum
struct FWorkshopItemsEnum : FRowEnum {
};

// ScriptStruct Icarus.WorldBossData
struct FWorldBossData : FIcarusTableRowBase {
	struct FAISetupRowHandle AISetup; 
	struct FEpicCreaturesRowHandle EpicCreature; 
	struct TSoftClassPtr<UObject> SpawnerClass; 
	struct FGameplayTagQuery SpawnerTagQuery; 
	struct TSoftClassPtr<UObject> BehaviourClass; 
	bool bReloadDeadBoss; 
	struct FMapIconsRowHandle BossMapMarker; 
	bool bCanRespawnInPersistentProspects; 
	bool bStartsOnRespawnCooldown; 
	int32_t RespawnTimeInSeconds; 
	int32_t RespawnTimeRandomDeviation; 
};

// ScriptStruct Icarus.WorldBossesEnum
struct FWorldBossesEnum : FRowEnum {
};

// ScriptStruct Icarus.SpawnedWorldBossData
struct FSpawnedWorldBossData {
	struct FWorldBossesRowHandle WorldBoss; 
	struct FTransform InitialSpawnTransform; 
	bool bHasBeenKilled; 
	int32_t BossID; 
	float ScheduledRespawnTime; 
	bool bHasGeneratedBossLoot; 
};

// ScriptStruct Icarus.WorldData
struct FWorldData : FIcarusTableRowBase {
	struct FString TerrainName; 
	struct FString FileTag; 
	struct TSoftObjectPtr<UWorld> MainLevel; 
	struct TArray<struct TSoftObjectPtr<UWorld>> HeightmapLevels; 
	struct TArray<struct TSoftObjectPtr<UWorld>> GeneratedLevels; 
	struct TSoftObjectPtr<UWorld> GeneratedVistaLevel; 
	struct TArray<struct TSoftObjectPtr<UWorld>> DeveloperLevels; 
	struct TArray<struct FBoxSphereBounds> GridBounds; 
	struct TArray<struct FWorldCollection> WorldCollections; 
	struct FMinimapData MinimapData; 
	struct TMap<int32_t, struct FDropGroupData> DropGroups; 
};

// ScriptStruct Icarus.DropGroupData
struct FDropGroupData {
	struct TArray<struct FVector> Locations; 
	struct FString GroupName; 
};

// ScriptStruct Icarus.MinimapData
struct FMinimapData {
	struct TArray<struct TSoftObjectPtr<UTexture2D>> MapTextures; 
	struct TArray<struct TSoftObjectPtr<UTexture2D>> HeightMapTextures; 
	struct FVector WorldBoundaryMin; 
	struct FVector WorldBoundaryMax; 
};

// ScriptStruct Icarus.WorldCollection
struct FWorldCollection : FIcarusTableRowBase {
	struct FString CollectionName; 
	struct TArray<struct TSoftObjectPtr<UWorld>> HeightmapLevels; 
	struct TSoftObjectPtr<UWorld> DeveloperLevel; 
};

// ScriptStruct Icarus.LevelArray
struct FLevelArray : FIcarusTableRowBase {
	struct TArray<struct TSoftObjectPtr<UWorld>> Levels; 
};

// ScriptStruct Icarus.WorldDataEnum
struct FWorldDataEnum : FRowEnum {
};

// ScriptStruct Icarus.WorldDataRowHandle
struct FWorldDataRowHandle : FRowHandle {
};

// ScriptStruct Icarus.WorldTalentRecord
struct FWorldTalentRecord {
	struct FString RowName; 
	int32_t Rank; 
};


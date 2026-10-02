// Enum IcarusGenerated.EMetaInventoryID
enum class EMetaInventoryID : uint8 {
	MetaInventoryID_UndefinedID = 0,
	MetaInventoryID_Main = 1,
	MetaInventoryID_DropLoadout = 2,
	MetaInventoryID_MAX = 3
};

// Enum IcarusGenerated.EMissionDifficulty
enum class EMissionDifficulty : uint8 {
	None = 0,
	Easy = 1,
	Medium = 2,
	Hard = 3,
	Extreme = 4,
	EMissionDifficulty_MAX = 5
};

// Enum IcarusGenerated.EProspectLocation
enum class EProspectLocation : uint8 {
	Unknown = 0,
	Hab = 1,
	Prospect_Conifer = 2,
	Prospect_Arctic = 3,
	Prospect_Cave = 4,
	Prospect_Desert = 5,
	Prospect_Grasslands = 6,
	Prospect_Volcanic = 7,
	Prospect_Swamp = 8,
	Prospect_Geothermal = 9,
	Prospect_Tundra = 10,
	Prospect_Coastal = 11,
	Prospect_Jungle = 12,
	EProspectLocation_MAX = 13
};

// Enum IcarusGenerated.EProspectState
enum class EProspectState : uint8 {
	Unclaimed = 0,
	Claimed = 1,
	Active = 2,
	Ended = 3,
	MaxProspectStates = 4,
	EProspectState_MAX = 5
};

// Enum IcarusGenerated.EDropshipType
enum class EDropshipType : uint8 {
	DropshipType_UndefinedID = 0,
	DropshipType_Player = 1,
	DropshipType_Equipment = 2,
	DropshipType_MAX = 3
};

// Enum IcarusGenerated.ENotificationType
enum class ENotificationType : uint8 {
	Server = 0,
	General = 1,
	MissionSummary = 2,
	ItemRecovery = 3,
	ProspectComplete = 4,
	MaxNotificationTypes = 5,
	ENotificationType_MAX = 6
};

// Enum IcarusGenerated.EUpdateProspectFailure
enum class EUpdateProspectFailure : uint8 {
	UpdateProspectFailure_UndefinedID = 0,
	UpdateProspectFailure_NotHost = 1,
	UpdateProspectFailure_Expired = 2,
	UpdateProspectFailure_NotNewer = 3,
	UpdateProspectFailure_Other = 4,
	UpdateProspectFailure_MAX = 5
};

// Enum IcarusGenerated.ECharacterAttribute
enum class ECharacterAttribute : uint8 {
	Health = 0,
	Stamina = 1,
	Strength = 2,
	Agility = 3,
	Perception = 4,
	MaxCharacterAttribute = 5,
	ECharacterAttribute_MAX = 6
};

// Enum IcarusGenerated.EDropshipPartType
enum class EDropshipPartType : uint8 {
	DropshipPartType_UndefinedID = 0,
	DropshipType_TOP = 1,
	DropshipType_MID = 2,
	DropshipType_BTM = 3,
	EDropshipPartType_MAX = 4
};

// ScriptStruct IcarusGenerated.ResAbandonProspect
struct FResAbandonProspect {
	bool Success; 
};

// ScriptStruct IcarusGenerated.ResBackToHab
struct FResBackToHab {
	bool Success; 
};

// ScriptStruct IcarusGenerated.ResCanJoinProspect
struct FResCanJoinProspect {
	bool Success; 
};

// ScriptStruct IcarusGenerated.ResCheckProspectExpired
struct FResCheckProspectExpired {
	bool Success; 
	bool Expired; 
};

// ScriptStruct IcarusGenerated.ResClaimNotificationAttachments
struct FResClaimNotificationAttachments {
	bool Success; 
	struct FInventoryDelta InventoryDelta; 
	struct TArray<struct FMetaResource> MetaResourceDelta; 
	int32_t Credits; 
	struct FString NotificationUID; 
};

// ScriptStruct IcarusGenerated.MetaResource
struct FMetaResource {
	struct FString MetaRow; 
	int32_t Count; 
};

// ScriptStruct IcarusGenerated.InventoryDelta
struct FInventoryDelta {
	enum class EMetaInventoryID ID; 
	struct TArray<struct FMetaItemDelta> Delta; 
};

// ScriptStruct IcarusGenerated.MetaItemDelta
struct FMetaItemDelta {
	struct FString ItemUID; 
	struct FMetaItem MetaItem; 
};

// ScriptStruct IcarusGenerated.MetaItem
struct FMetaItem {
	struct FString ItemStaticRow; 
	struct TArray<struct FDynamicProperty> Properties; 
	struct TArray<struct FStat> Stats; 
	struct FString ID; 
};

// ScriptStruct IcarusGenerated.Stat
struct FStat {
	int32_t Type; 
	int32_t Value; 
};

// ScriptStruct IcarusGenerated.DynamicProperty
struct FDynamicProperty {
	int32_t Type; 
	int32_t Value; 
};

// ScriptStruct IcarusGenerated.ResClaimProspect
struct FResClaimProspect {
	bool Success; 
	struct FProspectInfo Prospect; 
};

// ScriptStruct IcarusGenerated.ProspectInfo
struct FProspectInfo {
	struct FString ProspectID; 
	struct FString ClaimedAccountID; 
	int32_t ClaimedAccountCharacter; 
	struct FString ProspectDTKey; 
	struct FString FactionMissionDTKey; 
	struct FString LobbyName; 
	int64_t ExpireTime; 
	enum class EProspectState ProspectState; 
	struct TArray<struct FAssociatedMemberInfo> AssociatedMembers; 
	int32_t Cost; 
	int32_t Reward; 
	enum class EMissionDifficulty Difficulty; 
	bool Insurance; 
	bool NoRespawns; 
	int32_t ElapsedTime; 
	int32_t SelectedDropPoint; 
	struct TArray<struct FCustomGameSetting> CustomSettings; 
};

// ScriptStruct IcarusGenerated.CustomGameSetting
struct FCustomGameSetting {
	struct FString SettingRowName; 
	int32_t SettingValue; 
};

// ScriptStruct IcarusGenerated.AssociatedMemberInfo
struct FAssociatedMemberInfo {
	struct FString AccountName; 
	struct FString CharacterName; 
	struct FString UserID; 
	int32_t ChrSlot; 
	int32_t Experience; 
	enum class EProspectLocation Status; 
	bool Settled; 
	bool IsCurrentlyPlaying; 
};

// ScriptStruct IcarusGenerated.ResCreateCharacter
struct FResCreateCharacter {
	bool Success; 
	struct FOnlineProfileCharacter CreatedCharacter; 
};

// ScriptStruct IcarusGenerated.OnlineProfileCharacter
struct FOnlineProfileCharacter {
	struct FString CharacterName; 
	int32_t ChrSlot; 
	int32_t XP; 
	int32_t XP_Debt; 
	bool IsDead; 
	bool IsAbandoned; 
	struct FString LastProspectId; 
	enum class EProspectLocation Location; 
	struct TArray<int32_t> UnlockedFlags; 
	struct TArray<struct FMetaResource> MetaResources; 
	struct FCharacterCosmetics Cosmetic; 
	struct TArray<struct FBackendTalent> Talents; 
	int64_t TimeLastPlayed; 
};

// ScriptStruct IcarusGenerated.BackendTalent
struct FBackendTalent {
	struct FString RowName; 
	int32_t Rank; 
};

// ScriptStruct IcarusGenerated.CharacterCosmetics
struct FCharacterCosmetics {
	int32_t Customization_Head; 
	int32_t Customization_Hair; 
	int32_t Customization_HairColor; 
	int32_t Customization_Body; 
	int32_t Customization_BodyColor; 
	int32_t Customization_SkinTone; 
	int32_t Customization_HeadTattoo; 
	int32_t Customization_HeadScar; 
	int32_t Customization_HeadFacialHair; 
	int32_t Customization_CapLogo; 
	bool IsMale; 
	int32_t Customization_Voice; 
	int32_t Customization_EyeColor; 
};

// ScriptStruct IcarusGenerated.ResCreateDropship
struct FResCreateDropship {
	bool Success; 
	struct FDropshipDelta DropshipDelta; 
	struct FInventoryDelta InventoryDelta; 
};

// ScriptStruct IcarusGenerated.DropshipDelta
struct FDropshipDelta {
	struct FDropship Dropship; 
};

// ScriptStruct IcarusGenerated.Dropship
struct FDropship {
	struct FString Name; 
	enum class EDropshipType Type; 
	int32_t DropshipID; 
	bool InUse; 
	struct FMetaItem TOP_Part; 
	struct FMetaItem MID_Part; 
	struct FMetaItem BTM_Part; 
};

// ScriptStruct IcarusGenerated.ResDeleteCharacter
struct FResDeleteCharacter {
	bool Success; 
};

// ScriptStruct IcarusGenerated.ResDeleteDropship
struct FResDeleteDropship {
	bool Success; 
	int32_t DropshipRemovedID; 
	struct FInventoryDelta InventoryDelta; 
};

// ScriptStruct IcarusGenerated.ResDeleteNotification
struct FResDeleteNotification {
	bool Success; 
	struct FString NotificationUID; 
};

// ScriptStruct IcarusGenerated.ResExchangeCurrency
struct FResExchangeCurrency {
	bool Success; 
	struct TArray<struct FMetaResource> CurrencyDeltas; 
};

// ScriptStruct IcarusGenerated.ResGenerateProspects
struct FResGenerateProspects {
	bool Success; 
	struct TArray<struct FProspectInfo> Prospects; 
};

// ScriptStruct IcarusGenerated.ResGetAllProspects
struct FResGetAllProspects {
	bool Success; 
	struct TArray<struct FProspectInfo> Prospects; 
};

// ScriptStruct IcarusGenerated.ResGetAvailableProspects
struct FResGetAvailableProspects {
	bool Success; 
	struct TArray<struct FProspectInfo> Prospects; 
};

// ScriptStruct IcarusGenerated.ResGetChallenges
struct FResGetChallenges {
	bool Success; 
	struct TArray<struct FActiveChallenge> Challenges; 
};

// ScriptStruct IcarusGenerated.ActiveChallenge
struct FActiveChallenge {
	struct FString ChallengeUID; 
	struct FString Challenge; 
	int32_t Progress; 
};

// ScriptStruct IcarusGenerated.ResGetCharacterLoadout
struct FResGetCharacterLoadout {
	bool Success; 
	struct FCharacterLoadout Loadout; 
};

// ScriptStruct IcarusGenerated.CharacterLoadout
struct FCharacterLoadout {
	struct FMetaItem EnviroSuit; 
	struct FDropship Dropship; 
	struct TArray<struct FMetaItem> MetaItems; 
	bool Valid; 
};

// ScriptStruct IcarusGenerated.ResGetCharacterProfile
struct FResGetCharacterProfile {
	bool Success; 
	struct FOnlineProfileCharacter Character; 
};

// ScriptStruct IcarusGenerated.ResGetCharacters
struct FResGetCharacters {
	bool Success; 
	struct TArray<struct FOnlineProfileCharacter> Characters; 
};

// ScriptStruct IcarusGenerated.ResGetCredits
struct FResGetCredits {
	bool Success; 
	int32_t Amount; 
};

// ScriptStruct IcarusGenerated.ResGetDropships
struct FResGetDropships {
	bool Success; 
	struct TArray<struct FDropship> Dropships; 
};

// ScriptStruct IcarusGenerated.ResGetLastProspect
struct FResGetLastProspect {
	bool Success; 
	struct FProspectInfo ProspectInformation; 
	int32_t FactionMissionStatus; 
};

// ScriptStruct IcarusGenerated.ResLoadoutInventory
struct FResLoadoutInventory {
	bool Success; 
	struct TArray<struct FMetaItem> Inventory; 
};

// ScriptStruct IcarusGenerated.ResGetMetaInventory
struct FResGetMetaInventory {
	bool Success; 
	struct FInventoryDelta InventoryDelta; 
};

// ScriptStruct IcarusGenerated.ResGetMetaResources
struct FResGetMetaResources {
	bool Success; 
	struct TArray<struct FMetaResource> MetaResources; 
};

// ScriptStruct IcarusGenerated.ResGetNotifications
struct FResGetNotifications {
	bool Success; 
	bool CompleteList; 
	struct TArray<struct FNotification> NotificationDelta; 
};

// ScriptStruct IcarusGenerated.Notification
struct FNotification {
	struct FString NotificationUID; 
	enum class ENotificationType Type; 
	struct FString Title; 
	struct FString Message; 
	struct FString ProspectID; 
	struct FAttachment Attachments; 
	bool Read; 
	bool SentToPlayer; 
};

// ScriptStruct IcarusGenerated.Attachment
struct FAttachment {
	struct TArray<struct FMetaItem> Items; 
	struct TArray<struct FMetaResource> Exotics; 
	int32_t Credits; 
};

// ScriptStruct IcarusGenerated.ResPreparedLoadout
struct FResPreparedLoadout {
	bool Success; 
	int32_t DropshipID; 
	struct FMetaItem EnviroSuit; 
	bool Locked; 
};

// ScriptStruct IcarusGenerated.ResGetProspect
struct FResGetProspect {
	bool Success; 
	struct FProspectInfo Prospect; 
	struct FProspectBlob ProspectBlob; 
};

// ScriptStruct IcarusGenerated.ProspectBlob
struct FProspectBlob {
	struct FString Key; 
	struct FString Hash; 
	int32_t TotalLength; 
	int32_t DataLength; 
	int32_t UncompressedLength; 
	struct FString BinaryBlob; 
};

// ScriptStruct IcarusGenerated.ResGetProspectReport
struct FResGetProspectReport {
	bool Success; 
	struct FProspectInfo ProspectInfo; 
	struct FAttachment CurrentRewards; 
};

// ScriptStruct IcarusGenerated.ResGetProspectSummary
struct FResGetProspectSummary {
	bool Success; 
	struct FProspectCompleteInformation ProspectInformation; 
};

// ScriptStruct IcarusGenerated.ProspectCompleteInformation
struct FProspectCompleteInformation {
	struct FProspectInfo ProspectInfo; 
	bool FactionMissionSuccessful; 
	struct FAttachment ProspectRewards; 
	int64_t Duration; 
	struct FAttachment FactionMissionRewards; 
	struct TArray<struct FTrackedStat> TrackedStats; 
};

// ScriptStruct IcarusGenerated.TrackedStat
struct FTrackedStat {
	struct FString StatDTKey; 
	int32_t Value; 
};

// ScriptStruct IcarusGenerated.ResGetUserProfile
struct FResGetUserProfile {
	bool Success; 
	struct FOnlineProfileUser IcarusProfile; 
};

// ScriptStruct IcarusGenerated.OnlineProfileUser
struct FOnlineProfileUser {
	struct FString UserID; 
	struct TArray<struct FMetaResource> MetaResources; 
	struct TArray<int32_t> UnlockedFlags; 
	struct TArray<struct FBackendTalent> Talents; 
	int32_t NextChrSlot; 
	int32_t DataVersion; 
};

// ScriptStruct IcarusGenerated.ResHostCandidate
struct FResHostCandidate {
	bool Success; 
	struct FString Reason; 
	struct FString ProspectID; 
	struct FString UserID; 
};

// ScriptStruct IcarusGenerated.ResJoinProspect
struct FResJoinProspect {
	bool Success; 
	struct FProspectInfo Prospect; 
};

// ScriptStruct IcarusGenerated.ResLobbyMessage
struct FResLobbyMessage {
	bool Success; 
	struct FString Reason; 
};

// ScriptStruct IcarusGenerated.ResModifyDropship
struct FResModifyDropship {
	bool Success; 
	struct FDropshipDelta DropshipDelta; 
	struct FInventoryDelta InventoryDelta; 
};

// ScriptStruct IcarusGenerated.ResMoveMetaInventoryItem
struct FResMoveMetaInventoryItem {
	bool Success; 
	struct TArray<struct FInventoryDelta> Delta; 
};

// ScriptStruct IcarusGenerated.ResPackageLoadout
struct FResPackageLoadout {
	bool Success; 
	int32_t LoadoutIndex; 
	struct FInventoryDelta InventoryDelta; 
	struct FDropshipDelta DropshipDelta; 
	bool Locked; 
};

// ScriptStruct IcarusGenerated.ResProspectExpired
struct FResProspectExpired {
	bool Success; 
};

// ScriptStruct IcarusGenerated.ResReadNotification
struct FResReadNotification {
	bool Success; 
	struct FString NotificationUID; 
};

// ScriptStruct IcarusGenerated.ResRemoveEnvirosuit
struct FResRemoveEnvirosuit {
	bool Success; 
	struct FMetaItem EnviroSuit; 
	struct FInventoryDelta InventoryDelta; 
};

// ScriptStruct IcarusGenerated.ResRemoveMetaInventoryItem
struct FResRemoveMetaInventoryItem {
	bool Success; 
	struct FInventoryDelta Delta; 
};

// ScriptStruct IcarusGenerated.ResRemoveSelectedDropship
struct FResRemoveSelectedDropship {
	bool Success; 
	int32_t DropshipID; 
};

// ScriptStruct IcarusGenerated.ResRepairWorkshopItem
struct FResRepairWorkshopItem {
	bool Success; 
	struct FInventoryDelta InventoryDelta; 
	struct TArray<struct FMetaResource> CurrencyDelta; 
};

// ScriptStruct IcarusGenerated.ResReplicateWorkshopItem
struct FResReplicateWorkshopItem {
	bool Success; 
	struct FInventoryDelta InventoryDelta; 
	struct TArray<struct FMetaResource> CurrencyDelta; 
};

// ScriptStruct IcarusGenerated.ResResetCharacter
struct FResResetCharacter {
	bool Success; 
	struct FOnlineProfileCharacter Character; 
};

// ScriptStruct IcarusGenerated.ResResetCharacterProspectState
struct FResResetCharacterProspectState {
	bool Success; 
};

// ScriptStruct IcarusGenerated.ResResumeProspect
struct FResResumeProspect {
	bool Success; 
	struct FString HostID; 
	struct FProspectInfo Prospect; 
	struct FProspectBlob ProspectBlob; 
};

// ScriptStruct IcarusGenerated.ResSelectDropship
struct FResSelectDropship {
	bool Success; 
	int32_t DropshipID; 
};

// ScriptStruct IcarusGenerated.ResSelectEnvirosuit
struct FResSelectEnvirosuit {
	bool Success; 
	struct FMetaItem EnviroSuit; 
	struct FInventoryDelta InventoryDelta; 
};

// ScriptStruct IcarusGenerated.ResSetResourceSplit
struct FResSetResourceSplit {
	bool Success; 
};

// ScriptStruct IcarusGenerated.ResSettleProspect
struct FResSettleProspect {
	bool Success; 
	struct FProspectInfo ProspectInfo; 
};

// ScriptStruct IcarusGenerated.ResSyncAccountFlags
struct FResSyncAccountFlags {
	bool Success; 
	struct TArray<int32_t> Flags; 
};

// ScriptStruct IcarusGenerated.ResSyncAccountTalents
struct FResSyncAccountTalents {
	bool Success; 
	struct TArray<struct FBackendTalent> Talents; 
};

// ScriptStruct IcarusGenerated.ResSyncCharacterTalents
struct FResSyncCharacterTalents {
	bool Success; 
	struct TArray<struct FBackendTalent> Talents; 
};

// ScriptStruct IcarusGenerated.ResTalentRefund
struct FResTalentRefund {
	bool Success; 
	struct FBackendTalent Talent; 
	struct TArray<struct FMetaResource> CurrencyDelta; 
};

// ScriptStruct IcarusGenerated.ResUnlockAccountFlags
struct FResUnlockAccountFlags {
	bool Success; 
	struct TArray<int32_t> UnlockedFlags; 
};

// ScriptStruct IcarusGenerated.ResUnlockCharacterFlags
struct FResUnlockCharacterFlags {
	bool Success; 
	struct TArray<int32_t> UnlockedFlags; 
};

// ScriptStruct IcarusGenerated.ResUnlockWorkshopItem
struct FResUnlockWorkshopItem {
	bool Success; 
	struct FString UnlockedTalent; 
	struct TArray<struct FMetaResource> CurrencyDelta; 
};

// ScriptStruct IcarusGenerated.ResUnpackageLoadout
struct FResUnpackageLoadout {
	bool Success; 
	bool Locked; 
};

// ScriptStruct IcarusGenerated.ResUpdateChallengeProgress
struct FResUpdateChallengeProgress {
	bool Success; 
};

// ScriptStruct IcarusGenerated.ResUpdateCharacterLoadout
struct FResUpdateCharacterLoadout {
	bool Success; 
	struct FString Reason; 
};

// ScriptStruct IcarusGenerated.ResUpdateCharacterProgress
struct FResUpdateCharacterProgress {
	bool Success; 
};

// ScriptStruct IcarusGenerated.ResUpdateCharacterProspectLocation
struct FResUpdateCharacterProspectLocation {
	bool Success; 
};

// ScriptStruct IcarusGenerated.ResUpdateCosmetics
struct FResUpdateCosmetics {
	bool Success; 
	struct FOnlineProfileCharacter Character; 
};

// ScriptStruct IcarusGenerated.ResUpdateFactionMissionProgress
struct FResUpdateFactionMissionProgress {
	bool Success; 
};

// ScriptStruct IcarusGenerated.ResUpdateProspect
struct FResUpdateProspect {
	bool Success; 
	enum class EUpdateProspectFailure FailureReason; 
};

// ScriptStruct IcarusGenerated.ResUpdateTrackedStats
struct FResUpdateTrackedStats {
	bool Success; 
};

// ScriptStruct IcarusGenerated.ConnectionString
struct FConnectionString {
	struct FString ExternalIP; 
	struct FString InternalIP; 
	struct FString P2PAddress; 
	int32_t Port; 
};

// ScriptStruct IcarusGenerated.PlayerID
struct FPlayerID {
	struct FString PlayerName; 
	float Score; 
	struct FString UserID; 
	int32_t ChrSlot; 
	bool bHost; 
};

// ScriptStruct IcarusGenerated.ActiveFactionMission
struct FActiveFactionMission {
	struct FString FactionMission; 
	int32_t Progress; 
};

// ScriptStruct IcarusGenerated.CharacterAttributeProgress
struct FCharacterAttributeProgress {
	enum class ECharacterAttribute Attribute; 
	int32_t Level; 
};

// ScriptStruct IcarusGenerated.CharacterSetup
struct FCharacterSetup {
	struct FString UserID; 
	int32_t ChrSlot; 
	int32_t DropLoadout; 
};

// ScriptStruct IcarusGenerated.CharacterSplit
struct FCharacterSplit {
	struct FString UserID; 
	int32_t ChrSlot; 
	int32_t Percentage; 
};

// ScriptStruct IcarusGenerated.DropshipModification
struct FDropshipModification {
	struct FString Name; 
	enum class EDropshipType Type; 
	struct TArray<struct FDropshipPartModification> Parts; 
};

// ScriptStruct IcarusGenerated.DropshipPartModification
struct FDropshipPartModification {
	enum class EDropshipPartType Type; 
	struct FString ItemId; 
};

// ScriptStruct IcarusGenerated.ItemStaticRow
struct FItemStaticRow {
	int32_t Type; 
	int32_t Value; 
};

// ScriptStruct IcarusGenerated.MaintenanceStatus
struct FMaintenanceStatus {
	bool IsMaintenance; 
	int32_t StartTime; 
	int32_t EndTime; 
	struct FString Message; 
};

// ScriptStruct IcarusGenerated.ReqAbandonProspect
struct FReqAbandonProspect {
	struct FString ProspectID; 
	int32_t ChrSlot; 
};

// ScriptStruct IcarusGenerated.ReqAddMetaInventoryItem
struct FReqAddMetaInventoryItem {
	struct FString UserID; 
	enum class EMetaInventoryID SrcMetaInventoryID; 
	struct FMetaItem Item; 
};

// ScriptStruct IcarusGenerated.ReqAddMetaResource
struct FReqAddMetaResource {
	struct FString UserID; 
	struct FMetaResource MetaResource; 
	int32_t Count; 
};

// ScriptStruct IcarusGenerated.ReqBackToHab
struct FReqBackToHab {
	struct FString ProspectID; 
	struct FString UserID; 
	int32_t ChrSlot; 
	bool LeftWithShip; 
	struct TArray<struct FMetaItem> MetaItems; 
	struct TArray<struct FMetaResource> MetaResources; 
};

// ScriptStruct IcarusGenerated.ReqCanJoinProspect
struct FReqCanJoinProspect {
	struct FString UserID; 
	int32_t ChrSlot; 
	struct FString ProspectID; 
};

// ScriptStruct IcarusGenerated.ReqCheckProspectExpired
struct FReqCheckProspectExpired {
	struct FString ProspectID; 
};

// ScriptStruct IcarusGenerated.ReqClaimNotificationAttachments
struct FReqClaimNotificationAttachments {
	struct FString UserID; 
	struct FString NotificationUID; 
};

// ScriptStruct IcarusGenerated.ReqClaimProspect
struct FReqClaimProspect {
	struct FString UserID; 
	int32_t ChrSlot; 
	struct FString LobbyName; 
	struct FProspectInfo Prospect; 
};

// ScriptStruct IcarusGenerated.ReqCreateCharacter
struct FReqCreateCharacter {
	struct FString CharacterName; 
	struct FCharacterCosmetics CharacterCosmeticsData; 
};

// ScriptStruct IcarusGenerated.ReqCreateDropship
struct FReqCreateDropship {
	struct FString UserID; 
	struct FDropshipModification Dropship; 
};

// ScriptStruct IcarusGenerated.ReqDeleteCharacter
struct FReqDeleteCharacter {
	int32_t ChrSlot; 
};

// ScriptStruct IcarusGenerated.ReqDeleteDropship
struct FReqDeleteDropship {
	struct FString UserID; 
	int32_t DropshipID; 
};

// ScriptStruct IcarusGenerated.ReqDeleteNotification
struct FReqDeleteNotification {
	struct FString UserID; 
	struct FString NotificationUID; 
};

// ScriptStruct IcarusGenerated.ReqExchangeCurrency
struct FReqExchangeCurrency {
	struct FMetaResource StartingCurrencyDelta; 
	struct FMetaResource EndingCurrencyDelta; 
};

// ScriptStruct IcarusGenerated.ReqGenerateProspects
struct FReqGenerateProspects {
	struct TArray<struct FString> ProspectDTKeys; 
};

// ScriptStruct IcarusGenerated.ReqGetAllProspects
struct FReqGetAllProspects {
	struct TArray<int32_t> ChrSlots; 
};

// ScriptStruct IcarusGenerated.ReqGetAvailableProspects
struct FReqGetAvailableProspects {
	struct FString UserID; 
	int32_t ChrSlot; 
};

// ScriptStruct IcarusGenerated.ReqGetChallenges
struct FReqGetChallenges {
	struct FString UserID; 
};

// ScriptStruct IcarusGenerated.ReqGetCharacterLoadout
struct FReqGetCharacterLoadout {
	struct FString UserID; 
	int32_t ChrSlot; 
};

// ScriptStruct IcarusGenerated.ReqGetCharacterProfile
struct FReqGetCharacterProfile {
	struct FString UserID; 
	int32_t ChrSlot; 
};

// ScriptStruct IcarusGenerated.ReqGetCharacters
struct FReqGetCharacters {
};

// ScriptStruct IcarusGenerated.ReqGetCredits
struct FReqGetCredits {
	struct FString UserID; 
};

// ScriptStruct IcarusGenerated.ReqGetDropships
struct FReqGetDropships {
	struct FString UserID; 
};

// ScriptStruct IcarusGenerated.ReqGetFactionMissionProgress
struct FReqGetFactionMissionProgress {
	struct FString UserID; 
	int32_t ChrSlot; 
};

// ScriptStruct IcarusGenerated.ReqGetLastProspect
struct FReqGetLastProspect {
	struct FString UserID; 
	int32_t ChrSlot; 
};

// ScriptStruct IcarusGenerated.ReqGetMetaInventory
struct FReqGetMetaInventory {
	struct FString UserID; 
	enum class EMetaInventoryID MetaInventoryID; 
};

// ScriptStruct IcarusGenerated.ReqGetMetaResources
struct FReqGetMetaResources {
	struct FString UserID; 
};

// ScriptStruct IcarusGenerated.ReqGetNotifications
struct FReqGetNotifications {
	struct FString UserID; 
	bool CompleteList; 
};

// ScriptStruct IcarusGenerated.ReqGetProspect
struct FReqGetProspect {
	struct FString UserID; 
	int32_t ChrSlot; 
	struct FString ProspectID; 
	bool HasProspectBlob; 
};

// ScriptStruct IcarusGenerated.ReqGetProspectReport
struct FReqGetProspectReport {
	struct FString UserID; 
	int32_t ChrSlot; 
	struct FString ProspectUID; 
};

// ScriptStruct IcarusGenerated.ReqGetProspectSummary
struct FReqGetProspectSummary {
	struct FString UserID; 
	int32_t ChrSlot; 
	struct FString ProspectID; 
};

// ScriptStruct IcarusGenerated.ReqGetTrackedStats
struct FReqGetTrackedStats {
	struct FString UserID; 
	int32_t ChrSlot; 
};

// ScriptStruct IcarusGenerated.ReqGetUserProfile
struct FReqGetUserProfile {
	struct FString UserID; 
};

// ScriptStruct IcarusGenerated.ReqGetWorkshopPacks
struct FReqGetWorkshopPacks {
};

// ScriptStruct IcarusGenerated.ReqHostCandidate
struct FReqHostCandidate {
	struct FString ProspectID; 
	struct FString CandidateUserID; 
};

// ScriptStruct IcarusGenerated.ReqJoinProspect
struct FReqJoinProspect {
	struct FString ProspectID; 
	int32_t ChrSlot; 
};

// ScriptStruct IcarusGenerated.ReqLoadoutInventory
struct FReqLoadoutInventory {
	struct FString UserID; 
	int32_t CharacterSlot; 
};

// ScriptStruct IcarusGenerated.ReqLobbyMessage
struct FReqLobbyMessage {
	struct FString UserID; 
	struct FString AuthType; 
	struct FString AuthToken; 
	struct FString AppId; 
};

// ScriptStruct IcarusGenerated.ReqModifyDropship
struct FReqModifyDropship {
	struct FString UserID; 
	int32_t DropshipID; 
	struct FDropshipModification Dropship; 
};

// ScriptStruct IcarusGenerated.ReqMoveMetaInventoryItem
struct FReqMoveMetaInventoryItem {
	struct FString UserID; 
	int32_t CharacterSlot; 
	enum class EMetaInventoryID SrcMetaInventoryID; 
	enum class EMetaInventoryID DstMetaInventoryID; 
	struct FString ScrItemId; 
	struct FString DstItemId; 
	int32_t Count; 
};

// ScriptStruct IcarusGenerated.ReqPackageLoadout
struct FReqPackageLoadout {
	struct FString UserID; 
	int32_t ChrSlot; 
};

// ScriptStruct IcarusGenerated.ReqPreparedLoadout
struct FReqPreparedLoadout {
	struct FString UserID; 
	int32_t ChrSlot; 
};

// ScriptStruct IcarusGenerated.ReqProspectExpired
struct FReqProspectExpired {
	struct FString ProspectID; 
	int32_t ChrSlot; 
};

// ScriptStruct IcarusGenerated.ReqPurchaseWorkshopPack
struct FReqPurchaseWorkshopPack {
	struct FString UserID; 
	struct FString WorkshopPackName; 
};

// ScriptStruct IcarusGenerated.ReqReadNotification
struct FReqReadNotification {
	struct FString UserID; 
	struct FString NotificationUID; 
};

// ScriptStruct IcarusGenerated.ReqRemoveEnvirosuit
struct FReqRemoveEnvirosuit {
	struct FString UserID; 
	int32_t ChrSlot; 
};

// ScriptStruct IcarusGenerated.ReqRemoveMetaInventoryItem
struct FReqRemoveMetaInventoryItem {
	struct FString UserID; 
	struct FString MetaItemId; 
};

// ScriptStruct IcarusGenerated.ReqRemoveSelectedDropship
struct FReqRemoveSelectedDropship {
	struct FString UserID; 
	int32_t ChrSlot; 
};

// ScriptStruct IcarusGenerated.ReqRepairWorkshopItem
struct FReqRepairWorkshopItem {
	struct FString UserID; 
	struct FString MetaItemId; 
};

// ScriptStruct IcarusGenerated.ReqReplicateWorkshopItem
struct FReqReplicateWorkshopItem {
	struct FString UserID; 
	struct FString WorkshopTalent; 
};

// ScriptStruct IcarusGenerated.ReqResetCharacter
struct FReqResetCharacter {
	struct FString UserID; 
	int32_t ChrSlot; 
};

// ScriptStruct IcarusGenerated.ReqResetCharacterProspectState
struct FReqResetCharacterProspectState {
	struct FString UserID; 
	int32_t ChrSlot; 
};

// ScriptStruct IcarusGenerated.ReqResumeProspect
struct FReqResumeProspect {
	struct FString ProspectID; 
	int32_t ChrSlot; 
	bool AttemptHostMigration; 
};

// ScriptStruct IcarusGenerated.ReqSelectDropship
struct FReqSelectDropship {
	struct FString UserID; 
	int32_t ChrSlot; 
	int32_t DropshipID; 
};

// ScriptStruct IcarusGenerated.ReqSelectEnvirosuit
struct FReqSelectEnvirosuit {
	struct FString UserID; 
	int32_t ChrSlot; 
	struct FString ItemId; 
};

// ScriptStruct IcarusGenerated.ReqSetResourceSplit
struct FReqSetResourceSplit {
	struct FString UserID; 
	int32_t ChrSlot; 
	struct FString ProspectID; 
	struct TArray<struct FCharacterSplit> Split; 
};

// ScriptStruct IcarusGenerated.ReqSettleProspect
struct FReqSettleProspect {
	struct FString UserID; 
	struct FString ProspectID; 
	bool Settle; 
};

// ScriptStruct IcarusGenerated.ReqSyncAccountFlags
struct FReqSyncAccountFlags {
	struct FString UserID; 
	struct TArray<int32_t> Flags; 
};

// ScriptStruct IcarusGenerated.ReqSyncAccountTalents
struct FReqSyncAccountTalents {
	struct FString UserID; 
	struct TArray<struct FBackendTalent> Talents; 
};

// ScriptStruct IcarusGenerated.ReqSyncCharacterTalents
struct FReqSyncCharacterTalents {
	struct FString UserID; 
	int32_t CharacterSlot; 
	struct TArray<struct FBackendTalent> Talents; 
};

// ScriptStruct IcarusGenerated.ReqTalentRefund
struct FReqTalentRefund {
	struct FBackendTalent Talent; 
	int32_t CharacterSlot; 
};

// ScriptStruct IcarusGenerated.ReqUnlockAccountFlags
struct FReqUnlockAccountFlags {
	struct FString UserID; 
	struct TArray<int32_t> UnlockedFlags; 
};

// ScriptStruct IcarusGenerated.ReqUnlockCharacterFlags
struct FReqUnlockCharacterFlags {
	struct FString UserID; 
	int32_t ChrSlot; 
	struct TArray<int32_t> UnlockedFlags; 
};

// ScriptStruct IcarusGenerated.ReqUnlockWorkshopItem
struct FReqUnlockWorkshopItem {
	struct FString UserID; 
	struct FString WorkshopTalent; 
};

// ScriptStruct IcarusGenerated.ReqUnpackageLoadout
struct FReqUnpackageLoadout {
	struct FString UserID; 
	int32_t ChrSlot; 
};

// ScriptStruct IcarusGenerated.ReqUpdateChallengeProgress
struct FReqUpdateChallengeProgress {
	struct FString UserID; 
	struct FString ChallengeUID; 
	int32_t Progress; 
};

// ScriptStruct IcarusGenerated.ReqUpdateCharacterLoadout
struct FReqUpdateCharacterLoadout {
	struct FString UserID; 
	int32_t ChrSlot; 
	struct FCharacterLoadout Loadout; 
};

// ScriptStruct IcarusGenerated.ReqUpdateCharacterProgress
struct FReqUpdateCharacterProgress {
	struct FString UserID; 
	int32_t ChrSlot; 
	int32_t XP; 
	int32_t XP_Debt; 
	struct TArray<int32_t> UnlockedFlags; 
	bool IsDead; 
};

// ScriptStruct IcarusGenerated.ReqUpdateCharacterProspectLocation
struct FReqUpdateCharacterProspectLocation {
	struct FString ProspectID; 
	struct FString UserID; 
	int32_t ChrSlot; 
	enum class EProspectLocation Location; 
};

// ScriptStruct IcarusGenerated.ReqUpdateCosmetics
struct FReqUpdateCosmetics {
	struct FString UserID; 
	int32_t ChrSlot; 
	struct FCharacterCosmetics CharacterCosmeticsData; 
};

// ScriptStruct IcarusGenerated.ReqUpdateFactionMissionProgress
struct FReqUpdateFactionMissionProgress {
	struct FString UserID; 
	int32_t ChrSlot; 
	struct FString ProspectID; 
	struct FActiveFactionMission MissionProgress; 
};

// ScriptStruct IcarusGenerated.ReqUpdateProspect
struct FReqUpdateProspect {
	struct FString ProspectID; 
	int64_t UpdateTime; 
	int32_t ElapsedTime; 
	bool HasProspectBlob; 
	struct FProspectBlob ProspectBlob; 
	bool IsLeavingGame; 
};

// ScriptStruct IcarusGenerated.ReqUpdateTrackedStats
struct FReqUpdateTrackedStats {
	struct FString UserID; 
	int32_t ChrSlot; 
	struct FString ProspectID; 
	struct TArray<struct FTrackedStat> TrackedStats; 
};

// ScriptStruct IcarusGenerated.ResAddMetaInventoryItem
struct FResAddMetaInventoryItem {
	bool Success; 
};

// ScriptStruct IcarusGenerated.ResAddMetaResource
struct FResAddMetaResource {
	bool Success; 
};

// ScriptStruct IcarusGenerated.ResGetFactionMissionProgress
struct FResGetFactionMissionProgress {
	bool Success; 
	struct FActiveFactionMission MissionProgress; 
};

// ScriptStruct IcarusGenerated.ResGetTrackedStats
struct FResGetTrackedStats {
	bool Success; 
	struct TArray<struct FTrackedStat> TrackedStats; 
};

// ScriptStruct IcarusGenerated.ResGetWorkshopPacks
struct FResGetWorkshopPacks {
	bool Success; 
	struct TArray<struct FWorkshopPack> WorkshopPacks; 
};

// ScriptStruct IcarusGenerated.WorkshopPack
struct FWorkshopPack {
	struct FString Name; 
	struct TArray<struct FString> Categories; 
	struct TArray<struct FString> Tags; 
	struct TArray<struct FString> WorkshopItemsRow; 
	struct TArray<struct FMetaResource> MetaCost; 
};

// ScriptStruct IcarusGenerated.ResLobbyStats
struct FResLobbyStats {
	bool Success; 
	int32_t QueueSize; 
	float MessagesReadyRate; 
	struct FMaintenanceStatus Maintenance; 
};

// ScriptStruct IcarusGenerated.ResPurchaseWorkshopPack
struct FResPurchaseWorkshopPack {
	bool Success; 
	struct FInventoryDelta InventoryDelta; 
	struct TArray<struct FMetaResource> MetaResourceDelta; 
};

// ScriptStruct IcarusGenerated.Vector3
struct FVector3 {
	int32_t X; 
	int32_t Y; 
	int32_t Z; 
};


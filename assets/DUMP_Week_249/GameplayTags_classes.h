// Class GameplayTags.BlueprintGameplayTagLibrary
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {

	bool RemoveGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool NotEqual_TagTag(struct FGameplayTag A, struct FString B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool NotEqual_TagContainerTagContainer(struct FGameplayTagContainer A, struct FString B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool NotEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool NotEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool MatchesTag(struct FGameplayTag TagOne, struct FGameplayTag TagTwo, bool bExactMatch); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool MatchesAnyTags(struct FGameplayTag TagOne, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FGameplayTagContainer MakeLiteralGameplayTagContainer(struct FGameplayTagContainer Value); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FGameplayTag MakeLiteralGameplayTag(struct FGameplayTag Value); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FGameplayTagQuery MakeGameplayTagQuery(struct FGameplayTagQuery TagQuery); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FGameplayTagContainer MakeGameplayTagContainerFromTag(struct FGameplayTag SingleTag); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FGameplayTagContainer MakeGameplayTagContainerFromArray(struct TArray<struct FGameplayTag>& GameplayTags); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool IsTagQueryEmpty(struct FGameplayTagQuery& TagQuery); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool IsGameplayTagValid(struct FGameplayTag GameplayTag); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool HasTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag, bool bExactMatch); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool HasAnyTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool HasAllTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool HasAllMatchingGameplayTags(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTagContainer& OtherContainer); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FName GetTagName(struct FGameplayTag& GameplayTag); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	int32_t GetNumGameplayTagsInContainer(struct FGameplayTagContainer& TagContainer); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FString GetDebugStringFromGameplayTagContainer(struct FGameplayTagContainer& TagContainer); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FString GetDebugStringFromGameplayTag(struct FGameplayTag GameplayTag); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void GetAllActorsOfClassMatchingTagQuery(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FGameplayTagQuery& GameplayTagQuery, struct TArray<struct AActor*>& OutActors); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool EqualEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool EqualEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool DoesTagAssetInterfaceHaveTag(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTag Tag); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool DoesContainerMatchTagQuery(struct FGameplayTagContainer& TagContainer, struct FGameplayTagQuery& TagQuery); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void BreakGameplayTagContainer(struct FGameplayTagContainer& GameplayTagContainer, struct TArray<struct FGameplayTag>& GameplayTags); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void AppendGameplayTagContainers(struct FGameplayTagContainer& InOutTagContainer, struct FGameplayTagContainer& InTagContainer); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void AddGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class GameplayTags.GameplayTagAssetInterface
struct UGameplayTagAssetInterface : UInterface {

	bool HasMatchingGameplayTag(struct FGameplayTag TagToCheck); // (Native|Public|BlueprintCallable|BlueprintPure|Const)
	bool HasAnyMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	bool HasAllMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	void GetOwnedGameplayTags(struct FGameplayTagContainer& TagContainer); // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
};

// Class GameplayTags.EditableGameplayTagQuery
struct UEditableGameplayTagQuery : UObject {
	struct FString UserDescription; 
	struct UEditableGameplayTagQueryExpression* RootExpression; 
	struct FGameplayTagQuery TagQueryExportText_Helper; 
};

// Class GameplayTags.EditableGameplayTagQueryExpression
struct UEditableGameplayTagQueryExpression : UObject {
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; 
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; 
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; 
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; 
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; 
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; 
};

// Class GameplayTags.GameplayTagsManager
struct UGameplayTagsManager : UObject {
	struct TMap<struct FName, struct FGameplayTagSource> TagSources; 
	struct TArray<struct UDataTable*> GameplayTagTables; 
};

// Class GameplayTags.GameplayTagsList
struct UGameplayTagsList : UObject {
	struct FString ConfigFileName; 
	struct TArray<struct FGameplayTagTableRow> GameplayTagList; 
};

// Class GameplayTags.RestrictedGameplayTagsList
struct URestrictedGameplayTagsList : UObject {
	struct FString ConfigFileName; 
	struct TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; 
};

// Class GameplayTags.GameplayTagsSettings
struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; 
	bool WarnOnInvalidTags; 
	bool ClearInvalidTags; 
	bool FastReplication; 
	struct FString InvalidTagCharacters; 
	struct TArray<struct FGameplayTagCategoryRemap> CategoryRemapping; 
	struct TArray<struct FSoftObjectPath> GameplayTagTableList; 
	struct TArray<struct FGameplayTagRedirect> GameplayTagRedirects; 
	struct TArray<struct FName> CommonlyReplicatedTags; 
	int32_t NumBitsForContainerSize; 
	int32_t NetIndexFirstBitSegment; 
	struct TArray<struct FRestrictedConfigInfo> RestrictedConfigFiles; 
};

// Class GameplayTags.GameplayTagsDeveloperSettings
struct UGameplayTagsDeveloperSettings : UDeveloperSettings {
	struct FString DeveloperConfigName; 
	struct FName FavoriteTagSource; 
};


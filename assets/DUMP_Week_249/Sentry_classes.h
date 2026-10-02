// Class Sentry.SentryAttachment
struct USentryAttachment : UObject {

	void InitializeWithPath(struct FString Path, struct FString Filename, struct FString ContentType); // (Final|Native|Public|BlueprintCallable)
	void InitializeWithData(struct TArray<char>& Data, struct FString Filename, struct FString ContentType); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct FString GetPath(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetFilename(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<char> GetData(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetContentType(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Sentry.SentryBreadcrumb
struct USentryBreadcrumb : UObject {

	void SetType(struct FString Type); // (Final|Native|Public|BlueprintCallable)
	void SetMessage(struct FString Message); // (Final|Native|Public|BlueprintCallable)
	void SetLevel(enum class ESentryLevel Level); // (Final|Native|Public|BlueprintCallable)
	void SetData(struct TMap<struct FString, struct FString>& Data); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetCategory(struct FString Category); // (Final|Native|Public|BlueprintCallable)
	struct FString GetType(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetMessage(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class ESentryLevel GetLevel(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TMap<struct FString, struct FString> GetData(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetCategory(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Sentry.SentryEvent
struct USentryEvent : UObject {

	void SetMessage(struct FString Message); // (Final|Native|Public|BlueprintCallable)
	void SetLevel(enum class ESentryLevel Level); // (Final|Native|Public|BlueprintCallable)
	struct FString GetMessage(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class ESentryLevel GetLevel(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Sentry.SentryId
struct USentryId : UObject {
};

// Class Sentry.SentryLibrary
struct USentryLibrary : UBlueprintFunctionLibrary {

	struct TArray<char> StringToBytesArray(struct FString inString); // (Final|Native|Static|Public|BlueprintCallable)
	struct FString SaveStringToFile(struct FString inString, struct FString Filename); // (Final|Native|Static|Public|BlueprintCallable)
	struct USentryUserFeedback* CreateSentryUserFeedback(struct USentryId* EventId, struct FString Name, struct FString Email, struct FString Comments); // (Final|Native|Static|Public|BlueprintCallable)
	struct USentryUser* CreateSentryUser(struct FString Email, struct FString ID, struct FString UserName, struct FString IpAddress, struct TMap<struct FString, struct FString>& Data); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct USentryEvent* CreateSentryEvent(struct FString Message, enum class ESentryLevel Level); // (Final|Native|Static|Public|BlueprintCallable)
	struct USentryBreadcrumb* CreateSentryBreadcrumb(struct FString Message, struct FString Type, struct FString Category, struct TMap<struct FString, struct FString>& Data, enum class ESentryLevel Level); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct USentryAttachment* CreateSentryAttachmentWithPath(struct FString Path, struct FString Filename, struct FString ContentType); // (Final|Native|Static|Public|BlueprintCallable)
	struct USentryAttachment* CreateSentryAttachmentWithData(struct TArray<char>& Data, struct FString Filename, struct FString ContentType); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct FString ByteArrayToString(struct TArray<char>& Array); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class Sentry.SentryScope
struct USentryScope : UObject {

	void SetTagValue(struct FString Key, struct FString Value); // (Final|Native|Public|BlueprintCallable)
	void SetTags(struct TMap<struct FString, struct FString>& Tags); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetLevel(enum class ESentryLevel Level); // (Final|Native|Public|BlueprintCallable)
	void SetFingerprint(struct TArray<struct FString>& Fingerprint); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetExtraValue(struct FString Key, struct FString Value); // (Final|Native|Public|BlueprintCallable)
	void SetExtras(struct TMap<struct FString, struct FString>& Extras); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetEnvironment(struct FString Environment); // (Final|Native|Public|BlueprintCallable)
	void SetDist(struct FString Dist); // (Final|Native|Public|BlueprintCallable)
	void SetContext(struct FString Key, struct TMap<struct FString, struct FString>& Values); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void RemoveTag(struct FString Key); // (Final|Native|Public|BlueprintCallable)
	void RemoveExtra(struct FString Key); // (Final|Native|Public|BlueprintCallable)
	void RemoveContext(struct FString Key); // (Final|Native|Public|BlueprintCallable)
	struct FString GetTagValue(struct FString Key); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TMap<struct FString, struct FString> GetTags(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	enum class ESentryLevel GetLevel(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct FString> GetFingerprint(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetExtraValue(struct FString Key); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TMap<struct FString, struct FString> GetExtras(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetEnvironment(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetDist(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void ClearBreadcrumbs(); // (Final|Native|Public|BlueprintCallable)
	void ClearAttachments(); // (Final|Native|Public|BlueprintCallable)
	void Clear(); // (Final|Native|Public|BlueprintCallable)
	void AddBreadcrumb(struct USentryBreadcrumb* Breadcrumb); // (Final|Native|Public|BlueprintCallable)
	void AddAttachment(struct USentryAttachment* Attachment); // (Final|Native|Public|BlueprintCallable)
};

// Class Sentry.SentrySettings
struct USentrySettings : UObject {
	struct FString DsnUrl; 
	struct FString Release; 
	bool InitAutomatically; 
	struct FAutomaticBreadcrumbs AutomaticBreadcrumbs; 
	bool UploadSymbolsAutomatically; 
	struct FString PropertiesFilePath; 
};

// Class Sentry.SentrySubsystem
struct USentrySubsystem : UGameInstanceSubsystem {

	void SetUser(struct USentryUser* User); // (Final|Native|Public|BlueprintCallable)
	void SetTag(struct FString Key, struct FString Value); // (Final|Native|Public|BlueprintCallable)
	void SetLevel(enum class ESentryLevel Level); // (Final|Native|Public|BlueprintCallable)
	void SetContext(struct FString Key, struct TMap<struct FString, struct FString>& Values); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void RemoveUser(); // (Final|Native|Public|BlueprintCallable)
	void RemoveTag(struct FString Key); // (Final|Native|Public|BlueprintCallable)
	void InitializeWithSettings(struct FDelegate& OnConfigureSettings); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void Initialize(); // (Final|Native|Public|BlueprintCallable)
	void ConfigureScope(struct FDelegate& OnConfigureScope); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void Close(); // (Final|Native|Public|BlueprintCallable)
	void ClearBreadcrumbs(); // (Final|Native|Public|BlueprintCallable)
	void CaptureUserFeedbackWithParams(struct USentryId* EventId, struct FString Email, struct FString Comments, struct FString Name); // (Final|Native|Public|BlueprintCallable)
	void CaptureUserFeedback(struct USentryUserFeedback* UserFeedback); // (Final|Native|Public|BlueprintCallable)
	struct USentryId* CaptureMessageWithScope(struct FString Message, struct FDelegate& OnConfigureScope, enum class ESentryLevel Level); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct USentryId* CaptureMessage(struct FString Message, enum class ESentryLevel Level); // (Final|Native|Public|BlueprintCallable)
	struct USentryId* CaptureEventWithScope(struct USentryEvent* Event, struct FDelegate& OnConfigureScope); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct USentryId* CaptureEvent(struct USentryEvent* Event); // (Final|Native|Public|BlueprintCallable)
	void AddBreadcrumbWithParams(struct FString Message, struct FString Category, struct FString Type, struct TMap<struct FString, struct FString>& Data, enum class ESentryLevel Level); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void AddBreadcrumb(struct USentryBreadcrumb* Breadcrumb); // (Final|Native|Public|BlueprintCallable)
};

// Class Sentry.SentryUser
struct USentryUser : UObject {

	void SetUsername(struct FString UserName); // (Final|Native|Public|BlueprintCallable)
	void SetIpAddress(struct FString IpAddress); // (Final|Native|Public|BlueprintCallable)
	void SetId(struct FString ID); // (Final|Native|Public|BlueprintCallable)
	void SetEmail(struct FString Email); // (Final|Native|Public|BlueprintCallable)
	void SetData(struct TMap<struct FString, struct FString>& Data); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct FString GetUsername(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetIpAddress(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetId(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetEmail(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TMap<struct FString, struct FString> GetData(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class Sentry.SentryUserFeedback
struct USentryUserFeedback : UObject {

	void SetName(struct FString Name); // (Final|Native|Public|BlueprintCallable)
	void SetEmail(struct FString Email); // (Final|Native|Public|BlueprintCallable)
	void SetComment(struct FString Comments); // (Final|Native|Public|BlueprintCallable)
	void Initialize(struct USentryId* EventId); // (Final|Native|Public|BlueprintCallable)
	struct FString GetName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetEmail(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetComment(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};


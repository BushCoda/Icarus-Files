// Enum Sentry.ESentryLevel
enum class ESentryLevel : uint8 {
	Debug = 0,
	Info = 1,
	Warning = 2,
	Error = 3,
	Fatal = 4,
	ESentryLevel_MAX = 5
};

// ScriptStruct Sentry.AutomaticBreadcrumbs
struct FAutomaticBreadcrumbs {
	bool bOnMapLoadingStarted; 
	bool bOnMapLoaded; 
	bool bOnGameStateClassChanged; 
	bool bOnGameSessionIDChanged; 
	bool bOnUserActivityStringChanged; 
};


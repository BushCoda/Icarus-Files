// Class Overlay.Overlays
struct UOverlays : UObject {
};

// Class Overlay.BasicOverlays
struct UBasicOverlays : UOverlays {
	struct TArray<struct FOverlayItem> Overlays; 
};

// Class Overlay.LocalizedOverlays
struct ULocalizedOverlays : UOverlays {
	struct UBasicOverlays* DefaultOverlays; 
	struct TMap<struct FString, struct UBasicOverlays*> LocaleToOverlaysMap; 
};


// WidgetBlueprintGeneratedClass IcarusCompassWidget.IcarusCompassWidget_C
struct UIcarusCompassWidget_C : UIcarusCompassWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UOverlay* CompassContainer; 
	struct UImage* CompassFrame; 
	struct UOverlay* CompassOverlay; 
	struct UImage* DialImageWidget; 
	struct URetainerBox* RetainerBox_EdgeTransparency; 
	struct UBorder* SearchAreaHighlight; 
	struct UMaterialInstanceDynamic* Dynamic Mat; 
	struct UIcarusCompassWaypoint_C* CompassWaypointWidgets; 
	struct TArray<struct UUMG_IcarusCompassIcon_C*> AddedIconWidgets; 
	bool SetSearchAreaHighlight; 

	void ShouldDisplayIcon(struct UIcarusMapIconComponent* IconComponent, bool& ShouldDisplay); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void RemoveWaypoint(struct UIcarusCompassIcon* CompassWidget); // (Public|BlueprintCallable|BlueprintEvent)
	void RemoveWaypointComponentOld(struct UIcarusMapIconComponent* MapIconComponent); // (Public|BlueprintCallable|BlueprintEvent)
	void AddWaypoint(struct UIcarusMapIconComponent* MapIcon); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void Construct(); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void StatsUpdated(); // (BlueprintCallable|BlueprintEvent)
	void AddWaypointComponent(struct UIcarusMapIconComponent* MapIconComponent); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void RemoveWaypointWidget(struct UIcarusCompassIcon* CompassIcon); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void RemoveWaypointComponent(struct UIcarusMapIconComponent* MapIconComponent); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void CheckSearchAreaHighlight(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_IcarusCompassWidget(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


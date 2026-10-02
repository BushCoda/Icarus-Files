// WidgetBlueprintGeneratedClass UMG_FloatingDamageNumber.UMG_FloatingDamageNumber_C
struct UUMG_FloatingDamageNumber_C : UW_ProjectionWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* TextFade; 
	struct UImage* CritIcon; 
	struct UTextBlock* CritText; 
	struct UImage* Icon_ExtraStrongCritPoint; 
	struct UImage* Icon_ExtraWeakCritPoint; 
	struct UImage* Icon_NoCritDamage; 
	struct UImage* Icon_Ricochet; 
	struct UImage* Icon_StrongCritPoint; 
	struct UImage* Icon_WeakCritPoint; 
	struct UHorizontalBox* MainHBox; 
	struct UOverlay* Overlay_IconContainer; 
	struct UImage* ReturnIcon; 
	struct UTextBlock* Text; 
	int32_t DefaultFontSize; 
	struct UObject* Font Family; 
	struct FText !; 

	void ShowCriticalHitImages(struct FCriticalHitAreasEnum Critical); // (Public|BlueprintCallable|BlueprintEvent)
	void AdjustFontForCriticalHit(struct FText Damage, struct FCriticalHitAreasEnum CriticalHitType); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdateVisuals(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void Set Scale(float Scale); // (BlueprintCallable|BlueprintEvent)
	void PlayFadeOutAnim(bool CriticalHit); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_FloatingDamageNumber(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


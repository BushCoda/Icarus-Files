// WidgetBlueprintGeneratedClass UMG_InWorld_GreatHunt_BossInfo.UMG_InWorld_GreatHunt_BossInfo_C
struct UUMG_InWorld_GreatHunt_BossInfo_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UImage* Background; 
	struct UImage* Image_94; 
	struct UImage* Image_Timer; 
	struct UOverlay* MainOverlay; 
	struct UTextBlock* Name; 
	struct UBorder* NameBorder; 
	struct UTextBlock* Number; 
	struct UProgressBar* RespawnBar; 
	struct USizeBox* RespawnInfo; 
	struct UTextBlock* respawntext; 
	struct UTextBlock* RespawnText_Returns; 
	struct UScrollBox* ScrollBox_166; 
	struct UBorder* Unavailable; 
	struct FWorldBossesRowHandle Boss; 
	struct FDLCPackageDataRowHandle DLC Data; 
	struct TMap<struct FWorldBossesRowHandle, struct TSoftObjectPtr<UTexture2D>> BossToImage; 
	struct ABP_Mission_Communication_Upgradeable_C* Communicator; 

	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void UpdateTimer(); // (BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void SetBoss(struct FWorldBossesRowHandle Boss); // (BlueprintCallable|BlueprintEvent)
	void TryInitialise(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_InWorld_GreatHunt_BossInfo(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


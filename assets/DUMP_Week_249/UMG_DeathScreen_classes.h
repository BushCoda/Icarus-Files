// WidgetBlueprintGeneratedClass UMG_DeathScreen.UMG_DeathScreen_C
struct UUMG_DeathScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UUMG_Keybind_C* HoldFKeybind; 
	struct URetainerBox* HoldRespawnRetainer; 
	struct URetainerBox* MissionTimer; 
	struct UUMG_PhysicalKeyPrompt_C* NextPlayer; 
	struct UTextBlock* PlayerName; 
	struct UUMG_PhysicalKeyPrompt_C* PrevPlayer; 
	struct URetainerBox* RespawnCountRetainer; 
	struct UTextBlock* RespawnCountText; 
	struct UTextBlock* respawntext; 
	struct URetainerBox* TitleRetainer; 
	struct UUMG_BasicButton_2_C* UMG_BasicButton_GiveUp; 
	struct UUMG_Chatbox_C* UMG_Chatbox; 
	struct UIcarusCompassWidget_C* UMG_IcarusCompassWidget; 
	struct UUMG_KeybindPrompt_C* UMG_KeybindPrompt; 
	struct UUMG_MissionTimer_C* UMG_MissionTimer; 
	float RespawnTimer; 
	struct FTimerHandle Timer; 
	int32_t RespawnsRemaining; 

	void UpdateRespawnText(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ResetRespawnButton(); // (Public|BlueprintCallable|BlueprintEvent)
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_DeathScreen(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


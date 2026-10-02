// WidgetBlueprintGeneratedClass UMG_ClaimLaunch_LobbyPrivacy.UMG_ClaimLaunch_LobbyPrivacy_C
struct UUMG_ClaimLaunch_LobbyPrivacy_C : UUMG_ArrowSelectionWidget_Text_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	enum class ELobbyPrivacy DefaultSelection; 
	struct TMap<enum class ELobbyPrivacy, struct FText> LobbyPrivacyTexts; 

	void GetLobbyPrivacy(enum class ELobbyPrivacy& LobbyPrivacy); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void PreConstruct(bool IsDesignTime); // (BlueprintCosmetic|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_UMG_ClaimLaunch_LobbyPrivacy(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


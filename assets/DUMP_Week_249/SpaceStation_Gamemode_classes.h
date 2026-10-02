// BlueprintGeneratedClass SpaceStation_Gamemode.SpaceStation_Gamemode_C
struct ASpaceStation_Gamemode_C : AIcarusGameModeBase {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	bool InProgress; 
	struct FString HostName; 
	struct FString ProspectRow; 
	int32_t EpochTime; 
	struct FFProspectServerInfo SessionProspectInfo; 

	void RequestSessionSettings(); // (BlueprintCallable|BlueprintEvent)
	void UpdateProspectInfo(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_SpaceStation_Gamemode(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


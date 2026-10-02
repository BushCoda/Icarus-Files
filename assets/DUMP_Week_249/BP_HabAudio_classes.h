// BlueprintGeneratedClass BP_HabAudio.BP_HabAudio_C
struct ABP_HabAudio_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	struct FMusicSubsystemConfig MusicConfig; 
	bool HabAudioEnabled; 
	struct UFMODAudioComponent* DioramaAmbience; 

	void ClearDioramaAmbience(bool IsEndingPlay); // (Public|BlueprintCallable|BlueprintEvent)
	void SetDioramaAmbience(struct UFMODEvent* FMODEvent); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void SetHabAudioEnabled(bool Enabled); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_HabAudio(int32_t EntryPoint); // (Final|UbergraphFunction)
};


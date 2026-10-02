// BlueprintGeneratedClass SpaceStation_GameState.SpaceStation_GameState_C
struct ASpaceStation_GameState_C : AIcarusGameStateSpace {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USceneComponent* DefaultSceneRoot; 
	struct FMulticastInlineDelegate ShowLoadingScreen; 
	struct FMulticastInlineDelegate SharePercentagesChanged; 
	struct FMulticastInlineDelegate ReadyStateChanged; 
	struct FFProspectServerInfo Contract; 
	struct FMulticastInlineDelegate ContractUpdated; 
	struct ABP_DialogueManager_C* DialogueManager; 

	void OnRep_Contract(); // (BlueprintCallable|BlueprintEvent)
	void SetContract(struct FFProspectServerInfo New Contract); // (Public|BlueprintCallable|BlueprintEvent)
	void MULTICAST_ShowLoadingScreen(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void OnServer_UnreadyAllPlayers(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ExecuteUbergraph_SpaceStation_GameState(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void ContractUpdated__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ReadyStateChanged__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void SharePercentagesChanged__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void ShowLoadingScreen__DelegateSignature(bool Show); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


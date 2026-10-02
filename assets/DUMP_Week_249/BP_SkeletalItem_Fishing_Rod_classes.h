// BlueprintGeneratedClass BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C
struct ABP_SkeletalItem_Fishing_Rod_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UCableComponent* FishingLine; 
	struct UChildActorComponent* Lure; 
	struct UFMODAudioComponent* CastAudio; 
	struct USceneComponent* LureAttach; 
	struct USceneComponent* AttachPoint; 
	bool Reeling; 
	bool IsFishOnLine; 
	bool FullyCasted; 
	struct FItemData FishItemData; 
	float CastLength; 
	float VerticalReelSpeed; 
	float HorizontalReelSpeed; 
	float MaxCastLength; 
	float MinLureDistance; 
	float MaxLureDistance; 
	struct ABP_Fishing_Rod_Lure_C* LureActor; 
	bool WasCastIntoWater; 
	struct FMulticastInlineDelegate FishAdded; 
	float PickupDistance; 
	struct UUMG_UserInterface_C* UserInterface; 
	struct UNiagaraComponent* ThrashingVFX; 

	bool IsLureTooClose(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void Is Lure Overlapping Water(bool& IsFloating); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	bool IsLureTooFar(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnRep_FishItemData(); // (BlueprintCallable|BlueprintEvent)
	void GivePlayerFish(); // (Public|BlueprintCallable|BlueprintEvent)
	void DoesHaveLure(bool& HasLure, struct FItemData& CurrentLure); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsCasted(bool& Casted); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void LaunchLure(struct FVector Velocity); // (Public|BlueprintCallable|BlueprintEvent)
	void GetLure(struct ABP_Fishing_Rod_Lure_C*& Lure); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void ResetLure(); // (Public|BlueprintCallable|BlueprintEvent)
	void LureCollide(); // (Public|BlueprintCallable|BlueprintEvent)
	void LureOverlap(); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void MULTI_OnCasted(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void MULTI_OnLanded(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void MULTI_OnReset(bool WasPreviouslyCasted); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void Server_BobLure(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void MULTI_OnBobLure(); // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent)
	void SetNSRotation(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Fishing_Rod(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void FishAdded__DelegateSignature(); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


// BlueprintGeneratedClass BP_Mission_NPC_FisherOwner.BP_Mission_NPC_FisherOwner_C
struct ABP_Mission_NPC_FisherOwner_C : ABP_Mission_NPC_Reward_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* Backpack; 
	struct USkeletalMeshComponent* Can; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	struct USkeletalMeshComponent* Head; 
	struct USkeletalMeshComponent* Armour_Head; 
	struct USkeletalMeshComponent* Armour_Arms; 
	struct USkeletalMeshComponent* Armour_Feet; 
	struct USkeletalMeshComponent* Armour_Legs; 
	struct USkeletalMeshComponent* Armour_Chest; 
	struct AFishBoardController* FishingController; 
	bool bContestActive; 

	void RegisterDialogueSpeaker(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void InspectFish(struct FItemData Fish, struct APlayerController* Player); // (BlueprintCallable|BlueprintEvent)
	void OnNPCDataUpdated(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_Mission_NPC_FisherOwner(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


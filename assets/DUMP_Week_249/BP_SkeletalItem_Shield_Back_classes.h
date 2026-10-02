// BlueprintGeneratedClass BP_SkeletalItem_Shield_Back.BP_SkeletalItem_Shield_Back_C
struct ABP_SkeletalItem_Shield_Back_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct USkeletalMeshComponent* SkeletalMesh; 
	struct FItemData ShieldItem; 

	void OnRep_Item Data(); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_80ED98D14DF2AA1232DDA287390DB216(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void UpdateShieldItem(); // (BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Shield_Back(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


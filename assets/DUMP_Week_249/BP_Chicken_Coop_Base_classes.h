// BlueprintGeneratedClass BP_Chicken_Coop_Base.BP_Chicken_Coop_Base_C
struct ABP_Chicken_Coop_Base_C : ABP_DeployableContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct USceneComponent* NavLinkExitEnd; 
	struct USceneComponent* NavLinkExitStart; 
	struct USceneComponent* NavLinkEntryEnd; 
	struct USceneComponent* NavLinkEntryStart; 
	struct USceneComponent* Nests; 
	struct USceneComponent* Nest_09; 
	struct USceneComponent* Nest_08; 
	struct USceneComponent* Nest_06; 
	struct USceneComponent* Nest_05; 
	struct USceneComponent* Nest_03; 
	struct USceneComponent* Nest_02; 
	struct USceneComponent* Nest_01; 
	int32_t NavModifierUID; 
	struct UIcarusNavLinkCustomComponent* EntryNavLink; 
	struct UIcarusNavLinkCustomComponent* ExitNavLink; 

	bool IsLinkPathfindingAllowed(struct UObject* Querier); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const)
	void CheckReachable(); // (Public|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void OnBecomeInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void OnNoLongerInteractedWith(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Chicken_Coop_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


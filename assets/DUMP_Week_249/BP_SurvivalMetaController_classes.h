// BlueprintGeneratedClass BP_SurvivalMetaController.BP_SurvivalMetaController_C
struct UBP_SurvivalMetaController_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct FMissionReport MissionReport; 
	bool HasReceivedMissionReport; 

	void GetOwningController(struct ABP_IcarusPlayerControllerSurvival_C*& Controller); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void GetMetaItemsAndResources(struct TArray<struct FItemData>& MetaItems, struct TArray<struct FMetaResource>& MetaResources); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void LeaveByDropship_ShowMissionReport(); // (BlueprintCallable|BlueprintEvent)
	void ServerRequestMissionReport(); // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent)
	void ClientReceiveMissionReport(struct FMissionReport Report); // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SurvivalMetaController(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// BlueprintGeneratedClass BP_ActionableBehaviour_FireArm_FireController_LegendarySniper.BP_ActionableBehaviour_FireArm_FireController_LegendarySniper_C
struct UBP_ActionableBehaviour_FireArm_FireController_LegendarySniper_C : UBP_ActionableBehaviour_FireArm_FireController_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraSystem* Niagara_A_Silencer; 
	struct UNiagaraSystem* Niagara_B_MatchGrade; 
	struct UNiagaraSystem* Niagara_C_Extended; 
	struct UNiagaraSystem* Niagara_Base; 
	struct UNiagaraSystem* Niagara_Chamber; 
	struct UNiagaraComponent* ChamberSmoke; 

	void PlayMuzzleFlash(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_LegendarySniper(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


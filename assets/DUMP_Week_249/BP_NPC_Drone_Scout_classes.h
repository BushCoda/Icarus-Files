// BlueprintGeneratedClass BP_NPC_Drone_Scout.BP_NPC_Drone_Scout_C
struct ABP_NPC_Drone_Scout_C : ABP_NPC_Drone_C {
	struct UNiagaraComponent* NS_Drone_EngineHeat_M; 
	struct UNiagaraComponent* NS_Drone_EngineHeat_R; 
	struct UNiagaraComponent* NS_Drone_EngineHeat_L; 
	struct USphereComponent* CriticalArea_WingRear; 
	struct USphereComponent* CriticalArea_BodyStrong; 
	struct UCapsuleComponent* Capsule_L; 
	struct UCapsuleComponent* Capsule_R; 

	struct TMap<struct UPrimitiveComponent*, struct FCriticalHitAreasEnum> GetCriticalHitAreas(); // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
};


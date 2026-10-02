// BlueprintGeneratedClass BP_Windmill.BP_Windmill_C
struct ABP_Windmill_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* ActiveParticle4; 
	struct UNiagaraComponent* ActiveParticle3; 
	struct UNiagaraComponent* ActiveParticle2; 
	struct UNiagaraComponent* ActiveParticle1; 
	struct UNiagaraComponent* NS_WindmillGrains1; 
	struct UNiagaraComponent* NS_WindmillGrains; 
	struct UStaticMeshComponent* Proxy_WetProcess_Black; 
	struct UStaticMeshComponent* SM_DEP_Windmill_Props_Milkcans_Contents2; 
	struct UStaticMeshComponent* SM_DEP_Windmill_Props_Contents6; 
	struct UNiagaraComponent* Smoke15; 
	struct UNiagaraComponent* Smoke14; 
	struct UStaticMeshComponent* Proxy_WetProcess_Green; 
	struct UStaticMeshComponent* SM_DEP_Windmill_Props_Milkcans_Contents1; 
	struct UStaticMeshComponent* SM_DEP_Windmill_Props_Contents5; 
	struct UNiagaraComponent* Smoke13; 
	struct UNiagaraComponent* Smoke12; 
	struct UStaticMeshComponent* SM_DEP_Windmill_Props_Sacks_Contents3; 
	struct UStaticMeshComponent* SM_DEP_Windmill_Props_Contents4; 
	struct UNiagaraComponent* Smoke11; 
	struct UNiagaraComponent* Smoke10; 
	struct UStaticMeshComponent* Proxy_DryProcess_Black; 
	struct UStaticMeshComponent* SM_DEP_Windmill_Props_Sacks_Contents2; 
	struct UStaticMeshComponent* SM_DEP_Windmill_Props_Contents3; 
	struct UNiagaraComponent* Smoke9; 
	struct UNiagaraComponent* Smoke8; 
	struct UStaticMeshComponent* Proxy_DryProcess_White; 
	struct UStaticMeshComponent* SM_DEP_Windmill_Props_Contents1; 
	struct UNiagaraComponent* Smoke5; 
	struct UNiagaraComponent* Smoke4; 
	struct UStaticMeshComponent* SM_DEP_Milkcan_Closed5; 
	struct UStaticMeshComponent* SM_DEP_Milkcan_Closed4; 
	struct UStaticMeshComponent* SM_DEP_Milkcan_Closed2; 
	struct UStaticMeshComponent* SM_DEP_Milkcan_Closed1; 
	struct UStaticMeshComponent* SM_DEP_Milkcan_Closed; 
	struct UStaticMeshComponent* SM_PRP_Sack_Vertical1; 
	struct UStaticMeshComponent* SM_DEP_Milkcan_Closed7; 
	struct UStaticMeshComponent* SM_PRP_Sack_Horizontal5; 
	struct UStaticMeshComponent* SM_PRP_Sack_Horizontal4; 
	struct UStaticMeshComponent* SM_PRP_Sack_Horizontal2; 
	struct UStaticMeshComponent* SM_PRP_Sack_Horizontal1; 
	struct UStaticMeshComponent* SM_PRP_Sack_Horizontal; 
	struct UStaticMeshComponent* SM_PRP_Sack_Vertical; 
	struct UStaticMeshComponent* Proxy_WetProcess_Orange; 
	struct UStaticMeshComponent* SM_DEP_Windmill_Props_Milkcans_Contents; 
	struct UNiagaraComponent* Smoke3; 
	struct UNiagaraComponent* Smoke2; 
	struct UStaticMeshComponent* SM_DEP_Windmill_Props_Sacks_Contents; 
	struct UStaticMeshComponent* SM_DEP_Windmill_Props_Contents; 
	struct UBPC_Recipe_Proxy_C* BPC_Recipe_Proxy; 
	struct UStaticMeshComponent* SM_DEP_Windmill_Prop_Blades; 
	struct UStaticMeshComponent* Proxy_DryProcess_Orange; 
	struct UFMODAudioComponent* FMODAudioTurbine; 
	struct UStaticMeshComponent* CollisionZone; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	bool Powered; 
	bool Sheltered; 
	bool Clear; 

	void GetWeatherResourceModifierStrengthAndType(int32_t BaseModifierEffectiveness, struct FModifierStatesRowHandle Modifier, int32_t& PowerModifierEffectiveness, int32_t& WaterModifierEffectiveness); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetWidgetClass(struct UUserWidget*& Widget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdatePoweredEffects(); // (Public|BlueprintCallable|BlueprintEvent)
	void ApplyWeatherResourceModifierFunction(int32_t Percent, struct FModifierStatesRowHandle Modifier); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Powered(); // (BlueprintCallable|BlueprintEvent)
	void CheckForPower(bool ForceUpdate); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void CheckForPowerHeartbeat(); // (BlueprintCallable|BlueprintEvent)
	void OnHighlighted(struct UHighlightableComponent* Highlightable, struct UPrimitiveComponent* Component, bool bHighlighted); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ClearWeatherResourceModifier(); // (Public|BlueprintCallable|BlueprintEvent)
	void PowerDamageTimer(); // (BlueprintCallable|BlueprintEvent)
	void StateUpdated(bool bIsActive); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Windmill(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


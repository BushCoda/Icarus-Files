// BlueprintGeneratedClass BP_SkeletalItem_Mining_Laser.BP_SkeletalItem_Mining_Laser_C
struct ABP_SkeletalItem_Mining_Laser_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_HeatHaze; 
	struct UNiagaraComponent* NS_MiningLaserBeam_Overheat; 
	struct UNiagaraComponent* NS_Steam_Tiny; 
	struct UPointLightComponent* PointLight; 
	struct UNiagaraComponent* NS_MiningLaser; 
	struct UFillableComponent* Fillable; 
	int32_t StoredUnits; 
	bool WantOn; 
	struct UNiagaraComponent* PilotLightRef; 
	float HeatValue; 
	bool IsOverheated; 
	struct UMaterialInstanceDynamic* DynMatRef; 
	struct UCurveLinearColor* Curve; 
	struct AIcarusPlayerCharacter* OwningPlayer; 

	void UpdateHeat(float NewHeat, bool IsOverheated); // (Public|BlueprintCallable|BlueprintEvent)
	void SetItemVisible(bool bVisible); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void UpdateLaserTarget(struct FVector TargetLocation); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ToggleParticle(bool Play); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_SkeletalItem_Mining_Laser(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


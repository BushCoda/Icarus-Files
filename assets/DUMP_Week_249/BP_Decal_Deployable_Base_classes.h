// BlueprintGeneratedClass BP_Decal_Deployable_Base.BP_Decal_Deployable_Base_C
struct ABP_Decal_Deployable_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_UIProjectionLocation_C* BP_UIProjectionLocation; 
	struct UDecalComponent* Decal1; 
	struct UDecalComponent* Decal; 
	struct UStaticMeshComponent* GrassBlocker5; 
	struct UStaticMeshComponent* GrassBlocker4; 
	struct UStaticMeshComponent* GrassBlocker3; 
	struct UStaticMeshComponent* GrassBlocker2; 
	struct UStaticMeshComponent* GrassBlocker1; 
	struct UArrowComponent* Arrow5; 
	struct UArrowComponent* Arrow4; 
	struct UArrowComponent* Arrow3; 
	struct UArrowComponent* Arrow2; 
	struct UArrowComponent* Arrow1; 
	struct TArray<bool> Block Grass; 
	struct TArray<enum class DecalSurface_Enum> Surface; 
	struct TArray<struct UMaterialInterface*> Decal Material; 
	struct UMaterialInstanceDynamic* Dynamic Material; 
	struct TArray<struct UArrowComponent*> DecalArrow; 
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterials; 
	struct FVector ActorPosition; 
	bool IsActorSet; 
	bool DestoyedByWeather; 
	struct TArray<struct UDecalComponent*> AddedDecals; 

	void SetDestroyedByWeather(bool Destroyed); // (Public|BlueprintCallable|BlueprintEvent)
	void HandleWeatherEvent(int32_t ModifierLevel); // (Public|BlueprintCallable|BlueprintEvent)
	void CreateOverflowBag(bool IncludeSelf, enum class EIcarusActorDestroyReason DestroyReason); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void Set Location(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Decal_Deployable_Base(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


// BlueprintGeneratedClass BP_GeothermalTerraces.BP_GeothermalTerraces_C
struct ABP_GeothermalTerraces_C : AWaterBody {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UNiagaraComponent* NS_SulfurGas_Up; 
	struct UNiagaraComponent* NS_GeoSteam; 
	struct UInteractableComponent* Interactable; 
	struct UHighlightableComponent* Highlightable; 
	struct UStaticMeshComponent* WaterPlane; 
	struct UStaticMeshComponent* StaticMesh; 
	struct USceneComponent* DefaultSceneRoot; 
	struct TArray<struct UStaticMesh*> Rock Meshes; 
	int32_t Type; 
	struct TArray<struct UStaticMesh*> Water Meshes; 
	bool Spawn Steam; 
	struct FAtmospheresEnum Atmosphere; 
	float Steam Radius; 
	float Steam Sprite Size; 
	float Spawn Amount; 
	struct FVector Particle Offset Position; 

	void Initialize(); // (Public|BlueprintCallable|BlueprintEvent)
	void UserConstructionScript(); // (Event|Public|BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Protected|BlueprintEvent)
	void ToggleSulfurGas(bool Active); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_GeothermalTerraces(int32_t EntryPoint); // (Final|UbergraphFunction)
};


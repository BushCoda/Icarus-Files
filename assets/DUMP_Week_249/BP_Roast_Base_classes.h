// BlueprintGeneratedClass BP_Roast_Base.BP_Roast_Base_C
struct ABP_Roast_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UStaticMeshComponent* SM_ITM_Cake_Plate; 
	struct UStaticMeshComponent* Piece_7; 
	struct UStaticMeshComponent* Piece_6; 
	struct UStaticMeshComponent* Piece_5; 
	struct UStaticMeshComponent* Piece_4; 
	struct UStaticMeshComponent* Piece_3; 
	struct UStaticMeshComponent* Piece_2; 
	struct TMap<struct FItemsStaticRowHandle, struct FItemTemplateRowHandle> ItemToGrant; 
	bool Slice1; 
	bool Slice2; 
	bool Slice3; 
	bool Slice4; 
	bool Slice5; 
	bool Slice6; 

	void GetItem(struct FItemTemplateRowHandle& ItemToGrant); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetCollisionForPiece(struct UPrimitiveComponent* Piece, bool PieceExists); // (Public|BlueprintCallable|BlueprintEvent)
	void CheckCleanup(); // (Public|BlueprintCallable|BlueprintEvent)
	void CreateOverflowBag(bool IncludeSelf, enum class EIcarusActorDestroyReason DestroyReason); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void SetPieceTaken(struct UStaticMeshComponent* Piece); // (Public|BlueprintCallable|BlueprintEvent)
	void OnRep_Slice6(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_Slice5(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_Slice4(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_Slice3(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_Slice2(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_Slice1(); // (BlueprintCallable|BlueprintEvent)
	void TakePiece(struct TArray<struct FName>& Tags, struct AActor* Interactor); // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void IcarusBeginPlay(); // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent)
	void TriggerAudio(); // (Net|NetMulticast|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Roast_Base(int32_t EntryPoint); // (Final|UbergraphFunction)
};


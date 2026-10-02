// BlueprintGeneratedClass BP_StaticItem_HitchingRope.BP_StaticItem_HitchingRope_C
struct ABP_StaticItem_HitchingRope_C : AStaticItem {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct ACharacter* LinkedCharacter; 
	struct AActor* LinkedHitchingPost; 
	enum class EMountMovementBehaviourState InitialMovementState; 
	struct UCableComponent* CableComponent; 

	void OnRep_LinkedHitchingPost(); // (BlueprintCallable|BlueprintEvent)
	void OnRep_LinkedCharacter(); // (HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetLinkedHitchingPost(struct AActor*& LinkedHitchingPost); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void SetLinkedHitchingPost(struct AActor* LinkedHitchingPost); // (Public|BlueprintCallable|BlueprintEvent)
	void AddCableComponent(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetLinkedCharacter(struct ACharacter*& LinkedCharacter); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void SetLinkedCharacter(struct ACharacter* LinkedCharacter); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Protected|BlueprintEvent)
	void ResetRope(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_StaticItem_HitchingRope(int32_t EntryPoint); // (Final|UbergraphFunction)
};


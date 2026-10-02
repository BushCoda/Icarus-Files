// BlueprintGeneratedClass BP_IcarusJumpLink.BP_IcarusJumpLink_C
struct ABP_IcarusJumpLink_C : AIcarusNavLink {
	struct FPointerToUberGraphFrame UberGraphFrame; 

	void LaunchAgent(struct ACharacter* Agent, struct FVector Destination); // (Public|BlueprintCallable|BlueprintEvent)
	void ReceiveSmartLinkReached(struct AActor* Agent, struct FVector& Destination); // (Event|Public|HasOutParms|BlueprintEvent)
	void JumpFinished(); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_IcarusJumpLink(int32_t EntryPoint); // (Final|UbergraphFunction)
};


// BlueprintGeneratedClass BP_BallisticBehaviour_FlareArrow.BP_BallisticBehaviour_FlareArrow_C
struct UBP_BallisticBehaviour_FlareArrow_C : UBP_BallisticBehaviour_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool HadUpwardsTrajectory; 
	float DesiredMaxSpeed; 
	float DesiredGravityScale; 
	bool Initialized; 
	float DeltaSeconds; 
	float Alpha; 
	float BlendSpeed; 
	float DefaultGravityScale; 
	float MaxSpeedAtLaunch; 

	void ReceiveTick(float DeltaSeconds); // (Event|Public|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_BallisticBehaviour_FlareArrow(int32_t EntryPoint); // (Final|UbergraphFunction)
};


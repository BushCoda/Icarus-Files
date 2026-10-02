// BlueprintGeneratedClass SpaceStation_PlayerCameraManager.SpaceStation_PlayerCameraManager_C
struct ASpaceStation_PlayerCameraManager_C : APlayerCameraManager {
	float InteractionAlpha; 
	struct ABP_InteractionSceneBase_C* CurrentInteraction; 
	struct FTransform OriginalTransform; 
	float InteractionBlendSpeed; 
	struct AIcarusPlayerCharacterSpace* Player; 

	void InteractionChangedCheck(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	bool BlueprintUpdateCamera(struct AActor* CameraTarget, struct FVector& NewCameraLocation, struct FRotator& NewCameraRotation, float& NewCameraFOV); // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
};


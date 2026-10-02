// Class SmoothSyncPlugin.SmoothSync
struct USmoothSync : UActorComponent {
	float interpolationBackTime; 
	enum class ExtrapolationMode ExtrapolationMode; 
	bool useExtrapolationTimeLimit; 
	float extrapolationTimeLimit; 
	bool useExtrapolationDistanceLimit; 
	float extrapolationDistanceLimit; 
	float sendPositionThreshold; 
	float sendRotationThreshold; 
	float sendScaleThreshold; 
	float sendVelocityThreshold; 
	float sendAngularVelocityThreshold; 
	float receivedPositionThreshold; 
	float receivedRotationThreshold; 
	float positionSnapThreshold; 
	float rotationSnapThreshold; 
	float scaleSnapThreshold; 
	float timeSmoothing; 
	float positionLerpSpeed; 
	float rotationLerpSpeed; 
	float scaleLerpSpeed; 
	enum class SyncMode syncPosition; 
	enum class SyncMode syncRotation; 
	enum class SyncMode syncScale; 
	enum class SyncMode syncVelocity; 
	enum class SyncMode syncAngularVelocity; 
	bool syncMovementMode; 
	bool isPositionCompressed; 
	bool isRotationCompressed; 
	bool isScaleCompressed; 
	bool isVelocityCompressed; 
	bool isAngularVelocityCompressed; 
	float sendRate; 
	bool isUsingOriginRebasing; 
	bool alwaysSendOrigin; 
	bool syncOwnershipChange; 
	struct USceneComponent* realComponentToSync; 
	float InterpolationTime; 
	float atRestPositionThreshold; 
	float atRestRotationThreshold; 

	void teleport(); // (Final|Native|Public|BlueprintCallable)
	void SmoothSyncTeleportServerToClients(struct FVector position, struct FVector Rotation, struct FVector Scale, float tempOwnerTime); // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults|NetValidate)
	void SmoothSyncTeleportClientToServer(struct FVector position, struct FVector Rotation, struct FVector Scale, float tempOwnerTime); // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate)
	void SmoothSyncEnableServerToClients(bool enable); // (Net|Native|Event|NetMulticast|Public|NetValidate)
	void SmoothSyncEnableClientToServer(bool enable); // (Net|Native|Event|Public|NetServer|NetValidate)
	void setSceneComponentToSync(struct USceneComponent* theComponent); // (Final|Native|Public|BlueprintCallable)
	void ServerSendsTransformToEveryone(struct TArray<char> Value); // (Net|Native|Event|NetMulticast|Public|NetValidate)
	bool IsSmoothSyncEnabled(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	void forceStateSendNextFrame(); // (Final|Native|Public|BlueprintCallable)
	void enableSmoothSync(bool enable); // (Final|Native|Public|BlueprintCallable)
	void ClientSendsTransformToServer(struct TArray<char> Value); // (Net|Native|Event|Public|NetServer|NetValidate)
	void clearBuffer(); // (Final|Native|Public|BlueprintCallable)
};


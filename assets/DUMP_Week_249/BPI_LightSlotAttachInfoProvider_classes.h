// BlueprintGeneratedClass BPI_LightSlotAttachInfoProvider.BPI_LightSlotAttachInfoProvider_C
struct UBPI_LightSlotAttachInfoProvider_C : UInterface {

	void UpdateCurrentOffset(struct FVector NewOffset); // (Public|BlueprintCallable|BlueprintEvent)
	void GetAttachmentOffset(struct FTransform& ThirdPersonActorOffset, struct FTransform& FirstPersonActorOffset, struct FVector& ThirdPersonComponentOffset); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetThirdPersonOnlyComponents(struct TArray<struct UPrimitiveComponent*>& OutComponents); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetComponentToOffset(struct USceneComponent*& Component); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GetLightSlotAttachPoint(enum class LightSlotAttachPoint& AttachPoint); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
};


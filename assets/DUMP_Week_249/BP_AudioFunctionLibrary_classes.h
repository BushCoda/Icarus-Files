// BlueprintGeneratedClass BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C
struct UBP_AudioFunctionLibrary_C : UBlueprintFunctionLibrary {

	void ShouldHitAudioBeSuppressedByCritZone(struct FHitResult& Hit, struct TArray<enum class EIcarusDamageType>& DamageTypes, struct UObject* __WorldContext, bool& Result); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	void GetDamageTypeFMODParam(enum class EIcarusDamageType DamageType, struct UObject* __WorldContext, enum class EDamageTypeFMODParam& FMODParamValue); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void IsPlayerInAudioPerspective(struct AIcarusPlayerCharacter* Player, enum class EAudioPlayerPerspective Perspective, struct UObject* __WorldContext, bool& Result); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetFMODAudioComponentEvent(struct UFMODAudioComponent* AudioComponent, struct UFMODEvent* Event, bool SetPlayStatePlaying, struct UObject* __WorldContext); // (Static|Public|BlueprintCallable|BlueprintEvent)
	void GetPlayerTypeFMODParam(struct AIcarusPlayerCharacter* Player, struct UObject* __WorldContext, enum class EPlayerTypeFMODParam& PlayerTypeFMODParam); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void GetSurfaceFMODParam(enum class EPhysicalSurface Surface, struct UObject* __WorldContext, enum class ESurfaceFMODParam& SurfaceFMODParam); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void SetPlayerTypeParameter(struct FFMODEventInstance EventInstance, struct AIcarusPlayerCharacter* Player, struct UObject* __WorldContext); // (Static|Public|BlueprintCallable|BlueprintEvent)
	void SetPlayerTypeParameterAttached(struct UFMODAudioComponent* AudioComponent, struct AIcarusPlayerCharacter* Player, struct UObject* __WorldContext); // (Static|Public|BlueprintCallable|BlueprintEvent)
};


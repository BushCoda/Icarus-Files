// BlueprintGeneratedClass BP_FirearmCosmeticController.BP_FirearmCosmeticController_C
struct UBP_FirearmCosmeticController_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool IsCharging; 
	float CurrentChargePower; 
	float AmmoCount; 
	bool Reloading; 
	struct AIcarusPlayerCharacterSurvival* OwningPlayer; 
	struct TMap<struct UFMODAudioComponent*, struct FFirearmSoundData> PersistentAudioComponents; 
	struct FFirearmData FirearmData; 
	struct FMulticastInlineDelegate OnWeaponAnimationStart; 
	struct FMulticastInlineDelegate OnWeaponAnimationEnd; 
	struct FMulticastInlineDelegate OnFirstPersonAnimationStart; 
	struct FMulticastInlineDelegate OnFirstPersonAnimationEnd; 
	struct FMulticastInlineDelegate OnThirdPersonAnimationStart; 
	struct FMulticastInlineDelegate OnThirdPersonAnimationEnd; 
	bool IsAiming; 

	void GetMontageSection(struct UAnimMontage* InMontage, struct FName& Section); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
	void PlayUseWhenBrokenSound(); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePersistentAudioAim(bool NewIsAiming); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePersistentAudioAmmo(bool NewReloading, int32_t NewAmmoCount); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void UpdatePersistentAudioCharge(bool NewIsCharging, float NewChargeStrength); // (Public|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StopAllAnimations(); // (Public|BlueprintCallable|BlueprintEvent)
	void GetOwnerMeshComponent(struct USkeletalMeshComponent*& AsSkeletal Mesh Component, bool& Valid); // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent)
	void UpdateAudioPerspective(); // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StopPersistentAudio(); // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent)
	void StartPersistentAudio(); // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent)
	void PlaySound(struct FFirearmSoundData& FirearmSoundData); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void OnLoaded_7360B0564CB85F370942C3B80E39A7D0(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_C53A0FD242A9B8B751A78CB687B7525F(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_7557AEF245E6D67F8F49EAB57EBF424D(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_7557AEF245E6D67F8F49EAB57EBF424D(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_7557AEF245E6D67F8F49EAB57EBF424D(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_7557AEF245E6D67F8F49EAB57EBF424D(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_7557AEF245E6D67F8F49EAB57EBF424D(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_C93749A8437E973B82F6A6B1DDAF9114(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_C93749A8437E973B82F6A6B1DDAF9114(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_C93749A8437E973B82F6A6B1DDAF9114(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_C93749A8437E973B82F6A6B1DDAF9114(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_C93749A8437E973B82F6A6B1DDAF9114(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_BC042C45467AE8FEAC9DC8A98CD47577(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_BC042C45467AE8FEAC9DC8A98CD47577(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_BC042C45467AE8FEAC9DC8A98CD47577(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_BC042C45467AE8FEAC9DC8A98CD47577(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_BC042C45467AE8FEAC9DC8A98CD47577(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_5E9404AA4EE74E72C03B48AF2552BB9B(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_5E9404AA4EE74E72C03B48AF2552BB9B(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_5E9404AA4EE74E72C03B48AF2552BB9B(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_5E9404AA4EE74E72C03B48AF2552BB9B(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_5E9404AA4EE74E72C03B48AF2552BB9B(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_C8C3925C475373B80C198BA66441AF28(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_C8C3925C475373B80C198BA66441AF28(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_C8C3925C475373B80C198BA66441AF28(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_C8C3925C475373B80C198BA66441AF28(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_C8C3925C475373B80C198BA66441AF28(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnLoaded_9EF4BFB7466C8DDCB5918A9FF636F7A4(struct UObject* Loaded); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyEnd_539C986F4D8A2FC5C814DDBC2AADA456(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnNotifyBegin_539C986F4D8A2FC5C814DDBC2AADA456(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnInterrupted_539C986F4D8A2FC5C814DDBC2AADA456(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnBlendOut_539C986F4D8A2FC5C814DDBC2AADA456(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void OnCompleted_539C986F4D8A2FC5C814DDBC2AADA456(struct FName NotifyName, struct UAnimNotify* Notify); // (BlueprintCallable|BlueprintEvent)
	void LoadAndPlayWeaponAnimation(struct TSoftObjectPtr<UObject>& WeaponAnimationReference, float PlayRateScale, float FixedTime, struct FName CallbackId, struct FName ScaleBasedOnSection, float StartPosition); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void LoadAndPlayFirstPersonAnimation(struct TSoftObjectPtr<UObject>& FirstPersonAnimationReference, float PlayRateScale, float FixedTime, struct FName CallbackId, struct FName ScaleBasedOnSection, float StartPosition); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void LoadAndPlayThirdPersonAnimation(struct TSoftObjectPtr<UObject>& ThirdPersonAnimationReference, float PlayRateScale, float FixedTime, struct FName CallbackId, struct FName ScaleBasedOnSection, float StartPosition); // (HasOutParms|BlueprintCallable|BlueprintEvent)
	void PlayAnimations(struct TSoftObjectPtr<UObject> MeshAnimationReference, struct TSoftObjectPtr<UObject> FirstPersonAnimation, struct TSoftObjectPtr<UObject> ThirdPersonAnimation, float PlayRateScale, float FixedDuration, struct FName CallbackId, struct FName ScaleBasedOnMontageSection, float StartPosition); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_FirearmCosmeticController(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
	void OnThirdPersonAnimationEnd__DelegateSignature(struct FName AnimationId); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnThirdPersonAnimationStart__DelegateSignature(struct FName AnimationId); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnFirstPersonAnimationEnd__DelegateSignature(struct FName AnimationId); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnFirstPersonAnimationStart__DelegateSignature(struct FName AnimationId); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnWeaponAnimationEnd__DelegateSignature(struct FName AnimationId); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
	void OnWeaponAnimationStart__DelegateSignature(struct FName AnimationId); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


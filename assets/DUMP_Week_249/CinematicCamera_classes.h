// Class CinematicCamera.CameraRig_Rail
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; 
	bool bLockOrientationToRail; 
	struct USceneComponent* TransformComponent; 
	struct USplineComponent* RailSplineComponent; 
	struct USceneComponent* RailCameraMount; 

	struct USplineComponent* GetRailSplineComponent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
};

// Class CinematicCamera.CameraRig_Crane
struct ACameraRig_Crane : AActor {
	float CranePitch; 
	float CraneYaw; 
	float CraneArmLength; 
	bool bLockMountPitch; 
	bool bLockMountYaw; 
	struct USceneComponent* TransformComponent; 
	struct USceneComponent* CraneYawControl; 
	struct USceneComponent* CranePitchControl; 
	struct USceneComponent* CraneCameraMount; 
};

// Class CinematicCamera.CineCameraActor
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; 

	struct UCineCameraComponent* GetCineCameraComponent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class CinematicCamera.CineCameraComponent
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; 
	struct FCameraFilmbackSettings Filmback; 
	struct FCameraLensSettings LensSettings; 
	struct FCameraFocusSettings FocusSettings; 
	float CurrentFocalLength; 
	float CurrentAperture; 
	float CurrentFocusDistance; 
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; 
	struct TArray<struct FNamedLensPreset> LensPresets; 
	struct FString DefaultFilmbackPresetName; 
	struct FString DefaultFilmbackPreset; 
	struct FString DefaultLensPresetName; 
	float DefaultLensFocalLength; 
	float DefaultLensFStop; 

	void SetLensPresetByName(struct FString InPresetName); // (Final|Native|Public|BlueprintCallable)
	void SetFilmbackPresetByName(struct FString InPresetName); // (Final|Native|Public|BlueprintCallable)
	void SetCurrentFocalLength(float InFocalLength); // (Final|Native|Public|BlueprintCallable)
	float GetVerticalFieldOfView(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // (Final|Native|Static|Public|BlueprintCallable)
	struct FString GetLensPresetName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	float GetHorizontalFieldOfView(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy(); // (Final|Native|Static|Public|BlueprintCallable)
	struct FString GetFilmbackPresetName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetDefaultFilmbackPresetName(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};


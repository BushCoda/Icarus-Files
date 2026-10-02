// BlueprintGeneratedClass BP_CaveLightController.BP_CaveLightController_C
struct UBP_CaveLightController_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	bool IntensityAdvanced; 
	float IntensityOverride; 
	bool ColorAdvanced; 
	struct FLinearColor ColorOverride; 
	bool DirectionAdvanced; 
	struct FRotator DirectionOverride; 
	struct ABP_AtmosphereController_C* AtmosphereController; 
	float CurrentIntensity; 
	struct FRotator CurrentSunDirection; 
	struct FLinearColor CurrentColour; 
	float Time; 
	int32_t StartHour; 
	float StartMinute; 
	struct FMulticastInlineDelegate LightDetails; 
	float EntranceFade; 
	float Entrance; 

	struct ABP_AtmosphereController_C* GetAtmosphereController(); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	void AtmosphereControllerInput(struct FRotator& SunDirection, float& Intensity, struct FLinearColor& Color, float& Entrance); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void SunLightDirection(struct FRotator SunDirection); // (BlueprintCallable|BlueprintEvent)
	void EventSetup(); // (BlueprintCallable|BlueprintEvent)
	void SunLightColor(struct FLinearColor Color, float Intensity, float CaveCover); // (BlueprintCallable|BlueprintEvent)
	void WeatherManTick(); // (BlueprintCallable|BlueprintEvent)
	void ReceiveBeginPlay(); // (Event|Public|BlueprintEvent)
	void ExecuteUbergraph_BP_CaveLightController(int32_t EntryPoint); // (Final|UbergraphFunction)
	void LightDetails__DelegateSignature(float Intensity Out, struct FLinearColor Color OUT, struct FRotator Sun Direction Out); // (Public|Delegate|BlueprintCallable|BlueprintEvent)
};


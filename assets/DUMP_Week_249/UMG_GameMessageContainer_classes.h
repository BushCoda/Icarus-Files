// WidgetBlueprintGeneratedClass UMG_GameMessageContainer.UMG_GameMessageContainer_C
struct UUMG_GameMessageContainer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UWidgetAnimation* BlinkAll; 
	struct UVerticalBox* MessageContainer; 
	float WarnThreshold_Water; 
	float WarnThreshold_Health; 
	float WarnThreshold_Food; 
	float WarnThreshold_Oxygen; 
	float WarnThreshold_Exposure; 
	struct FFMODEventInstance Sound; 

	void AddMessage(bool Error, struct FText Message, float LifeTimeOverride); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_UMG_GameMessageContainer(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


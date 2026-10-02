// WidgetBlueprintGeneratedClass ActorRow.ActorRow_C
struct UActorRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UTextBlock* TextBlock_57; 
	struct FText ActorName; 
	struct AActor* Actor; 

	void AddActor(struct AActor* Actor); // (BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_ActorRow(int32_t EntryPoint); // (Final|UbergraphFunction|HasDefaults)
};


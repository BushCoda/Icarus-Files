// BlueprintGeneratedClass BP_Brazier.BP_Brazier_C
struct ABP_Brazier_C : ABP_Light_Fire_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; 
	struct UBP_IcarusPointLight_C* BP_IcarusPointLight_Large; 
	struct UPointLightComponent* PointLight_SmallBounce; 
	struct UNiagaraComponent* Niagara_Brazier; 

	void GetWidgetClass(struct UUserWidget*& Widget); // (Public|HasOutParms|BlueprintCallable|BlueprintEvent)
	void GeneratorStateUpdate(bool Active); // (Public|BlueprintCallable|BlueprintEvent)
	void Snow(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Sand(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void Ash(float Intensity); // (Public|BlueprintCallable|BlueprintEvent)
	void DeactivateCampfire(); // (BlueprintCallable|BlueprintEvent)
	void Rain(int32_t Millilitres); // (Public|BlueprintCallable|BlueprintEvent)
	void ExecuteUbergraph_BP_Brazier(int32_t EntryPoint); // (Final|UbergraphFunction)
};


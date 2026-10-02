// BlueprintGeneratedClass IcarusSurvivalFunctionLibrary.IcarusSurvivalFunctionLibrary_C
struct UIcarusSurvivalFunctionLibrary_C : UBlueprintFunctionLibrary {

	void GetBestSafeTeleportLocationForPlayer(struct AIcarusPlayerCharacter* PlayerCharacter, struct UObject* __WorldContext, struct FVector& OutLocation); // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent)
	struct ABP_IcarusPlayerControllerSurvival_C* GetIcarusPlayerControllerSurvivalBP(int32_t PlayerIndex, struct UObject* __WorldContext, bool& Valid); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
	struct ABP_IcarusPlayerCharacterSurvival_C* GetIcarusPlayerCharacterSurvivalBP(int32_t PlayerIndex, struct UObject* __WorldContext, bool& Valid); // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure)
};


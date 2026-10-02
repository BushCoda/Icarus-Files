// Class GameplayTexture.GameplayTexture
struct UGameplayTexture : UObject {
	struct TArray<struct FColor> TextureData; 
	struct FIntPoint CachedResolution; 
	struct UTexture2D* SourceTexture; 
	struct FIntPoint Resolution; 
	struct FVector2D BeginUV; 
	struct FVector2D EndUV; 

	struct UTexture2D* GetSourceTexture(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class GameplayTexture.GameplayTextureFunctionLibrary
struct UGameplayTextureFunctionLibrary : UBlueprintFunctionLibrary {

	struct TArray<struct FColor> GetUniqueColours(struct UGameplayTexture* Texture); // (Final|Native|Static|Public|BlueprintCallable)
};


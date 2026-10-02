// Class SubstanceCore.SubstanceGraphInstance
struct USubstanceGraphInstance : UObject {
	struct FString PackageURL; 
	struct USubstanceInstanceFactory* ParentFactory; 
	struct TMap<uint32_t, struct UTexture2D*> ImageSources; 
	struct UMaterial* CreatedMaterial; 
	struct UMaterialInstanceConstant* ConstantCreatedMaterial; 
	struct UMaterialInstanceDynamic* DynamicCreatedMaterial; 
	struct TMap<int32_t, struct FGuid> OutputTextureLinkData; 
	struct TMap<uint32_t, struct USubstanceOutputData*> OutputInstances; 
	bool bIsFrozen; 

	void SetInputString(struct FString Identifier, struct FString Value); // (Final|Native|Public|BlueprintCallable)
	void SetInputInt(struct FString Identifier, struct TArray<int32_t>& InputValues); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool SetInputImg(struct FString InputName, struct UObject* Value); // (Final|Native|Public|BlueprintCallable)
	void SetInputFloat(struct FString Identifier, struct TArray<float>& InputValues); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetInputColor(struct FString Identifier, struct FLinearColor& Color); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetInputBool(struct FString Identifier, bool Bool); // (Final|Native|Public|BlueprintCallable)
	void RenderSync(); // (Final|Native|Public|BlueprintCallable)
	struct TArray<struct FString> GetOutputNames(); // (Final|Native|Public|BlueprintCallable)
	struct FSubstanceIntInputDesc GetIntInputDesc(struct FString Identifier); // (Final|Native|Public|BlueprintCallable)
	struct FSubstanceInstanceDesc GetInstanceDesc(); // (Final|Native|Public|BlueprintCallable)
	enum class ESubstanceInputType GetInputType(struct FString InputName); // (Final|Native|Public|BlueprintCallable)
	struct FString GetInputString(struct FString Identifier); // (Final|Native|Public|BlueprintCallable)
	struct TArray<struct FString> GetInputNames(); // (Final|Native|Public|BlueprintCallable)
	struct TArray<int32_t> GetInputInt(struct FString Identifier); // (Final|Native|Public|BlueprintCallable)
	struct TArray<float> GetInputFloat(struct FString Identifier); // (Final|Native|Public|BlueprintCallable)
	struct FLinearColor GetInputColor(struct FString Identifier); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	bool GetInputBool(struct FString Identifier); // (Final|Native|Public|BlueprintCallable)
	struct FSubstanceFloatInputDesc GetFloatInputDesc(struct FString Identifier); // (Final|Native|Public|BlueprintCallable)
	struct UMaterialInstanceDynamic* GetDynamicMaterialInstance(struct FName Name, struct UMaterial* InParentMaterial); // (Final|Native|Public|BlueprintCallable)
	struct UMaterialInstanceConstant* GetConstantMaterial(); // (Final|Native|Public|BlueprintCallable)
	void EnableOutput(struct FString Identifier, bool Value); // (Final|Native|Public|BlueprintCallable)
	struct USubstanceGraphInstance* Duplicate(); // (Final|Native|Public|BlueprintCallable)
	void CreateOutputs(); // (Final|Native|Public|BlueprintCallable)
	void CreateMaterial(struct FString PackageName, struct UMaterial* ParentMaterial); // (Final|Native|Public|BlueprintCallable)
};

// Class SubstanceCore.SubstanceInstanceFactory
struct USubstanceInstanceFactory : UObject {
	struct TArray<struct USubstanceGraphInstance*> mGraphInstances; 
	struct FString RelativeSourceFilePath; 
	struct FString AbsoluteSourceFilePath; 
	struct FString SourceFileTimestamp; 
	enum class ESubstanceGenerationMode GenerationMode; 

	struct TArray<struct USubstanceGraphInstance*> GetGraphInstances(); // (Final|Native|Public|BlueprintCallable)
	struct TArray<struct FSubstanceGraphDesc> GetGraphDescs(); // (Final|Native|Public|BlueprintCallable)
	struct USubstanceGraphInstance* CreateGraphInstance(struct FSubstanceGraphDesc GraphDesc, struct FString PackageName); // (Final|Native|Public|BlueprintCallable)
};

// Class SubstanceCore.SubstanceOutputData
struct USubstanceOutputData : UObject {
	struct UObject* ConnectedObject; 
	struct FMaterialParameterInfo ParamInfo; 
	struct USubstanceGraphInstance* ParentInstance; 
	struct FGuid CacheGuid; 
};

// Class SubstanceCore.SubstanceSettings
struct USubstanceSettings : UObject {
	int32_t MemoryBudgetMb; 
	int32_t CPUCores; 
	int32_t AsyncLoadMipClip; 
	int32_t MaxAsyncSubstancesRenderedPerFrame; 
	enum class ESubstanceEngineType SubstanceEngine; 
	enum class EDefaultSubstanceTextureSize DefaultSubstanceOutputSizeX; 
	enum class EDefaultSubstanceTextureSize DefaultSubstanceOutputSizeY; 
	struct TSoftObjectPtr<UMaterialInterface> DefaultTemplateMaterial; 
};

// Class SubstanceCore.SubstanceTexture2D
struct USubstanceTexture2D : UTexture2DDynamic {
	struct USubstanceGraphInstance* ParentInstance; 
	enum class TextureAddress AddressX; 
	enum class TextureAddress AddressY; 
	bool bCooked; 
};

// Class SubstanceCore.SubstanceUtility
struct USubstanceUtility : UBlueprintFunctionLibrary {

	void SyncRendering(struct USubstanceGraphInstance* InstancesToRender); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	void SetGraphInstanceOutputSizeInt(struct USubstanceGraphInstance* GraphInstance, int32_t Width, int32_t Height); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	void SetGraphInstanceOutputSize(struct USubstanceGraphInstance* GraphInstance, enum class ESubstanceTextureSize Width, enum class ESubstanceTextureSize Height); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	void ResetInputParameters(struct USubstanceGraphInstance* GraphInstance); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	struct TArray<struct UTexture2D*> GetSubstanceTextures(struct USubstanceGraphInstance* GraphInstance); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	struct TArray<struct USubstanceGraphInstance*> GetSubstances(struct UMaterialInterface* Material); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	float GetSubstanceLoadingProgress(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	struct TArray<struct UMaterial*> GetSubstanceIncludedMaterials(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	struct FString GetGraphName(struct USubstanceGraphInstance* GraphInstance); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	struct FString GetFactoryName(struct USubstanceGraphInstance* GraphInstance); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	void EnableInstanceOutputs(struct UObject* WorldContextObject, struct USubstanceGraphInstance* GraphInstance, struct TArray<int32_t> OutputIndices); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	struct USubstanceGraphInstance* DuplicateGraphInstance(struct UObject* WorldContextObject, struct USubstanceGraphInstance* GraphInstance); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	void DisableInstanceOutputs(struct UObject* WorldContextObject, struct USubstanceGraphInstance* GraphInstance, struct TArray<int32_t> OutputIndices); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	struct USubstanceGraphInstance* CreateGraphInstance(struct UObject* WorldContextObject, struct USubstanceInstanceFactory* Factory, int32_t GraphDescIndex, struct UMaterial* ParentMaterial, struct FString InstanceName); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	struct USubstanceInstanceFactory* CreateAggregateSubstanceFactory(struct USubstanceInstanceFactory* OutputFactory, int32_t OutputFactoryGraphIndex, struct USubstanceInstanceFactory* InputFactory, int32_t InputFactoryGraphIndex, struct TArray<struct FSubstanceConnection>& Connections); // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable)
	void CopyInputParameters(struct USubstanceGraphInstance* SourceGraphInstance, struct USubstanceGraphInstance* DestGraphInstance); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	void ClearCache(); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
	void AsyncRendering(struct USubstanceGraphInstance* InstancesToRender); // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable)
};


// Class VariantManagerContent.LevelVariantSets
struct ULevelVariantSets : UObject {
	struct UObject* DirectorClass; 
	struct TArray<struct UVariantSet*> VariantSets; 

	struct UVariantSet* GetVariantSetByName(struct FString VariantSetName); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	struct UVariantSet* GetVariantSet(int32_t VariantSetIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	int32_t GetNumVariantSets(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
};

// Class VariantManagerContent.LevelVariantSetsActor
struct ALevelVariantSetsActor : AActor {
	struct FSoftObjectPath LevelVariantSets; 
	struct TMap<struct UObject*, struct ULevelVariantSetsFunctionDirector*> DirectorInstances; 

	bool SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName); // (Final|Native|Public|BlueprintCallable)
	bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex); // (Final|Native|Public|BlueprintCallable)
	void SetLevelVariantSets(struct ULevelVariantSets* InVariantSets); // (Final|Native|Public|BlueprintCallable)
	struct ULevelVariantSets* GetLevelVariantSets(bool bLoad); // (Final|Native|Public|BlueprintCallable)
};

// Class VariantManagerContent.LevelVariantSetsFunctionDirector
struct ULevelVariantSetsFunctionDirector : UObject {
};

// Class VariantManagerContent.PropertyValue
struct UPropertyValue : UObject {
	struct TArray<struct TFieldPath<FProperty>> Properties; 
	struct TArray<int32_t> PropertyIndices; 
	struct TArray<struct FCapturedPropSegment> CapturedPropSegments; 
	struct FString FullDisplayString; 
	struct FName PropertySetterName; 
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults; 
	bool bHasRecordedData; 
	struct UObject* LeafPropertyClass; 
	struct TArray<char> ValueBytes; 
	enum class EPropertyValueCategory PropCategory; 

	bool HasRecordedData(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FText GetPropertyTooltip(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FString GetFullDisplayString(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class VariantManagerContent.PropertyValueTransform
struct UPropertyValueTransform : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueVisibility
struct UPropertyValueVisibility : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueColor
struct UPropertyValueColor : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueMaterial
struct UPropertyValueMaterial : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueOption
struct UPropertyValueOption : UPropertyValue {
};

// Class VariantManagerContent.PropertyValueSoftObject
struct UPropertyValueSoftObject : UPropertyValue {
};

// Class VariantManagerContent.SwitchActor
struct ASwitchActor : AActor {
	struct USceneComponent* SceneComponent; 
	int32_t LastSelectedOption; 

	void SelectOption(int32_t OptionIndex); // (Final|Native|Public|BlueprintCallable)
	int32_t GetSelectedOption(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct AActor*> GetOptions(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};

// Class VariantManagerContent.Variant
struct UVariant : UObject {
	struct TArray<struct FVariantDependency> Dependencies; 
	struct FText DisplayText; 
	struct TArray<struct UVariantObjectBinding*> ObjectBindings; 
	struct UTexture2D* Thumbnail; 

	void SwitchOn(); // (Final|Native|Public|BlueprintCallable)
	void SetThumbnailFromTexture(struct UTexture2D* NewThumbnail); // (Final|Native|Public|BlueprintCallable)
	void SetThumbnailFromFile(struct FString FilePath); // (Final|Native|Public|BlueprintCallable)
	void SetThumbnailFromEditorViewport(); // (Final|Native|Public|BlueprintCallable)
	void SetThumbnailFromCamera(struct UObject* WorldContextObject, struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetDisplayText(struct FText& NewDisplayText); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetDependency(int32_t Index, struct FVariantDependency& Dependency); // (Final|Native|Public|HasOutParms)
	bool IsActive(); // (Final|Native|Public|BlueprintCallable)
	struct UTexture2D* GetThumbnail(); // (Final|Native|Public|BlueprintCallable)
	struct UVariantSet* GetParent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	int32_t GetNumDependencies(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	int32_t GetNumActors(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	struct FText GetDisplayText(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct TArray<struct UVariant*> GetDependents(struct ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies); // (Final|Native|Public|BlueprintCallable)
	struct FVariantDependency GetDependency(int32_t Index); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	struct AActor* GetActor(int32_t ActorIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	void DeleteDependency(int32_t Index); // (Final|Native|Public)
	int32_t AddDependency(struct FVariantDependency& Dependency); // (Final|Native|Public|HasOutParms)
};

// Class VariantManagerContent.VariantObjectBinding
struct UVariantObjectBinding : UObject {
	struct FString CachedActorLabel; 
	struct FSoftObjectPath ObjectPtr; 
	LazyObjectProperty LazyObjectPtr; 
	struct TArray<struct UPropertyValue*> CapturedProperties; 
	struct TArray<struct FFunctionCaller> FunctionCallers; 
};

// Class VariantManagerContent.VariantSet
struct UVariantSet : UObject {
	struct FText DisplayText; 
	bool bExpanded; 
	struct TArray<struct UVariant*> Variants; 
	struct UTexture2D* Thumbnail; 

	void SetThumbnailFromTexture(struct UTexture2D* NewThumbnail); // (Final|Native|Public|BlueprintCallable)
	void SetThumbnailFromFile(struct FString FilePath); // (Final|Native|Public|BlueprintCallable)
	void SetThumbnailFromEditorViewport(); // (Final|Native|Public|BlueprintCallable)
	void SetThumbnailFromCamera(struct UObject* WorldContextObject, struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetDisplayText(struct FText& NewDisplayText); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct UVariant* GetVariantByName(struct FString VariantName); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	struct UVariant* GetVariant(int32_t VariantIndex); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	struct UTexture2D* GetThumbnail(); // (Final|Native|Public|BlueprintCallable)
	struct ULevelVariantSets* GetParent(); // (Final|Native|Public|BlueprintCallable|BlueprintPure)
	int32_t GetNumVariants(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
	struct FText GetDisplayText(); // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const)
};


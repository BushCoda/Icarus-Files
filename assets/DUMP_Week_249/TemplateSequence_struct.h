// Enum TemplateSequence.ETemplateSectionPropertyScaleType
enum class ETemplateSectionPropertyScaleType : uint8 {
	FloatProperty = 0,
	TransformPropertyLocationOnly = 1,
	TransformPropertyRotationOnly = 2,
	ETemplateSectionPropertyScaleType_MAX = 3
};

// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
struct FTemplateSequenceBindingOverrideData {
	struct TWeakObjectPtr<struct UObject> Object; 
	bool bOverridesDefault; 
};

// ScriptStruct TemplateSequence.TemplateSectionPropertyScale
struct FTemplateSectionPropertyScale {
	struct FGuid ObjectBinding; 
	struct FMovieScenePropertyBinding PropertyBinding; 
	enum class ETemplateSectionPropertyScaleType PropertyScaleType; 
	struct FMovieSceneFloatChannel FloatChannel; 
};


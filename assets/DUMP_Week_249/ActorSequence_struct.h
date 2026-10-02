// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8 {
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2,
	EActorSequenceObjectReferenceType_MAX = 3
};

// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
struct FActorSequenceObjectReferenceMap {
	struct TArray<struct FGuid> BindingIds; 
	struct TArray<struct FActorSequenceObjectReferences> References; 
};

// ScriptStruct ActorSequence.ActorSequenceObjectReferences
struct FActorSequenceObjectReferences {
	struct TArray<struct FActorSequenceObjectReference> Array; 
};

// ScriptStruct ActorSequence.ActorSequenceObjectReference
struct FActorSequenceObjectReference {
	enum class EActorSequenceObjectReferenceType Type; 
	struct FGuid ActorId; 
	struct FString PathToComponent; 
};


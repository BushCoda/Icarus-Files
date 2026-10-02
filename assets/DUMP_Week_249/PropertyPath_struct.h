// ScriptStruct PropertyPath.CachedPropertyPath
struct FCachedPropertyPath {
	struct TArray<struct FPropertyPathSegment> Segments; 
	struct UFunction* CachedFunction; 
};

// ScriptStruct PropertyPath.PropertyPathSegment
struct FPropertyPathSegment {
	struct FName Name; 
	int32_t ArrayIndex; 
	struct UStruct* Struct; 
};


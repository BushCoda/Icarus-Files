// ScriptStruct Serialization.StructSerializerTestStruct
struct FStructSerializerTestStruct {
	struct FStructSerializerNumericTestStruct Numerics; 
	struct FStructSerializerBooleanTestStruct Booleans; 
	struct FStructSerializerObjectTestStruct Objects; 
	struct FStructSerializerBuiltinTestStruct Builtins; 
	struct FStructSerializerArrayTestStruct Arrays; 
	struct FStructSerializerMapTestStruct Maps; 
	struct FStructSerializerSetTestStruct Sets; 
};

// ScriptStruct Serialization.StructSerializerSetTestStruct
struct FStructSerializerSetTestStruct {
	struct TSet<struct FString> StrSet; 
	struct TSet<int32_t> IntSet; 
	struct TSet<struct FName> NameSet; 
	struct TSet<struct FStructSerializerBuiltinTestStruct> StructSet; 
};

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
struct FStructSerializerBuiltinTestStruct {
	struct FGuid Guid; 
	struct FName Name; 
	struct FString String; 
	struct FText Text; 
	struct FVector Vector; 
	struct FVector4 Vector4; 
	struct FRotator Rotator; 
	struct FQuat Quat; 
	struct FColor Color; 
};

// ScriptStruct Serialization.StructSerializerMapTestStruct
struct FStructSerializerMapTestStruct {
	struct TMap<int32_t, struct FString> IntToStr; 
	struct TMap<struct FString, struct FString> StrToStr; 
	struct TMap<struct FString, struct FVector> StrToVec; 
	struct TMap<struct FString, struct FStructSerializerBuiltinTestStruct> StrToStruct; 
};

// ScriptStruct Serialization.StructSerializerArrayTestStruct
struct FStructSerializerArrayTestStruct {
	struct TArray<int32_t> Int32Array; 
	struct TArray<char> ByteArray; 
	int32_t StaticSingleElement; 
	int32_t StaticInt32Array[0x3]; 
	float StaticFloatArray[0x3]; 
	struct TArray<struct FVector> VectorArray; 
	struct TArray<struct FStructSerializerBuiltinTestStruct> StructArray; 
};

// ScriptStruct Serialization.StructSerializerObjectTestStruct
struct FStructSerializerObjectTestStruct {
	struct UObject* Class; 
	struct UMetaData* SubClass; 
	struct TSoftClassPtr<UObject> SoftClass; 
	struct UObject* Object; 
	struct TWeakObjectPtr<struct UMetaData> WeakObject; 
	struct TSoftObjectPtr<UMetaData> SoftObject; 
	struct FSoftClassPath ClassPath; 
	struct FSoftObjectPath ObjectPath; 
};

// ScriptStruct Serialization.StructSerializerBooleanTestStruct
struct FStructSerializerBooleanTestStruct {
	bool BoolFalse; 
	bool BoolTrue; 
	char Bitfield0 : 1; 
	char Bitfield1 : 1; 
	char Bitfield2Set : 1; 
	char Bitfield3 : 1; 
	char Bitfield4Set : 1; 
	char Bitfield5Set : 1; 
	char Bitfield6 : 1; 
	char Bitfield7Set : 1; 
};

// ScriptStruct Serialization.StructSerializerNumericTestStruct
struct FStructSerializerNumericTestStruct {
	int8_t Int8; 
	int16_t Int16; 
	int32_t Int32; 
	int64_t Int64; 
	char UInt8; 
	uint16_t UInt16; 
	uint32_t UInt32; 
	uint64_t UInt64; 
	float Float; 
	double Double; 
};

// ScriptStruct Serialization.StructSerializerByteArray
struct FStructSerializerByteArray {
	int32_t Dummy1; 
	struct TArray<char> ByteArray; 
	int32_t Dummy2; 
	struct TArray<int8_t> Int8Array; 
	int32_t Dummy3; 
};


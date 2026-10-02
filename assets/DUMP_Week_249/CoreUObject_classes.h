// Class CoreUObject.Object
struct UObject {

	void ExecuteUbergraph(int32_t EntryPoint); // (Event|Public|BlueprintEvent)
};

// Class CoreUObject.Interface
struct UInterface : UObject {
};

// Class CoreUObject.Package
struct UPackage : UObject {
};

// Class CoreUObject.Field
struct UField : UObject {
};

// Class CoreUObject.Struct
struct UStruct : UField {
};

// Class CoreUObject.Class
struct UClass : UStruct {
};

// Class CoreUObject.GCObjectReferencer
struct UGCObjectReferencer : UObject {
};

// Class CoreUObject.TextBuffer
struct UTextBuffer : UObject {
};

// Class CoreUObject.ScriptStruct
struct UScriptStruct : UStruct {
};

// Class CoreUObject.Function
struct UFunction : UStruct {
};

// Class CoreUObject.DelegateFunction
struct UDelegateFunction : UFunction {
};

// Class CoreUObject.SparseDelegateFunction
struct USparseDelegateFunction : UDelegateFunction {
};

// Class CoreUObject.DynamicClass
struct UDynamicClass : UClass {
};

// Class CoreUObject.PackageMap
struct UPackageMap : UObject {
};

// Class CoreUObject.Enum
struct UEnum : UField {
};

// Class CoreUObject.LinkerPlaceholderClass
struct ULinkerPlaceholderClass : UClass {
};

// Class CoreUObject.LinkerPlaceholderExportObject
struct ULinkerPlaceholderExportObject : UObject {
};

// Class CoreUObject.LinkerPlaceholderFunction
struct ULinkerPlaceholderFunction : UFunction {
};

// Class CoreUObject.MetaData
struct UMetaData : UObject {
};

// Class CoreUObject.ObjectRedirector
struct UObjectRedirector : UObject {
};

// Class CoreUObject.Property
struct UProperty : UField {
};

// Class CoreUObject.EnumProperty
struct UEnumProperty : UProperty {
};

// Class CoreUObject.ArrayProperty
struct UArrayProperty : UProperty {
};

// Class CoreUObject.ObjectPropertyBase
struct UObjectPropertyBase : UProperty {
};

// Class CoreUObject.BoolProperty
struct UBoolProperty : UProperty {
};

// Class CoreUObject.NumericProperty
struct UNumericProperty : UProperty {
};

// Class CoreUObject.ByteProperty
struct UByteProperty : UNumericProperty {
};

// Class CoreUObject.ObjectProperty
struct UObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.ClassProperty
struct UClassProperty : UObjectProperty {
};

// Class CoreUObject.DelegateProperty
struct UDelegateProperty : UProperty {
};

// Class CoreUObject.DoubleProperty
struct UDoubleProperty : UNumericProperty {
};

// Class CoreUObject.FloatProperty
struct UFloatProperty : UNumericProperty {
};

// Class CoreUObject.IntProperty
struct UIntProperty : UNumericProperty {
};

// Class CoreUObject.Int8Property
struct UInt8Property : UNumericProperty {
};

// Class CoreUObject.Int16Property
struct UInt16Property : UNumericProperty {
};

// Class CoreUObject.Int64Property
struct UInt64Property : UNumericProperty {
};

// Class CoreUObject.InterfaceProperty
struct UInterfaceProperty : UProperty {
};

// Class CoreUObject.LazyObjectProperty
struct ULazyObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.MapProperty
struct UMapProperty : UProperty {
};

// Class CoreUObject.MulticastDelegateProperty
struct UMulticastDelegateProperty : UProperty {
};

// Class CoreUObject.MulticastInlineDelegateProperty
struct UMulticastInlineDelegateProperty : UMulticastDelegateProperty {
};

// Class CoreUObject.MulticastSparseDelegateProperty
struct UMulticastSparseDelegateProperty : UMulticastDelegateProperty {
};

// Class CoreUObject.NameProperty
struct UNameProperty : UProperty {
};

// Class CoreUObject.SetProperty
struct USetProperty : UProperty {
};

// Class CoreUObject.SoftObjectProperty
struct USoftObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.SoftClassProperty
struct USoftClassProperty : USoftObjectProperty {
};

// Class CoreUObject.StrProperty
struct UStrProperty : UProperty {
};

// Class CoreUObject.StructProperty
struct UStructProperty : UProperty {
};

// Class CoreUObject.UInt16Property
struct UUInt16Property : UNumericProperty {
};

// Class CoreUObject.UInt32Property
struct UUInt32Property : UNumericProperty {
};

// Class CoreUObject.UInt64Property
struct UUInt64Property : UNumericProperty {
};

// Class CoreUObject.WeakObjectProperty
struct UWeakObjectProperty : UObjectPropertyBase {
};

// Class CoreUObject.TextProperty
struct UTextProperty : UProperty {
};

// Class CoreUObject.PropertyWrapper
struct UPropertyWrapper : UObject {
};

// Class CoreUObject.MulticastDelegatePropertyWrapper
struct UMulticastDelegatePropertyWrapper : UPropertyWrapper {
};

// Class CoreUObject.MulticastInlineDelegatePropertyWrapper
struct UMulticastInlineDelegatePropertyWrapper : UMulticastDelegatePropertyWrapper {
};


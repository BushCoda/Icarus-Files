// Class RigVM.RigVM
struct URigVM : UObject {
	struct FRigVMMemoryContainer WorkMemoryStorage; 
	struct FRigVMMemoryContainer LiteralMemoryStorage; 
	struct FRigVMByteCode ByteCodeStorage; 
	struct FRigVMInstructionArray Instructions; 
	struct FRigVMExecuteContext Context; 
	struct TArray<struct FName> FunctionNamesStorage; 
	struct TArray<struct FRigVMParameter> Parameters; 
	struct TMap<struct FName, int32_t> ParametersNameMap; 
	struct URigVM* DeferredVMToCopy; 

	void SetParameterValueVector2D(struct FName& InParameterName, struct FVector2D& InValue, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetParameterValueVector(struct FName& InParameterName, struct FVector& InValue, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetParameterValueTransform(struct FName& InParameterName, struct FTransform& InValue, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetParameterValueString(struct FName& InParameterName, struct FString InValue, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetParameterValueQuat(struct FName& InParameterName, struct FQuat& InValue, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	void SetParameterValueName(struct FName& InParameterName, struct FName& InValue, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetParameterValueInt(struct FName& InParameterName, int32_t InValue, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetParameterValueFloat(struct FName& InParameterName, float InValue, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void SetParameterValueBool(struct FName& InParameterName, bool InValue, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct FString GetRigVMFunctionName(int32_t InFunctionIndex); // (Final|Native|Public|Const)
	struct FVector2D GetParameterValueVector2D(struct FName& InParameterName, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FVector GetParameterValueVector(struct FName& InParameterName, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FTransform GetParameterValueTransform(struct FName& InParameterName, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FString GetParameterValueString(struct FName& InParameterName, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	struct FQuat GetParameterValueQuat(struct FName& InParameterName, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable)
	struct FName GetParameterValueName(struct FName& InParameterName, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	int32_t GetParameterValueInt(struct FName& InParameterName, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	float GetParameterValueFloat(struct FName& InParameterName, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	bool GetParameterValueBool(struct FName& InParameterName, int32_t InArrayIndex); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	int32_t GetParameterArraySize(struct FName& InParameterName); // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const)
	bool Execute(struct FName& InEntryName); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	int32_t AddRigVMFunction(struct UScriptStruct* InRigVMStruct, struct FName& InMethodName); // (Final|Native|Public|HasOutParms)
};


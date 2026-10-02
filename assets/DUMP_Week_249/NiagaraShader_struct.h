// Enum NiagaraShader.FNiagaraCompileEventSeverity
enum class FNiagaraCompileEventSeverity : uint8 {
	Log = 0,
	Warning = 1,
	Error = 2,
	FNiagaraCompileEventSeverity_MAX = 3
};

// ScriptStruct NiagaraShader.SimulationStageMetaData
struct FSimulationStageMetaData {
	struct FName SimulationStageName; 
	struct FName IterationSource; 
	char bSpawnOnly : 1; 
	char bWritesParticles : 1; 
	char bPartialParticleUpdate : 1; 
	struct TArray<struct FName> OutputDestinations; 
	int32_t MinStage; 
	int32_t MaxStage; 
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
struct FNiagaraDataInterfaceGPUParamInfo {
	struct FString DataInterfaceHLSLSymbol; 
	struct FString DIClassName; 
	struct TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; 
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
struct FNiagaraDataInterfaceGeneratedFunction {
};

// ScriptStruct NiagaraShader.NiagaraCompileEvent
struct FNiagaraCompileEvent {
	enum class FNiagaraCompileEventSeverity Severity; 
	struct FString Message; 
	struct FString ShortDescription; 
	bool bDismissable; 
	struct FGuid NodeGuid; 
	struct FGuid PinGuid; 
	struct TArray<struct FGuid> StackGuids; 
};


// Class IcarusUtilities.RowLibrary
struct URowLibrary : UBlueprintFunctionLibrary {

	bool IsRowHandleValid(struct FRowHandle& RowHandle); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool IsRowHandleNone(struct FRowHandle& RowHandle); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool IsRowEnumValid(struct FRowEnum& Enum); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool IsRowEnumNone(struct FRowEnum& Enum); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	int32_t GetRowIndex(struct FRowHandle& Row); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	struct FRowMetadata GetMetadata(struct FRowHandle RowHandle); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FFeatureLevelsRowHandle GetFeatureLevel(struct FRowHandle RowHandle); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FName GetDataTableName(struct FRowHandle RowHandle); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UIcarusDataTable* GetDataTableForEdit(struct FRowHandle RowHandle); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct UIcarusDataTable* GetDataTable(struct FRowHandle RowHandle); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool EqualEqual_FRowHandleFRowHandle(struct FRowHandle RowHandleA, struct FRowHandle RowHandleB); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class IcarusUtilities.IcarusDataTable
struct UIcarusDataTable : UDataTable {
	struct UIcarusMetaTable* MetaTable; 
};

// Class IcarusUtilities.FeatureLevelsLibrary
struct UFeatureLevelsLibrary : URowLibrary {

	struct FFeatureLevelsRowHandle StructToRowHandle(struct FFeatureLevelsEnum EnumValue); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FName StructToName(struct FFeatureLevelsEnum EnumValue); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t StructToInt(struct FFeatureLevelsEnum EnumValue); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FFeatureLevelsEnum RowHandleToStruct(struct FFeatureLevelsRowHandle RowHandle); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	void RemoveRowFromFeatureLevelsTable(struct FName Name); // (Final|Native|Static|Public|BlueprintCallable)
	void RefreshConstants(); // (Final|Native|Static|Public)
	int32_t NumRows(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool NotEqual_EnumName(struct FFeatureLevelsEnum A, struct FName B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool NotEqual_EnumEnum(struct FFeatureLevelsEnum A, struct FFeatureLevelsEnum B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FFeatureLevelsEnum NameToStruct(struct FName NameValue); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	int32_t NameToInt(struct FName NameValue); // (Final|Native|Static|Public)
	struct FFeatureLevelsRowHandle MakeLiteralFeatureLevels(struct FFeatureLevelsRowHandle RowHandle); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FFeatureLevelsRowHandle MakeFeatureLevelsFromIndex(int32_t Index); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FFeatureLevelsEnum MakeFeatureLevelsEnum(struct FFeatureLevelsEnum Enum); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FFeatureLevelsRowHandle MakeFeatureLevels(struct FName RowName); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool IsValidName(struct FName NameValue); // (Final|Native|Static|Public)
	struct FFeatureLevelsEnum IntToStruct(int32_t IntValue); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FName IntToName(int32_t IntValue); // (Final|Native|Static|Public)
	void GetFeatureLevelsStruct(struct FFeatureLevelsRowHandle RowHandle, struct FFeatureLevelData& FeatureLevels, enum class EValid& Paths); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle(struct FFeatureLevelsRowHandle RowHandleA, struct FFeatureLevelsRowHandle RowHandleB); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool EqualEqual_EnumEnum(struct FFeatureLevelsEnum A, struct FFeatureLevelsEnum B); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FFeatureLevelsRowHandle CastToFeatureLevelsRowHandle(struct FRowHandle RowHandle, enum class EValid& Paths); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	void BreakFeatureLevelsEnum(struct FFeatureLevelsEnum Enum, struct FName& Name, int32_t& Index); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	void AddRowToFeatureLevelsTable(struct FName Name, struct FFeatureLevelData Data, struct FFeatureLevelsRowHandle& NewRow, bool bOverrideExistingRow); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};

// Class IcarusUtilities.FeatureLevelsTable
struct UFeatureLevelsTable : UIcarusDataTable {
};

// Class IcarusUtilities.IcarusContainerLibrary
struct UIcarusContainerLibrary : UBlueprintFunctionLibrary {
};

// Class IcarusUtilities.IcarusFeatureLevelFunctionLibrary
struct UIcarusFeatureLevelFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsFeatureLevelEnabled(struct FFeatureLevelsRowHandle InFeatureLevel); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct FFeatureLevelsRowHandle GetCurrentFeatureLevel(); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class IcarusUtilities.IcarusHashesFunctionLibrary
struct UIcarusHashesFunctionLibrary : UBlueprintFunctionLibrary {

	int32_t NameToHash(struct FName& Name); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	struct FName HashToName(int32_t Hash); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
};

// Class IcarusUtilities.IcarusMetaTable
struct UIcarusMetaTable : UDataTable {
};

// Class IcarusUtilities.IcarusStringFunctionLibrary
struct UIcarusStringFunctionLibrary : UBlueprintFunctionLibrary {

	bool StringContainsSpecialCharacters_Output(struct FString String, struct TArray<struct FString>& OutSpecialCharacters); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
	bool StringContainsSpecialCharacters(struct FString String); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	struct TArray<struct FString> ParseIntoLines(struct FString MultiLineInput); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool LexicalLess_Text(struct FText& TextA, struct FText& TextB); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool LexicalLess_String(struct FString StringA, struct FString StringB); // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure)
	bool LexicalLess_Name(struct FName& NameA, struct FName& NameB); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
	bool FastLess_Name(struct FName& NameA, struct FName& NameB); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure)
};

// Class IcarusUtilities.LessInterface
struct ULessInterface : UInterface {

	bool LessThan(struct UObject* Other); // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const)
};

// Class IcarusUtilities.PanningPanel
struct UPanningPanel : UPanelWidget {
	struct FScrollBarStyle ScrollBarStyle; 
	enum class EPanningDirection PanningDirection; 
	struct FVector2D ScrollBarThickness; 
	struct FVector2D ScrollbarPadding; 
	bool AlwaysShowScrollbar; 
	bool AlwaysShowScrollbarTrack; 
	bool bHideScrollBar; 
	struct FVector2D Size; 
	struct FVector2D ZoomRange; 
	float ZoomOverride; 
	struct FVector2D PositionOverride; 
	bool bAllowScroll; 
	int32_t OverscrollAmount; 

	void SetZoomOverride(float Value); // (Final|Native|Public|BlueprintCallable)
	void SetPositionOverride(struct FVector2D position); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	void Refresh(); // (Final|Native|Public|BlueprintCallable)
	struct FVector2D GetPosition(); // (Final|Native|Public|HasDefaults|BlueprintCallable)
	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // (Final|Native|Public|BlueprintCallable)
};


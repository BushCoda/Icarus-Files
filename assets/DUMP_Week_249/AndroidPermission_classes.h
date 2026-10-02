// Class AndroidPermission.AndroidPermissionCallbackProxy
struct UAndroidPermissionCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; 
};

// Class AndroidPermission.AndroidPermissionFunctionLibrary
struct UAndroidPermissionFunctionLibrary : UBlueprintFunctionLibrary {

	bool CheckPermission(struct FString permission); // (Final|Native|Static|Public|BlueprintCallable)
	struct UAndroidPermissionCallbackProxy* AcquirePermissions(struct TArray<struct FString>& Permissions); // (Final|Native|Static|Public|HasOutParms|BlueprintCallable)
};


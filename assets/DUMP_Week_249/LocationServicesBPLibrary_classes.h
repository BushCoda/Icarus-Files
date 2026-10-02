// Class LocationServicesBPLibrary.LocationServices
struct ULocationServices : UBlueprintFunctionLibrary {

	bool StopLocationServices(); // (Final|Native|Static|Public|BlueprintCallable)
	bool StartLocationServices(); // (Final|Native|Static|Public|BlueprintCallable)
	bool IsLocationAccuracyAvailable(enum class ELocationAccuracy Accuracy); // (Final|Native|Static|Public|BlueprintCallable)
	bool InitLocationServices(enum class ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter); // (Final|Native|Static|Public|BlueprintCallable)
	struct ULocationServicesImpl* GetLocationServicesImpl(); // (Final|Native|Static|Public|BlueprintCallable)
	struct FLocationServicesData GetLastKnownLocation(); // (Final|Native|Static|Public|BlueprintCallable)
	bool AreLocationServicesEnabled(); // (Final|Native|Static|Public|BlueprintCallable)
};

// Class LocationServicesBPLibrary.LocationServicesImpl
struct ULocationServicesImpl : UObject {
	struct FMulticastInlineDelegate OnLocationChanged; 
};


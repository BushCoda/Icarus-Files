// Class CustomMeshComponent.CustomMeshComponent
struct UCustomMeshComponent : UMeshComponent {

	bool SetCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // (Final|Native|Public|HasOutParms|BlueprintCallable)
	void ClearCustomMeshTriangles(); // (Final|Native|Public|BlueprintCallable)
	void AddCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles); // (Final|Native|Public|HasOutParms|BlueprintCallable)
};


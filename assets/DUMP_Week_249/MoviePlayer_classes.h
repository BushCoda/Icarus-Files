// Class MoviePlayer.MoviePlayerSettings
struct UMoviePlayerSettings : UObject {
	bool bWaitForMoviesToComplete; 
	bool bMoviesAreSkippable; 
	struct TArray<struct FString> StartupMovies; 
};


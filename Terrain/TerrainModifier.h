#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#define TEXTURE_DEFAULT_X_SIZE 2048
#define TEXTURE_DEFAULT_Y_SIZE 2048

class FTerrainModifier : public TSharedFromThis<FTerrainModifier>
{
public:
	FTerrainModifier();

	~FTerrainModifier();

public:
	// Get & Set inline functions
	inline int32 GetMinHeight() { return minHeight; }
	inline int32 GetMaxHeight() { return maxHeight; }
	
	inline int32 GetTerrainXSize() { return terrainXSize; }
	inline int32 GetTerrainYSize() { return terrainYSize; }

	inline void SetMinHeight(int32 InValue) { minHeight = InValue; }
	inline void SetMaxHeight(int32 InValue) { maxHeight = InValue; }

	inline void SetTerrainXSize(int32 InValue) { terrainXSize = InValue; }
	inline void SetTerrainYSize(int32 InValue) { terrainYSize = InValue; }

public:

	// TODO : Random Noise Generate
	void GenerateRandomNoise();

private:
	int32 minHeight;
	int32 maxHeight;

	int32 terrainXSize;
	int32 terrainYSize;

	TArray<int32> terrain2DArray;
};

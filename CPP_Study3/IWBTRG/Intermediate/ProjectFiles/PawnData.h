#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PawnData.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnPawnBaseTableRowChanged)

USTRUCT()
struct IWBTRG_API FPawnBaseTableRow : public FTableRowBase
{
	GENERATED_BODY()

public:
	FPawnBaseTableRow();

public:
	UPROPERTY(EditAnywhere, Category = "Class")
	TSubclassOf<ACharacterBase> PawnClass;

public: // Mesh

	UPROPERTY(EditAnywhere, Category = "Mesh")
	USkeletalMesh* SkeletalMesh = nullptr;

	UPROPERTY(EditAnywhere, Category = "Mesh")
	FVector Scale = FVector(1.0, 1.0, 1.0);

public: // MID
	UPROPERTY(EditAnywhere, Category = "MID")
	bool bMID = false;

	UPROPERTY(EditAnywhere, Category = "MID")
	FLinearColor MIDColor_temp = FLinearColor(1.0, 1.0, 1.0, 1.0);

public:

#if WITH_EDITOR

	virtual void OnPostDataImport(const UDataTable* InDataTable, const FName InRowName, TArray<FString>& OutCollectedImportProblems) override;
	virtual void OnDataTableChanged(const UDataTable* InDataTable, const FName InRowName) override;
#endif

public:
	FOnPawnBaseTableRowChanged OnPawnBaseTableRowChanged;

};

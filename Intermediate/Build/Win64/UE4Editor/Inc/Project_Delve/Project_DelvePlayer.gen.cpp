// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Project_DelvePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_DelvePlayer() {}
// Cross Module References
	PROJECT_DELVE_API UClass* Z_Construct_UClass_AProject_DelvePlayer_NoRegister();
	PROJECT_DELVE_API UClass* Z_Construct_UClass_AProject_DelvePlayer();
	PROJECT_DELVE_API UClass* Z_Construct_UClass_AProject_DelveCharacter();
	UPackage* Z_Construct_UPackage__Script_Project_Delve();
// End Cross Module References
	void AProject_DelvePlayer::StaticRegisterNativesAProject_DelvePlayer()
	{
	}
	UClass* Z_Construct_UClass_AProject_DelvePlayer_NoRegister()
	{
		return AProject_DelvePlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_AProject_DelvePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AProject_DelveCharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_Project_Delve,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Project_DelvePlayer.h" },
				{ "ModuleRelativePath", "Project_DelvePlayer.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AProject_DelvePlayer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AProject_DelvePlayer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProject_DelvePlayer, 1710164054);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProject_DelvePlayer(Z_Construct_UClass_AProject_DelvePlayer, &AProject_DelvePlayer::StaticClass, TEXT("/Script/Project_Delve"), TEXT("AProject_DelvePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_DelvePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

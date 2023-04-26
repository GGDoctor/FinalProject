// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/AssaultRifle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssaultRifle() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AAssaultRifle_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AAssaultRifle();
	MYPROJECT_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AAssaultRifle::StaticRegisterNativesAAssaultRifle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAssaultRifle);
	UClass* Z_Construct_UClass_AAssaultRifle_NoRegister()
	{
		return AAssaultRifle::StaticClass();
	}
	struct Z_Construct_UClass_AAssaultRifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAssaultRifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAssaultRifle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AssaultRifle.h" },
		{ "ModuleRelativePath", "AssaultRifle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAssaultRifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAssaultRifle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAssaultRifle_Statics::ClassParams = {
		&AAssaultRifle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAssaultRifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAssaultRifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAssaultRifle()
	{
		if (!Z_Registration_Info_UClass_AAssaultRifle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAssaultRifle.OuterSingleton, Z_Construct_UClass_AAssaultRifle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAssaultRifle.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AAssaultRifle>()
	{
		return AAssaultRifle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssaultRifle);
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_AssaultRifle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_AssaultRifle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAssaultRifle, AAssaultRifle::StaticClass, TEXT("AAssaultRifle"), &Z_Registration_Info_UClass_AAssaultRifle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAssaultRifle), 3040896592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_AssaultRifle_h_2255696873(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_AssaultRifle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_AssaultRifle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

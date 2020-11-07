// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UdemyUGD : ModuleRules
{
	public UdemyUGD(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

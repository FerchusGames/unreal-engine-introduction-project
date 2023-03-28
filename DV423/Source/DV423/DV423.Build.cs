// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DV423 : ModuleRules
{
	public DV423(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG"});
	}
}

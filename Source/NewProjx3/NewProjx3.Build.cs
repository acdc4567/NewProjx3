// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NewProjx3 : ModuleRules
{
	public NewProjx3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TowerDefence : ModuleRules
{
	public TowerDefence(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "GameFrwkSessionsPlugin", "OnlineSubSystem", "OnlineSubsystemUtils", "UMG", "AIModule" });

		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		DynamicallyLoadedModuleNames.Add("OnlineSubsystemSteam");
	}
}

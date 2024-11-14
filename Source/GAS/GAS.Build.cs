// Copyright The Knights of Unity. All Rights Reserved.

using UnrealBuildTool;


// Code review: [Formatting issue - add new line between each declared property and constructor according to ue formatting guidelines (in all header files)].
// Code review: [Project structure - group files to folders as follows: 'GameplayEffects', 'GameplayAbilities', 'Attributes' ].

public class GAS : ModuleRules
{
	public GAS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
		PrivateDependencyModuleNames.AddRange(new string[] { "GameplayAbilities", "GameplayTags", "GameplayTasks" });
	}
}

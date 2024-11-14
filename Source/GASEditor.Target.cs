// Copyright The Knights of Unity. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class GASEditorTarget : TargetRules
{
	public GASEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		CppStandard = CppStandardVersion.Cpp20;
		ExtraModuleNames.Add("GAS");
	}
}

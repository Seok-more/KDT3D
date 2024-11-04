// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class IWBTRG : ModuleRules
{
	public IWBTRG(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] 
        { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", 
            "UMG", "MoviePlayer", "AIModule", "Paper2D" , "MotionWarping"});

		PrivateDependencyModuleNames.AddRange(new string[] {  });
          
        // You should include this address for compiling external file.h
        PublicIncludePaths.AddRange(new string[]
        {
                    this.Name
        });

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}

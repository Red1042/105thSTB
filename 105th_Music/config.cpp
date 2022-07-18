
// Config template From Uriki's Music Mod A.K.A reddit User RhythmicRampage -- Thanks for the template. :3

class CfgPatches
{
	class v105_InHouseTracks
	{
		units[] = {
		    "v105_windy"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		authors[]=
        {
        	"S-4 Logistics"
        };
	};
};

class CfgMusicClasses
{
	class v105_AmbientTracks
	{
		displayName = "[105th] Ambient Tracks";
	};
};

class CfgMusic
{
	class v105_track_1
	{
		name = "[Howard] Comfort Is A Lie";
		sound[] = {"105th_Music\Comfort Is A Lie.ogg",1,1};
		theme = "v105_AmbientTracks";
		duration = "411";
		musicClass = "v105_AmbientTracks";
	};
	class v105_track_2
	{
		name = "[c7ph3r] This is War (Synthwave Remix)";
		sound[] = {"105th_Music\This Is War (Synthwave Remix)_c7ph3r",1,1};
		theme = "v105_AmbientTracks";
		duration = "110";
		musicClass = "v105_AmbientTracks";
	}
};

class CfgSounds
{
	sounds[]={v105_windy};
	class v105_windy
	{
		name = “[LUKE] Windy”;
		sound[] = {"105th_Music\sounds\Windy.ogg", db+10, 1.0};
	};
};
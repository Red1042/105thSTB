
// Config template From Uriki's Music Mod A.K.A reddit User RhythmicRampage -- Thanks for the template. :3

class CfgPatches
{
	class v105_InHouseTracks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
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
	
};
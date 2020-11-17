class v105_408_SRSC:OPTRE_SRS99C
{
				dlc = "105th Weapons";
				baseweapon="v105_408_SRSC"
				author = "Howard";
				scope = 2;
				scopeArsenal = 2;
				displayName = "[105th] SRS-99C (.408)";
				magazines[]=
				{
					"ACE_7Rnd_408_305gr_Mag",
					"7Rnd_408_Mag"
				};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0,0.40000001};
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.5,0.30000001};
				compatibleitems[]=
				{
					"optic_dms",
					"optic_sos",
					"optic_lrps",
					"optic_khs_blk",
					"optic_nightstalker",
					"optic_nvs",
					"optic_ams",

					"optre_srs99_scope",
					"optre_srs99c_scope"

					
				};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.40000001};
			};
			mass=150;
		};
		class ItemInfo
		{
			priority=1;
		}
};
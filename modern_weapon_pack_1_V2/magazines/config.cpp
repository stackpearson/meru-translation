////////////////////////////////////////////////////////////////////
//DeRap: magazines\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sun Dec 10 16:36:01 2023 : 'file' last modified on Thu Nov 16 02:39:09 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class mwp1_magazines
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class mwp1_rifle1_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1 Rifle Mag - 120";
		descriptionShort = "Magazine for the MWP1 assault rifle of the first series. holds 120 rounds of xxx caliber .//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1rifle1magaz.p3d";
		weight = 200;
		itemSize[] = {1,3};
		count = 120;
		ammo = "Bullet_mwp1rifle";
		ammoItems[] = {"Ammo_mwp1rifle"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_rifle2_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1-2 Rifle Mag - 120";
		descriptionShort = "Magazine for the MWP1 assault rifle of the second series. holds 120 rounds of xxx caliber.//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1rifle2magaz.p3d";
		weight = 200;
		itemSize[] = {1,3};
		count = 120;
		ammo = "Bullet_mwp1rifle";
		ammoItems[] = {"Ammo_mwp1rifle"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_rifle3_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1-3 Rifle Мag - 120";
		descriptionShort = "Magazine for the MWP1 assault rifle of the third series. holds 120 rounds of xxx caliber.//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1rifle3magaz.p3d";
		weight = 200;
		itemSize[] = {1,3};
		count = 120;
		ammo = "Bullet_mwp1rifle";
		ammoItems[] = {"Ammo_mwp1rifle"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_mashinegun1_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1 Machinegun Маg - 800";
		descriptionShort = "Magazine for the MWP1 machine gun of the first series. holds 800 rounds of xxx caliber.//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1mashinegun1magaz.p3d";
		weight = 200;
		itemSize[] = {2,2};
		count = 800;
		ammo = "Bullet_mwp1pulemet";
		ammoItems[] = {"Ammo_mwp1pulemet"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_mashinegun2_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1-2 Machinegun Mag - 800";
		descriptionShort = "Magazine for the MWP1 machine gun of the second series. holds 800 rounds of xxx caliber.//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1mashinegun2magaz.p3d";
		weight = 200;
		itemSize[] = {2,2};
		count = 800;
		ammo = "Bullet_mwp1pulemet";
		ammoItems[] = {"Ammo_mwp1pulemet"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_pistol1_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1 Pistol Mag - 50";
		descriptionShort = "Magazine for the MWP1 pistol of the first series. holds 50 rounds of xxx caliber.//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1pistol1magaz.p3d";
		weight = 200;
		itemSize[] = {1,2};
		count = 50;
		ammo = "Bullet_mwp1pistol";
		ammoItems[] = {"Ammo_mwp1pistol"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_pistol2_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1 Pistol Mag - 50";
		descriptionShort = "Magazine for the MWP1 pistol of the first series. holds 50 rounds of xxx caliber.//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1pistol2magaz.p3d";
		weight = 200;
		itemSize[] = {1,2};
		count = 50;
		ammo = "Bullet_mwp1pistol";
		ammoItems[] = {"Ammo_mwp1pistol"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_pistol3_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1-3 Pistol Mag - 50";
		descriptionShort = "Magazine for MWP1 pistol of the third series. holds 50 rounds of xxx caliber.//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1pistol3magaz.p3d";
		weight = 200;
		itemSize[] = {1,2};
		count = 50;
		ammo = "Bullet_mwp1pistol";
		ammoItems[] = {"Ammo_mwp1pistol"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_shotgun3_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1-3 Shotgun Mag - 30";
		descriptionShort = "Magazine for the MWP1 shotgun of the third series. holds 30 rounds of xxx caliber.//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1shotgun3magaz.p3d";
		weight = 200;
		itemSize[] = {1,2};
		count = 30;
		ammo = "Bullet_mwp1shotgun";
		ammoItems[] = {"Ammo_mwp1shotgun"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_rifle4_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1-4 Assault Rifle Mag - 120";
		descriptionShort = "Magazine for the MWP1 assault rifle of the fourth series. Holds 120 rounds of xxx caliber .//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1rifle4magaz.p3d";
		weight = 200;
		itemSize[] = {1,3};
		count = 120;
		ammo = "Bullet_mwp1rifle";
		ammoItems[] = {"Ammo_mwp1rifle"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_pistol4_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1-4 Pistol Mag - 50";
		descriptionShort = "Magazine for the MWP1 pistol of the fourth series. Holds 50 rounds of xxx caliber .//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1pistol4magaz.p3d";
		weight = 200;
		itemSize[] = {1,2};
		count = 50;
		ammo = "Bullet_mwp1rifle";
		ammoItems[] = {"Ammo_mwp1rifle"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_shotgun4_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1-4 Shotgun Mag - 50";
		descriptionShort = "Magazine for the MWP1 Automatic Shotgun of the fourth series. Holds 50 rounds of xxx caliber .//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1shotgun4magaz.p3d";
		weight = 200;
		itemSize[] = {1,2};
		count = 50;
		ammo = "Bullet_mwp1shotgun";
		ammoItems[] = {"Ammo_mwp1shotgun"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_smg1_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1 SMG Mag - 90";
		descriptionShort = "Magazine for the MWP1 submachine gun of the first series. Holds 90 rounds of xxx caliber .//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1smg1magaz.p3d";
		weight = 200;
		itemSize[] = {1,2};
		count = 90;
		ammo = "Bullet_mwp1p1p1";
		ammoItems[] = {"Ammo_mwp1p1p1"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_smg2_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1-2 SMG Mag - 90";
		descriptionShort = "Magazine for the MWP1 submachine gun of the second series. Holds 90 rounds of xxx caliber .//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1smg2magaz.p3d";
		weight = 200;
		itemSize[] = {1,2};
		count = 90;
		ammo = "Bullet_mwp1p1p1";
		ammoItems[] = {"Ammo_mwp1p1p1"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_smg3_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1-3 SMG Mag - 90";
		descriptionShort = "Magazine for the MWP1 submachine gun of the third series. Holds 90 rounds of xxx caliber .//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1smg3magaz.p3d";
		weight = 200;
		itemSize[] = {1,2};
		count = 90;
		ammo = "Bullet_mwp1p1p1";
		ammoItems[] = {"Ammo_mwp1p1p1"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_smg4_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1-4 SMG Mag - 90";
		descriptionShort = "Magazine for the MWP1 submachine gun of the fourth series. Holds 90 rounds of xxx caliber .//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1smg4magaz.p3d";
		weight = 200;
		itemSize[] = {1,2};
		count = 90;
		ammo = "Bullet_mwp1p1p1";
		ammoItems[] = {"Ammo_mwp1p1p1"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_sniperrifle2_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1-2 Sniper Mag - 30";
		descriptionShort = "Magazine for the MWP1 sniper rifle of the second series. Holds 30 rounds of xxx caliber .//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1sniperrifle2magaz.p3d";
		weight = 200;
		itemSize[] = {1,3};
		count = 30;
		ammo = "Bullet_mwp1sniperrifle";
		ammoItems[] = {"Ammo_mwp1sniperrifle"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_sniperrifle3_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1-3 Sniper Mag - 30";
		descriptionShort = "Magazine for the MWP1 sniper rifle of the third series. Holds 30 rounds of xxx caliber .//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1sniperrifle3magaz.p3d";
		weight = 200;
		itemSize[] = {2,2};
		count = 30;
		ammo = "Bullet_mwp1sniperrifle";
		ammoItems[] = {"Ammo_mwp1sniperrifle"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_sniperrifle4_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1-4 Sniper Mag - 30";
		descriptionShort = "Magazine for the MWP1 sniper rifle of the fourth series. Holds 30 xx caliber roundsх .//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1sniperrifle4magaz.p3d";
		weight = 200;
		itemSize[] = {2,2};
		count = 30;
		ammo = "Bullet_mwp1sniperrifle";
		ammoItems[] = {"Ammo_mwp1sniperrifle"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_grenadelauncher_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1 Rocket Launcher Mag - 10";
		descriptionShort = "Magazine for the MWP1 rocket launcher of the first series. Holds 10 rounds of xxx caliber .//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1grenadelaunchermagaz.p3d";
		weight = 200;
		itemSize[] = {3,3};
		count = 10;
		ammo = "Bullet_RocketMWP1";
		ammoItems[] = {"Ammo_RocketMWP1"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_rocketlauncherlauncher_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1-2 Rocket Launcher Mag - 50";
		descriptionShort = "Magazine for the MWP1 rocket launcher of the second series. Holds 50 TET missiles.//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1grenadelaunchermagaz2.p3d";
		weight = 200;
		itemSize[] = {4,3};
		count = 50;
		ammo = "Bullet_RocketMWP1_2";
		ammoItems[] = {"Ammo_RocketMWP1_2"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_minigun_1_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1 SMG Mag - 5000";
		descriptionShort = "Magazine for the minigun MWP1 submachine gun of the first series. Holds 5000 TET rounds.//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1minigun2magaz.p3d";
		weight = 200;
		itemSize[] = {4,3};
		count = 5000;
		ammo = "Bullet_mwp1minigun";
		ammoItems[] = {"Ammo_mwp1minigun"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class mwp1_minigun_2_magazine: Magazine_Base
	{
		scope = 2;
		displayName = "MWP1-2 Minigun Mag - 7000";
		descriptionShort = "Magazine for the minigun MWP1 submachine gun of the second series. Holds 7000 TET rounds.//By Meru";
		model = "modern_weapon_pack_1_V2\magazines\mwp1minigun2magaz.p3d";
		weight = 200;
		itemSize[] = {4,4};
		count = 7000;
		ammo = "Bullet_mwp1minigun";
		ammoItems[] = {"Ammo_mwp1minigun"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120000;
					healthLevels[] = {{1,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.7,{"dz\weapons\firearms\famas\data\famas_rifle1.rvmat"}},{0.5,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0.3,{"dz\weapons\firearms\famas\data\famas_rifle1_damage.rvmat"}},{0,{"dz\weapons\firearms\famas\data\famas_rifle1_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};

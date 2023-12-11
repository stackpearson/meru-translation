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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для штурмовой винтовки MWP1 первой серии. вмещает 120 патронов калибра ххх .//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для штурмовой винтовки MWP1 второй серии. вмещает 120 патронов калибра ххх.//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для штурмовой винтовки MWP1 третьей серии. вмещает 120 патронов калибра ххх.//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для пулемета MWP1 первой серии. вмещает 800 патронов калибра ххх.//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для пулемета MWP1 второй серии. вмещает 800 патронов калибра ххх.//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для пистолета MWP1 первой серии. вмещает 50 патронов калибра ххх.//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для пистолета MWP1 первой серии. вмещает 50 патронов калибра ххх.//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для пистолета MWP1 третьей серии. вмещает 50 патронов калибра ххх.//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для дробовика MWP1 третьей серии. вмещает 30 патронов калибра ххх.//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для штурмовой винтовки MWP1 четвертой серии. Вмещает 120 патронов калибра ххх .//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для пистолета MWP1 четвертой серии. Вмещает 50 патронов калибра ххх .//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для Автоматического дробовика MWP1 четвертой серии. Вмещает 50 патронов калибра ххх .//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для пистолета пулемета MWP1 первой серии. Вмещает 90 патронов калибра ххх .//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для пистолета пулемета MWP1 второй серии. Вмещает 90 патронов калибра ххх .//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для пистолета пулемета MWP1 третьей серии. Вмещает 90 патронов калибра ххх .//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для пистолета пулемета MWP1 четвертой серии. Вмещает 90 патронов калибра ххх .//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для снайперской винтовки MWP1 второй серии. Вмещает 30 патронов калибра ххх .//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для снайперской винтовки MWP1 третьей серии. Вмещает 30 патронов калибра ххх .//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для снайперской винтовки MWP1 четвертой серии. Вмещает 30 патронов калибра ххх .//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для ракетомета MWP1 первой серии. Вмещает 10 патронов калибра ххх .//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для ракетомета MWP1 второй серии. Вмещает 50 ракет ТЭТ.//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для Пистолету пулемета миниган MWP1 первой серии. Вмещает 5000 патронов ТЭТ.//By Meru";
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
		displayName = "MWP1 Магазин";
		descriptionShort = "Магазин для Пистолету пулемета миниган MWP1 второй серии. Вмещает 7000 патронов ТЭТ.//By Meru";
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

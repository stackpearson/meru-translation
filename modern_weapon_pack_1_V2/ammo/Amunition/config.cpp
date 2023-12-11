////////////////////////////////////////////////////////////////////
//DeRap: ammo\Amunition\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sun Dec 10 16:36:00 2023 : 'file' last modified on Thu Nov 16 02:39:10 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class WeaponPack_Ammunitionmwp1
	{
		units[] = {"Ammo_mwp1rifle","Ammo_mwp1pistol","Ammo_mwp1pulemet","Ammo_mwp1sniperrifle","Ammo_mwp1shotgun","Ammo_mwp1p1p1","Ammo_RocketMWP1","Ammo_RocketMWP1_2","Ammo_mwp1minigun"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Data","DZ_Weapons_Explosives"};
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Ammo_mwp1rifle: Ammunition_Base
	{
		scope = 2;
		displayName = "MWP1 Rifle Cartridge";
		descriptionShort = "Cartridge of the TET Automatic. // By Meru";
		model = "modern_weapon_pack_1_V2\ammo\Amunition\mwp1rifleammo.p3d";
		iconCartridge = 3;
		weight = 40;
		itemSize[] = {1,1};
		count = 1000;
		ammo = "Bullet_mwp1rifle";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0.01,{""}}};
				};
			};
		};
	};
	class Ammo_mwp1pistol: Ammunition_Base
	{
		scope = 2;
		displayName = "MWP1 Pistol Cartridge";
		descriptionShort = "TET Pistol Cartridge. // By Meru";
		model = "modern_weapon_pack_1_V2\ammo\Amunition\mwp1pistolammo.p3d";
		iconCartridge = 3;
		weight = 40;
		itemSize[] = {1,1};
		count = 1000;
		ammo = "Bullet_mwp1pistol";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0.01,{""}}};
				};
			};
		};
	};
	class Ammo_mwp1pulemet: Ammunition_Base
	{
		scope = 2;
		displayName = "MWP1 Machine Gun Cartridge";
		descriptionShort = "TET Machine Gun Cartridge.// By Meru";
		model = "modern_weapon_pack_1_V2\ammo\Amunition\mwp1pulemetammo.p3d";
		iconCartridge = 3;
		weight = 40;
		itemSize[] = {1,1};
		count = 1000;
		ammo = "Bullet_mwp1pulemet";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0.01,{""}}};
				};
			};
		};
	};
	class Ammo_mwp1sniperrifle: Ammunition_Base
	{
		scope = 2;
		displayName = "MWP1 Sniper Cartridge";
		descriptionShort = "TET Sniper Rifle Cartridge.// By Meru";
		model = "modern_weapon_pack_1_V2\ammo\Amunition\mwp1sniperrifleammo.p3d";
		iconCartridge = 3;
		weight = 40;
		itemSize[] = {1,1};
		count = 100;
		ammo = "Bullet_mwp1sniperrifle";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0.01,{""}}};
				};
			};
		};
	};
	class Ammo_mwp1shotgun: Ammunition_Base
	{
		scope = 2;
		displayName = "MWP1 Shotgun Cartridge";
		descriptionShort = "Shotgun cartridge TET. // By Meru";
		model = "modern_weapon_pack_1_V2\ammo\Amunition\mwp1shotgunammo.p3d";
		iconCartridge = 3;
		weight = 40;
		itemSize[] = {1,1};
		count = 120;
		ammo = "Bullet_mwp1shotgun";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0.01,{""}}};
				};
			};
		};
	};
	class Ammo_mwp1p1p1: Ammunition_Base
	{
		scope = 2;
		displayName = "MWP1 PP cartridge";
		descriptionShort = "Cartridge PP TET. // By Meru";
		model = "modern_weapon_pack_1_V2\ammo\Amunition\mwp1ppammo.p3d";
		iconCartridge = 3;
		weight = 40;
		itemSize[] = {1,1};
		count = 1000;
		ammo = "Bullet_mwp1p1p1";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0.01,{""}}};
				};
			};
		};
	};
	class Ammo_RocketMWP1: Ammunition_Base
	{
		scope = 2;
		displayName = "MWP1 Rocket";
		descriptionShort = "Rocket for TET Rocket Launcher.// By Meru";
		model = "modern_weapon_pack_1_V2\ammo\Amunition\mwp1rocketammo.p3d";
		iconCartridge = 3;
		weight = 40;
		itemSize[] = {1,3};
		count = 120;
		ammo = "Bullet_RocketMWP1";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0.01,{""}}};
				};
			};
		};
	};
	class Ammo_RocketMWP1_2: Ammunition_Base
	{
		scope = 2;
		displayName = "MWP1 V2 Rocket";
		descriptionShort = "Rocket for the TET Rocket Launcher of the second series.// By Meru";
		model = "modern_weapon_pack_1_V2\ammo\Amunition\mwp1rocket2ammo.p3d";
		iconCartridge = 3;
		weight = 40;
		itemSize[] = {1,3};
		count = 120;
		ammo = "Bullet_RocketMWP1_2";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0.01,{""}}};
				};
			};
		};
	};
	class Ammo_mwp1minigun: Ammunition_Base
	{
		scope = 2;
		displayName = "MWP1 Minigun Cartridge";
		descriptionShort = "Special TET cartridge for the MWP1 Minigun.// By Meru";
		model = "modern_weapon_pack_1_V2\ammo\Amunition\mwp1minigunammo.p3d";
		iconCartridge = 3;
		weight = 40;
		itemSize[] = {1,3};
		count = 120;
		ammo = "Bullet_mwp1minigun";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{""}},{0.7,{}},{0.5,{""}},{0.3,{}},{0.01,{""}}};
				};
			};
		};
	};
};

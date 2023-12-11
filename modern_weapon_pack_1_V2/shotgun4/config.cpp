////////////////////////////////////////////////////////////////////
//DeRap: shotgun4\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sun Dec 10 16:36:03 2023 : 'file' last modified on Thu Nov 16 02:39:09 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class mwp1_shotgun_4
	{
		units[] = {"mwp1_shotgun_4"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Rifle_Base;
	class mwp1_shotgun_4_Base: Rifle_Base
	{
		scope = 0;
		weight = 3600;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_mwp1shotgun"};
		magazines[] = {"mwp1_shotgun4_magazine"};
		magazineSwitchTime = 0.2;
		PPDOFProperties[] = {1,0.5,10,140,4,10};
		WeaponLength = 0.95;
		barrelArmor = 1.68;
		ejectType = 1;
		recoilModifier[] = {0.2,0.2,0.2};
		swayModifier[] = {0.7,0.7,0.7};
		reloadAction = "ReloadAKM";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\akm\Akm_reload",0.8,1,20};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		modes[] = {"SemiAuto","FullAuto"};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class SmokeCloud2
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class SmokeCloud3BadlyDamaged
				{
					overrideParticle = "weapon_shot_winded_smoke";
					onlyWithinHealthLabel[] = {3,4};
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mp133_01";
					illuminateWorld = 1;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
					onlyWithinHealthLabel[] = {3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
					onlyWithinHealthLabel[] = {3,4};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 4;
				shotsToStartOverheating = 1;
				overheatingDecayInterval = 3;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"mwp1_shotgun1_shoot_SoundSet","mwp1_rifle_1_tail_SoundSet","mwp1_rifle_1_tail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_1",1,1,800};
			begin3[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_2",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.13;
			recoil = "recoil_Saiga12";
			recoilProne = "recoil_Saiga12_prone";
			dispersion = 0.01;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"mwp1_shotgun1_shoot_SoundSet","mwp1_rifle_1_tail_SoundSet","mwp1_rifle_1_tail_SoundSet"};
			reloadTime = 0.13;
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoShotgun{};
	};
	class mwp1_shotgun_4: mwp1_shotgun_4_Base
	{
		scope = 2;
		displayName = "Дробовик MWP1-4";
		descriptionShort = "Автоматический дробовик MWP1-3.//By Meru";
		model = "modern_weapon_pack_1_V2\shotgun4\mwp1shotgun4.p3d";
		attachments[] = {"weaponFlashlight","weaponOptics"};
		itemSize[] = {8,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250000;
					healthLevels[] = {{1,{"DZ\weapons\shotguns\saiga\data\saiga.rvmat"}},{0.7,{"DZ\weapons\shotguns\saiga\data\saiga.rvmat"}},{0.5,{"DZ\weapons\shotguns\saiga\data\saiga_damage.rvmat"}},{0.3,{"DZ\weapons\shotguns\saiga\data\saiga_damage.rvmat"}},{0,{"DZ\weapons\shotguns\saiga\data\saiga_destruct.rvmat"}}};
				};
			};
		};
	};
};

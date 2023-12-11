////////////////////////////////////////////////////////////////////
//DeRap: smg4\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sun Dec 10 16:36:03 2023 : 'file' last modified on Thu Nov 16 02:39:09 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class mwp1_smg_4
	{
		units[] = {"mwp1_smg_4"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class Rifle_Base;
	class mwp1_smg_4_Base: Rifle_Base
	{
		scope = 0;
		weight = 1280;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1,0.5,10,190,4,10};
		WeaponLength = 0.541088;
		barrelArmor = 1.9;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_mwp1p1p1"};
		magazines[] = {"mwp1_smg4_magazine"};
		magazineSwitchTime = 0.3;
		initSpeedMultiplier = 1.15;
		ejectType = 1;
		recoilModifier[] = {0.2,0.2,0.2};
		swayModifier[] = {0.7,0.7,0.7};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadCZ61";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_reload_0mod",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"SemiAuto","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"mwp1_smg1_shoot_SoundSet","mwp1_rifle_1_tail_SoundSet","mwp1_rifle_1_tail_SoundSet"};
			soundSetShotExt[] = {{"mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet"},{"mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_0",0.7,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_1",0.7,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_1",0.7,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.12;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.0045;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"mwp1_smg1_shoot_SoundSet","mwp1_rifle_1_tail_SoundSet","mwp1_rifle_1_tail_SoundSet"};
			soundSetShotExt[] = {{"mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet"},{"mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_0",0.7,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_1",0.7,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_1",0.7,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.065;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.0045;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "mwp1_4shot";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 15;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0,0.2};
					ignoreIfSuppressed = 1;
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.02,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
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
					overrideParticle = "mwp1_3smoke";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class NoiseShoot
		{
			strength = 66;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {75,150};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class mwp1_smg_4: mwp1_smg_4_Base
	{
		scope = 2;
		displayName = "MWP1-4 SMG";
		descriptionShort = "Upgraded submachine gun of the fourth series MWP1-4.// By Meru";
		model = "modern_weapon_pack_1_V2\smg4\mwp1_smg_4.p3d";
		attachments[] = {"weaponFlashlight","weaponOptics","weaponMuzzleAK"};
		itemSize[] = {5,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20000;
					healthLevels[] = {{1,{"DZ\weapons\firearms\cz61\data\cz61.rvmat"}},{0.7,{"DZ\weapons\firearms\cz61\data\cz61.rvmat"}},{0.5,{"DZ\weapons\firearms\cz61\data\cz61_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\cz61\data\cz61_damage.rvmat"}},{0,{"DZ\weapons\firearms\cz61\data\cz61_destruct.rvmat"}}};
				};
			};
		};
	};
};

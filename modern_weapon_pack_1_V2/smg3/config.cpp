////////////////////////////////////////////////////////////////////
//DeRap: smg3\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sun Dec 10 16:36:03 2023 : 'file' last modified on Thu Nov 16 02:39:09 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class mwp1_smg_3
	{
		units[] = {"mwp1_smg_3"};
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
class cfgWeapons
{
	class Rifle_Base;
	class mwp1_smg_3_Base: Rifle_Base
	{
		scope = 0;
		weight = 2500;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1,0.75,20,170,4,10};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic"};
		WeaponLength = 0.66353;
		barrelArmor = 0.9;
		initSpeedMultiplier = 1.05;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_mwp1p1p1"};
		magazines[] = {"mwp1_smg3_magazine"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		recoilModifier[] = {0.2,0.2,0.2};
		swayModifier[] = {0.7,0.7,0.7};
		drySound[] = {"DZ\sounds\weapons\firearms\ump45\UMP45_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\ump45\ump45_reload",0.8,1,30};
		reloadAction = "ReloadUMP";
		simpleHiddenSelections[] = {"hide_barrel"};
		modes[] = {"SemiAuto","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"mwp1_smg1_shoot_SoundSet","mwp1_rifle_1_tail_SoundSet","mwp1_rifle_1_tail_SoundSet"};
			soundSetShotExt[] = {{"mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet"},{"mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\ump45\ump45_single_0",1,1,700};
			begin2[] = {"dz\sounds\weapons\firearms\ump45\ump45_single_1",1,1,700};
			begin3[] = {"dz\sounds\weapons\firearms\ump45\ump45_single_2",1,1,700};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.12;
			recoil = "recoil_auto_primary_7outof10";
			recoilProne = "recoil_auto_primary_prone_7outof10";
			dispersion = 0.003;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\mp5k\mp5Silenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\mp5k\mp5Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"mwp1_smg1_shoot_SoundSet","mwp1_rifle_1_tail_SoundSet","mwp1_rifle_1_tail_SoundSet"};
			soundSetShotExt[] = {{"mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet"},{"mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\ump45\ump45_single_0",1,1,700};
			begin2[] = {"dz\sounds\weapons\firearms\ump45\ump45_single_1",1,1,700};
			begin3[] = {"dz\sounds\weapons\firearms\ump45\ump45_single_2",1,1,700};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.098;
			recoil = "recoil_auto_primary_7outof10";
			recoilProne = "recoil_auto_primary_prone_7outof10";
			dispersion = 0.003;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\mp5k\mp5Silenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\mp5k\mp5Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "mwp1_3shot";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 15;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.3};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel";
					positionOffset[] = {0.1,0,0};
					onlyWithinOverheatLimits[] = {0.3,0.9};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot2
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel_heavy";
					positionOffset[] = {0.1,0,0};
					onlyWithinOverheatLimits[] = {0.9,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.05,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class SmokingBarrelHotSteam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.13,0.05,0};
					onlyWithinOverheatLimits[] = {0.5,1};
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
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
		};
	};
	class mwp1_smg_3: mwp1_smg_3_Base
	{
		scope = 2;
		displayName = "MWP1-3 SMG";
		descriptionShort = "Submachine gun of the third series MWP1-3.// By Meru";
		model = "modern_weapon_pack_1_V2\smg3\mwp1smg3.p3d";
		attachments[] = {"weaponFlashlight","weaponOptics","weaponMuzzleAK"};
		itemSize[] = {5,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 25000;
					healthLevels[] = {{1,{"DZ\weapons\firearms\UMP45\data\ump45.rvmat"}},{0.7,{"DZ\weapons\firearms\UMP45\data\ump45.rvmat"}},{0.5,{"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat"}},{0,{"DZ\weapons\firearms\UMP45\data\ump45_destruct.rvmat"}}};
				};
			};
		};
	};
};

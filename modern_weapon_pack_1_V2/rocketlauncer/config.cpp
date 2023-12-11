////////////////////////////////////////////////////////////////////
//DeRap: rocketlauncer\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sun Dec 10 16:36:02 2023 : 'file' last modified on Thu Nov 16 02:39:09 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class mwp1_grenadelauncher
	{
		units[] = {"mwp1_grenadelauncher"};
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
	class mwp1_grenadelauncher_Base: Rifle_Base
	{
		scope = 0;
		weight = 2276;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1,0.6,50,200,4,10};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		WeaponLength = 0.814784;
		barrelArmor = 2.5;
		initSpeedMultiplier = 0.9;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_RocketMWP1"};
		magazines[] = {"mwp1_grenadelauncher_magazine"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {0.2,0.2,0.2};
		swayModifier[] = {0.7,0.7,0.7};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadM4";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"mwp1_grenadelauncher_shoot_SoundSet","mwp1_rifle_1_tail_SoundSet","mwp1_rifle_1_tail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_1",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_2",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_3",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.12;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
			beginSilenced_Pro1[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,75};
			beginSilenced_Pro2[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced2",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
		};
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
		};
	};
	class mwp1_grenadelauncher: mwp1_grenadelauncher_Base
	{
		scope = 2;
		displayName = "MWP1 Rocket Launcher";
		descriptionShort = "The upgraded MWP1 rocket launcher fires explosive projectiles.// By Meru";
		model = "modern_weapon_pack_1_V2\rocketlauncer\mwp1grenadelauncher1.p3d";
		attachments[] = {"weaponOptics"};
		itemSize[] = {8,3};
		spawnDamageRange[] = {0,0.6};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "mwp1_2smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 60;
				shotsToStartOverheating = 25;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
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
					overrideParticle = "mwp1_1smoke";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20000;
					healthLevels[] = {{1,{"DZ\weapons\firearms\M4\Data\m4_body.rvmat"}},{0.7,{"DZ\weapons\firearms\M4\Data\m4_body.rvmat"}},{0.5,{"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"}},{0,{"DZ\weapons\firearms\M4\Data\m4_body_destruct.rvmat"}}};
				};
			};
		};
	};
};

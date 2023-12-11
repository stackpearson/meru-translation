////////////////////////////////////////////////////////////////////
//DeRap: sniperrifle1\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sun Dec 10 16:36:03 2023 : 'file' last modified on Thu Nov 16 02:39:10 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class mwp1_sniperrifle_1
	{
		units[] = {"mwp1_sniperrifle_1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Winchester70_Base;
	class mwp1_sniperrifle_1_Base: Winchester70_Base
	{
		scope = 0;
		animName = "Winchester70";
		weight = 2721;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1,0.5,20,170,4,10};
		WeaponLength = 0.931718;
		barrelArmor = 3.125;
		winchesterTypeOpticsMount = 1;
		initSpeedMultiplier = 1.15;
		chamberSize = 5;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_mwp1sniperrifle"};
		magazines[] = {};
		DisplayMagazine = 0;
		ejectType = 0;
		recoilModifier[] = {0.2,0.2,0.2};
		swayModifier[] = {0.7,0.7,0.7};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_reload",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_cycle",0.8,1,20};
		reloadAction = "ReloadWinchester70";
		shotAction = "ReloadWinchester70_shot";
		modes[] = {"Single"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"mwp1_sniperrifle1_shoot_SoundSet","mwp1_rifle_1_tail_SoundSet","mwp1_rifle_1_tail_SoundSet"};
			soundSetShotExt[] = {{"mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_1",1,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 1;
			recoil = "recoil_Winchester";
			recoilProne = "recoil_Winchester_prone";
			dispersion = 0.0005;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			modelOptics = "-";
			memoryPointCamera = "eye";
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
			distanceZoomMin = 200;
			distanceZoomMax = 200;
		};
	};
	class mwp1_sniperrifle_1: mwp1_sniperrifle_1_Base
	{
		scope = 2;
		displayName = "MWP1-1 Sniper Rifle";
		descriptionShort = "Bolt sniper rifle MWP1-1 of the first series.// By Meru";
		model = "modern_weapon_pack_1_V2\sniperrifle1\mwp1sniperrifle1.p3d";
		attachments[] = {"weaponFlashlight","weaponOptics","weaponMuzzleAK"};
		itemSize[] = {10,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20000;
					healthLevels[] = {{1,{"DZ\weapons\firearms\winchester70\data\winchester70.rvmat"}},{0.7,{"DZ\weapons\firearms\winchester70\data\winchester70.rvmat"}},{0.5,{"DZ\weapons\firearms\winchester70\data\winchester70_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\winchester70\data\winchester70_damage.rvmat"}},{0,{"DZ\weapons\firearms\winchester70\data\winchester70_destruct.rvmat"}}};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "";
				};
				class MuzzleFlash
				{
					overrideParticle = "mwp1_3shot";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {0.1,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 3;
				overheatingDecayInterval = 4;
				class BarrelSmoke
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
					overrideParticle = "mwp1_2smoke";
					overridePoint = "Nabojnicestart";
				};
			};
		};
	};
};

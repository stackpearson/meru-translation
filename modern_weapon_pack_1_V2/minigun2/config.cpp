////////////////////////////////////////////////////////////////////
//DeRap: minigun2\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sun Dec 10 16:36:01 2023 : 'file' last modified on Thu Nov 16 02:39:09 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class mwp1_minigun_2_Weapon
	{
		units[] = {};
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
	class mwp1_minigun_2_Base: Rifle_Base
	{
		scope = 0;
		attachments[] = {"MiniganBarrels2"};
		itemSize[] = {10,5};
		weight = 28;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		ironsightsExcludingOptics[] = {};
		WeaponLength = 1.1;
		barrelArmor = 500;
		initSpeedMultiplier = 1;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"Ammo_mwp1minigun"};
		magazines[] = {"mwp1_minigun_2_magazine"};
		magazineSwitchTime = 0.25;
		ejectType = 1;
		recoilModifier[] = {0.2,0.2,0.2};
		swayModifier[] = {0.7,0.7,0.7};
		simpleHiddenSelections[] = {};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"mwp1_rifle4_shoot_SoundSet","mwp1_rifle_1_tail_SoundSet","mwp1_rifle_1_tail_SoundSet"};
			soundSetShotExt[] = {{"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.065;
			recoil = "recoil_svd";
			recoilProne = "recoil_svd_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "mwp1_1shot";
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
				shotsToStartOverheating = 5;
				maxOverheatingValue = 20;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.05,-0.02,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.12,-0.02,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					overridePoint = "GasPiston";
					positionOffset[] = {0.21,-0.02,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class Steam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.4,0.02,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class Steam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.45,0.02,0};
					onlyWithinOverheatLimits[] = {0.5,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
					onlyWithinOverheatLimits[] = {0,1};
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200000;
					healthLevels[] = {{1,{"DZ\weapons\firearms\MP5\data\mp5k_body.rvmat"}},{0.7,{"DZ\weapons\firearms\MP5\data\mp5k_body.rvmat"}},{0.5,{"DZ\weapons\firearms\MP5\data\mp5k_body_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\MP5\data\mp5k_body_damage.rvmat"}},{0,{"DZ\weapons\firearms\MP5\data\mp5k_body_destruct.rvmat"}}};
				};
			};
		};
		class NoiseShoot
		{
			strength = 200;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
		};
		class AnimationSources
		{
			class stvoli_rotates
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
		};
	};
	class MWP1_minigun_2: mwp1_minigun_2_Base
	{
		scope = 2;
		displayName = "MWP1-2 Minigun";
		descriptionShort = "Four-barreled pistol submachine gun Minigun MWP1-2.// By Meru";
		model = "modern_weapon_pack_1_V2\minigun2\mwp1_minigun2.p3d";
		itemSize[] = {10,3};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class SE_Min_Barrels2: Inventory_Base
	{
		scope = 2;
		model = "modern_weapon_pack_1_V2\minigun2\mwp1_minigun2_barrels.p3d";
		weight = 1;
		inventorySlot[] = {"MiniganBarrels2"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
				};
			};
		};
		class AnimationSources
		{
			class stvoli_rotates
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxymwp1_minigun2_barrels: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MiniganBarrels2";
		model = "modern_weapon_pack_1_V2\minigun2\mwp1_minigun2_barrels.p3d";
	};
};
class CfgSlots
{
	class Slot_MiniganBarrels2
	{
		name = "MiniganBarrels2";
		displayName = "";
		ghostIcon = "";
		show = "false";
	};
};

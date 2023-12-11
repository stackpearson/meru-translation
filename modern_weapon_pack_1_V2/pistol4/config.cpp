////////////////////////////////////////////////////////////////////
//DeRap: pistol4\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sun Dec 10 16:36:02 2023 : 'file' last modified on Thu Nov 16 02:39:09 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class mwp1_pistol_4
	{
		units[] = {"mwp1_pistol_4"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoPistol;
class cfgWeapons
{
	class Pistol_Base;
	class mwp1_pistol_4_Base: Pistol_Base
	{
		scope = 0;
		weight = 950;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1,0.5,10,250,4,10};
		ironsightsExcludingOptics[] = {"FNP45_MRDSOptic"};
		WeaponLength = 0.634148;
		barrelArmor = 1.7;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"mwp1_pistol4_magazine"};
		chamberableFrom[] = {"Ammo_mwp1pistol"};
		ejectType = 1;
		recoilModifier[] = {0.2,0.2,0.2};
		swayModifier[] = {0.7,0.7,0.7};
		drySound[] = {"dz\sounds\weapons\firearms\FNX45\FNX45_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\FNX45\FNX45_reload",0.8,1,20};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"mwp1_pistol3_shoot_SoundSet","mwp1_rifle_1_tail_SoundSet","mwp1_rifle_1_tail_SoundSet"};
			soundSetShotExt[] = {{"mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet","mwp1_silenser_shoot_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\FNX45\FNX45_single_1",1,1,600};
			begin2[] = {"dz\sounds\weapons\firearms\FNX45\FNX45_single_2",1,1,600};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.13;
			recoil = "recoil_fnx";
			recoilProne = "recoil_fnx_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\colt1911\1911Silenced",1,1,60};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\colt1911\1911Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class NoiseShoot
		{
			strength = 50;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoPistol
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class mwp1_pistol_4: mwp1_pistol_4_Base
	{
		scope = 2;
		displayName = "MWP1-4 Pistol";
		descriptionShort = "Модернизированный пистолет MWP1 Четвертой серии.// By Meru";
		model = "modern_weapon_pack_1_V2\pistol4\mwp1pistol4.p3d";
		attachments[] = {"weaponFlashlight","weaponOptics","weaponMuzzleAK"};
		itemSize[] = {3,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150000;
					healthLevels[] = {{1,{"DZ\weapons\pistols\fnx45\data\herstal45.rvmat"}},{0.7,{"DZ\weapons\pistols\fnx45\data\herstal45.rvmat"}},{0.5,{"DZ\weapons\pistols\fnx45\data\herstal45_damage.rvmat"}},{0.3,{"DZ\weapons\pistols\fnx45\data\herstal45_damage.rvmat"}},{0,{"DZ\weapons\pistols\fnx45\data\herstal45_destruct.rvmat"}}};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "mwp1_4shot";
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 5;
				maxOverheatingValue = 15;
				overheatingDecayInterval = 1;
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
	};
};

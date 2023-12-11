////////////////////////////////////////////////////////////////////
//DeRap: attachments\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sun Dec 10 16:36:00 2023 : 'file' last modified on Thu Nov 16 02:39:09 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class mwp1_attachments
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class cfgVehicles
{
	class ReflexOptic;
	class AK_Suppressor;
	class UniversalLight;
	class ACOGOptic;
	class mwp1_optick_1: ReflexOptic
	{
		scope = 2;
		displayName = "MWP1-Sight 1";
		descriptionShort = "Sight of the first series, Moder Weapon Pack 1.// By Meru";
		model = "modern_weapon_pack_1_V2\attachments\mwp1optick.p3d";
		debug_ItemCategory = 3;
		animClass = "Binoculars";
		simulation = "itemoptics";
		inventorySlot[] = {"WeaponOptics"};
		selectionFireAnim = "zasleh";
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		rotationFlags = 17;
		reversed = 0;
		weight = 250;
		itemSize[] = {2,1};
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"",""}},{0.7,{}},{0.5,{"",""}},{0.3,{}},{0,{"",""}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
		};
		repairableWithKits[] = {7};
		repairCosts[] = {25};
	};
	class mwp1_Supressor: AK_Suppressor
	{
		scope = 2;
		displayName = "MWP1 Silencer";
		descriptionShort = "Universal muffler MWP-1 of the First series.// By Meru";
		model = "modern_weapon_pack_1_V2\attachments\mwp1supressor.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 100;
		itemSize[] = {3,1};
		itemModelLength = 0.23;
		barrelArmor = 4000000;
		lootCategory = "Attachments";
		lootTag[] = {"Military_east"};
		inventorySlot[] = {"weaponMuzzleAK"};
		simulation = "ItemSuppressor";
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		noiseShootModifier = -0.9;
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1.3,1.3,1.3};
		selectionFireAnim = "zasleh";
		soundIndex = 1;
		muzzlePos = "usti hlavne";
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashAssault
				{
					overrideParticle = "";
					onlyWithinHealthLabel[] = {0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 2;
				maxOverheatingValue = 20;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "";
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "";
					positionOffset[] = {0,0.1,0};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000000;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\tgpa.rvmat"}},{0.7,{"DZ\weapons\attachments\data\tgpa.rvmat"}},{0.5,{"DZ\weapons\attachments\data\tgpa_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\tgpa_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\tgpa_destruct.rvmat"}}};
				};
			};
		};
	};
	class mwp1_flashlight_1: UniversalLight
	{
		scope = 2;
		displayName = "MWP1 Lantern with handle";
		descriptionShort = "Universal flashlight with handle for weapons MWP1.// By Meru";
		model = "modern_weapon_pack_1_V2\attachments\mwp1flashlight.p3d";
		debug_ItemCategory = 3;
		rotationFlags = 17;
		reversed = 1;
		weight = 80;
		itemSize[] = {2,2};
		inventorySlot[] = {"weaponFlashlight","helmetFlashlight"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\m4_flashlight.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\data\m4_flashlight_damage.rvmat","dz\gear\tools\data\flashlight_glass_damage.rvmat"}},{0.3,{}},{0,{"DZ\weapons\attachments\data\m4_flashlight_destruct.rvmat","dz\gear\tools\data\flashlight_glass_destruct.rvmat"}}};
				};
			};
		};
		repairableWithKits[] = {7};
		repairCosts[] = {25};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 1e-05;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class mwp1_flashlight_2: UniversalLight
	{
		scope = 2;
		displayName = "MWP1 Flashlight";
		descriptionShort = "Universal flashlight for weapons MWP1.// By Meru";
		model = "modern_weapon_pack_1_V2\attachments\mwp1flashlight2.p3d";
		debug_ItemCategory = 3;
		rotationFlags = 17;
		reversed = 1;
		weight = 80;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponFlashlight","helmetFlashlight"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\m4_flashlight.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\data\m4_flashlight_damage.rvmat","dz\gear\tools\data\flashlight_glass_damage.rvmat"}},{0.3,{}},{0,{"DZ\weapons\attachments\data\m4_flashlight_destruct.rvmat","dz\gear\tools\data\flashlight_glass_destruct.rvmat"}}};
				};
			};
		};
		repairableWithKits[] = {7};
		repairCosts[] = {25};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 1e-05;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class mwp1_optick_2: ACOGOptic
	{
		scope = 2;
		displayName = "Sight MWP1";
		descriptionShort = "An optical sight with 3x magnification, and a flashlight also increases the ergonomics of the weapon, thereby reducing recoil when firing for the MWP1 weapon.// By Meru";
		model = "modern_weapon_pack_1_V2\attachments\mwp1optick3.p3d";
		debug_ItemCategory = 3;
		animClass = "Binoculars";
		rotationFlags = 16;
		reversed = 0;
		weight = 440;
		itemSize[] = {2,1};
		inventorySlot[] = {"WeaponOptics"};
		selectionFireAnim = "zasleh";
		simulation = "itemoptics";
		dispersionModifier = -0.001;
		dispersionCondition = "true";
		recoilModifier[] = {0.1,0.1,0.1};
		swayModifier[] = {0.5,0.5,0.5};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard.rvmat","DZ\weapons\attachments\data\acog.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat","DZ\weapons\attachments\data\acog_damage.rvmat"}},{0.3,{}},{0,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat","DZ\weapons\attachments\data\acog_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/4";
			opticsZoomInit = "0.3926/4";
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.375,0.05};
			PPLensProperties[] = {0.5,0.15,0,0};
			PPBlurProperties = 0.6;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
		};
	};
	class mwp1_flashlight_3: UniversalLight
	{
		scope = 2;
		displayName = "MWP1 Lantern";
		descriptionShort = "Universal flashlight for weapons MWP1.// By Meru";
		model = "modern_weapon_pack_1_V2\attachments\mwp1flashlight3.p3d";
		debug_ItemCategory = 3;
		rotationFlags = 17;
		reversed = 1;
		weight = 80;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponFlashlight","helmetFlashlight"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\m4_flashlight.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\data\m4_flashlight_damage.rvmat","dz\gear\tools\data\flashlight_glass_damage.rvmat"}},{0.3,{}},{0,{"DZ\weapons\attachments\data\m4_flashlight_destruct.rvmat","dz\gear\tools\data\flashlight_glass_destruct.rvmat"}}};
				};
			};
		};
		repairableWithKits[] = {7};
		repairCosts[] = {25};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 1e-05;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
	class mwp1_optick_3: ReflexOptic
	{
		scope = 2;
		displayName = "MWP1-Sight 4";
		descriptionShort = "Sight of the fourth series MWP1.// By Meru";
		model = "modern_weapon_pack_1_V2\attachments\mwp1optick4.p3d";
		debug_ItemCategory = 3;
		animClass = "Binoculars";
		simulation = "itemoptics";
		inventorySlot[] = {"WeaponOptics"};
		selectionFireAnim = "zasleh";
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		rotationFlags = 17;
		reversed = 0;
		weight = 250;
		itemSize[] = {2,1};
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"",""}},{0.7,{}},{0.5,{"",""}},{0.3,{}},{0,{"",""}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 25;
			distanceZoomMax = 200;
			discreteDistance[] = {25,50,100,200};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {1,0.15,0,0};
			PPBlurProperties = 0.2;
		};
		repairableWithKits[] = {7};
		repairCosts[] = {25};
	};
	class mwp1_flashlight_4: UniversalLight
	{
		scope = 2;
		displayName = "MWP1 Lantern";
		descriptionShort = "Universal flashlight for weapons MWP1.// By Meru";
		model = "modern_weapon_pack_1_V2\attachments\mwp1flashlight4.p3d";
		debug_ItemCategory = 3;
		rotationFlags = 17;
		reversed = 1;
		weight = 80;
		itemSize[] = {1,1};
		inventorySlot[] = {"weaponFlashlight","helmetFlashlight"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\m4_flashlight.rvmat","dz\gear\tools\data\flashlight_glass.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\data\m4_flashlight_damage.rvmat","dz\gear\tools\data\flashlight_glass_damage.rvmat"}},{0.3,{}},{0,{"DZ\weapons\attachments\data\m4_flashlight_destruct.rvmat","dz\gear\tools\data\flashlight_glass_destruct.rvmat"}}};
				};
			};
		};
		repairableWithKits[] = {7};
		repairCosts[] = {25};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 1e-05;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
	};
};

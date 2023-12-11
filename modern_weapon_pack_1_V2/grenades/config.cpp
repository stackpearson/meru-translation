////////////////////////////////////////////////////////////////////
//DeRap: grenades\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sun Dec 10 16:36:01 2023 : 'file' last modified on Thu Nov 16 02:39:09 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class mwp1_grenades
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgAmmo
{
	class DefaultAmmo;
	class MWP1_Grenade_FRAG_Ammo: DefaultAmmo
	{
		indirectHit = 1;
		indirectHitRange = 3;
		indirectHitRangeMultiplier = 4;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundSetExplosion[] = {"mwp1_grenade_SoundSet","mwp1_grenade_tail_SoundSet"};
		class DamageApplied
		{
			type = "FragGrenade";
			class Health
			{
				damage = 500;
			};
			class Blood
			{
				damage = 500;
			};
			class Shock
			{
				damage = 500;
			};
		};
		class NoiseExplosion
		{
			strength = 200;
			type = "shot";
		};
	};
	class MWP1_ChemGAS_Ammo: DefaultAmmo
	{
		indirectHit = 1;
		indirectHitRange = 3;
		indirectHitRangeMultiplier = 4;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundSetExplosion[] = {"mwp1_grenade_SoundSet","mwp1_grenade_tail_SoundSet"};
		class DamageApplied
		{
			type = "FragGrenade";
			class Health
			{
				damage = 20;
			};
			class Blood
			{
				damage = 20;
			};
			class Shock
			{
				damage = 20;
			};
		};
		class NoiseExplosion
		{
			strength = 20;
			type = "shot";
		};
	};
	class MWP1_Flash_Ammo: DefaultAmmo
	{
		indirectHit = 1;
		indirectHitRange = 3;
		indirectHitRangeMultiplier = 4;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundSetExplosion[] = {"mwp1_grenadeflash_SoundSet","mwp1_grenadeflash_tail_SoundSet"};
		class DamageApplied
		{
			type = "FragGrenade";
			class Health
			{
				damage = 2;
			};
			class Blood
			{
				damage = 2;
			};
			class Shock
			{
				damage = 50;
			};
		};
		class NoiseExplosion
		{
			strength = 20;
			type = "shot";
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class ExplosivesBase: Inventory_Base
	{
		class AnimationSources{};
	};
	class RGD5Grenade;
	class M18SmokeGrenade_Red;
	class FlashGrenade;
	class Grenade_ChemGas;
	class MWP1_Grenade_FRAG: RGD5Grenade
	{
		scope = 2;
		displayName = "MWP1 Grenade";
		descriptionShort = "Regular Grenade, deals area damage.// By Meru";
		model = "modern_weapon_pack_1_V2\grenades\mwp1_grenade_1.p3d";
		weight = 350;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"DZ\weapons\explosives\data\frag_RGD5.rvmat"}},{0.7,{"DZ\weapons\explosives\data\frag_RGD5.rvmat"}},{0.5,{"DZ\weapons\explosives\data\frag_RGD5_damage.rvmat"}},{0.3,{"DZ\weapons\explosives\data\frag_RGD5_damage.rvmat"}},{0,{"DZ\weapons\explosives\data\frag_RGD5_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Grenade_unpin
				{
					soundSet = "Grenade_unpin_SoundSet";
					id = 201;
				};
				class turnOnRadio_Pin
				{
					soundSet = "Grenade_pin_SoundSet";
					id = 1006;
				};
			};
		};
	};
	class MWP1_grenade_SMOKE_test: M18SmokeGrenade_Red
	{
		scope = 0;
		displayName = "MWP1 smoke grenade";
		descriptionShort = "Smoke grenade, when the pin is pulled it creates a smoke screen.// By Meru";
		model = "modern_weapon_pack_1_V2\grenades\mwp1_grenade_2.p3d";
		rotationFlags = 17;
		weight = 130;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					healthLevels[] = {{1,{"DZ\weapons\explosives\data\smokegrenade.rvmat"}},{0.7,{"DZ\weapons\explosives\data\smokegrenade.rvmat"}},{0.5,{"DZ\weapons\explosives\data\smokegrenade_damage.rvmat"}},{0.3,{"DZ\weapons\explosives\data\smokegrenade_damage.rvmat"}},{0,{"DZ\weapons\explosives\data\smokegrenade_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			energyAtSpawn = 200;
			energyUsagePerSecond = 1;
			wetnessExposure = 0.1;
			updateInterval = 5;
		};
		class NoiseSmokeGrenade
		{
			strength = 30;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Unpin
				{
					soundSet = "SmokegGrenades_M18_oneshot_ignite_SoundSet";
					id = 201;
				};
			};
		};
	};
	class MWP1_grenade_SMOKE: MWP1_grenade_SMOKE_test
	{
		scope = 2;
	};
	class MWP1_grenade_Flash: FlashGrenade
	{
		scope = 2;
		displayName = "MWP1 Flashbang";
		descriptionShort = "Blinding grenade. During an explosion, if a person looks towards the grenade, it turns off the nervous ripples in the eyes for 15-30 seconds and stuns so much that the person falls into an unconscious state.// By Meru";
		model = "modern_weapon_pack_1_V2\grenades\mwp1_grenade_3.p3d";
		rotationFlags = 17;
		weight = 130;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					healthLevels[] = {{1,{"DZ\weapons\explosives\data\flashbang.rvmat"}},{0.7,{"DZ\weapons\explosives\data\flashbang.rvmat"}},{0.5,{"DZ\weapons\explosives\data\flashbang_damage.rvmat"}},{0.3,{"DZ\weapons\explosives\data\flashbang_damage.rvmat"}},{0,{"DZ\weapons\explosives\data\flashbang_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Grenade_unpin
				{
					soundSet = "Grenade_unpin_SoundSet";
					id = 201;
				};
				class turnOnRadio_Pin
				{
					soundSet = "Grenade_pin_SoundSet";
					id = 1006;
				};
			};
		};
	};
	class MWP1_grenade_CHEMGAS: Grenade_ChemGas
	{
		scope = 2;
		displayName = "MWP1 Chemical Grenade";
		descriptionShort = "When a grenade explodes, it releases a Chemical gas that poisons everyone in the cloud. // By Meru";
		model = "modern_weapon_pack_1_V2\grenades\mwp1_grenade_4.p3d";
		weight = 500;
		itemSize[] = {1,1};
		inventorySlot[] = {"IEDExplosiveA","IEDExplosiveB"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {{1,{"DZ\weapons\explosives\data\Grenade_ChemGas.rvmat"}},{0.7,{"DZ\weapons\explosives\data\Grenade_ChemGas.rvmat"}},{0.5,{"DZ\weapons\explosives\data\Grenade_ChemGas_damage.rvmat"}},{0.3,{"DZ\weapons\explosives\data\Grenade_ChemGas_damage.rvmat"}},{0,{"DZ\weapons\explosives\data\Grenade_ChemGas_destruct.rvmat"}}};
				};
			};
		};
	};
};

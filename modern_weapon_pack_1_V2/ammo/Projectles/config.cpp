////////////////////////////////////////////////////////////////////
//DeRap: ammo\Projectles\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sun Dec 10 16:36:00 2023 : 'file' last modified on Thu Nov 16 02:39:10 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class WeaponPack_Projectilesmwp1
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Projectiles"};
		ammo[] = {"Bullet_mwp1rifle","Bullet_mwp1pistol","Bullet_mwp1pulemet","Bullet_mwp1sniperrifle","Bullet_mwp1shotgun","Bullet_mwp1p1p1","Bullet_RocketMWP1","Bullet_RocketMWP1_2","Bullet_mwp1minigun"};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_mwp1rifle
	{
		name = "Bullet_mwp1rifle";
	};
	class AType_Bullet_mwp1pistol
	{
		name = "Bullet_mwp1pistol";
	};
	class AType_Bullet_mwp1pulemet
	{
		name = "Bullet_mwp1pulemet";
	};
	class AType_Bullet_mwp1sniperrifle
	{
		name = "Bullet_mwp1sniperrifle";
	};
	class AType_Bullet_mwp1shotgun
	{
		name = "Bullet_mwp1shotgun";
	};
	class AType_Bullet_mwp1p1p1
	{
		name = "Bullet_mwp1p1p1";
	};
	class AType_Bullet_RocketMWP1
	{
		name = "Bullet_RocketMWP1";
	};
	class AType_Bullet_RocketMWP1_2
	{
		name = "Bullet_RocketMWP1_2";
	};
	class AType_Bullet_mwp1minigun
	{
		name = "Bullet_mwp1minigun";
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class DefaultAmmo;
	class BulletCore;
	class Shotgun_Base;
	class ShotgunCore;
	class Bullet_mwp1rifle: Bullet_Base
	{
		scope = 1;
		model = "modern_weapon_pack_1_V2\ammo\Projectles\mwp1proj1.p3d";
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "Ammo_mwp1rifle";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 1000;
		typicalSpeed = 1000;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 1;
		hitAnimation = 1;
		tracerScale = 1.2;
		tracerStartTime = 0.0001;
		tracerEndTime = 10;
		unconRefillModifier = 5;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{0.94,1}};
			class Health
			{
				damage = 65000;
			};
			class Blood
			{
				damage = 65000;
			};
			class Shock
			{
				damage = 65000;
				damageOverride[] = {{0.86,1}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_mwp1minigun: Bullet_Base
	{
		scope = 1;
		model = "modern_weapon_pack_1_V2\ammo\Projectles\mwp1proj1.p3d";
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "Ammo_mwp1minigun";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 1000;
		typicalSpeed = 1000;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 1;
		hitAnimation = 1;
		tracerScale = 1.2;
		tracerStartTime = 0.0001;
		tracerEndTime = 10;
		unconRefillModifier = 5;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{0.94,1}};
			class Health
			{
				damage = 65000;
			};
			class Blood
			{
				damage = 65000;
			};
			class Shock
			{
				damage = 65000;
				damageOverride[] = {{0.86,1}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_mwp1pistol: Bullet_Base
	{
		scope = 1;
		model = "modern_weapon_pack_1_V2\ammo\Projectles\mwp1proj2.p3d";
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "Ammo_mwp1pistol";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 1000;
		typicalSpeed = 1000;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 1;
		hitAnimation = 1;
		tracerScale = 1.2;
		tracerStartTime = 0.0001;
		tracerEndTime = 10;
		unconRefillModifier = 5;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{0.94,1}};
			class Health
			{
				damage = 40000;
			};
			class Blood
			{
				damage = 40000;
			};
			class Shock
			{
				damage = 40000;
				damageOverride[] = {{0.86,1}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_mwp1pulemet: Bullet_Base
	{
		scope = 1;
		model = "modern_weapon_pack_1_V2\ammo\Projectles\mwp1proj3.p3d";
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "Ammo_mwp1pulemet";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 1000;
		typicalSpeed = 1000;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 1;
		hitAnimation = 1;
		tracerScale = 1.2;
		tracerStartTime = 0.0001;
		tracerEndTime = 10;
		unconRefillModifier = 5;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{0.94,1}};
			class Health
			{
				damage = 65000;
			};
			class Blood
			{
				damage = 65000;
			};
			class Shock
			{
				damage = 65000;
				damageOverride[] = {{0.86,1}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_mwp1sniperrifle: Bullet_Base
	{
		scope = 1;
		model = "modern_weapon_pack_1_V2\ammo\Projectles\mwp1proj4.p3d";
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "Ammo_mwp1sniperrifle";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 1000;
		typicalSpeed = 1000;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 1;
		hitAnimation = 1;
		tracerScale = 1.2;
		tracerStartTime = 0.0001;
		tracerEndTime = 10;
		unconRefillModifier = 5;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{0.94,1}};
			class Health
			{
				damage = 65000;
			};
			class Blood
			{
				damage = 65000;
			};
			class Shock
			{
				damage = 65000;
				damageOverride[] = {{0.86,1}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_mwp1shotgun: Shotgun_Base
	{
		scope = 1;
		proxyShape = "modern_weapon_pack_1_V2\ammo\Projectles\mwp1proj5.p3d";
		muzzleFlashParticle = "";
		casing = "FxCartridge_12Pellet";
		round = "FxRound_12Pellet";
		spawnPileType = "Ammo_mwp1shotgun";
		initSpeed = 340;
		typicalSpeed = 420;
		airFriction = -0.00575;
		caliber = 0.5;
		deflecting = 0;
		dispersion = 0.005;
		projectilesCount = 20;
		damageBarrel = 600;
		damageBarrelDestroyed = 600;
		weight = 0.005;
		impactBehaviour = 0;
		hitAnimation = 0;
		tracerScale = 1.2;
		tracerStartTime = 0.0001;
		tracerEndTime = 10;
		unconRefillModifier = 1.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{0.9,1}};
			class Health
			{
				damage = 65000;
			};
			class Blood
			{
				damage = 65000;
			};
			class Shock
			{
				damage = 65000;
			};
		};
		class NoiseHit
		{
			strength = 2;
			type = "shot";
		};
	};
	class Bullet_mwp1p1p1: Bullet_Base
	{
		scope = 1;
		model = "modern_weapon_pack_1_V2\ammo\Projectles\mwp1proj6.p3d";
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "Ammo_mwp1p1p1";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 1000;
		typicalSpeed = 1000;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 1;
		hitAnimation = 1;
		tracerScale = 1.2;
		tracerStartTime = 0.0001;
		tracerEndTime = 10;
		unconRefillModifier = 5;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{0.94,1}};
			class Health
			{
				damage = 65000;
			};
			class Blood
			{
				damage = 65000;
			};
			class Shock
			{
				damage = 65000;
				damageOverride[] = {{0.86,1}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_RocketMWP1: Bullet_Base
	{
		scope = 1;
		model = "modern_weapon_pack_1_V2\ammo\Projectles\mwp1proj6.p3d";
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "Ammo_RocketMWP1";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 1000;
		typicalSpeed = 1000;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 1;
		hitAnimation = 1;
		tracerScale = 1.2;
		tracerStartTime = 0.0001;
		tracerEndTime = 10;
		unconRefillModifier = 5;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{0.94,1}};
			class Health
			{
				damage = 65000;
			};
			class Blood
			{
				damage = 65000;
			};
			class Shock
			{
				damage = 65000;
				damageOverride[] = {{0.86,1}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_RocketMWP1_2: Bullet_Base
	{
		scope = 1;
		model = "modern_weapon_pack_1_V2\ammo\Projectles\mwp1proj6.p3d";
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "Ammo_RocketMWP1_2";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 1000;
		typicalSpeed = 1000;
		airFriction = -0.001;
		caliber = 1;
		deflecting = 10;
		damageBarrel = 500;
		damageBarrelDestroyed = 500;
		weight = 0.012;
		impactBehaviour = 1;
		hitAnimation = 1;
		tracerScale = 1.2;
		tracerStartTime = 0.0001;
		tracerEndTime = 10;
		unconRefillModifier = 5;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 1;
			defaultDamageOverride[] = {{0.94,1}};
			class Health
			{
				damage = 65000;
			};
			class Blood
			{
				damage = 65000;
			};
			class Shock
			{
				damage = 65000;
				damageOverride[] = {{0.86,1}};
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class mwp1_explosion_ammo: DefaultAmmo
	{
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 2;
		particle[] = {"explosion_landmine_01",""};
		explosive = 1;
		typicalSpeed = 150;
		initSpeed = 150;
		fuseDistance = 10;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundSetExplosion[] = {"mwp1_explotion_SoundSet","mwp1_explotion_tail_SoundSet"};
		soundHit[] = {"DZ\sounds\weapons\grenades\grenade\grenade_mid_explosion_01.ogg",10,1};
		soundFly[] = {"DZ\sounds\weapons\projectiles\bullet_flyby\bullet_flyby_8.ogg",3.162277e-05,1};
		soundEngine[] = {"",9.999998e-05,4};
		class DamageApplied
		{
			type = "FragGrenade";
			bleedThreshold = 1;
			class Health
			{
				damage = 65000;
			};
			class Blood
			{
				damage = 65000;
			};
			class Shock
			{
				damage = 65000;
			};
		};
		class NoiseExplosion
		{
			strength = 100;
			type = "shot";
		};
	};
	class mwp1_explosion2_ammo: DefaultAmmo
	{
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 2;
		particle[] = {"explosion_landmine_01",""};
		explosive = 1;
		typicalSpeed = 150;
		initSpeed = 150;
		fuseDistance = 10;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundSetExplosion[] = {"mwp1_explotion_SoundSet","mwp1_explotion_tail_SoundSet"};
		soundHit[] = {"DZ\sounds\weapons\grenades\grenade\grenade_mid_explosion_01.ogg",10,1};
		soundFly[] = {"DZ\sounds\weapons\projectiles\bullet_flyby\bullet_flyby_8.ogg",3.162277e-05,1};
		soundEngine[] = {"",9.999998e-05,4};
		class DamageApplied
		{
			type = "FragGrenade";
			bleedThreshold = 1;
			class Health
			{
				damage = 10000;
			};
			class Blood
			{
				damage = 10000;
			};
			class Shock
			{
				damage = 10000;
			};
		};
		class NoiseExplosion
		{
			strength = 100;
			type = "shot";
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class mwp1_explosion: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\data\lightpoint.p3d";
		ammoType = "mwp1_explosion_ammo";
	};
	class mwp1_explosion2: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\data\lightpoint.p3d";
		ammoType = "mwp1_explosion2_ammo";
	};
};

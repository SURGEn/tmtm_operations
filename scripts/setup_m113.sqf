// Script for handling initial setup of the M113s of the survivor squad.
_veh = _this select 0;

// Only run if the vehicle is local.
if (!local _veh) exitWith {};

// Set the fuel to a random amount
_veh setFuel (random [0.5, 0.7, 0.9]);

// Destroy the engine to prevent movement
_veh setHitPointDamage ["HitEngine", 1];

// Set the hull damage to a random amount
_veh setHitPointDamage ["HitHull", random [0.3, 0.5, 0.7]];
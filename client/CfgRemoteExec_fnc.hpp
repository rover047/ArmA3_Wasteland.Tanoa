// ******************************************************************************************
// * This project is licensed under the GNU Affero GPL v3. Copyright © 2014 A3Wasteland.com *
// ******************************************************************************************
//	@file Name: CfgRemoteExec_fnc.hpp
//	@file Author: AgentRev

// remoteExec & BIS_fnc_MP functions whitelist (client only, server calls are not filtered)

// BIS
class BIS_fnc_effectKilledAirDestruction {};
class BIS_fnc_effectKilledSecondaries {};
class BIS_fnc_objectVar {};

// do NOT whitelist BIS_fnc_execVM or BIS_fnc_spawn, it will allow exploits!

// A3W vanilla
class A3W_fnc_adminMenuLog { allowedTargets = 2; };
class A3W_fnc_chatBroadcast {};
class A3W_fnc_checkHackedVehicles { allowedTargets = 2; };
class A3W_fnc_checkPlayerFlag { allowedTargets = 2; };
class A3W_fnc_copilotTakeControl {};
class A3W_fnc_deathMessage {};
class A3W_fnc_deleteEmptyGroup { allowedTargets = 2; };
class A3W_fnc_flagHandler { allowedTargets = 2; };
class A3W_fnc_getInFast {};
class A3W_fnc_initPlayerServer { allowedTargets = 2; };
class A3W_fnc_logMemAnomaly { allowedTargets = 2; };
class A3W_fnc_pushVehicle {};
//class A3W_fnc_registerKillScore { allowedTargets = 2; }; // only needed for injury kill points, not currently enabled due to point farming concerns
class A3W_fnc_requestTickTime { allowedTargets = 2; };
class A3W_fnc_serverPlayerDied { allowedTargets = 2; };
class A3W_fnc_setItemCleanup { allowedTargets = 2; };
class A3W_fnc_setLockState {};
class A3W_fnc_setName { jip = 1; };
class A3W_fnc_takeOwnership { allowedTargets = 2; };
class A3W_fnc_titleTextMessage {};
class A3W_fnc_towingHelper {};
class A3W_fnc_updateSpawnTimestamp { allowedTargets = 2; };
class FAR_fnc_headshotHitPartEH {};
class FAR_fnc_public_EH {};
class mf_remote_refuel {};
class mf_remote_repair {};
class mf_remote_syphon {};

// Third-party
class A3W_fnc_addMagazineTurret {};
class A3W_fnc_addMagazineTurretBaheli {};
class A3W_fnc_addMagazineTurretBcas {};
class A3W_fnc_addMagazineTurretHorca {};
class A3W_fnc_addMagazineTurretIcas {};
class A3W_fnc_addMagazineTurretLheli {};
class A3W_fnc_addMagazineTurretMortar {};
class A3W_fnc_addMagazineTurretOaheli {};
class A3W_fnc_addMagazineTurretOcas {};
class A3W_fnc_addMagazineTurretUav2 {};
class A3W_fnc_hideObjectGlobal {allowedTargets = 2; };
class A3W_fnc_lock {};
class A3W_fnc_removeMagazinesTurret {};
class A3W_fnc_setVectorUpAndDir { jip = 1; };
class A3W_fnc_setVehicleAmmoDef {};
class A3W_fnc_unflip {};
class APOC_srv_startAirdrop { allowedTargets = 2; };
class JTS_FNC_SENT {};
class SA_Set_Owner { allowedTargets = 2; };                 //Towing Server
class SA_Hide_Object_Global { allowedTargets = 2; };        //Towing Server
class SA_Simulate_Towing { allowedTargets = 1; };           //Towing Client
class SA_Attach_Tow_Ropes { allowedTargets = 1; };          //Towing Client
class SA_Take_Tow_Ropes { allowedTargets = 1; };            //Towing Client
class SA_Put_Away_Tow_Ropes { allowedTargets = 1; };        //Towing Client
class SA_Pickup_Tow_Ropes { allowedTargets = 1; };          //Towing Client
class SA_Drop_Tow_Ropes { allowedTargets = 1; };            //Towing Client
class SA_Hint { allowedTargets = 1; };                      //Towing Client
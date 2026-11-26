#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/RegisterGameActors.h"
#include "../../lib/grapher/inc/grapher/Core/ActorManager.h"
#include "Game/Grapher/Actors/ActorCancel.h"
#include "Game/Grapher/Actors/ActorCompareInt.h"
#include "Game/Grapher/Actors/ActorCompareFloat.h"
#include "Game/Grapher/Actors/ActorCompareBool.h"
#include "Game/Grapher/Actors/ActorConvertorIntFloat.h"
#include "Game/Grapher/Actors/ActorConvertorFloatDouble.h"
#include "Game/Grapher/Actors/ActorConvertorFloatInt.h"
#include "Game/Grapher/Actors/ActorConvertorDoubleInt.h"
#include "Game/Grapher/Actors/ActorDelay.h"
#include "Game/Grapher/Actors/ActorEnd.h"
#include "Game/Grapher/Actors/ActorMultiplyInt.h"
#include "Game/Grapher/Actors/ActorMultiplyFloat.h"
#include "Game/Grapher/Actors/ActorDivideInt.h"
#include "Game/Grapher/Actors/ActorDivideFloat.h"
#include "Game/Grapher/Actors/ActorSubstractInt.h"
#include "Game/Grapher/Actors/ActorSubstractFloat.h"
#include "Game/Grapher/Actors/ActorAddInt.h"
#include "Game/Grapher/Actors/ActorAddFloat.h"
#include "Game/Grapher/Actors/ActorIncrement.h"
#include "Game/Grapher/Actors/ActorPrint.h"
#include "Game/Grapher/Actors/ActorRandomNumber.h"
#include "Game/Grapher/Actors/ActorSequenceIn.h"
#include "Game/Grapher/Actors/ActorSequenceOut.h"
#include "Game/Grapher/Actors/ActorSetterInt.h"
#include "Game/Grapher/Actors/ActorSetterCst.h"
#include "Game/Grapher/Actors/ActorSetterFloat.h"
#include "Game/Grapher/Actors/ActorSetterBool.h"
#include "Game/Grapher/Actors/ActorStart.h"
#include "Game/Grapher/Actors/ActorSwitchSwitch.h"
#include "Game/Grapher/Actors/ActorSwitchRandom.h"
#include "Game/Grapher/Actors/ActorTrigger.h"
#include "Game/Grapher/Actors/ActorGameBase.h"
#include "Game/Grapher/Actors/ActorAnimation.h"
#include "Game/Grapher/Actors/ActorBehavior.h"
#include "Game/Grapher/Actors/ActorBehaviorChild.h"
#include "Game/Grapher/Actors/ActorTimer.h"
#include "Game/Grapher/Actors/ActorGameCameraPreset.h"
#include "Game/Grapher/Actors/ActorGameCharacterAim.h"
#include "Game/Grapher/Actors/ActorGameCharacterAssignObject.h"
#include "Game/Grapher/Actors/ActorGameCharacterAttack.h"
#include "Game/Grapher/Actors/ActorGameCharacterBurst.h"
#include "Game/Grapher/Actors/ActorGameCharacterCheckCollision.h"
#include "Game/Grapher/Actors/ActorGameCharacterClimb.h"
#include "Game/Grapher/Actors/ActorGameCharacterCorrectCrash.h"
#include "Game/Grapher/Actors/ActorGameCharacterCover.h"
#include "Game/Grapher/Actors/ActorGameCharacterCoverObject.h"
#include "Game/Grapher/Actors/ActorGameCharacterDrive.h"
#include "Game/Grapher/Actors/ActorGameCharacterDrivingManeuver.h"
#include "Game/Grapher/Actors/ActorGameCharacterEjectVehicle.h"
#include "Game/Grapher/Actors/ActorGameCharacterEnterVehicle.h"
#include "Game/Grapher/Actors/ActorGameCharacterEquipWeapon.h"
#include "Game/Grapher/Actors/ActorGameCharacterExitVehicle.h"
#include "Game/Grapher/Actors/ActorGameCharacterFlinch.h"
#include "Game/Grapher/Actors/ActorGameCharacterFollow.h"
#include "Game/Grapher/Actors/ActorGameCharacterGetIn.h"
#include "Game/Grapher/Actors/ActorGameCharacterGetOut.h"
#include "Game/Grapher/Actors/ActorGameCharacterGetWeaponDamage.h"
#include "Game/Grapher/Actors/ActorGameCharacterGoTo.h"
#include "Game/Grapher/Actors/ActorGameCharacterKill.h"
#include "Game/Grapher/Actors/ActorGameCharacterLaunchCharacter.h"
#include "Game/Grapher/Actors/ActorGameCharacterLockWantedLevel.h"
#include "Game/Grapher/Actors/ActorGameCharacterMelee.h"
#include "Game/Grapher/Actors/ActorGameCharacterMeleeAttack.h"
#include "Game/Grapher/Actors/ActorGameCharacterMove.h"
#include "Game/Grapher/Actors/ActorGameCharacterParachute.h"
#include "Game/Grapher/Actors/ActorGameCharacterPickUpVehicle.h"
#include "Game/Grapher/Actors/ActorGameCharacterPlayAnim.h"
#include "Game/Grapher/Actors/ActorGameCharacterProstrate.h"
#include "Game/Grapher/Actors/ActorGameCharacterPushOutOfVehicle.h"
#include "Game/Grapher/Actors/ActorGameCharacterRaiseWeapon.h"
#include "Game/Grapher/Actors/ActorGameCharacterReloadWeapon.h"
#include "Game/Grapher/Actors/ActorGameCharacterRequestToken.h"
#include "Game/Grapher/Actors/ActorGameCharacterSetDriveBehaviour.h"
#include "Game/Grapher/Actors/ActorGameCharacterSetInteractionPreset.h"
#include "Game/Grapher/Actors/ActorGameCharacterSetInVehicle.h"
#include "Game/Grapher/Actors/ActorGameCharacterSetMonitoredAnim.h"
#include "Game/Grapher/Actors/ActorGameCharacterSetMood.h"
#include "Game/Grapher/Actors/ActorGameCharacterSetMoveAnimation.h"
#include "Game/Grapher/Actors/ActorGameCharacterSetPath.h"
#include "Game/Grapher/Actors/ActorGameCharacterSetPathDestination.h"
#include "Game/Grapher/Actors/ActorGameCharacterSetRandomDestination.h"
#include "Game/Grapher/Actors/ActorGameCharacterSetWeapon.h"
#include "Game/Grapher/Actors/ActorGameCharacterShoot.h"
#include "Game/Grapher/Actors/ActorGameCharacterSnapToTarget.h"
#include "Game/Grapher/Actors/ActorGameCharacterSpawnAI.h"
#include "Game/Grapher/Actors/ActorGameCharacterState.h"
#include "Game/Grapher/Actors/ActorGameCharacterSteerTowardDeepWater.h"
#include "Game/Grapher/Actors/ActorGameCharacterStopForObject.h"
#include "Game/Grapher/Actors/ActorGameCharacterSwitchJetpackMode.h"
#include "Game/Grapher/Actors/ActorGameCharacterThrownOutVehicle.h"
#include "Game/Grapher/Actors/ActorGameCharacterThrowOutOfVehicle.h"
#include "Game/Grapher/Actors/ActorGameCharacterToggleAggro.h"
#include "Game/Grapher/Actors/ActorGameCharacterToggleFight.h"
#include "Game/Grapher/Actors/ActorGameCharacterToggleFlee.h"
#include "Game/Grapher/Actors/ActorGameCharacterToggleRubberBanding.h"
#include "Game/Grapher/Actors/ActorGameCharacterToggleScripted.h"
#include "Game/Grapher/Actors/ActorGameCharacterToggleUseCover.h"
#include "Game/Grapher/Actors/ActorGameCharacterTurnToward.h"
#include "Game/Grapher/Actors/ActorGameCharacterUseCover.h"
#include "Game/Grapher/Actors/ActorGameCharacterVehicleDoor.h"
#include "Game/Grapher/Actors/ActorGameCharacterWantedLevel.h"
#include "Game/Grapher/Actors/ActorGameSetActionZone.h"
#include "Game/Grapher/Actors/ActorSoundAction.h"
#include "Game/Grapher/Actors/ActorGameCinematicDialog.h"
#include "Game/Grapher/Actors/ActorGameCinematicFadeIn.h"
#include "Game/Grapher/Actors/ActorGameCinematicFadeOut.h"
#include "Game/Grapher/Actors/ActorGameCinematicPlay.h"
#include "Game/Grapher/Actors/ActorGameCinematicPlayFX.h"
#include "Game/Grapher/Actors/ActorGameCinematicSetCam.h"
#include "Game/Grapher/Actors/ActorGameCinematicSetPreanimatedCam.h"
#include "Game/Grapher/Actors/ActorGameCinematicShakeCam.h"
#include "Game/Grapher/Actors/ActorGameCinematicStart.h"
#include "Game/Grapher/Actors/ActorGameCinematicStop.h"
#include "Game/Grapher/Actors/ActorGameConditionAnimEnded.h"
#include "Game/Grapher/Actors/ActorGameConditionHasVehicle.h"
#include "Game/Grapher/Actors/ActorGameConditionInRange.h"
#include "Game/Grapher/Actors/ActorGameConditionIsAlive.h"
#include "Game/Grapher/Actors/ActorGameConditionIsAttacked.h"
#include "Game/Grapher/Actors/ActorGameConditionIsIdle.h"
#include "Game/Grapher/Actors/ActorGameConditionLanded.h"
#include "Game/Grapher/Actors/ActorGameConditionStolen.h"
#include "Game/Grapher/Actors/ActorGameConditionWantedLevel.h"
#include "Game/Grapher/Actors/ActorGameConditionWithin.h"
#include "Game/Grapher/Actors/ActorGameEventLockLootDrop.h"
#include "Game/Grapher/Actors/ActorGameEventOnKill.h"
#include "Game/Grapher/Actors/ActorGameEventOnPickUp.h"
#include "Game/Grapher/Actors/ActorGameEventsHudOnTouch.h"
#include "Game/Grapher/Actors/ActorGameScriptLODFilter.h"
#include "Game/Grapher/Actors/ActorGameGangBattlesApplyProfile.h"
#include "Game/Grapher/Actors/ActorGameGangBattlesResetMemberList.h"
#include "Game/Grapher/Actors/ActorGameGangBattlesRetrieveMember.h"
#include "Game/Grapher/Actors/ActorGameHUD.h"
#include "Game/Grapher/Actors/ActorGameHUDFollowerStatus.h"
#include "Game/Grapher/Actors/ActorGameHUDRaceLockControls.h"
#include "Game/Grapher/Actors/ActorGameHUDControls.h"
#include "Game/Grapher/Actors/ActorGameHUDGenericText.h"
#include "Game/Grapher/Actors/ActorGameHUDHighlight.h"
#include "Game/Grapher/Actors/ActorGameHUDSetInteractionButton.h"
#include "Game/Grapher/Actors/ActorGameHUDSetText.h"
#include "Game/Grapher/Actors/ActorGameHudSetObjective.h"
#include "Game/Grapher/Actors/ActorGameHudSetWarning.h"
#include "Game/Grapher/Actors/ActorGameHUDSetVarText.h"
#include "Game/Grapher/Actors/ActorGameHUDTutorial.h"
#include "Game/Grapher/Actors/ActorGameTimer.h"
#include "Game/Grapher/Actors/ActorGameItemShop.h"
#include "Game/Grapher/Actors/ActorGameSkillsMenu.h"
#include "Game/Grapher/Actors/ActorGameMenu.h"
#include "Game/Grapher/Actors/ActorGameMenuVideo.h"
#include "Game/Grapher/Actors/ActorGameMissionStart.h"
#include "Game/Grapher/Actors/ActorGameMissionStop.h"
#include "Game/Grapher/Actors/ActorGameMissionUnload.h"
#include "Game/Grapher/Actors/ActorGameMissionIsCompleted.h"
#include "Game/Grapher/Actors/ActorGameStartModule.h"
#include "Game/Grapher/Actors/ActorGameObjectApplyDamage.h"
#include "Game/Grapher/Actors/ActorGameObjectAttach.h"
#include "Game/Grapher/Actors/ActorGameObjectConvertToAsset.h"
#include "Game/Grapher/Actors/ActorGameObjectCount.h"
#include "Game/Grapher/Actors/ActorGameObjectEnable.h"
#include "Game/Grapher/Actors/ActorGameObjectHide.h"
#include "Game/Grapher/Actors/ActorGameObjectExists.h"
#include "Game/Grapher/Actors/ActorGameObjectFindRandom.h"
#include "Game/Grapher/Actors/ActorGameObjectGetProperty.h"
#include "Game/Grapher/Actors/ActorGameObjectGiveHealth.h"
#include "Game/Grapher/Actors/ActorGameObjectGetHealth.h"
#include "Game/Grapher/Actors/ActorGameObjectHighlight.h"
#include "Game/Grapher/Actors/ActorGameObjectList.h"
#include "Game/Grapher/Actors/ActorGameObjectMoveTo.h"
#include "Game/Grapher/Actors/ActorGameObjectReplacement.h"
#include "Game/Grapher/Actors/ActorGameObjectSetAnim.h"
#include "Game/Grapher/Actors/ActorGameObjectSetProperty.h"
#include "Game/Grapher/Actors/ActorGameObjectStop.h"
#include "Game/Grapher/Actors/ActorGameObjectTeleport.h"
#include "Game/Grapher/Actors/ActorGamePlayerTeleportToEstate.h"
#include "Game/Grapher/Actors/ActorGameObjectTestProperty.h"
#include "Game/Grapher/Actors/ActorGameObjectToggleCollisions.h"
#include "Game/Grapher/Actors/ActorGameObjectSetMovability.h"
#include "Game/Grapher/Actors/ActorGameObjectToggleImmobilized.h"
#include "Game/Grapher/Actors/ActorGameObjectToggleIndestructible.h"
#include "Game/Grapher/Actors/ActorGameObjectToggleSpawn.h"
#include "Game/Grapher/Actors/ActorGameObjectToggleTargetable.h"
#include "Game/Grapher/Actors/ActorGameObjectValue.h"
#include "Game/Grapher/Actors/ActorGamePhysicsExplosion.h"
#include "Game/Grapher/Actors/ActorGamePlayerEquipGear.h"
#include "Game/Grapher/Actors/ActorGamePlayerGiveCurrency.h"
#include "Game/Grapher/Actors/ActorGamePlayerGiveItem.h"
#include "Game/Grapher/Actors/ActorGamePlayerRemoveItem.h"
#include "Game/Grapher/Actors/ActorGamePlayerGiveRespect.h"
#include "Game/Grapher/Actors/ActorGamePlayerSetThrowable.h"
#include "Game/Grapher/Actors/ActorGameScriptExec.h"
#include "Game/Grapher/Actors/ActorGameSoundFX.h"
#include "Game/Grapher/Actors/ActorGameSoundAmbience.h"
#include "Game/Grapher/Actors/ActorGameSoundOneLiners.h"
#include "Game/Grapher/Actors/ActorGameSoundMusic.h"
#include "Game/Grapher/Actors/ActorGameStatCounters.h"
#include "Game/Grapher/Actors/ActorGameTrackVehicleSold.h"
#include "Game/Grapher/Actors/ActorGameVehicleDestroy.h"
#include "Game/Grapher/Actors/ActorGameVehicleLockDoors.h"
#include "Game/Grapher/Actors/ActorGameVehicleSetSpeed.h"
#include "Game/Grapher/Actors/ActorGameVehicleToggleRadio.h"
#include "Game/Grapher/Actors/ActorGameWorldCoverEligible.h"
#include "Game/Grapher/Actors/ActorGameWorldItem.h"
#include "Game/Grapher/Actors/ActorGameWorldChangeLocation.h"
#include "Game/Grapher/Actors/ActorGameWorldRace.h"
#include "Game/Grapher/Actors/ActorGameWorldSetLock.h"
#include "Game/Grapher/Actors/ActorGameWorldTime.h"
#include "Game/Grapher/Actors/ActorGameWorldTimeFormat.h"
#include "Game/Grapher/Actors/ActorGameWorldTimeScale.h"

// ----------------------------------------------------------------------------
// Function: Game::Grapher::RegisterAllGameActors  (binary VA: 0x0)
// Original: Game::Grapher::RegisterAllGameActors
// ----------------------------------------------------------------------------
int Game::Grapher::RegisterAllGameActors(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  int v195;
  int v196;
  int v197;
  int v198;
  int v199;
  int v200;
  int v201;
  int v202;
  int v203;
  int v204;
  int v205;
  int v206;
  int v207;
  int v208;
  int result;
  int v210;
  int v211;
  int v212;
  int v213;
  int v214;
  int v215;
  int v216;
  int v217;
  int v218;
  int v219;
  int v220;
  int v221;
  int v222;
  int v223;
  int v224;
  int v225;
  int v226;
  int v227;
  int v228;
  int v229;
  int v230;
  int v231;
  int v232;
  int v233;
  int v234;
  int v235;
  int v236;
  int v237;
  int v238;
  int v239;
  int v240;
  int v241;
  int v242;
  int v243;
  int v244;
  int v245;
  int v246;
  int v247;
  int v248;
  int v249;
  int v250;
  int v251;
  int v252;
  int v253;
  int v254;
  int v255;
  int v256;
  int v257;
  int v258;
  int v259;
  int v260;
  int64_t v261;
  int v262;
  int v263;
  int v264;
  int v265;
  int v266;
  int v267;
  int v268;
  int v269;
  int v270;
  int v271;
  int v272;
  int v273;
  int v274;
  int v275;
  int v276;
  int v277;
  int v278;
  int v279;
  int v280;
  int v281;
  int v282;
  int v283;
  int v284;
  int v285;
  int v286;
  int v287;
  int v288;
  int v289;
  int v290;
  int v291;
  int v292;
  int v293;
  int v294;
  int v295;
  int v296;
  int v297;
  int v298;
  int v299;
  int v300;
  int v301;
  int v302;
  int v303;
  int v304;
  int v305;
  int v306;
  int v307;
  int v308;
  int v309;
  int v310;
  int v311;
  int v312;
  int v313;
  int v314;
  int v315;
  int v316;
  int v317;
  int v318;
  int v319;
  int v320;
  int v321;
  int v322;
  int v323;
  int v324;
  int v325;
  int v326;
  int v327;
  int v328;
  int v329;
  int v330;
  int v331;
  int v332;
  int v333;
  int v334;
  int v335;
  int v336;
  int v337;
  int v338;
  int v339;
  int v340;
  int v341;
  int v342;
  int v343;
  int v344;
  int v345;
  int v346;
  int v347;
  int v348;
  int v349;
  int v350;
  int v351;
  int v352;
  int v353;
  int v354;
  int v355;
  int v356;
  int v357;
  int v358;
  int v359;
  int v360;
  int v361;
  int v362;
  int v363;
  int v364;
  int v365;
  int v366;
  int v367;
  int v368;
  int v369;
  int v370;
  int v371;
  int v372;
  int v373;
  int v374;
  int v375;
  int v376;
  int v377;
  int v378;
  int v379;
  int v380;
  int v381;
  int v382;
  int v383;
  int v384;
  int v385;
  int v386;
  int v387;
  int v388;
  int v389;
  int v390;
  int v391;
  int v392;
  int v393;
  int v394;
  int v395;
  int v396;
  int v397;
  int v398;
  int v399;
  int v400;
  int v401;
  int v402;
  int v403;
  int v404;
  int v405;
  int v406;
  int v407;
  int v408;
  int v409;
  int v410;
  int v411;
  int v412;
  int v413;
  int v414;
  int v415;
  int v416;
  int v417;
  int v418;
  int v419;
  int v420;
  int v421;
  int v422;
  int v423;
  int v424;
  int v425;
  int v426;
  int v427;
  int v428;
  int v429;
  int v430;
  int v431;
  int v432;
  int v433;
  int v434;
  int v435;
  int v436;
  int v437;
  int v438;
  int v439;
  int v440;
  int v441;
  int v442;
  int v443;
  int v444;
  int v445;
  int v446;
  int v447;
  int v448;
  int v449;
  int v450;
  int v451;
  int v452;
  int v453;
  int v454;
  int v455;
  int v456;
  int v457;
  int v458;
  int v459;
  int v460;
  int v461;
  int v462;
  int v463;
  int v464;
  int v465;
  int v466;
  int v467;
  uint32_t v468[84];

  v2 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v451), "Cancel", (int)(uintptr_t)(&v257) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v2 + 4),
               (void **)&v451) = (uint32_t)(uintptr_t)(ActorCancel::CreateInstance);
  g4_std::string::Destroy(&v451);
  if ( a2 != 0 )
  {
    grapher::ActorCancel::ActorCancel((grapher::ActorCancel::Self *)v468, 0xFFFFFFFF);
    grapher::ActorCancel::Destroy((grapher::ActorCancel::Self *)v468);
  }
  v3 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v452), "CompareInt", (int)(uintptr_t)(&v258));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v3 + 4),
               (void **)&v452) = (uint32_t)(uintptr_t)(ActorCompareInt::CreateInstance);
  g4_std::string::Destroy(&v452);
  if ( a2 != 0 )
  {
    grapher::ActorCompareInt::ActorCompareInt((grapher::ActorCompareInt::Self *)v468, 0xFFFFFFFF);
    grapher::ActorCompareInt::Destroy((grapher::ActorCompareInt::Self *)v468);
  }
  v4 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v453), "CompareFloat", (int)(uintptr_t)(&v258) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v4 + 4),
               (void **)&v453) = (uint32_t)(uintptr_t)(ActorCompareFloat::CreateInstance);
  g4_std::string::Destroy(&v453);
  if ( a2 != 0 )
  {
    grapher::ActorCompareFloat::ActorCompareFloat((grapher::ActorCompareFloat::Self *)v468, 0xFFFFFFFF);
    grapher::ActorCompareFloat::Destroy((grapher::ActorCompareFloat::Self *)v468);
  }
  v5 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v454), "CompareBool", (int)(uintptr_t)(&v258) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v5 + 4),
               (void **)&v454) = (uint32_t)(uintptr_t)(ActorCompareBool::CreateInstance);
  g4_std::string::Destroy(&v454);
  if ( a2 != 0 )
  {
    grapher::ActorCompareBool::ActorCompareBool((grapher::ActorCompareBool::Self *)v468, 0xFFFFFFFF);
    grapher::ActorCompareBool::Destroy((grapher::ActorCompareBool::Self *)v468);
  }
  v6 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v455), "ConvertorIntFloat", (int)(uintptr_t)(&v258) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v6 + 4),
               (void **)&v455) = (uint32_t)(uintptr_t)(ActorConvertorIntFloat::CreateInstance);
  g4_std::string::Destroy(&v455);
  if ( a2 != 0 )
  {
    grapher::ActorConvertorIntFloat::ActorConvertorIntFloat((grapher::ActorConvertorIntFloat::Self *)v468, 0xFFFFFFFF);
    grapher::ActorConvertorIntFloat::Destroy((grapher::ActorConvertorIntFloat::Self *)v468);
  }
  v7 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v456), "ConvertorFloatDouble", (int)(uintptr_t)(&v259));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v7 + 4),
               (void **)&v456) = (uint32_t)(uintptr_t)(ActorConvertorFloatDouble::CreateInstance);
  g4_std::string::Destroy(&v456);
  if ( a2 != 0 )
  {
    grapher::ActorConvertorFloatDouble::ActorConvertorFloatDouble(
      (grapher::ActorConvertorFloatDouble::Self *)v468,
      0xFFFFFFFF);
    grapher::ActorConvertorFloatDouble::Destroy((grapher::ActorConvertorFloatDouble::Self *)v468);
  }
  v8 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v457), "ConvertorFloatInt", (int)(uintptr_t)(&v259) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v8 + 4),
               (void **)&v457) = (uint32_t)(uintptr_t)(ActorConvertorFloatInt::CreateInstance);
  g4_std::string::Destroy(&v457);
  if ( a2 != 0 )
  {
    grapher::ActorConvertorFloatInt::ActorConvertorFloatInt((grapher::ActorConvertorFloatInt::Self *)v468, 0xFFFFFFFF);
    grapher::ActorConvertorFloatInt::Destroy((grapher::ActorConvertorFloatInt::Self *)v468);
  }
  v9 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v458), "ConvertorDoubleInt", (int)(uintptr_t)(&v259) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v9 + 4),
               (void **)&v458) = (uint32_t)(uintptr_t)(ActorConvertorDoubleInt::CreateInstance);
  g4_std::string::Destroy(&v458);
  if ( a2 != 0 )
  {
    grapher::ActorConvertorDoubleInt::ActorConvertorDoubleInt((grapher::ActorConvertorDoubleInt::Self *)v468, 0xFFFFFFFF);
    grapher::ActorConvertorDoubleInt::Destroy((grapher::ActorConvertorDoubleInt::Self *)v468);
  }
  v10 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v459), "Delay", (int)(uintptr_t)(&v259) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v10 + 4),
               (void **)&v459) = (uint32_t)(uintptr_t)(ActorDelay::CreateInstance);
  g4_std::string::Destroy(&v459);
  if ( a2 != 0 )
  {
    grapher::ActorDelay::Construct((grapher::ActorDelay::Self *)v468, 0xFFFFFFFF);
    grapher::ActorDelay::Destroy((grapher::ActorDelay::Self *)v468);
  }
  v11 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v460), "End", (int)(uintptr_t)(&v260));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v11 + 4),
               (void **)&v460) = (uint32_t)(uintptr_t)(ActorEnd::CreateInstance);
  g4_std::string::Destroy(&v460);
  if ( a2 != 0 )
  {
    grapher::ActorEnd::ActorEnd((grapher::ActorEnd::Self *)v468, 0xFFFFFFFF);
    grapher::ActorEnd::Destroy((grapher::ActorEnd::Self *)v468);
  }
  v12 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v461), "MultiplyInt", (int)(uintptr_t)(&v260) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v12 + 4),
               (void **)&v461) = (uint32_t)(uintptr_t)(ActorMultiplyInt::CreateInstance);
  g4_std::string::Destroy(&v461);
  if ( a2 != 0 )
  {
    grapher::ActorMultiplyInt::ActorMultiplyInt((grapher::ActorMultiplyInt::Self *)v468, 0xFFFFFFFF);
    grapher::ActorMultiplyInt::Destroy((grapher::ActorMultiplyInt::Self *)v468);
  }
  v13 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v462), "MultiplyFloat", (int)(uintptr_t)(&v260) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v13 + 4),
               (void **)&v462) = (uint32_t)(uintptr_t)(ActorMultiplyFloat::CreateInstance);
  g4_std::string::Destroy(&v462);
  if ( a2 != 0 )
  {
    grapher::ActorMultiplyFloat::ActorMultiplyFloat((grapher::ActorMultiplyFloat::Self *)v468, 0xFFFFFFFF);
    grapher::ActorMultiplyFloat::Destroy((grapher::ActorMultiplyFloat::Self *)v468);
  }
  v14 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v463), "DivideInt", (int)(uintptr_t)(&v260) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v14 + 4),
               (void **)&v463) = (uint32_t)(uintptr_t)(ActorDivideInt::CreateInstance);
  g4_std::string::Destroy(&v463);
  if ( a2 != 0 )
  {
    grapher::ActorDivideInt::ActorDivideInt((grapher::ActorDivideInt::Self *)v468, 0xFFFFFFFF);
    grapher::ActorDivideInt::Destroy((grapher::ActorDivideInt::Self *)v468);
  }
  v15 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v464), "DivideFloat", (int)(uintptr_t)(&v261));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v15 + 4),
               (void **)&v464) = (uint32_t)(uintptr_t)(ActorDivideFloat::CreateInstance);
  g4_std::string::Destroy(&v464);
  if ( a2 != 0 )
  {
    grapher::ActorDivideFloat::ActorDivideFloat((grapher::ActorDivideFloat::Self *)v468, 0xFFFFFFFF);
    grapher::ActorDivideFloat::Destroy((grapher::ActorDivideFloat::Self *)v468);
  }
  v16 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v465), "SubstractInt", (int)(uintptr_t)(&v261) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v16 + 4),
               (void **)&v465) = (uint32_t)(uintptr_t)(ActorSubstractInt::CreateInstance);
  g4_std::string::Destroy(&v465);
  if ( a2 != 0 )
  {
    grapher::ActorSubstractInt::ActorSubstractInt((grapher::ActorSubstractInt::Self *)v468, 0xFFFFFFFF);
    grapher::ActorSubstractInt::Destroy((grapher::ActorSubstractInt::Self *)v468);
  }
  v17 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v466), "SubstractFloat", (int)(uintptr_t)(&v261) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v17 + 4),
               (void **)&v466) = (uint32_t)(uintptr_t)(ActorSubstractFloat::CreateInstance);
  g4_std::string::Destroy(&v466);
  if ( a2 != 0 )
  {
    grapher::ActorSubstractFloat::ActorSubstractFloat((grapher::ActorSubstractFloat::Self *)v468, 0xFFFFFFFF);
    grapher::ActorSubstractFloat::Destroy((grapher::ActorSubstractFloat::Self *)v468);
  }
  v18 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v467), "AddInt", (int)(uintptr_t)(&v261) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v18 + 4),
               (void **)&v467) = (uint32_t)(uintptr_t)(ActorAddInt::CreateInstance);
  g4_std::string::Destroy(&v467);
  if ( a2 != 0 )
  {
    grapher::ActorAddInt::ActorAddInt((grapher::ActorAddInt::Self *)v468, 0xFFFFFFFF);
    grapher::ActorAddInt::Destroy((grapher::ActorAddInt::Self *)v468);
  }
  v19 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v261) + 4, "AddFloat", (int)(uintptr_t)(&v210));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v19 + 4),
               (void **)&v261 + 1) = (uint32_t)(uintptr_t)(ActorAddFloat::CreateInstance);
  g4_std::string::Destroy((char *)&v261 + 4);
  if ( a2 != 0 )
  {
    grapher::ActorAddFloat::ActorAddFloat((grapher::ActorAddFloat::Self *)v468, 0xFFFFFFFF);
    grapher::ActorAddFloat::Destroy((grapher::ActorAddFloat::Self *)v468);
  }
  v20 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v262), "Increment", (int)(uintptr_t)(&v210) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v20 + 4),
               (void **)&v262) = (uint32_t)(uintptr_t)(ActorIncrement::CreateInstance);
  g4_std::string::Destroy(&v262);
  if ( a2 != 0 )
  {
    grapher::ActorIncrement::ActorIncrement((grapher::ActorIncrement::Self *)v468, 0xFFFFFFFF);
    grapher::ActorIncrement::Destroy((grapher::ActorIncrement::Self *)v468);
  }
  v21 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v263), "Print", (int)(uintptr_t)(&v210) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v21 + 4),
               (void **)&v263) = (uint32_t)(uintptr_t)(ActorPrint::CreateInstance);
  g4_std::string::Destroy(&v263);
  if ( a2 != 0 )
  {
    grapher::ActorPrint::ActorPrint((grapher::ActorPrint::Self *)v468, 0xFFFFFFFF);
    grapher::ActorPrint::Destroy((grapher::ActorPrint::Self *)v468);
  }
  v22 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v264), "RandomNumber", (int)(uintptr_t)(&v211));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v22 + 4),
               (void **)&v264) = (uint32_t)(uintptr_t)(ActorRandomNumber::CreateInstance);
  g4_std::string::Destroy(&v264);
  if ( a2 != 0 )
  {
    grapher::ActorRandomNumber::ActorRandomNumber((grapher::ActorRandomNumber::Self *)v468, 0xFFFFFFFF);
    grapher::ActorRandomNumber::Destroy((grapher::ActorRandomNumber::Self *)v468);
  }
  v23 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v265), "SequenceIn", (int)(uintptr_t)(&v211) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v23 + 4),
               (void **)&v265) = (uint32_t)(uintptr_t)(ActorSequenceIn::CreateInstance);
  g4_std::string::Destroy(&v265);
  if ( a2 != 0 )
  {
    grapher::ActorSequenceIn::ActorSequenceIn((grapher::ActorSequenceIn::Self *)v468, 0xFFFFFFFF);
    grapher::ActorSequenceIn::Destroy((grapher::ActorSequenceIn::Self *)v468);
  }
  v24 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v266), "SequenceOut", (int)(uintptr_t)(&v211) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v24 + 4),
               (void **)&v266) = (uint32_t)(uintptr_t)(ActorSequenceOut::CreateInstance);
  g4_std::string::Destroy(&v266);
  if ( a2 != 0 )
  {
    grapher::ActorSequenceOut::ActorSequenceOut((grapher::ActorSequenceOut::Self *)v468, 0xFFFFFFFF);
    grapher::ActorSequenceOut::Destroy((grapher::ActorSequenceOut::Self *)v468);
  }
  v25 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v267), "SetterInt", (int)(uintptr_t)(&v211) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v25 + 4),
               (void **)&v267) = (uint32_t)(uintptr_t)(ActorSetterInt::CreateInstance);
  g4_std::string::Destroy(&v267);
  if ( a2 != 0 )
  {
    grapher::ActorSetterInt::ActorSetterInt((grapher::ActorSetterInt::Self *)v468, 0xFFFFFFFF);
    grapher::ActorSetterInt::Destroy((grapher::ActorSetterInt::Self *)v468);
  }
  v26 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v268), "SetterCst", (int)(uintptr_t)(&v212));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v26 + 4),
               (void **)&v268) = (uint32_t)(uintptr_t)(ActorSetterCst::CreateInstance);
  g4_std::string::Destroy(&v268);
  if ( a2 != 0 )
  {
    grapher::ActorSetterCst::ActorSetterCst((grapher::ActorSetterCst::Self *)v468, 0xFFFFFFFF);
    grapher::ActorSetterCst::Destroy((grapher::ActorSetterCst::Self *)v468);
  }
  v27 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v269), "SetterFloat", (int)(uintptr_t)(&v212) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v27 + 4),
               (void **)&v269) = (uint32_t)(uintptr_t)(ActorSetterFloat::CreateInstance);
  g4_std::string::Destroy(&v269);
  if ( a2 != 0 )
  {
    grapher::ActorSetterFloat::ActorSetterFloat((grapher::ActorSetterFloat::Self *)v468, 0xFFFFFFFF);
    grapher::ActorSetterFloat::Destroy((grapher::ActorSetterFloat::Self *)v468);
  }
  v28 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v270), "SetterBool", (int)(uintptr_t)(&v212) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v28 + 4),
               (void **)&v270) = (uint32_t)(uintptr_t)(ActorSetterBool::CreateInstance);
  g4_std::string::Destroy(&v270);
  if ( a2 != 0 )
  {
    grapher::ActorSetterBool::ActorSetterBool((grapher::ActorSetterBool::Self *)v468, 0xFFFFFFFF);
    grapher::ActorSetterBool::Destroy((grapher::ActorSetterBool::Self *)v468);
  }
  v29 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v271), "Start", (int)(uintptr_t)(&v212) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v29 + 4),
               (void **)&v271) = (uint32_t)(uintptr_t)(ActorStart::CreateInstance);
  g4_std::string::Destroy(&v271);
  if ( a2 != 0 )
  {
    grapher::ActorStart::ActorStart((grapher::ActorStart::Self *)v468, 0xFFFFFFFF);
    grapher::ActorStart::Destroy((grapher::ActorStart::Self *)v468);
  }
  v30 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v272), "SwitchSwitch", (int)(uintptr_t)(&v213));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v30 + 4),
               (void **)&v272) = (uint32_t)(uintptr_t)(ActorSwitchSwitch::CreateInstance);
  g4_std::string::Destroy(&v272);
  if ( a2 != 0 )
  {
    grapher::ActorSwitchSwitch::ActorSwitchSwitch((grapher::ActorSwitchSwitch::Self *)v468, 0xFFFFFFFF);
    grapher::ActorSwitchSwitch::Destroy((grapher::ActorSwitchSwitch::Self *)v468);
  }
  v31 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v273), "SwitchRandom", (int)(uintptr_t)(&v213) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v31 + 4),
               (void **)&v273) = (uint32_t)(uintptr_t)(((grapher::ActorSwitchRandom::Self * (*)(unsigned int, int, int))ActorSwitchRandom::CreateInstance));
  g4_std::string::Destroy(&v273);
  if ( a2 != 0 )
  {
    grapher::ActorSwitchRandom::ActorSwitchRandom((grapher::ActorSwitchRandom::Self *)v468, 0xFFFFFFFF);
    grapher::ActorSwitchRandom::Destroy((grapher::ActorSwitchRandom::Self *)v468);
  }
  v32 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v274), "Trigger", (int)(uintptr_t)(&v213) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v32 + 4),
               (void **)&v274) = (uint32_t)(uintptr_t)(((grapher::ActorTrigger::Self * (*)(unsigned int, int, int))ActorTrigger::CreateInstance));
  g4_std::string::Destroy(&v274);
  if ( a2 != 0 )
  {
    grapher::ActorTrigger::ActorTrigger((grapher::ActorTrigger::Self *)v468, 0xFFFFFFFF);
    grapher::ActorTrigger::Destroy((grapher::ActorTrigger::Self *)v468);
  }
  v33 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v275), "GameBase", (int)(uintptr_t)(&v213) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v33 + 4),
               (void **)&v275) = (uint32_t)(uintptr_t)(ActorGameBase::CreateInstance);
  g4_std::string::Destroy(&v275);
  if ( a2 != 0 )
  {
    ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameBase::Destroy((grapher::ActorBase::Self *)v468);
  }
  v34 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v276), "Animation", (int)(uintptr_t)(&v214));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v34 + 4),
               (void **)&v276) = (uint32_t)(uintptr_t)(ActorAnimation::CreateInstance);
  g4_std::string::Destroy(&v276);
  if ( a2 != 0 )
  {
    ActorAnimation::Construct((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorAnimation::Destroy((grapher::ActorBase::Self *)v468);
  }
  v35 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v277), "Behavior", (int)(uintptr_t)(&v214) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v35 + 4),
               (void **)&v277) = (uint32_t)(uintptr_t)(ActorBehavior::CreateInstance);
  g4_std::string::Destroy(&v277);
  if ( a2 != 0 )
  {
    ActorBehavior::ActorBehavior((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorBehavior::Destroy((grapher::ActorBase::Self *)v468);
  }
  v36 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v278), "BehaviorChild", (int)(uintptr_t)(&v214) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v36 + 4),
               (void **)&v278) = (uint32_t)(uintptr_t)(ActorBehaviorChild::CreateInstance);
  g4_std::string::Destroy(&v278);
  if ( a2 != 0 )
  {
    ActorBehaviorChild::ActorBehaviorChild((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorBehaviorChild::Destroy((grapher::ActorBase::Self *)v468);
  }
  v37 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v279), "Timer", (int)(uintptr_t)(&v214) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v37 + 4),
               (void **)&v279) = (uint32_t)(uintptr_t)(ActorTimer::CreateInstance);
  g4_std::string::Destroy(&v279);
  if ( a2 != 0 )
  {
    ActorTimer::Construct((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorTimer::Destroy((grapher::ActorBase::Self *)v468);
  }
  v38 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v280), "GameCameraPreset", (int)(uintptr_t)(&v215));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v38 + 4),
               (void **)&v280) = (uint32_t)(uintptr_t)(ActorGameCameraPreset::CreateInstance);
  g4_std::string::Destroy(&v280);
  if ( a2 != 0 )
  {
    ActorGameCameraPreset::ActorGameCameraPreset((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCameraPreset::Destroy((grapher::ActorBase::Self *)v468);
  }
  v39 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v281), "GameCharacterAim", (int)(uintptr_t)(&v215) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v39 + 4),
               (void **)&v281) = (uint32_t)(uintptr_t)(ActorGameCharacterAim::CreateInstance);
  g4_std::string::Destroy(&v281);
  if ( a2 != 0 )
  {
    ActorGameCharacterAim::ActorGameCharacterAim((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterAim::Destroy((grapher::ActorBase::Self *)v468);
  }
  v40 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v282), "GameCharacterAssignObject", (int)(uintptr_t)(&v215) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v40 + 4),
               (void **)&v282) = (uint32_t)(uintptr_t)(ActorGameCharacterAssignObject::CreateInstance);
  g4_std::string::Destroy(&v282);
  if ( a2 != 0 )
  {
    ActorGameCharacterAssignObject::ActorGameCharacterAssignObject((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterAssignObject::Destroy((grapher::ActorBase::Self *)v468);
  }
  v41 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v283), "GameCharacterAttack", (int)(uintptr_t)(&v215) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v41 + 4),
               (void **)&v283) = (uint32_t)(uintptr_t)(ActorGameCharacterAttack::CreateInstance);
  g4_std::string::Destroy(&v283);
  if ( a2 != 0 )
  {
    ActorGameCharacterAttack::ActorGameCharacterAttack((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterAttack::Destroy((grapher::ActorBase::Self *)v468);
  }
  v42 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v284), "GameCharacterBurst", (int)(uintptr_t)(&v216));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v42 + 4),
               (void **)&v284) = (uint32_t)(uintptr_t)(ActorGameCharacterBurst::CreateInstance);
  g4_std::string::Destroy(&v284);
  if ( a2 != 0 )
  {
    ActorGameCharacterBurst::ActorGameCharacterBurst((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterBurst::Destroy((grapher::ActorBase::Self *)v468);
  }
  v43 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v285), "GameCharacterCheckCollision", (int)(uintptr_t)(&v216) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v43 + 4),
               (void **)&v285) = (uint32_t)(uintptr_t)(ActorGameCharacterCheckCollision::CreateInstance);
  g4_std::string::Destroy(&v285);
  if ( a2 != 0 )
  {
    ActorGameCharacterCheckCollision::ActorGameCharacterCheckCollision((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterCheckCollision::Destroy((grapher::ActorBase::Self *)v468);
  }
  v44 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v286), "GameCharacterClimb", (int)(uintptr_t)(&v216) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v44 + 4),
               (void **)&v286) = (uint32_t)(uintptr_t)(ActorGameCharacterClimb::CreateInstance);
  g4_std::string::Destroy(&v286);
  if ( a2 != 0 )
  {
    ActorGameCharacterClimb::ActorGameCharacterClimb((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterClimb::Destroy((grapher::ActorBase::Self *)v468);
  }
  v45 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v287), "GameCharacterCorrectCrash", (int)(uintptr_t)(&v216) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v45 + 4),
               (void **)&v287) = (uint32_t)(uintptr_t)(ActorGameCharacterCorrectCrash::CreateInstance);
  g4_std::string::Destroy(&v287);
  if ( a2 != 0 )
  {
    ActorGameCharacterCorrectCrash::ActorGameCharacterCorrectCrash((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterCorrectCrash::Destroy((grapher::ActorBase::Self *)v468);
  }
  v46 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v288), "GameCharacterCover", (int)(uintptr_t)(&v217));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v46 + 4),
               (void **)&v288) = (uint32_t)(uintptr_t)(ActorGameCharacterCover::CreateInstance);
  g4_std::string::Destroy(&v288);
  if ( a2 != 0 )
  {
    ActorGameCharacterCover::ActorGameCharacterCover((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterCover::Destroy((grapher::ActorBase::Self *)v468);
  }
  v47 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v289), "GameCharacterCoverObject", (int)(uintptr_t)(&v217) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v47 + 4),
               (void **)&v289) = (uint32_t)(uintptr_t)(ActorGameCharacterCoverObject::CreateInstance);
  g4_std::string::Destroy(&v289);
  if ( a2 != 0 )
  {
    ActorGameCharacterCoverObject::ActorGameCharacterCoverObject(v468, -1);
    ActorGameCharacterCoverObject::Destroy(v468);
  }
  v48 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v290), "GameCharacterDrive", (int)(uintptr_t)(&v217) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v48 + 4),
               (void **)&v290) = (uint32_t)(uintptr_t)(ActorGameCharacterDrive::CreateInstance);
  g4_std::string::Destroy(&v290);
  if ( a2 != 0 )
  {
    ActorGameCharacterDrive::ActorGameCharacterDrive((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterDrive::Destroy((grapher::ActorBase::Self *)v468);
  }
  v49 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v291), "GameCharacterDrivingManeuver", (int)(uintptr_t)(&v217) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v49 + 4),
               (void **)&v291) = (uint32_t)(uintptr_t)(ActorGameCharacterDrivingManeuver::CreateInstance);
  g4_std::string::Destroy(&v291);
  if ( a2 != 0 )
  {
    ActorGameCharacterDrivingManeuver::ActorGameCharacterDrivingManeuver((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterDrivingManeuver::Destroy((grapher::ActorBase::Self *)v468);
  }
  v50 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v292), "GameCharacterEjectVehicle", (int)(uintptr_t)(&v218));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v50 + 4),
               (void **)&v292) = (uint32_t)(uintptr_t)(ActorGameCharacterEjectVehicle::CreateInstance);
  g4_std::string::Destroy(&v292);
  if ( a2 != 0 )
  {
    ActorGameCharacterEjectVehicle::ActorGameCharacterEjectVehicle((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterEjectVehicle::Destroy((grapher::ActorBase::Self *)v468);
  }
  v51 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v293), "GameCharacterEnterVehicle", (int)(uintptr_t)(&v218) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v51 + 4),
               (void **)&v293) = (uint32_t)(uintptr_t)(ActorGameCharacterEnterVehicle::CreateInstance);
  g4_std::string::Destroy(&v293);
  if ( a2 != 0 )
  {
    ActorGameCharacterEnterVehicle::ActorGameCharacterEnterVehicle((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterEnterVehicle::Destroy((grapher::ActorBase::Self *)v468);
  }
  v52 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v294), "GameCharacterEquipWeapon", (int)(uintptr_t)(&v218) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v52 + 4),
               (void **)&v294) = (uint32_t)(uintptr_t)(ActorGameCharacterEquipWeapon::CreateInstance);
  g4_std::string::Destroy(&v294);
  if ( a2 != 0 )
  {
    ActorGameCharacterEquipWeapon::ActorGameCharacterEquipWeapon((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterEquipWeapon::Destroy((grapher::ActorBase::Self *)v468);
  }
  v53 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v295), "GameCharacterExitVehicle", (int)(uintptr_t)(&v218) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v53 + 4),
               (void **)&v295) = (uint32_t)(uintptr_t)(ActorGameCharacterExitVehicle::CreateInstance);
  g4_std::string::Destroy(&v295);
  if ( a2 != 0 )
  {
    ActorGameCharacterExitVehicle::ActorGameCharacterExitVehicle((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterExitVehicle::Destroy((grapher::ActorBase::Self *)v468);
  }
  v54 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v296), "GameCharacterFlinch", (int)(uintptr_t)(&v219));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v54 + 4),
               (void **)&v296) = (uint32_t)(uintptr_t)(ActorGameCharacterFlinch::CreateInstance);
  g4_std::string::Destroy(&v296);
  if ( a2 != 0 )
  {
    ActorGameCharacterFlinch::ActorGameCharacterFlinch(v468, -1);
    ActorGameCharacterFlinch::Destroy(v468);
  }
  v55 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v297), "GameCharacterFollow", (int)(uintptr_t)(&v219) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v55 + 4),
               (void **)&v297) = (uint32_t)(uintptr_t)(ActorGameCharacterFollow::CreateInstance);
  g4_std::string::Destroy(&v297);
  if ( a2 != 0 )
  {
    ActorGameCharacterFollow::ActorGameCharacterFollow(v468, -1);
    ActorGameCharacterFollow::Destroy(v468);
  }
  v56 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v298), "GameCharacterGetIn", (int)(uintptr_t)(&v219) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v56 + 4),
               (void **)&v298) = (uint32_t)(uintptr_t)(ActorGameCharacterGetIn::CreateInstance);
  g4_std::string::Destroy(&v298);
  if ( a2 != 0 )
  {
    ActorGameCharacterGetIn::ActorGameCharacterGetIn(v468, -1);
    ActorGameCharacterGetIn::Destroy(v468);
  }
  v57 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v299), "GameCharacterGetOut", (int)(uintptr_t)(&v219) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v57 + 4),
               (void **)&v299) = (uint32_t)(uintptr_t)(ActorGameCharacterGetOut::CreateInstance);
  g4_std::string::Destroy(&v299);
  if ( a2 != 0 )
  {
    ActorGameCharacterGetOut::ActorGameCharacterGetOut(v468, -1);
    ActorGameCharacterGetOut::Destroy(v468);
  }
  v58 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v300), "GameCharacterGetWeaponDamage", (int)(uintptr_t)(&v220));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v58 + 4),
               (void **)&v300) = (uint32_t)(uintptr_t)(ActorGameCharacterGetWeaponDamage::CreateInstance);
  g4_std::string::Destroy(&v300);
  if ( a2 != 0 )
  {
    ActorGameCharacterGetWeaponDamage::ActorGameCharacterGetWeaponDamage(v468, -1);
    ActorGameCharacterGetWeaponDamage::Destroy(v468);
  }
  v59 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v301), "GameCharacterGoTo", (int)(uintptr_t)(&v220) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v59 + 4),
               (void **)&v301) = (uint32_t)(uintptr_t)(ActorGameCharacterGoTo::CreateInstance);
  g4_std::string::Destroy(&v301);
  if ( a2 != 0 )
  {
    ActorGameCharacterGoTo::ActorGameCharacterGoTo(v468, -1);
    ActorGameCharacterGoTo::Destroy(v468);
  }
  v60 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v302), "GameCharacterKill", (int)(uintptr_t)(&v220) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v60 + 4),
               (void **)&v302) = (uint32_t)(uintptr_t)(ActorGameCharacterKill::CreateInstance);
  g4_std::string::Destroy(&v302);
  if ( a2 != 0 )
  {
    ActorGameCharacterKill::ActorGameCharacterKill(v468, -1);
    ActorGameCharacterKill::Destroy(v468);
  }
  v61 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v303), "GameCharacterLaunchCharacter", (int)(uintptr_t)(&v220) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v61 + 4),
               (void **)&v303) = (uint32_t)(uintptr_t)(ActorGameCharacterLaunchCharacter::CreateInstance);
  g4_std::string::Destroy(&v303);
  if ( a2 != 0 )
  {
    ActorGameCharacterLaunchCharacter::ActorGameCharacterLaunchCharacter((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterLaunchCharacter::Destroy((grapher::ActorBase::Self *)v468);
  }
  v62 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v304), "GameCharacterLockWantedLevel", (int)(uintptr_t)(&v221));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v62 + 4),
               (void **)&v304) = (uint32_t)(uintptr_t)(ActorGameCharacterLockWantedLevel::CreateInstance);
  g4_std::string::Destroy(&v304);
  if ( a2 != 0 )
  {
    ActorGameCharacterLockWantedLevel::ActorGameCharacterLockWantedLevel(v468, -1);
    ActorGameCharacterLockWantedLevel::Destroy(v468);
  }
  v63 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v305), "GameCharacterMelee", (int)(uintptr_t)(&v221) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v63 + 4),
               (void **)&v305) = (uint32_t)(uintptr_t)(ActorGameCharacterMelee::CreateInstance);
  g4_std::string::Destroy(&v305);
  if ( a2 != 0 )
  {
    ActorGameCharacterMelee::ActorGameCharacterMelee(v468, -1);
    ActorGameCharacterMelee::Destroy(v468);
  }
  v64 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v306), "GameCharacterMeleeAttack", (int)(uintptr_t)(&v221) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v64 + 4),
               (void **)&v306) = (uint32_t)(uintptr_t)(ActorGameCharacterMeleeAttack::CreateInstance);
  g4_std::string::Destroy(&v306);
  if ( a2 != 0 )
  {
    ActorGameCharacterMeleeAttack::ActorGameCharacterMeleeAttack(v468, -1);
    ActorGameCharacterMeleeAttack::Destroy(v468);
  }
  v65 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v307), "GameCharacterMove", (int)(uintptr_t)(&v221) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v65 + 4),
               (void **)&v307) = (uint32_t)(uintptr_t)(ActorGameCharacterMove::CreateInstance);
  g4_std::string::Destroy(&v307);
  if ( a2 != 0 )
  {
    ActorGameCharacterMove::ActorGameCharacterMove(v468, -1);
    ActorGameCharacterMove::Destroy(v468);
  }
  v66 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v308), "GameCharacterParachute", (int)(uintptr_t)(&v222));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v66 + 4),
               (void **)&v308) = (uint32_t)(uintptr_t)(ActorGameCharacterParachute::CreateInstance);
  g4_std::string::Destroy(&v308);
  if ( a2 != 0 )
  {
    ActorGameCharacterParachute::ActorGameCharacterParachute((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterParachute::Destroy((grapher::ActorBase::Self *)v468);
  }
  v67 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v309), "GameCharacterPickUpVehicle", (int)(uintptr_t)(&v222) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v67 + 4),
               (void **)&v309) = (uint32_t)(uintptr_t)(ActorGameCharacterPickUpVehicle::CreateInstance);
  g4_std::string::Destroy(&v309);
  if ( a2 != 0 )
  {
    ActorGameCharacterPickUpVehicle::ActorGameCharacterPickUpVehicle((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterPickUpVehicle::Destroy((grapher::ActorBase::Self *)v468);
  }
  v68 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v310), "GameCharacterPlayAnim", (int)(uintptr_t)(&v222) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v68 + 4),
               (void **)&v310) = (uint32_t)(uintptr_t)(ActorGameCharacterPlayAnim::CreateInstance);
  g4_std::string::Destroy(&v310);
  if ( a2 != 0 )
  {
    ActorGameCharacterPlayAnim::ActorGameCharacterPlayAnim(v468, -1);
    ActorGameCharacterPlayAnim::Destroy(v468);
  }
  v69 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v311), "GameCharacterProstrate", (int)(uintptr_t)(&v222) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v69 + 4),
               (void **)&v311) = (uint32_t)(uintptr_t)(ActorGameCharacterProstrate::CreateInstance);
  g4_std::string::Destroy(&v311);
  if ( a2 != 0 )
  {
    ActorGameCharacterProstrate::ActorGameCharacterProstrate(v468, -1);
    ActorGameCharacterProstrate::Destroy(v468);
  }
  v70 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v312), "GameCharacterPushOutOfVehicle", (int)(uintptr_t)(&v223));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v70 + 4),
               (void **)&v312) = (uint32_t)(uintptr_t)(ActorGameCharacterPushOutOfVehicle::CreateInstance);
  g4_std::string::Destroy(&v312);
  if ( a2 != 0 )
  {
    ActorGameCharacterPushOutOfVehicle::ActorGameCharacterPushOutOfVehicle(v468, -1);
    ActorGameCharacterPushOutOfVehicle::Destroy(v468);
  }
  v71 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v313), "GameCharacterRaiseWeapon", (int)(uintptr_t)(&v223) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v71 + 4),
               (void **)&v313) = (uint32_t)(uintptr_t)(ActorGameCharacterRaiseWeapon::CreateInstance);
  g4_std::string::Destroy(&v313);
  if ( a2 != 0 )
  {
    ActorGameCharacterRaiseWeapon::ActorGameCharacterRaiseWeapon(v468, -1);
    ActorGameCharacterRaiseWeapon::Destroy(v468);
  }
  v72 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v314), "GameCharacterReloadWeapon", (int)(uintptr_t)(&v223) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v72 + 4),
               (void **)&v314) = (uint32_t)(uintptr_t)(ActorGameCharacterReloadWeapon::CreateInstance);
  g4_std::string::Destroy(&v314);
  if ( a2 != 0 )
  {
    ActorGameCharacterReloadWeapon::ActorGameCharacterReloadWeapon(v468, -1);
    ActorGameCharacterReloadWeapon::Destroy(v468);
  }
  v73 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v315), "GameCharacterRequestToken", (int)(uintptr_t)(&v223) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v73 + 4),
               (void **)&v315) = (uint32_t)(uintptr_t)(ActorGameCharacterRequestToken::CreateInstance);
  g4_std::string::Destroy(&v315);
  if ( a2 != 0 )
  {
    ActorGameCharacterRequestToken::ActorGameCharacterRequestToken(v468, -1);
    ActorGameCharacterRequestToken::Destroy(v468);
  }
  v74 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v316), "GameCharacterSetDriveBehaviour", (int)(uintptr_t)(&v224));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v74 + 4),
               (void **)&v316) = (uint32_t)(uintptr_t)(ActorGameCharacterSetDriveBehaviour::CreateInstance);
  g4_std::string::Destroy(&v316);
  if ( a2 != 0 )
  {
    ActorGameCharacterSetDriveBehaviour::ActorGameCharacterSetDriveBehaviour(v468, -1);
    ActorGameCharacterSetDriveBehaviour::Destroy(v468);
  }
  v75 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v317), "GameCharacterSetInteractionPreset", (int)(uintptr_t)(&v224) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v75 + 4),
               (void **)&v317) = (uint32_t)(uintptr_t)(ActorGameCharacterSetInteractionPreset::CreateInstance);
  g4_std::string::Destroy(&v317);
  if ( a2 != 0 )
  {
    ActorGameCharacterSetInteractionPreset::ActorGameCharacterSetInteractionPreset(v468, -1);
    ActorGameCharacterSetInteractionPreset::Destroy(v468);
  }
  v76 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v318), "GameCharacterSetInVehicle", (int)(uintptr_t)(&v224) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v76 + 4),
               (void **)&v318) = (uint32_t)(uintptr_t)(ActorGameCharacterSetInVehicle::CreateInstance);
  g4_std::string::Destroy(&v318);
  if ( a2 != 0 )
  {
    ActorGameCharacterSetInVehicle::ActorGameCharacterSetInVehicle(v468, -1);
    ActorGameCharacterSetInVehicle::Destroy(v468);
  }
  v77 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v319), "GameCharacterSetMonitoredAnim", (int)(uintptr_t)(&v224) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v77 + 4),
               (void **)&v319) = (uint32_t)(uintptr_t)(ActorGameCharacterSetMonitoredAnim::CreateInstance);
  g4_std::string::Destroy(&v319);
  if ( a2 != 0 )
  {
    ActorGameCharacterSetMonitoredAnim::ActorGameCharacterSetMonitoredAnim(v468, -1);
    ActorGameCharacterSetMonitoredAnim::Destroy(v468);
  }
  v78 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v320), "GameCharacterSetMood", (int)(uintptr_t)(&v225));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v78 + 4),
               (void **)&v320) = (uint32_t)(uintptr_t)(ActorGameCharacterSetMood::CreateInstance);
  g4_std::string::Destroy(&v320);
  if ( a2 != 0 )
  {
    ActorGameCharacterSetMood::ActorGameCharacterSetMood(v468, -1);
    ActorGameCharacterSetMood::Destroy(v468);
  }
  v79 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v321), "GameCharacterSetMoveAnimation", (int)(uintptr_t)(&v225) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v79 + 4),
               (void **)&v321) = (uint32_t)(uintptr_t)(ActorGameCharacterSetMoveAnimation::CreateInstance);
  g4_std::string::Destroy(&v321);
  if ( a2 != 0 )
  {
    ActorGameCharacterSetMoveAnimation::ActorGameCharacterSetMoveAnimation(v468, -1);
    ActorGameCharacterSetMoveAnimation::Destroy(v468);
  }
  v80 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v322), "GameCharacterSetPath", (int)(uintptr_t)(&v225) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v80 + 4),
               (void **)&v322) = (uint32_t)(uintptr_t)(ActorGameCharacterSetPath::CreateInstance);
  g4_std::string::Destroy(&v322);
  if ( a2 != 0 )
  {
    ActorGameCharacterSetPath::ActorGameCharacterSetPath(v468, -1);
    ActorGameCharacterSetPath::Destroy(v468);
  }
  v81 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v323), "GameCharacterSetPathDestination", (int)(uintptr_t)(&v225) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v81 + 4),
               (void **)&v323) = (uint32_t)(uintptr_t)(ActorGameCharacterSetPathDestination::CreateInstance);
  g4_std::string::Destroy(&v323);
  if ( a2 != 0 )
  {
    ActorGameCharacterSetPathDestination::ActorGameCharacterSetPathDestination(v468, -1);
    ActorGameCharacterSetPathDestination::Destroy(v468);
  }
  v82 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v324), "GameCharacterSetRandomDestination", (int)(uintptr_t)(&v226));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v82 + 4),
               (void **)&v324) = (uint32_t)(uintptr_t)(ActorGameCharacterSetRandomDestination::CreateInstance);
  g4_std::string::Destroy(&v324);
  if ( a2 != 0 )
  {
    ActorGameCharacterSetRandomDestination::ActorGameCharacterSetRandomDestination(v468, -1);
    ActorGameCharacterSetRandomDestination::Destroy(v468);
  }
  v83 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v325), "GameCharacterSetWeapon", (int)(uintptr_t)(&v226) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v83 + 4),
               (void **)&v325) = (uint32_t)(uintptr_t)(ActorGameCharacterSetWeapon::CreateInstance);
  g4_std::string::Destroy(&v325);
  if ( a2 != 0 )
  {
    ActorGameCharacterSetWeapon::ActorGameCharacterSetWeapon(v468, -1);
    ActorGameCharacterSetWeapon::Destroy(v468);
  }
  v84 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v326), "GameCharacterShoot", (int)(uintptr_t)(&v226) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v84 + 4),
               (void **)&v326) = (uint32_t)(uintptr_t)(ActorGameCharacterShoot::CreateInstance);
  g4_std::string::Destroy(&v326);
  if ( a2 != 0 )
  {
    ActorGameCharacterShoot::ActorGameCharacterShoot(v468, -1);
    ActorGameCharacterShoot::Destroy(v468);
  }
  v85 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v327), "GameCharacterSnapToTarget", (int)(uintptr_t)(&v226) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v85 + 4),
               (void **)&v327) = (uint32_t)(uintptr_t)(ActorGameCharacterSnapToTarget::CreateInstance);
  g4_std::string::Destroy(&v327);
  if ( a2 != 0 )
  {
    ActorGameCharacterSnapToTarget::ActorGameCharacterSnapToTarget(v468, -1);
    ActorGameCharacterSnapToTarget::Destroy(v468);
  }
  v86 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v328), "GameCharacterSpawnAI", (int)(uintptr_t)(&v227));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v86 + 4),
               (void **)&v328) = (uint32_t)(uintptr_t)(ActorGameCharacterSpawnAI::CreateInstance);
  g4_std::string::Destroy(&v328);
  if ( a2 != 0 )
  {
    ActorGameCharacterSpawnAI::Construct(v468, -1);
    ActorGameCharacterSpawnAI::Destroy(v468);
  }
  v87 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v329), "GameCharacterState", (int)(uintptr_t)(&v227) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v87 + 4),
               (void **)&v329) = (uint32_t)(uintptr_t)(ActorGameCharacterState::CreateInstance);
  g4_std::string::Destroy(&v329);
  if ( a2 != 0 )
  {
    ActorGameCharacterState::ActorGameCharacterState(v468, -1);
    ActorGameCharacterState::Destroy(v468);
  }
  v88 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v330), "GameCharacterSteerTowardDeepWater", (int)(uintptr_t)(&v227) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v88 + 4),
               (void **)&v330) = (uint32_t)(uintptr_t)(ActorGameCharacterSteerTowardDeepWater::CreateInstance);
  g4_std::string::Destroy(&v330);
  if ( a2 != 0 )
  {
    ActorGameCharacterSteerTowardDeepWater::ActorGameCharacterSteerTowardDeepWater(v468, -1);
    ActorGameCharacterSteerTowardDeepWater::Destroy(v468);
  }
  v89 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v331), "GameCharacterStopForObject", (int)(uintptr_t)(&v227) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v89 + 4),
               (void **)&v331) = (uint32_t)(uintptr_t)(ActorGameCharacterStopForObject::CreateInstance);
  g4_std::string::Destroy(&v331);
  if ( a2 != 0 )
  {
    ActorGameCharacterStopForObject::ActorGameCharacterStopForObject(v468, -1);
    ActorGameCharacterStopForObject::Destroy(v468);
  }
  v90 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v332), "GameCharacterSwitchJetpackMode", (int)(uintptr_t)(&v228));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v90 + 4),
               (void **)&v332) = (uint32_t)(uintptr_t)(ActorGameCharacterSwitchJetpackMode::CreateInstance);
  g4_std::string::Destroy(&v332);
  if ( a2 != 0 )
  {
    ActorGameCharacterSwitchJetpackMode::ActorGameCharacterSwitchJetpackMode((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorGameCharacterSwitchJetpackMode::Destroy((grapher::ActorBase::Self *)v468);
  }
  v91 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v333), "GameCharacterThrownOutVehicle", (int)(uintptr_t)(&v228) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v91 + 4),
               (void **)&v333) = (uint32_t)(uintptr_t)(ActorGameCharacterThrownOutVehicle::CreateInstance);
  g4_std::string::Destroy(&v333);
  if ( a2 != 0 )
  {
    ActorGameCharacterThrownOutVehicle::ActorGameCharacterThrownOutVehicle(v468, -1);
    ActorGameCharacterThrownOutVehicle::Destroy(v468);
  }
  v92 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v334), "GameCharacterThrowOutOfVehicle", (int)(uintptr_t)(&v228) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v92 + 4),
               (void **)&v334) = (uint32_t)(uintptr_t)(ActorGameCharacterThrowOutOfVehicle::CreateInstance);
  g4_std::string::Destroy(&v334);
  if ( a2 != 0 )
  {
    ActorGameCharacterThrowOutOfVehicle::ActorGameCharacterThrowOutOfVehicle(v468, -1);
    ActorGameCharacterThrowOutOfVehicle::Destroy(v468);
  }
  v93 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v335), "GameCharacterToggleAggro", (int)(uintptr_t)(&v228) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v93 + 4),
               (void **)&v335) = (uint32_t)(uintptr_t)(ActorGameCharacterToggleAggro::CreateInstance);
  g4_std::string::Destroy(&v335);
  if ( a2 != 0 )
  {
    ActorGameCharacterToggleAggro::ActorGameCharacterToggleAggro(v468, -1);
    ActorGameCharacterToggleAggro::Destroy(v468);
  }
  v94 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v336), "GameCharacterToggleFight", (int)(uintptr_t)(&v229));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v94 + 4),
               (void **)&v336) = (uint32_t)(uintptr_t)(ActorGameCharacterToggleFight::CreateInstance);
  g4_std::string::Destroy(&v336);
  if ( a2 != 0 )
  {
    ActorGameCharacterToggleFight::ActorGameCharacterToggleFight(v468, -1);
    ActorGameCharacterToggleFight::Destroy(v468);
  }
  v95 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v337), "GameCharacterToggleFlee", (int)(uintptr_t)(&v229) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v95 + 4),
               (void **)&v337) = (uint32_t)(uintptr_t)(ActorGameCharacterToggleFlee::CreateInstance);
  g4_std::string::Destroy(&v337);
  if ( a2 != 0 )
  {
    ActorGameCharacterToggleFlee::ActorGameCharacterToggleFlee(v468, -1);
    ActorGameCharacterToggleFlee::Destroy(v468);
  }
  v96 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v338), "GameCharacterToggleRubberBanding", (int)(uintptr_t)(&v229) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v96 + 4),
               (void **)&v338) = (uint32_t)(uintptr_t)(ActorGameCharacterToggleRubberBanding::CreateInstance);
  g4_std::string::Destroy(&v338);
  if ( a2 != 0 )
  {
    ActorGameCharacterToggleRubberBanding::ActorGameCharacterToggleRubberBanding(v468, -1);
    ActorGameCharacterToggleRubberBanding::Destroy(v468);
  }
  v97 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v339), "GameCharacterToggleScripted", (int)(uintptr_t)(&v229) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v97 + 4),
               (void **)&v339) = (uint32_t)(uintptr_t)(ActorGameCharacterToggleScripted::CreateInstance);
  g4_std::string::Destroy(&v339);
  if ( a2 != 0 )
  {
    ActorGameCharacterToggleScripted::ActorGameCharacterToggleScripted(v468, -1);
    ActorGameCharacterToggleScripted::Destroy(v468);
  }
  v98 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v340), "GameCharacterToggleUseCover", (int)(uintptr_t)(&v230));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v98 + 4),
               (void **)&v340) = (uint32_t)(uintptr_t)(ActorGameCharacterToggleUseCover::CreateInstance);
  g4_std::string::Destroy(&v340);
  if ( a2 != 0 )
  {
    ActorGameCharacterToggleUseCover::ActorGameCharacterToggleUseCover(v468, -1);
    ActorGameCharacterToggleUseCover::Destroy(v468);
  }
  v99 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v341), "GameCharacterTurnToward", (int)(uintptr_t)(&v230) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v99 + 4),
               (void **)&v341) = (uint32_t)(uintptr_t)(ActorGameCharacterTurnToward::CreateInstance);
  g4_std::string::Destroy(&v341);
  if ( a2 != 0 )
  {
    ActorGameCharacterTurnToward::ActorGameCharacterTurnToward(v468, -1);
    ActorGameCharacterTurnToward::Destroy(v468);
  }
  v100 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v342), "GameCharacterUseCover", (int)(uintptr_t)(&v230) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v100 + 4),
               (void **)&v342) = (uint32_t)(uintptr_t)(ActorGameCharacterUseCover::CreateInstance);
  g4_std::string::Destroy(&v342);
  if ( a2 != 0 )
  {
    ActorGameCharacterUseCover::ActorGameCharacterUseCover(v468, -1);
    ActorGameCharacterUseCover::Destroy(v468);
  }
  v101 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v343), "GameCharacterVehicleDoor", (int)(uintptr_t)(&v230) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v101 + 4),
               (void **)&v343) = (uint32_t)(uintptr_t)(ActorGameCharacterVehicleDoor::CreateInstance);
  g4_std::string::Destroy(&v343);
  if ( a2 != 0 )
  {
    ActorGameCharacterVehicleDoor::ActorGameCharacterVehicleDoor(v468, -1);
    ActorGameCharacterVehicleDoor::Destroy(v468);
  }
  v102 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v344), "GameCharacterWantedLevel", (int)(uintptr_t)(&v231));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v102 + 4),
               (void **)&v344) = (uint32_t)(uintptr_t)(ActorGameCharacterWantedLevel::CreateInstance);
  g4_std::string::Destroy(&v344);
  if ( a2 != 0 )
  {
    ActorGameCharacterWantedLevel::ActorGameCharacterWantedLevel(v468, -1);
    ActorGameCharacterWantedLevel::Destroy(v468);
  }
  v103 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v345), "GameSetActionZone", (int)(uintptr_t)(&v231) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v103 + 4),
               (void **)&v345) = (uint32_t)(uintptr_t)(ActorGameSetActionZone::CreateInstance);
  g4_std::string::Destroy(&v345);
  if ( a2 != 0 )
  {
    ActorGameSetActionZone::ActorGameSetActionZone(v468, -1);
    ActorGameSetActionZone::Destroy(v468);
  }
  v104 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v346), "SoundAction", (int)(uintptr_t)(&v231) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v104 + 4),
               (void **)&v346) = (uint32_t)(uintptr_t)(ActorSoundAction::CreateInstance);
  g4_std::string::Destroy(&v346);
  if ( a2 != 0 )
  {
    ActorSoundAction::ActorSoundAction((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    ActorSoundAction::Destroy((grapher::ActorBase::Self *)v468);
  }
  v105 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v347), "GameCinematicDialog", (int)(uintptr_t)(&v231) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v105 + 4),
               (void **)&v347) = (uint32_t)(uintptr_t)(ActorGameCinematicDialog::CreateInstance);
  g4_std::string::Destroy(&v347);
  if ( a2 != 0 )
  {
    ActorGameCinematicDialog::ActorGameCinematicDialog(v468, -1);
    ActorGameCinematicDialog::Destroy(v468);
  }
  v106 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v348), "GameCinematicFadeIn", (int)(uintptr_t)(&v232));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v106 + 4),
               (void **)&v348) = (uint32_t)(uintptr_t)(ActorGameCinematicFadeIn::CreateInstance);
  g4_std::string::Destroy(&v348);
  if ( a2 != 0 )
  {
    ActorGameCinematicFadeIn::ActorGameCinematicFadeIn(v468, -1);
    ActorGameCinematicFadeIn::Destroy(v468);
  }
  v107 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v349), "GameCinematicFadeOut", (int)(uintptr_t)(&v232) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v107 + 4),
               (void **)&v349) = (uint32_t)(uintptr_t)(((int (*)(int, int, int))ActorGameCinematicFadeOut::CreateInstance));
  g4_std::string::Destroy(&v349);
  if ( a2 != 0 )
  {
    ActorGameCinematicFadeOut::ActorGameCinematicFadeOut(v468, -1);
    ActorGameCinematicFadeOut::Destroy(v468);
  }
  v108 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v350), "GameCinematicPlay", (int)(uintptr_t)(&v232) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v108 + 4),
               (void **)&v350) = (uint32_t)(uintptr_t)(((int (*)(int, int, int))ActorGameCinematicPlay::CreateInstance));
  g4_std::string::Destroy(&v350);
  if ( a2 != 0 )
  {
    ActorGameCinematicPlay::ActorGameCinematicPlay((int)(uintptr_t)(v468), -1);
    ActorGameCinematicPlay::Destroy(v468);
  }
  v109 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v351), "GameCinematicPlayFX", (int)(uintptr_t)(&v232) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v109 + 4),
               (void **)&v351) = (uint32_t)(uintptr_t)(ActorGameCinematicPlayFX::CreateInstance);
  g4_std::string::Destroy(&v351);
  if ( a2 != 0 )
  {
    ActorGameCinematicPlayFX::Construct(v468, -1);
    ActorGameCinematicPlayFX::Destroy(v468);
  }
  v110 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v352), "GameCinematicSetCam", (int)(uintptr_t)(&v233));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v110 + 4),
               (void **)&v352) = (uint32_t)(uintptr_t)(ActorGameCinematicSetCam::CreateInstance);
  g4_std::string::Destroy(&v352);
  if ( a2 != 0 )
  {
    ActorGameCinematicSetCam::ActorGameCinematicSetCam(v468, -1);
    ActorGameCinematicSetCam::Destroy(v468);
  }
  v111 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v353), "GameCinematicSetPreanimatedCam", (int)(uintptr_t)(&v233) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v111 + 4),
               (void **)&v353) = (uint32_t)(uintptr_t)(ActorGameCinematicSetPreanimatedCam::CreateInstance);
  g4_std::string::Destroy(&v353);
  if ( a2 != 0 )
  {
    ActorGameCinematicSetPreanimatedCam::ActorGameCinematicSetPreanimatedCam(v468, -1);
    ActorGameCinematicSetPreanimatedCam::Destroy(v468);
  }
  v112 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v354), "GameCinematicShakeCam", (int)(uintptr_t)(&v233) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v112 + 4),
               (void **)&v354) = (uint32_t)(uintptr_t)(ActorGameCinematicShakeCam::CreateInstance);
  g4_std::string::Destroy(&v354);
  if ( a2 != 0 )
  {
    ActorGameCinematicShakeCam::ActorGameCinematicShakeCam(v468, -1);
    ActorGameCinematicShakeCam::Destroy(v468);
  }
  v113 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v355), "GameCinematicStart", (int)(uintptr_t)(&v233) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v113 + 4),
               (void **)&v355) = (uint32_t)(uintptr_t)(ActorGameCinematicStart::CreateInstance);
  g4_std::string::Destroy(&v355);
  if ( a2 != 0 )
  {
    ActorGameCinematicStart::ActorGameCinematicStart(v468, -1);
    ActorGameCinematicStart::Destroy(v468);
  }
  v114 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v356), "GameCinematicStop", (int)(uintptr_t)(&v234));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v114 + 4),
               (void **)&v356) = (uint32_t)(uintptr_t)(ActorGameCinematicStop::CreateInstance);
  g4_std::string::Destroy(&v356);
  if ( a2 != 0 )
  {
    ActorGameCinematicStop::ActorGameCinematicStop(v468, -1);
    ActorGameCinematicStop::Destroy(v468);
  }
  v115 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v357), "GameConditionAnimEnded", (int)(uintptr_t)(&v234) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v115 + 4),
               (void **)&v357) = (uint32_t)(uintptr_t)(ActorGameConditionAnimEnded::CreateInstance);
  g4_std::string::Destroy(&v357);
  if ( a2 != 0 )
  {
    ActorGameConditionAnimEnded::Construct(v468, -1);
    ActorGameConditionAnimEnded::Destroy(v468);
  }
  v116 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v358), "GameConditionHasVehicle", (int)(uintptr_t)(&v234) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v116 + 4),
               (void **)&v358) = (uint32_t)(uintptr_t)(((int (*)(int, int, int))ActorGameConditionHasVehicle::CreateInstance));
  g4_std::string::Destroy(&v358);
  if ( a2 != 0 )
  {
    ActorGameConditionHasVehicle::Construct(v468, -1);
    ActorGameConditionHasVehicle::Destroy(v468);
  }
  v117 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v359), "GameConditionInRange", (int)(uintptr_t)(&v234) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v117 + 4),
               (void **)&v359) = (uint32_t)(uintptr_t)(((int (*)(int, int, int))ActorGameConditionInRange::CreateInstance));
  g4_std::string::Destroy(&v359);
  if ( a2 != 0 )
  {
    ActorGameConditionInRange::ActorGameConditionInRange((int)(uintptr_t)(v468), -1);
    ActorGameConditionInRange::Destroy(v468);
  }
  v118 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v360), "GameConditionIsAlive", (int)(uintptr_t)(&v235));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v118 + 4),
               (void **)&v360) = (uint32_t)(uintptr_t)(((int (*)(int, int, int))ActorGameConditionIsAlive::CreateInstance));
  g4_std::string::Destroy(&v360);
  if ( a2 != 0 )
  {
    ActorGameConditionIsAlive::Construct(v468, -1);
    ActorGameConditionIsAlive::Destroy(v468);
  }
  v119 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v361), "GameConditionIsAttacked", (int)(uintptr_t)(&v235) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v119 + 4),
               (void **)&v361) = (uint32_t)(uintptr_t)(ActorGameConditionIsAttacked::CreateInstance);
  g4_std::string::Destroy(&v361);
  if ( a2 != 0 )
  {
    ActorGameConditionIsAttacked::ActorGameConditionIsAttacked(v468, -1);
    ActorGameConditionIsAttacked::Destroy(v468);
  }
  v120 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v362), "GameConditionIsIdle", (int)(uintptr_t)(&v235) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v120 + 4),
               (void **)&v362) = (uint32_t)(uintptr_t)(ActorGameConditionIsIdle::CreateInstance);
  g4_std::string::Destroy(&v362);
  if ( a2 != 0 )
  {
    ActorGameConditionIsIdle::ActorGameConditionIsIdle(v468, -1);
    ActorGameConditionIsIdle::Destroy(v468);
  }
  v121 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v363), "GameConditionLanded", (int)(uintptr_t)(&v235) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v121 + 4),
               (void **)&v363) = (uint32_t)(uintptr_t)(((int (*)(int, int, int))ActorGameConditionLanded::CreateInstance));
  g4_std::string::Destroy(&v363);
  if ( a2 != 0 )
  {
    ActorGameConditionLanded::ActorGameConditionLanded(v468, -1);
    ActorGameConditionLanded::Destroy(v468);
  }
  v122 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v364), "GameConditionStolen", (int)(uintptr_t)(&v236));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v122 + 4),
               (void **)&v364) = (uint32_t)(uintptr_t)(((int (*)(int, int, int))ActorGameConditionStolen::CreateInstance));
  g4_std::string::Destroy(&v364);
  if ( a2 != 0 )
  {
    ActorGameConditionStolen::ActorGameConditionStolen((int)(uintptr_t)(v468), -1);
    ActorGameConditionStolen::Destroy(v468);
  }
  v123 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v365), "GameConditionWantedLevel", (int)(uintptr_t)(&v236) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v123 + 4),
               (void **)&v365) = (uint32_t)(uintptr_t)(((int (*)(int, int, int))ActorGameConditionWantedLevel::CreateInstance));
  g4_std::string::Destroy(&v365);
  if ( a2 != 0 )
  {
    ActorGameConditionWantedLevel::ActorGameConditionWantedLevel((int)(uintptr_t)(v468), -1);
    ActorGameConditionWantedLevel::Destroy(v468);
  }
  v124 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v366), "GameConditionWithin", (int)(uintptr_t)(&v236) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v124 + 4),
               (void **)&v366) = (uint32_t)(uintptr_t)(ActorGameConditionWithin::CreateInstance);
  g4_std::string::Destroy(&v366);
  if ( a2 != 0 )
  {
    ActorGameConditionWithin::Construct(v468, -1);
    ActorGameConditionWithin::Destroy(v468);
  }
  v125 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v367), "GameEventLockLootDrop", (int)(uintptr_t)(&v236) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v125 + 4),
               (void **)&v367) = (uint32_t)(uintptr_t)(ActorGameEventLockLootDrop::CreateInstance);
  g4_std::string::Destroy(&v367);
  if ( a2 != 0 )
  {
    ActorGameEventLockLootDrop::Construct(v468, -1);
    ActorGameEventLockLootDrop::Destroy(v468);
  }
  v126 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v368), "GameEventOnKill", (int)(uintptr_t)(&v237));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v126 + 4),
               (void **)&v368) = (uint32_t)(uintptr_t)(ActorGameEventOnKill::CreateInstance);
  g4_std::string::Destroy(&v368);
  if ( a2 != 0 )
  {
    ActorGameEventOnKill::Construct(v468, -1);
    ActorGameEventOnKill::Destroy(v468);
  }
  v127 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v369), "GameEventOnPickUp", (int)(uintptr_t)(&v237) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v127 + 4),
               (void **)&v369) = (uint32_t)(uintptr_t)(ActorGameEventOnPickUp::CreateInstance);
  g4_std::string::Destroy(&v369);
  if ( a2 != 0 )
  {
    ActorGameEventOnPickUp::Construct(v468, -1);
    ActorGameEventOnPickUp::Destroy(v468);
  }
  v128 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v370), "GameEventsHudOnTouch", (int)(uintptr_t)(&v237) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v128 + 4),
               (void **)&v370) = (uint32_t)(uintptr_t)(ActorGameEventsHudOnTouch::CreateInstance);
  g4_std::string::Destroy(&v370);
  if ( a2 != 0 )
  {
    ActorGameEventsHudOnTouch::Construct(v468, -1);
    ActorGameEventsHudOnTouch::Destroy(v468);
  }
  v129 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v371), "GameScriptLODFilter", (int)(uintptr_t)(&v237) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v129 + 4),
               (void **)&v371) = (uint32_t)(uintptr_t)(ActorGameScriptLODFilter::CreateInstance);
  g4_std::string::Destroy(&v371);
  if ( a2 != 0 )
  {
    ActorGameScriptLODFilter::ActorGameScriptLODFilter(v468, -1);
    ActorGameScriptLODFilter::Destroy(v468);
  }
  v130 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v372), "GameGangBattlesApplyProfile", (int)(uintptr_t)(&v238));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v130 + 4),
               (void **)&v372) = (uint32_t)(uintptr_t)(ActorGameGangBattlesApplyProfile::CreateInstance);
  g4_std::string::Destroy(&v372);
  if ( a2 != 0 )
  {
    ActorGameGangBattlesApplyProfile::ActorGameGangBattlesApplyProfile(v468, -1);
    ActorGameGangBattlesApplyProfile::Destroy(v468);
  }
  v131 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v373), "GameGangBattlesResetMemberList", (int)(uintptr_t)(&v238) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v131 + 4),
               (void **)&v373) = (uint32_t)(uintptr_t)(ActorGameGangBattlesResetMemberList::CreateInstance);
  g4_std::string::Destroy(&v373);
  if ( a2 != 0 )
  {
    ActorGameGangBattlesResetMemberList::ActorGameGangBattlesResetMemberList(v468, -1);
    ActorGameGangBattlesResetMemberList::Destroy(v468);
  }
  v132 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v374), "GameGangBattlesRetrieveMember", (int)(uintptr_t)(&v238) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v132 + 4),
               (void **)&v374) = (uint32_t)(uintptr_t)(ActorGameGangBattlesRetrieveMember::CreateInstance);
  g4_std::string::Destroy(&v374);
  if ( a2 != 0 )
  {
    ActorGameGangBattlesRetrieveMember::ActorGameGangBattlesRetrieveMember(v468, -1);
    ActorGameGangBattlesRetrieveMember::Destroy(v468);
  }
  v133 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v375), "GameHUD", (int)(uintptr_t)(&v238) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v133 + 4),
               (void **)&v375) = (uint32_t)(uintptr_t)(ActorGameHUD::CreateInstance);
  g4_std::string::Destroy(&v375);
  if ( a2 != 0 )
  {
    ActorGameHUD::ActorGameHUD(v468, -1);
    ActorGameHUD::Destroy(v468);
  }
  v134 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v376), "GameHUDFollowerStatus", (int)(uintptr_t)(&v239));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v134 + 4),
               (void **)&v376) = (uint32_t)(uintptr_t)(ActorGameHUDFollowerStatus::CreateInstance);
  g4_std::string::Destroy(&v376);
  if ( a2 != 0 )
  {
    ActorGameHUDFollowerStatus::ActorGameHUDFollowerStatus(v468, -1);
    ActorGameHUDFollowerStatus::Destroy(v468);
  }
  v135 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v377), "GameHUDRaceLockControls", (int)(uintptr_t)(&v239) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v135 + 4),
               (void **)&v377) = (uint32_t)(uintptr_t)(ActorGameHUDRaceLockControls::CreateInstance);
  g4_std::string::Destroy(&v377);
  if ( a2 != 0 )
  {
    ActorGameHUDRaceLockControls::ActorGameHUDRaceLockControls(v468, -1);
    ActorGameHUDRaceLockControls::Destroy(v468);
  }
  v136 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v378), "GameHUDControls", (int)(uintptr_t)(&v239) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v136 + 4),
               (void **)&v378) = (uint32_t)(uintptr_t)(ActorGameHUDControls::CreateInstance);
  g4_std::string::Destroy(&v378);
  if ( a2 != 0 )
  {
    ActorGameHUDControls::ActorGameHUDControls(v468, -1);
    ActorGameHUDControls::Destroy(v468);
  }
  v137 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v379), "GameHUDGenericText", (int)(uintptr_t)(&v239) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v137 + 4),
               (void **)&v379) = (uint32_t)(uintptr_t)(ActorGameHUDGenericText::CreateInstance);
  g4_std::string::Destroy(&v379);
  if ( a2 != 0 )
  {
    ActorGameHUDGenericText::Construct(v468, -1);
    ActorGameHUDGenericText::Destroy(v468);
  }
  v138 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v380), "GameHUDHighlight", (int)(uintptr_t)(&v240));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v138 + 4),
               (void **)&v380) = (uint32_t)(uintptr_t)(ActorGameHUDHighlight::CreateInstance);
  g4_std::string::Destroy(&v380);
  if ( a2 != 0 )
  {
    ActorGameHUDHighlight::ActorGameHUDHighlight(v468, -1);
    ActorGameHUDHighlight::Destroy(v468);
  }
  v139 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v381), "GameHUDSetInteractionButton", (int)(uintptr_t)(&v240) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v139 + 4),
               (void **)&v381) = (uint32_t)(uintptr_t)(ActorGameHUDSetInteractionButton::CreateInstance);
  g4_std::string::Destroy(&v381);
  if ( a2 != 0 )
  {
    ActorGameHUDSetInteractionButton::Construct(v468, -1);
    ActorGameHUDSetInteractionButton::Destroy(v468);
  }
  v140 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v382), "GameHUDSetText", (int)(uintptr_t)(&v240) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v140 + 4),
               (void **)&v382) = (uint32_t)(uintptr_t)(ActorGameHUDSetText::CreateInstance);
  g4_std::string::Destroy(&v382);
  if ( a2 != 0 )
  {
    ActorGameHUDSetText::ActorGameHUDSetText(v468, -1);
    ActorGameHUDSetText::Destroy(v468);
  }
  v141 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v383), "GameHudSetObjective", (int)(uintptr_t)(&v240) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v141 + 4),
               (void **)&v383) = (uint32_t)(uintptr_t)(((int (*)(int, int, int))ActorGameHudSetObjective::CreateInstance));
  g4_std::string::Destroy(&v383);
  if ( a2 != 0 )
  {
    ActorGameHudSetObjective::Construct(v468, -1);
    ActorGameHudSetObjective::Destroy(v468);
  }
  v142 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v384), "GameHudSetWarning", (int)(uintptr_t)(&v241));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v142 + 4),
               (void **)&v384) = (uint32_t)(uintptr_t)(((int (*)(int, int, int))ActorGameHudSetWarning::CreateInstance));
  g4_std::string::Destroy(&v384);
  if ( a2 != 0 )
  {
    ActorGameHudSetWarning::ActorGameHudSetWarning((int)(uintptr_t)(v468), -1);
    ActorGameHudSetWarning::Destroy(v468);
  }
  v143 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v385), "GameHUDSetVarText", (int)(uintptr_t)(&v241) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v143 + 4),
               (void **)&v385) = (uint32_t)(uintptr_t)(ActorGameHUDSetVarText::CreateInstance);
  g4_std::string::Destroy(&v385);
  if ( a2 != 0 )
  {
    ActorGameHUDSetVarText::ActorGameHUDSetVarText(v468, -1);
    ActorGameHUDSetVarText::Destroy(v468);
  }
  v144 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v386), "GameHUDTutorial", (int)(uintptr_t)(&v241) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v144 + 4),
               (void **)&v386) = (uint32_t)(uintptr_t)(ActorGameHUDTutorial::CreateInstance);
  g4_std::string::Destroy(&v386);
  if ( a2 != 0 )
  {
    ActorGameHUDTutorial::ActorGameHUDTutorial(v468, -1);
    ActorGameHUDTutorial::Destroy(v468);
  }
  v145 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v387), "GameTimer", (int)(uintptr_t)(&v241) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v145 + 4),
               (void **)&v387) = (uint32_t)(uintptr_t)(ActorGameTimer::CreateInstance);
  g4_std::string::Destroy(&v387);
  if ( a2 != 0 )
  {
    ActorGameTimer::Construct(v468, -1);
    ActorGameTimer::Destroy(v468);
  }
  v146 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v388), "GameItemShop", (int)(uintptr_t)(&v242));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v146 + 4),
               (void **)&v388) = (uint32_t)(uintptr_t)(ActorGameItemShop::CreateInstance);
  g4_std::string::Destroy(&v388);
  if ( a2 != 0 )
  {
    ActorGameItemShop::ActorGameItemShop(v468, -1);
    ActorGameItemShop::Destroy(v468);
  }
  v147 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v389), "GameSkillsMenu", (int)(uintptr_t)(&v242) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v147 + 4),
               (void **)&v389) = (uint32_t)(uintptr_t)(ActorGameSkillsMenu::CreateInstance);
  g4_std::string::Destroy(&v389);
  if ( a2 != 0 )
  {
    ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    v468[0] = (uint32_t)(uintptr_t)(&off_206CBC8);
    ActorGameBase::Destroy((grapher::ActorBase::Self *)v468);
  }
  v148 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v390), "GameMenu", (int)(uintptr_t)(&v242) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v148 + 4),
               (void **)&v390) = (uint32_t)(uintptr_t)(ActorGameMenu::CreateInstance);
  g4_std::string::Destroy(&v390);
  if ( a2 != 0 )
  {
    ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    v468[0] = (uint32_t)(uintptr_t)(&off_206BA88);
    ActorGameBase::Destroy((grapher::ActorBase::Self *)v468);
  }
  v149 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v391), "GameMenuVideo", (int)(uintptr_t)(&v242) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v149 + 4),
               (void **)&v391) = (uint32_t)(uintptr_t)(ActorGameMenuVideo::CreateInstance);
  g4_std::string::Destroy(&v391);
  if ( a2 != 0 )
  {
    ActorGameMenuVideo::ActorGameMenuVideo(v468, -1);
    ActorGameMenuVideo::Destroy(v468);
  }
  v150 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v392), "GameMissionStart", (int)(uintptr_t)(&v243));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v150 + 4),
               (void **)&v392) = (uint32_t)(uintptr_t)(ActorGameMissionStart::CreateInstance);
  g4_std::string::Destroy(&v392);
  if ( a2 != 0 )
  {
    ActorGameMissionStart::ActorGameMissionStart(v468, -1);
    ActorGameMissionStart::Destroy(v468);
  }
  v151 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v393), "GameMissionStop", (int)(uintptr_t)(&v243) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v151 + 4),
               (void **)&v393) = (uint32_t)(uintptr_t)(ActorGameMissionStop::CreateInstance);
  g4_std::string::Destroy(&v393);
  if ( a2 != 0 )
  {
    ActorGameMissionStop::ActorGameMissionStop(v468, -1);
    ActorGameMissionStop::Destroy(v468);
  }
  v152 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v394), "GameMissionUnload", (int)(uintptr_t)(&v243) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v152 + 4),
               (void **)&v394) = (uint32_t)(uintptr_t)(ActorGameMissionUnload::CreateInstance);
  g4_std::string::Destroy(&v394);
  if ( a2 != 0 )
  {
    ActorGameMissionUnload::ActorGameMissionUnload(v468, -1);
    ActorGameMissionUnload::Destroy(v468);
  }
  v153 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v395), "GameMissionIsCompleted", (int)(uintptr_t)(&v243) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v153 + 4),
               (void **)&v395) = (uint32_t)(uintptr_t)(ActorGameMissionIsCompleted::CreateInstance);
  g4_std::string::Destroy(&v395);
  if ( a2 != 0 )
  {
    ActorGameMissionIsCompleted::ActorGameMissionIsCompleted(v468, -1);
    ActorGameMissionIsCompleted::Destroy(v468);
  }
  v154 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v396), "GameStartModule", (int)(uintptr_t)(&v244));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v154 + 4),
               (void **)&v396) = (uint32_t)(uintptr_t)(ActorGameStartModule::CreateInstance);
  g4_std::string::Destroy(&v396);
  if ( a2 != 0 )
  {
    ActorGameStartModule::ActorGameStartModule(v468, -1);
    ActorGameStartModule::Destroy(v468);
  }
  v155 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v397), "GameObjectApplyDamage", (int)(uintptr_t)(&v244) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v155 + 4),
               (void **)&v397) = (uint32_t)(uintptr_t)(ActorGameObjectApplyDamage::CreateInstance);
  g4_std::string::Destroy(&v397);
  if ( a2 != 0 )
  {
    ActorGameObjectApplyDamage::ActorGameObjectApplyDamage(v468, -1);
    ActorGameObjectApplyDamage::Destroy(v468);
  }
  v156 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v398), "GameObjectAttach", (int)(uintptr_t)(&v244) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v156 + 4),
               (void **)&v398) = (uint32_t)(uintptr_t)(ActorGameObjectAttach::CreateInstance);
  g4_std::string::Destroy(&v398);
  if ( a2 != 0 )
  {
    ActorGameObjectAttach::ActorGameObjectAttach(v468, -1);
    ActorGameObjectAttach::Destroy(v468);
  }
  v157 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v399), "GameObjectConvertToAsset", (int)(uintptr_t)(&v244) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v157 + 4),
               (void **)&v399) = (uint32_t)(uintptr_t)(ActorGameObjectConvertToAsset::CreateInstance);
  g4_std::string::Destroy(&v399);
  if ( a2 != 0 )
  {
    ActorGameObjectConvertToAsset::Construct(v468, -1);
    ActorGameObjectConvertToAsset::Destroy(v468);
  }
  v158 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v400), "GameObjectCount", (int)(uintptr_t)(&v245));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v158 + 4),
               (void **)&v400) = (uint32_t)(uintptr_t)(ActorGameObjectCount::CreateInstance);
  g4_std::string::Destroy(&v400);
  if ( a2 != 0 )
  {
    ActorGameObjectCount::ActorGameObjectCount(v468, -1);
    ActorGameObjectCount::Destroy(v468);
  }
  v159 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v401), "GameObjectEnable", (int)(uintptr_t)(&v245) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v159 + 4),
               (void **)&v401) = (uint32_t)(uintptr_t)(ActorGameObjectEnable::CreateInstance);
  g4_std::string::Destroy(&v401);
  if ( a2 != 0 )
  {
    ActorGameObjectEnable::ActorGameObjectEnable(v468, -1);
    ActorGameObjectEnable::Destroy(v468);
  }
  v160 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v402), "GameObjectHide", (int)(uintptr_t)(&v245) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v160 + 4),
               (void **)&v402) = (uint32_t)(uintptr_t)(ActorGameObjectHide::CreateInstance);
  g4_std::string::Destroy(&v402);
  if ( a2 != 0 )
  {
    ActorGameObjectHide::ActorGameObjectHide(v468, -1);
    ActorGameObjectHide::Destroy(v468);
  }
  v161 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v403), "GameObjectExists", (int)(uintptr_t)(&v245) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v161 + 4),
               (void **)&v403) = (uint32_t)(uintptr_t)(ActorGameObjectExists::CreateInstance);
  g4_std::string::Destroy(&v403);
  if ( a2 != 0 )
  {
    ActorGameObjectExists::ActorGameObjectExists(v468, -1);
    ActorGameObjectExists::Destroy(v468);
  }
  v162 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v404), "GameObjectFindRandom", (int)(uintptr_t)(&v246));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v162 + 4),
               (void **)&v404) = (uint32_t)(uintptr_t)(ActorGameObjectFindRandom::CreateInstance);
  g4_std::string::Destroy(&v404);
  if ( a2 != 0 )
  {
    ActorGameObjectFindRandom::ActorGameObjectFindRandom(v468, -1);
    ActorGameObjectFindRandom::Destroy(v468);
  }
  v163 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v405), "GameObjectGetProperty", (int)(uintptr_t)(&v246) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v163 + 4),
               (void **)&v405) = (uint32_t)(uintptr_t)(ActorGameObjectGetProperty::CreateInstance);
  g4_std::string::Destroy(&v405);
  if ( a2 != 0 )
  {
    ActorGameObjectGetProperty::ActorGameObjectGetProperty(v468, -1);
    ActorGameObjectGetProperty::Destroy(v468);
  }
  v164 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v406), "GameObjectGiveHealth", (int)(uintptr_t)(&v246) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v164 + 4),
               (void **)&v406) = (uint32_t)(uintptr_t)(ActorGameObjectGiveHealth::CreateInstance);
  g4_std::string::Destroy(&v406);
  if ( a2 != 0 )
  {
    ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    v468[0] = (uint32_t)(uintptr_t)(&off_206BE88);
    ActorGameBase::Destroy((grapher::ActorBase::Self *)v468);
  }
  v165 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v407), "GameObjectGetHealth", (int)(uintptr_t)(&v246) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v165 + 4),
               (void **)&v407) = (uint32_t)(uintptr_t)(ActorGameObjectGetHealth::CreateInstance);
  g4_std::string::Destroy(&v407);
  if ( a2 != 0 )
  {
    ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    v468[0] = (uint32_t)(uintptr_t)(&off_206BEC8);
    ActorGameBase::Destroy((grapher::ActorBase::Self *)v468);
  }
  v166 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v408), "GameObjectHighlight", (int)(uintptr_t)(&v247));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v166 + 4),
               (void **)&v408) = (uint32_t)(uintptr_t)(ActorGameObjectHighlight::CreateInstance);
  g4_std::string::Destroy(&v408);
  if ( a2 != 0 )
  {
    ActorGameObjectHighlight::ActorGameObjectHighlight(v468, -1);
    ActorGameObjectHighlight::Destroy(v468);
  }
  v167 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v409), "GameObjectList", (int)(uintptr_t)(&v247) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v167 + 4),
               (void **)&v409) = (uint32_t)(uintptr_t)(ActorGameObjectList::CreateInstance);
  g4_std::string::Destroy(&v409);
  if ( a2 != 0 )
  {
    ActorGameObjectList::Construct(v468, -1);
    ActorGameObjectList::Destroy(v468);
  }
  v168 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v410), "GameObjectMoveTo", (int)(uintptr_t)(&v247) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v168 + 4),
               (void **)&v410) = (uint32_t)(uintptr_t)(ActorGameObjectMoveTo::CreateInstance);
  g4_std::string::Destroy(&v410);
  if ( a2 != 0 )
  {
    ActorGameObjectMoveTo::Construct(v468, -1);
    ActorGameObjectMoveTo::Destroy(v468);
  }
  v169 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v411), "GameObjectReplacement", (int)(uintptr_t)(&v247) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v169 + 4),
               (void **)&v411) = (uint32_t)(uintptr_t)(ActorGameObjectReplacement::CreateInstance);
  g4_std::string::Destroy(&v411);
  if ( a2 != 0 )
  {
    ActorGameObjectReplacement::Construct(v468, -1);
    ActorGameObjectReplacement::Destroy(v468);
  }
  v170 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v412), "GameObjectSetAnim", (int)(uintptr_t)(&v248));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v170 + 4),
               (void **)&v412) = (uint32_t)(uintptr_t)(ActorGameObjectSetAnim::CreateInstance);
  g4_std::string::Destroy(&v412);
  if ( a2 != 0 )
  {
    ActorGameObjectSetAnim::ActorGameObjectSetAnim(v468, -1);
    ActorGameObjectSetAnim::Destroy(v468);
  }
  v171 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v413), "GameObjectSetProperty", (int)(uintptr_t)(&v248) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v171 + 4),
               (void **)&v413) = (uint32_t)(uintptr_t)(ActorGameObjectSetProperty::CreateInstance);
  g4_std::string::Destroy(&v413);
  if ( a2 != 0 )
  {
    ActorGameObjectSetProperty::ActorGameObjectSetProperty(v468, -1);
    ActorGameObjectSetProperty::Destroy(v468);
  }
  v172 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v414), "GameObjectStop", (int)(uintptr_t)(&v248) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v172 + 4),
               (void **)&v414) = (uint32_t)(uintptr_t)(ActorGameObjectStop::CreateInstance);
  g4_std::string::Destroy(&v414);
  if ( a2 != 0 )
  {
    ActorGameObjectStop::ActorGameObjectStop(v468, -1);
    ActorGameObjectStop::Destroy(v468);
  }
  v173 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v415), "GameObjectTeleport", (int)(uintptr_t)(&v248) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v173 + 4),
               (void **)&v415) = (uint32_t)(uintptr_t)(ActorGameObjectTeleport::CreateInstance);
  g4_std::string::Destroy(&v415);
  if ( a2 != 0 )
  {
    ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    v468[0] = (uint32_t)(uintptr_t)(&off_206C0C8);
    ActorGameBase::Destroy((grapher::ActorBase::Self *)v468);
  }
  v174 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v416), "GamePlayerTeleportToEstate", (int)(uintptr_t)(&v249));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v174 + 4),
               (void **)&v416) = (uint32_t)(uintptr_t)(ActorGamePlayerTeleportToEstate::CreateInstance);
  g4_std::string::Destroy(&v416);
  if ( a2 != 0 )
  {
    ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    v468[0] = (uint32_t)(uintptr_t)(&off_206C108);
    ActorGameBase::Destroy((grapher::ActorBase::Self *)v468);
  }
  v175 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v417), "GameObjectTestProperty", (int)(uintptr_t)(&v249) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v175 + 4),
               (void **)&v417) = (uint32_t)(uintptr_t)(ActorGameObjectTestProperty::CreateInstance);
  g4_std::string::Destroy(&v417);
  if ( a2 != 0 )
  {
    ActorGameObjectTestProperty::ActorGameObjectTestProperty(v468, -1);
    ActorGameObjectTestProperty::Destroy(v468);
  }
  v176 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v418), "GameObjectToggleCollisions", (int)(uintptr_t)(&v249) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v176 + 4),
               (void **)&v418) = (uint32_t)(uintptr_t)(ActorGameObjectToggleCollisions::CreateInstance);
  g4_std::string::Destroy(&v418);
  if ( a2 != 0 )
  {
    ActorGameObjectToggleCollisions::ActorGameObjectToggleCollisions(v468, -1);
    ActorGameObjectToggleCollisions::Destroy(v468);
  }
  v177 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v419), "GameObjectSetMovability", (int)(uintptr_t)(&v249) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v177 + 4),
               (void **)&v419) = (uint32_t)(uintptr_t)(ActorGameObjectSetMovability::CreateInstance);
  g4_std::string::Destroy(&v419);
  if ( a2 != 0 )
  {
    ActorGameObjectSetMovability::ActorGameObjectSetMovability(v468, -1);
    ActorGameObjectSetMovability::Destroy(v468);
  }
  v178 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v420), "GameObjectToggleImmobilized", (int)(uintptr_t)(&v250));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v178 + 4),
               (void **)&v420) = (uint32_t)(uintptr_t)(ActorGameObjectToggleImmobilized::CreateInstance);
  g4_std::string::Destroy(&v420);
  if ( a2 != 0 )
  {
    ActorGameObjectToggleImmobilized::ActorGameObjectToggleImmobilized(v468, -1);
    ActorGameObjectToggleImmobilized::Destroy(v468);
  }
  v179 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v421), "GameObjectToggleIndestructible", (int)(uintptr_t)(&v250) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v179 + 4),
               (void **)&v421) = (uint32_t)(uintptr_t)(ActorGameObjectToggleIndestructible::CreateInstance);
  g4_std::string::Destroy(&v421);
  if ( a2 != 0 )
  {
    ActorGameObjectToggleIndestructible::ActorGameObjectToggleIndestructible(v468, -1);
    ActorGameObjectToggleIndestructible::Destroy(v468);
  }
  v180 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v422), "GameObjectToggleSpawn", (int)(uintptr_t)(&v250) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v180 + 4),
               (void **)&v422) = (uint32_t)(uintptr_t)(ActorGameObjectToggleSpawn::CreateInstance);
  g4_std::string::Destroy(&v422);
  if ( a2 != 0 )
  {
    ActorGameObjectToggleSpawn::ActorGameObjectToggleSpawn(v468, -1);
    ActorGameObjectToggleSpawn::Destroy(v468);
  }
  v181 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v423), "GameObjectToggleTargetable", (int)(uintptr_t)(&v250) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v181 + 4),
               (void **)&v423) = (uint32_t)(uintptr_t)(ActorGameObjectToggleTargetable::CreateInstance);
  g4_std::string::Destroy(&v423);
  if ( a2 != 0 )
  {
    ActorGameObjectToggleTargetable::ActorGameObjectToggleTargetable(v468, -1);
    ActorGameObjectToggleTargetable::Destroy(v468);
  }
  v182 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v424), "GameObjectValue", (int)(uintptr_t)(&v251));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v182 + 4),
               (void **)&v424) = (uint32_t)(uintptr_t)(ActorGameObjectValue::CreateInstance);
  g4_std::string::Destroy(&v424);
  if ( a2 != 0 )
  {
    ActorGameObjectValue::ActorGameObjectValue(v468, -1);
    ActorGameObjectValue::Destroy(v468);
  }
  v183 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v425), "GamePhysicsExplosion", (int)(uintptr_t)(&v251) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v183 + 4),
               (void **)&v425) = (uint32_t)(uintptr_t)(ActorGamePhysicsExplosion::CreateInstance);
  g4_std::string::Destroy(&v425);
  if ( a2 != 0 )
  {
    ActorGamePhysicsExplosion::ActorGamePhysicsExplosion(v468, -1);
    ActorGamePhysicsExplosion::Destroy(v468);
  }
  v184 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v426), "GamePlayerEquipGear", (int)(uintptr_t)(&v251) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v184 + 4),
               (void **)&v426) = (uint32_t)(uintptr_t)(ActorGamePlayerEquipGear::CreateInstance);
  g4_std::string::Destroy(&v426);
  if ( a2 != 0 )
  {
    ActorGamePlayerEquipGear::ActorGamePlayerEquipGear(v468, -1);
    ActorGamePlayerEquipGear::Destroy(v468);
  }
  v185 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v427), "GamePlayerGiveCurrency", (int)(uintptr_t)(&v251) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v185 + 4),
               (void **)&v427) = (uint32_t)(uintptr_t)(ActorGamePlayerGiveCurrency::CreateInstance);
  g4_std::string::Destroy(&v427);
  if ( a2 != 0 )
  {
    ActorGamePlayerGiveCurrency::ActorGamePlayerGiveCurrency(v468, -1);
    ActorGamePlayerGiveCurrency::Destroy(v468);
  }
  v186 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v428), "GamePlayerGiveItem", (int)(uintptr_t)(&v252));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v186 + 4),
               (void **)&v428) = (uint32_t)(uintptr_t)(ActorGamePlayerGiveItem::CreateInstance);
  g4_std::string::Destroy(&v428);
  if ( a2 != 0 )
  {
    ActorGamePlayerGiveItem::ActorGamePlayerGiveItem(v468, -1);
    ActorGamePlayerGiveItem::Destroy(v468);
  }
  v187 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v429), "GamePlayerRemoveItem", (int)(uintptr_t)(&v252) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v187 + 4),
               (void **)&v429) = (uint32_t)(uintptr_t)(ActorGamePlayerRemoveItem::CreateInstance);
  g4_std::string::Destroy(&v429);
  if ( a2 != 0 )
  {
    ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)v468, 0xFFFFFFFF);
    v468[0] = (uint32_t)(uintptr_t)(&off_205B968);
    ActorGameBase::Destroy((grapher::ActorBase::Self *)v468);
  }
  v188 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v430), "GamePlayerGiveRespect", (int)(uintptr_t)(&v252) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v188 + 4),
               (void **)&v430) = (uint32_t)(uintptr_t)(ActorGamePlayerGiveRespect::CreateInstance);
  g4_std::string::Destroy(&v430);
  if ( a2 != 0 )
  {
    ActorGamePlayerGiveRespect::ActorGamePlayerGiveRespect(v468, -1);
    ActorGamePlayerGiveRespect::Destroy(v468);
  }
  v189 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v431), "GamePlayerSetThrowable", (int)(uintptr_t)(&v252) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v189 + 4),
               (void **)&v431) = (uint32_t)(uintptr_t)(ActorGamePlayerSetThrowable::CreateInstance);
  g4_std::string::Destroy(&v431);
  if ( a2 != 0 )
  {
    ActorGamePlayerSetThrowable::ActorGamePlayerSetThrowable(v468, -1);
    ActorGamePlayerSetThrowable::Destroy(v468);
  }
  v190 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v432), "GameScriptExec", (int)(uintptr_t)(&v253));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v190 + 4),
               (void **)&v432) = (uint32_t)(uintptr_t)(ActorGameScriptExec::CreateInstance);
  g4_std::string::Destroy(&v432);
  if ( a2 != 0 )
  {
    ActorGameScriptExec::ActorGameScriptExec(v468, -1);
    ActorGameScriptExec::Destroy(v468);
  }
  v191 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v433), "GameSoundFX", (int)(uintptr_t)(&v253) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v191 + 4),
               (void **)&v433) = (uint32_t)(uintptr_t)(ActorGameSoundFX::CreateInstance);
  g4_std::string::Destroy(&v433);
  if ( a2 != 0 )
  {
    ActorGameSoundFX::ActorGameSoundFX(v468, -1);
    ActorGameSoundFX::Destroy(v468);
  }
  v192 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v434), "GameSoundAmbience", (int)(uintptr_t)(&v253) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v192 + 4),
               (void **)&v434) = (uint32_t)(uintptr_t)(ActorGameSoundAmbience::CreateInstance);
  g4_std::string::Destroy(&v434);
  if ( a2 != 0 )
  {
    ActorGameSoundAmbience::ActorGameSoundAmbience(v468, -1);
    ActorGameSoundAmbience::Destroy(v468);
  }
  v193 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v435), "GameSoundOneLiners", (int)(uintptr_t)(&v253) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v193 + 4),
               (void **)&v435) = (uint32_t)(uintptr_t)(ActorGameSoundOneLiners::CreateInstance);
  g4_std::string::Destroy(&v435);
  if ( a2 != 0 )
  {
    ActorGameSoundOneLiners::ActorGameSoundOneLiners(v468, -1);
    ActorGameSoundOneLiners::Destroy(v468);
  }
  v194 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v436), "GameSoundMusic", (int)(uintptr_t)(&v254));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v194 + 4),
               (void **)&v436) = (uint32_t)(uintptr_t)(ActorGameSoundMusic::CreateInstance);
  g4_std::string::Destroy(&v436);
  if ( a2 != 0 )
  {
    ActorGameSoundMusic::ActorGameSoundMusic(v468, -1);
    ActorGameSoundMusic::Destroy(v468);
  }
  v195 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v437), "GameStatCounters", (int)(uintptr_t)(&v254) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v195 + 4),
               (void **)&v437) = (uint32_t)(uintptr_t)(ActorGameStatCounters::CreateInstance);
  g4_std::string::Destroy(&v437);
  if ( a2 != 0 )
  {
    ActorGameStatCounters::ActorGameStatCounters(v468, -1);
    ActorGameStatCounters::Destroy(v468);
  }
  v196 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v438), "GameTrackVehicleSold", (int)(uintptr_t)(&v254) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v196 + 4),
               (void **)&v438) = (uint32_t)(uintptr_t)(ActorGameTrackVehicleSold::CreateInstance);
  g4_std::string::Destroy(&v438);
  if ( a2 != 0 )
  {
    ActorGameTrackVehicleSold::ActorGameTrackVehicleSold(v468, -1);
    ActorGameTrackVehicleSold::Destroy(v468);
  }
  v197 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v439), "GameVehicleDestroy", (int)(uintptr_t)(&v254) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v197 + 4),
               (void **)&v439) = (uint32_t)(uintptr_t)(ActorGameVehicleDestroy::CreateInstance);
  g4_std::string::Destroy(&v439);
  if ( a2 != 0 )
  {
    ActorGameVehicleDestroy::ActorGameVehicleDestroy(v468, -1);
    ActorGameVehicleDestroy::Destroy(v468);
  }
  v198 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v440), "GameVehicleLockDoors", (int)(uintptr_t)(&v255));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v198 + 4),
               (void **)&v440) = (uint32_t)(uintptr_t)(ActorGameVehicleLockDoors::CreateInstance);
  g4_std::string::Destroy(&v440);
  if ( a2 != 0 )
  {
    ActorGameVehicleLockDoors::ActorGameVehicleLockDoors(v468, -1);
    ActorGameVehicleLockDoors::Destroy(v468);
  }
  v199 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v441), "GameVehicleSetSpeed", (int)(uintptr_t)(&v255) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v199 + 4),
               (void **)&v441) = (uint32_t)(uintptr_t)(ActorGameVehicleSetSpeed::CreateInstance);
  g4_std::string::Destroy(&v441);
  if ( a2 != 0 )
  {
    ActorGameVehicleSetSpeed::ActorGameVehicleSetSpeed(v468, -1);
    ActorGameVehicleSetSpeed::Destroy(v468);
  }
  v200 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v442), "GameVehicleToggleRadio", (int)(uintptr_t)(&v255) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v200 + 4),
               (void **)&v442) = (uint32_t)(uintptr_t)(ActorGameVehicleToggleRadio::CreateInstance);
  g4_std::string::Destroy(&v442);
  if ( a2 != 0 )
  {
    ActorGameVehicleToggleRadio::ActorGameVehicleToggleRadio(v468, -1);
    ActorGameVehicleToggleRadio::Destroy(v468);
  }
  v201 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v443), "GameWorldCoverEligible", (int)(uintptr_t)(&v255) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v201 + 4),
               (void **)&v443) = (uint32_t)(uintptr_t)(ActorGameWorldCoverEligible::CreateInstance);
  g4_std::string::Destroy(&v443);
  if ( a2 != 0 )
  {
    ActorGameWorldCoverEligible::ActorGameWorldCoverEligible(v468, -1);
    ActorGameWorldCoverEligible::Destroy(v468);
  }
  v202 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v444), "GameWorldItem", (int)(uintptr_t)(&v256));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v202 + 4),
               (void **)&v444) = (uint32_t)(uintptr_t)(ActorGameWorldItem::CreateInstance);
  g4_std::string::Destroy(&v444);
  if ( a2 != 0 )
  {
    ActorGameWorldItem::ActorGameWorldItem(v468, -1);
    ActorGameWorldItem::Destroy(v468);
  }
  v203 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v445), "GameWorldChangeLocation", (int)(uintptr_t)(&v256) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v203 + 4),
               (void **)&v445) = (uint32_t)(uintptr_t)(ActorGameWorldChangeLocation::CreateInstance);
  g4_std::string::Destroy(&v445);
  if ( a2 != 0 )
  {
    ActorGameWorldChangeLocation::ActorGameWorldChangeLocation(v468, -1);
    ActorGameWorldChangeLocation::Destroy(v468);
  }
  v204 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v446), "GameWorldRace", (int)(uintptr_t)(&v256) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v204 + 4),
               (void **)&v446) = (uint32_t)(uintptr_t)(ActorGameWorldRace::CreateInstance);
  g4_std::string::Destroy(&v446);
  if ( a2 != 0 )
  {
    ActorGameWorldRace::ActorGameWorldRace(v468, -1);
    ActorGameWorldRace::Destroy(v468);
  }
  v205 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v447), "GameWorldSetLock", (int)(uintptr_t)(&v256) + 3);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v205 + 4),
               (void **)&v447) = (uint32_t)(uintptr_t)(ActorGameWorldSetLock::CreateInstance);
  g4_std::string::Destroy(&v447);
  if ( a2 != 0 )
  {
    ActorGameWorldSetLock::ActorGameWorldSetLock(v468, -1);
    ActorGameWorldSetLock::Destroy(v468);
  }
  v206 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v448), "GameWorldTime", (int)(uintptr_t)(&v257));
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v206 + 4),
               (void **)&v448) = (uint32_t)(uintptr_t)(ActorGameWorldTime::CreateInstance);
  g4_std::string::Destroy(&v448);
  if ( a2 != 0 )
  {
    ActorGameWorldTime::ActorGameWorldTime(v468, -1);
    ActorGameWorldTime::Destroy(v468);
  }
  v207 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v449), "GameWorldTimeFormat", (int)(uintptr_t)(&v257) + 1);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v207 + 4),
               (void **)&v449) = (uint32_t)(uintptr_t)(ActorGameWorldTimeFormat::CreateInstance);
  g4_std::string::Destroy(&v449);
  if ( a2 != 0 )
  {
    ActorGameWorldTimeFormat::ActorGameWorldTimeFormat(v468, -1);
    ActorGameWorldTimeFormat::Destroy(v468);
  }
  v208 = grapher::ActorManager::GetInstance();
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v450), "GameWorldTimeScale", (int)(uintptr_t)(&v257) + 2);
  *(uint32_t *)g4_std::map_string_grapher_ActorBase_b50f0f::opIndex(
               (uint32_t *)(v208 + 4),
               (void **)&v450) = (uint32_t)(uintptr_t)(ActorGameWorldTimeScale::CreateInstance);
  g4_std::string::Destroy(&v450);
  if ( a2 != 0 )
  {
    ActorGameWorldTimeScale::ActorGameWorldTimeScale(v468, -1);
    return sub_81E9A0(v468);
  }
  return result;
}



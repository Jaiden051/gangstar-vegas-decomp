#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/xmldata_example.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : xmldata_example_struct
void xmldata_example_struct::Init()
{
	base_struct::Init();

	// Field : AllDefaults
	AllDefaults = 0;

	// Field : ChangeSomeValue
	ChangeSomeValue = 0;

	// Field : OIDExample
	OIDExample = 0;

	// Field : OIDExampleCopyOf
	OIDExampleCopyOf = 0;

	// Field : UsingLists
	UsingLists = 0;

	// Field : Default
	Default = 0;

	// Field : MotoGyro
	MotoGyro = 0;

	// Field : Moto
	Moto = 0;

	// Field : StandardCar
	StandardCar = 0;

	// Field : StandardBoat
	StandardBoat = 0;

	// Field : Tank
	Tank = 0;

	// Field : ArmyHummer
	ArmyHummer = 0;

	// Field : PoliceCar
	PoliceCar = 0;

	// Field : PoliceCar2
	PoliceCar2 = 0;

	// Field : PoliceCar3
	PoliceCar3 = 0;

	// Field : PoliceCar4
	PoliceCar4 = 0;

	// Field : Bike
	Bike = 0;

	// Field : FourSeatsFourDoorsLow
	FourSeatsFourDoorsLow = 0;

	// Field : OneSeat
	OneSeat = 0;

	// Field : OneSeatOneDoor
	OneSeatOneDoor = 0;

	// Field : TwoSeats
	TwoSeats = 0;

	// Field : OneSeatTwoDoorsLow
	OneSeatTwoDoorsLow = 0;

	// Field : OneSeatTwoDoorsHigh
	OneSeatTwoDoorsHigh = 0;

	// Field : TwoSeatsTwoDoorsLow
	TwoSeatsTwoDoorsLow = 0;

	// Field : TwoSeatsTwoDoorsHigh
	TwoSeatsTwoDoorsHigh = 0;

	// Field : FourSeatsFourDoorsHigh
	FourSeatsFourDoorsHigh = 0;

	// Field : TwoSeatsTwoDoorsTank
	TwoSeatsTwoDoorsTank = 0;

	// Field : TwoSeatsTwoDoorsSeaplane
	TwoSeatsTwoDoorsSeaplane = 0;

	// Field : TwoSeatsTwoDoorsHelicopter
	TwoSeatsTwoDoorsHelicopter = 0;

	// Field : OneSeatOneDoorsBus
	OneSeatOneDoorsBus = 0;

	// Field : ThreeSeatsOneTurret
	ThreeSeatsOneTurret = 0;

	// Field : OneSeatOneDoorsJetplane
	OneSeatOneDoorsJetplane = 0;

	// Field : OneSeatTwoDoorsJetplane
	OneSeatTwoDoorsJetplane = 0;

	// Field : TwoSeatNoDoorsBuggy
	TwoSeatNoDoorsBuggy = 0;

	// Field : OneSeatNoDoors
	OneSeatNoDoors = 0;

	// Field : LightAnim
	LightAnim = 0;
	LightAnim_hash = 0;

	// Field : HeavyAnim
	HeavyAnim = 0;
	HeavyAnim_hash = 0;

	// Field : ExplosiveAnim
	ExplosiveAnim = 0;
	ExplosiveAnim_hash = 0;

	// Field : SniperAnim
	SniperAnim = 0;
	SniperAnim_hash = 0;

	// Field : ShotgunAnim
	ShotgunAnim = 0;
	ShotgunAnim_hash = 0;

	// Field : Ground00
	Ground00 = 0;

	// Field : Ground01
	Ground01 = 0;

	// Field : PlayerBrawling
	PlayerBrawling = 0;

	// Field : PlayerShooting
	PlayerShooting = 0;

	// Field : NPC
	NPC = 0;

	// Field : CertificateSection
	CertificateSection = 0;

	// Field : SpecialSection
	SpecialSection = 0;

	// Field : RecommendedSection
	RecommendedSection = 0;

	// Field : ClanLockSection
	ClanLockSection = 0;

	// Field : BundleSection
	BundleSection = 0;

	// Field : CrateSection
	CrateSection = 0;

	// Field : ConsumableSection
	ConsumableSection = 0;

	// Field : PoorCarSection
	PoorCarSection = 0;

	// Field : LuxuryCarSection
	LuxuryCarSection = 0;

	// Field : HeavyCarSection
	HeavyCarSection = 0;

	// Field : ShootingCarSection
	ShootingCarSection = 0;

	// Field : PoorMotoSection
	PoorMotoSection = 0;

	// Field : BoatSection
	BoatSection = 0;

	// Field : AirplaneSection
	AirplaneSection = 0;

	// Field : LuxuryMotoSection
	LuxuryMotoSection = 0;

	// Field : PoorCarOneSeatSection
	PoorCarOneSeatSection = 0;

	// Field : LuxuryCarOneSeatSection
	LuxuryCarOneSeatSection = 0;

	// Field : HeavyCarOneSeatSection
	HeavyCarOneSeatSection = 0;

	// Field : ShootingCarOneSeatSection
	ShootingCarOneSeatSection = 0;

	// Field : HelicopterSection
	HelicopterSection = 0;

	// Field : UnarmedSection
	UnarmedSection = 0;

	// Field : MeleeSection
	MeleeSection = 0;

	// Field : PistolSection
	PistolSection = 0;

	// Field : SMGSection
	SMGSection = 0;

	// Field : ShotgunSection
	ShotgunSection = 0;

	// Field : AssaultSection
	AssaultSection = 0;

	// Field : SniperSection
	SniperSection = 0;

	// Field : HeavySection
	HeavySection = 0;

	// Field : ThrowableSection
	ThrowableSection = 0;

	// Field : HeadSection
	HeadSection = 0;

	// Field : TorsoSection
	TorsoSection = 0;

	// Field : LegsSection
	LegsSection = 0;

	// Field : ExoskeletonSection
	ExoskeletonSection = 0;

	// Field : Miscellaneous
	Miscellaneous = 0;

	// Field : CashPacksSection
	CashPacksSection = 0;

	// Field : KeyPacksSection
	KeyPacksSection = 0;

	// Field : SkillPointPacksSection
	SkillPointPacksSection = 0;

	// Field : VipSection
	VipSection = 0;

	// Field : ClanLogoSection
	ClanLogoSection = 0;

	// Field : Bonus_01
	Bonus_01 = 0;

	// Field : BundleItem_Starter
	BundleItem_Starter = 0;

	// Field : BundleItem_Apocalypse
	BundleItem_Apocalypse = 0;

	// Field : BundleItem_VipBronze
	BundleItem_VipBronze = 0;

	// Field : BundleItem_VipSilver
	BundleItem_VipSilver = 0;

	// Field : BundleItem_VipGold
	BundleItem_VipGold = 0;

	// Field : BundleItem_Sniper
	BundleItem_Sniper = 0;

	// Field : BundleItem_StuntMuffin
	BundleItem_StuntMuffin = 0;

	// Field : BundleItem_TightCuffed
	BundleItem_TightCuffed = 0;

	// Field : BundleItem_SecretIdentity
	BundleItem_SecretIdentity = 0;

	// Field : BundleItem_FireBreather
	BundleItem_FireBreather = 0;

	// Field : BundleItem_Commando
	BundleItem_Commando = 0;

	// Field : BundleItem_FutureWar
	BundleItem_FutureWar = 0;

	// Field : BundleItem_SummerTime
	BundleItem_SummerTime_f = 0.0f;

	// Field : BundleItem_KarateKiddo
	BundleItem_KarateKiddo = 0;

	// Field : BundleItem_Tennis
	BundleItem_Tennis = 0;

	// Field : BundleItem_Football
	BundleItem_Football = 0;

	// Field : BundleItem_Hockey
	BundleItem_Hockey = 0;

	// Field : CopBeige1
	CopBeige1 = 0;

	// Field : CopBeige2
	CopBeige2 = 0;

	// Field : CopBlue1
	CopBlue1 = 0;

	// Field : CopBlue2
	CopBlue2 = 0;

	// Field : Military
	Military = 0;

	// Field : CopPilot
	CopPilot = 0;

	// Field : MilitaryPilot
	MilitaryPilot = 0;

	// Field : Generic_Man2
	Generic_Man2 = 0;

	// Field : Swimmer_Female
	Swimmer_Female = 0;

	// Field : Biker_Female
	Biker_Female = 0;

	// Field : Biker_Fat
	Biker_Fat = 0;

	// Field : Biker
	Biker = 0;

	// Field : ThugLow_Spawngroup
	ThugLow_Spawngroup = 0;

	// Field : ThugHeavy_Spawngroup
	ThugHeavy_Spawngroup = 0;

	// Field : SecurityMid
	SecurityMid = 0;

	// Field : SecurityHeavy
	SecurityHeavy = 0;

	// Field : MafiaLow_Spawngroup
	MafiaLow_Spawngroup = 0;

	// Field : MafiaMid_Spawngroup
	MafiaMid_Spawngroup = 0;

	// Field : MafiaHeavy_Spawngroup
	MafiaHeavy_Spawngroup = 0;

	// Field : MafiaLeader_Spawngroup
	MafiaLeader_Spawngroup = 0;

	// Field : LatinoLow_Spawngroup
	LatinoLow_Spawngroup = 0;

	// Field : LatinoMid_Spawngroup
	LatinoMid_Spawngroup = 0;

	// Field : LatinoHeavy_Spawngroup
	LatinoHeavy_Spawngroup = 0;

	// Field : GenericFemale
	GenericFemale = 0;

	// Field : BusinessMan1
	BusinessMan1 = 0;

	// Field : BusinessMan2
	BusinessMan2 = 0;

	// Field : BusinessWoman1
	BusinessWoman1 = 0;

	// Field : BusinessWoman2
	BusinessWoman2 = 0;

	// Field : Generic_Man1
	Generic_Man1 = 0;

	// Field : Tourist
	Tourist = 0;

	// Field : TouristWoman
	TouristWoman = 0;

	// Field : HighValuableTarget_Suitcase
	HighValuableTarget_Suitcase = 0;

	// Field : HighValuableTarget_Clothing
	HighValuableTarget_Clothing = 0;

	// Field : HighValuableTarget_Weapon
	HighValuableTarget_Weapon = 0;

	// Field : HighValuableTarget_Vehicle
	HighValuableTarget_Vehicle = 0;

	// Field : Bouncer
	Bouncer = 0;

	// Field : Casino_Woman_idle
	Casino_Woman_idle = 0;

	// Field : GenericFemale_idle
	GenericFemale_idle = 0;

	// Field : Generic_Man1_idle
	Generic_Man1_idle = 0;

	// Field : Generic_Man2_idle
	Generic_Man2_idle = 0;

	// Field : HighClass_Man1
	HighClass_Man1 = 0;

	// Field : HighClass_Man2
	HighClass_Man2 = 0;

	// Field : HighClass_Pedestrian1
	HighClass_Pedestrian1 = 0;
	HighClass_Pedestrian1_hash = 0;

	// Field : HighClass_Pedestrian2
	HighClass_Pedestrian2 = 0;
	HighClass_Pedestrian2_hash = 0;

	// Field : Dealer
	Dealer = 0;

	// Field : Casino_Woman
	Casino_Woman = 0;

	// Field : ConstructionWorker
	ConstructionWorker = 0;
	ConstructionWorker_hash = 0;

	// Field : HighClass_Man1Nightclub
	HighClass_Man1Nightclub = 0;

	// Field : HighClass_Man2Nightclub
	HighClass_Man2Nightclub = 0;

	// Field : HighClass_Pedestrian1Nightclub
	HighClass_Pedestrian1Nightclub = 0;
	HighClass_Pedestrian1Nightclub_hash = 0;

	// Field : HighClass_Pedestrian2Nightclub
	HighClass_Pedestrian2Nightclub = 0;
	HighClass_Pedestrian2Nightclub_hash = 0;

	// Field : Casino_WomanNightclub
	Casino_WomanNightclub = 0;

	// Field : GenericFemaleNightclub
	GenericFemaleNightclub = 0;

	// Field : Generic_Man1Nightclub
	Generic_Man1Nightclub = 0;

	// Field : Generic_Man2Nightclub
	Generic_Man2Nightclub = 0;

	// Field : HookerDancer
	HookerDancer = 0;

	// Field : Generic_Man2Dancer
	Generic_Man2Dancer = 0;

	// Field : GenericFemaleDancer
	GenericFemaleDancer = 0;

	// Field : HighClass_Man1Dancer
	HighClass_Man1Dancer = 0;

	// Field : HighClass_Man2Dancer
	HighClass_Man2Dancer = 0;

	// Field : Hooker_idle
	Hooker_idle = 0;

	// Field : StriperStanding_01
	StriperStanding_01 = 0;
	StriperStanding_01_hash = 0;

	// Field : StriperStanding_02
	StriperStanding_02 = 0;
	StriperStanding_02_hash = 0;

	// Field : StriperStanding_03
	StriperStanding_03 = 0;
	StriperStanding_03_hash = 0;

	// Field : HighClass_Man1_idle
	HighClass_Man1_idle = 0;

	// Field : HighClass_Pedestrian1_idle
	HighClass_Pedestrian1_idle = 0;

	// Field : HighClass_Pedestrian2_idle
	HighClass_Pedestrian2_idle = 0;

	// Field : BusinessMan1_idle
	BusinessMan1_idle = 0;

	// Field : BusinessMan2_idle
	BusinessMan2_idle = 0;

	// Field : Hooker
	Hooker = 0;

	// Field : Swimmer_Male
	Swimmer_Male = 0;

	// Field : MafiaLow
	MafiaLow = 0;

	// Field : MafiaMid
	MafiaMid = 0;

	// Field : MafiaLow_NoLoot
	MafiaLow_NoLoot = 0;

	// Field : MafiaMid_NoLoot
	MafiaMid_NoLoot = 0;

	// Field : ConstructionLow
	ConstructionLow = 0;
	ConstructionLow_hash = 0;

	// Field : ConstructionMid
	ConstructionMid = 0;

	// Field : ThugLowWithGun
	ThugLowWithGun = 0;

	// Field : ThugMid
	ThugMid = 0;

	// Field : ThugHeavyWithGun
	ThugHeavyWithGun = 0;

	// Field : LatinoLow
	LatinoLow = 0;

	// Field : LatinoMid
	LatinoMid = 0;

	// Field : LatinoHeavy
	LatinoHeavy = 0;

	// Field : CopRiot
	CopRiot = 0;

	// Field : Survi_MafiaMid
	Survi_MafiaMid = 0;

	// Field : copSuv
	copSuv = 0;

	// Field : Survi_MafiaLow
	Survi_MafiaLow = 0;

	// Field : Survi_MafiaHeavy
	Survi_MafiaHeavy = 0;

	// Field : carng_target_Dealer
	carng_target_Dealer = 0;

	// Field : ThugLowWithGun_Crng
	ThugLowWithGun_Crng = 0;

	// Field : ThugHeavyWithGun_Crng
	ThugHeavyWithGun_Crng = 0;

	// Field : JapanModern_Carnage_thugs
	JapanModern_Carnage_thugs = 0;

	// Field : JapanPoor_Carnage_thugs
	JapanPoor_Carnage_thugs = 0;

	// Field : MafiaHeavy
	MafiaHeavy = 0;

	// Field : MafiaLowFists
	MafiaLowFists = 0;

	// Field : UsaSedan_Goon_Carnage
	UsaSedan_Goon_Carnage = 0;

	// Field : suv_goon_Carnage
	suv_goon_Carnage = 0;

	// Field : UsaPoor_latinos_Carnage
	UsaPoor_latinos_Carnage = 0;

	// Field : PickupTruck_latino_Carnage
	PickupTruck_latino_Carnage = 0;

	// Field : BikerLow
	BikerLow = 0;

	// Field : BikerMid
	BikerMid = 0;

	// Field : GermanSedan
	GermanSedan = 0;

	// Field : bikeCustom_bikers_Carnage
	bikeCustom_bikers_Carnage = 0;

	// Field : JapanCompact
	JapanCompact = 0;

	// Field : JapanPoor
	JapanPoor = 0;

	// Field : JapanModern
	JapanModern = 0;

	// Field : UsaPoor
	UsaPoor = 0;

	// Field : UsaSedan
	UsaSedan = 0;

	// Field : MuscleRio
	MuscleRio = 0;

	// Field : theBeast
	theBeast = 0;

	// Field : GermanSuper
	GermanSuper = 0;

	// Field : Italiansuper
	Italiansuper = 0;

	// Field : Usasuper
	Usasuper = 0;

	// Field : JapanSuper
	JapanSuper = 0;

	// Field : PickupTruck
	PickupTruck = 0;

	// Field : UsaPoor_latinos
	UsaPoor_latinos = 0;

	// Field : hummer
	hummer = 0;

	// Field : suv
	suv = 0;

	// Field : suv_goon
	suv_goon = 0;

	// Field : monster_truck
	monster_truck = 0;

	// Field : Taxi
	Taxi = 0;

	// Field : CopCar
	CopCar = 0;

	// Field : CopPoor
	CopPoor = 0;

	// Field : militarySuv
	militarySuv = 0;

	// Field : bearcat
	bearcat = 0;

	// Field : tank
	tank = 0;

	// Field : Van
	Van = 0;

	// Field : Ambulance
	Ambulance = 0;

	// Field : Delivery
	Delivery = 0;

	// Field : Advertising
	Advertising = 0;

	// Field : bikeDirt
	bikeDirt = 0;

	// Field : bikeScooter
	bikeScooter = 0;

	// Field : bikeCustom
	bikeCustom = 0;

	// Field : bikeCustom_bikers
	bikeCustom_bikers = 0;

	// Field : bikeSport
	bikeSport = 0;

	// Field : Bike_monster
	Bike_monster = 0;

	// Field : Limousine
	Limousine = 0;

	// Field : Limousine_HighValue
	Limousine_HighValue = 0;

	// Field : JapanPoor_thugs
	JapanPoor_thugs = 0;

	// Field : JapanModern_tiers2
	JapanModern_tiers2 = 0;

	// Field : GermanSuper_tiers2
	GermanSuper_tiers2 = 0;

	// Field : Usasuper_tiers2
	Usasuper_tiers2 = 0;

	// Field : theBeast_tiers2
	theBeast_tiers2 = 0;

	// Field : Seadoo
	Seadoo = 0;

	// Field : Speedboat_mini
	Speedboat_mini_f = 0.0f;

	// Field : Speedboat_yacht
	Speedboat_yacht_f = 0.0f;

	// Field : Speedboat_police
	Speedboat_police_f = 0.0f;

	// Field : HelicopterNews
	HelicopterNews = 0;

	// Field : Seaplane
	Seaplane = 0;

	// Field : jetPrivate
	jetPrivate = 0;

	// Field : HelicopterApache
	HelicopterApache = 0;

	// Field : CopPoor_aggro
	CopPoor_aggro = 0;

	// Field : CopCar_aggro
	CopCar_aggro = 0;

	// Field : copSuv_aggro
	copSuv_aggro = 0;

	// Field : HelicopterPolice
	HelicopterPolice = 0;

	// Field : BikerHeavy
	BikerHeavy = 0;

	// Field : C3M05_MafiaLow_Spawngroup
	C3M05_MafiaLow_Spawngroup = 0;

	// Field : C3M05_MafiaMid_Spawngroup
	C3M05_MafiaMid_Spawngroup = 0;

	// Field : C3M05_MafiaHeavy_Spawngroup
	C3M05_MafiaHeavy_Spawngroup = 0;

	// Field : c3m05_Cop
	c3m05_Cop = 0;

	// Field : U3M07_Alien_Spawngroup
	U3M07_Alien_Spawngroup = 0;

	// Field : World_Alien_Spawngroup
	World_Alien_Spawngroup = 0;

	// Field : World_Alien_Spawngroup_Carnage
	World_Alien_Spawngroup_Carnage = 0;

	// Field : CopBlue1_Aggressive
	CopBlue1_Aggressive = 0;

	// Field : CopBlue2_Aggressive
	CopBlue2_Aggressive = 0;

	// Field : Tourist_Fleeing
	Tourist_Fleeing = 0;

	// Field : TouristWoman_Fleeing
	TouristWoman_Fleeing = 0;

	// Field : BusinessWoman1_Fleeing
	BusinessWoman1_Fleeing = 0;

	// Field : BusinessWoman2_Fleeing
	BusinessWoman2_Fleeing = 0;

	// Field : Hooker_Fleeing
	Hooker_Fleeing = 0;

	// Field : GenericFemale_Fleeing
	GenericFemale_Fleeing = 0;

	// Field : Generic_Man1_Fleeing
	Generic_Man1_Fleeing = 0;

	// Field : Generic_Man2_Fleeing
	Generic_Man2_Fleeing = 0;

	// Field : Devil_Henchman
	Devil_Henchman = 0;

	// Field : GangWarPlayer
	GangWarPlayer = 0;

	// Field : SkillHealth
	SkillHealth = 0;

	// Field : SkillStrength
	SkillStrength = 0;
	SkillStrength_hash = 0;

	// Field : SkillDriving
	SkillDriving = 0;

	// Field : SkillShooting
	SkillShooting = 0;

	// Field : WaterBuffer
	WaterBuffer = 0;

	// Field : ColorTargetA
	ColorTargetA = 0;

	// Field : ColorTargetB
	ColorTargetB = 0;

	// Field : DepthTarget_l1
	DepthTarget_l1 = 0;

	// Field : DepthTargetA_l234
	DepthTargetA_l234 = 0;

	// Field : DepthTargetB_l234
	DepthTargetB_l234 = 0;

	// Field : bloorX_l12
	bloorX_l12 = 0;

	// Field : bloorY_l12
	bloorY_l12 = 0;

	// Field : bloorX_l34
	bloorX_l34 = 0;

	// Field : bloorY_l34
	bloorY_l34 = 0;

	// Field : ShadowMap
	ShadowMap = 0;

	// Field : FramebufferA
	FramebufferA = 0;

	// Field : FramebufferB
	FramebufferB = 0;

	// Field : BloorX_l12
	BloorX_l12 = 0;

	// Field : BloorY_l12
	BloorY_l12 = 0;

	// Field : BloorX_l34
	BloorX_l34 = 0;

	// Field : BloorY_l34
	BloorY_l34 = 0;

	// Field : ShadowBuffer
	ShadowBuffer = 0;

	// Field : level1
	level1 = 0;

	// Field : level2
	level2 = 0;

	// Field : level3
	level3 = 0;

	// Field : OutsideDefault
	OutsideDefault = 0;

	// Field : InteriorDefault
	InteriorDefault = 0;

	// Field : InteriorCasino
	InteriorCasino = 0;

	// Field : InteriorBank
	InteriorBank = 0;

	// Field : InteriorNightClub
	InteriorNightClub = 0;

	// Field : InteriorCornerStore
	InteriorCornerStore = 0;

	// Field : InteriorDiner
	InteriorDiner = 0;

	// Field : InteriorVault
	InteriorVault = 0;

	// Field : InteriorSecret
	InteriorSecret = 0;

	// Field : InteriorMMA
	InteriorMMA = 0;

	// Field : InteriorFightPit
	InteriorFightPit = 0;

	// Field : MenuDefault
	MenuDefault = 0;

	// Field : MenuVehicle
	MenuVehicle = 0;

	// Field : Menu_pawnshop
	Menu_pawnshop = 0;

	// Field : Race_TimeTrial_Land
	Race_TimeTrial_Land_f = 0.0f;

	// Field : Race_TimeAttack_Land
	Race_TimeAttack_Land_f = 0.0f;

	// Field : Race_TimeAttack_Arena
	Race_TimeAttack_Arena_f = 0.0f;

	// Field : Race_TimeAttack_Air
	Race_TimeAttack_Air_f = 0.0f;

	// Field : Race_TimeAttack_C2M13
	Race_TimeAttack_C2M13_f = 0.0f;

	// Field : PhysicsWorldSetting_01
	PhysicsWorldSetting_01 = 0;

	// Field : i
	i = 0;

	// Field : b
	b = 0;

	// Field : g
	g = 0;

	// Field : v
	v = 0;

	// Field : airport_phys
	airport_phys = 0;

	// Field : downtown_phys
	downtown_phys = 0;

	// Field : ocean_phys
	ocean_phys = 0;

	// Field : interior_dlc_secretbase_00_phys
	interior_dlc_secretbase_00_phys = 0;

	// Field : poor_residential_phys
	poor_residential_phys = 0;

	// Field : rich_residential_phys
	rich_residential_phys = 0;

	// Field : strip00_phys
	strip00_phys = 0;
	strip00_phys_hash = 0;

	// Field : strip01_phys
	strip01_phys = 0;
	strip01_phys_hash = 0;

	// Field : strip02_phys
	strip02_phys = 0;
	strip02_phys_hash = 0;

	// Field : strip03_phys
	strip03_phys = 0;
	strip03_phys_hash = 0;

	// Field : interior_bank_phys
	interior_bank_phys = 0;

	// Field : interior_casino_phys
	interior_casino_phys = 0;

	// Field : interior_stripclub_phys
	interior_stripclub_phys = 0;
	interior_stripclub_phys_hash = 0;

	// Field : interior_diner_phys
	interior_diner_phys = 0;

	// Field : interior_underground_fightpit_phys
	interior_underground_fightpit_phys = 0;

	// Field : interior_cornerstore_phys
	interior_cornerstore_phys = 0;

	// Field : interior_vault01_phys
	interior_vault01_phys = 0;

	// Field : High
	High = 0;

	// Field : Medium
	Medium = 0;

	// Field : Low
	Low = 0;

	// Field : BareHandsParam
	BareHandsParam = 0;

	// Field : ParachuteParam
	ParachuteParam = 0;

	// Field : SkydivingParam
	SkydivingParam = 0;

	// Field : FistsParam
	FistsParam = 0;

	// Field : OneHandedParam
	OneHandedParam = 0;

	// Field : DualParam
	DualParam = 0;

	// Field : TwoHandedParam
	TwoHandedParam = 0;

	// Field : MotoParam
	MotoParam = 0;

	// Field : MotoRacerParam
	MotoRacerParam = 0;

	// Field : MotoChopperParam
	MotoChopperParam = 0;

	// Field : MotoScooterParam
	MotoScooterParam = 0;

	// Field : MotoATVParam
	MotoATVParam = 0;

	// Field : MotoSeadooParam
	MotoSeadooParam = 0;

	// Field : MotoDirtParam
	MotoDirtParam = 0;

	// Field : JetpackParam
	JetpackParam = 0;

	// Field : CarParam
	CarParam = 0;

	// Field : CarIndyParam
	CarIndyParam = 0;

	// Field : MeleeWeaponParam
	MeleeWeaponParam = 0;

	// Field : MotoJetParam
	MotoJetParam = 0;

	// Field : NewYearHat
	NewYearHat = 0;

	// Field : MenuMapTweaker
	MenuMapTweaker = 0;

	// Field : MinimapTweaker
	MinimapTweaker = 0;

	// Field : HudTweaker_01
	HudTweaker_01 = 0;

	// Field : Tweaker01
	Tweaker01 = 0;

	// Field : Default_Settings
	Default_Settings = 0;

	// Field : Clothing_Settings
	Clothing_Settings = 0;

	// Field : Weapon_Settings
	Weapon_Settings = 0;

	// Field : Vehicle_Settings
	Vehicle_Settings = 0;

	// Field : Ability_Settings
	Ability_Settings = 0;

	// Field : Crate_Settings
	Crate_Settings = 0;

	// Field : Consumable_Settings
	Consumable_Settings = 0;

	// Field : Special_Settings
	Special_Settings = 0;

	// Field : Pawnshop_Settings
	Pawnshop_Settings = 0;

	// Field : AccelerometerPedals
	AccelerometerPedals_f = 0.0f;

	// Field : AccelerometerStepSlider
	AccelerometerStepSlider = 0;

	// Field : ArrowsPedals
	ArrowsPedals = 0;

	// Field : ArrowsSteps
	ArrowsSteps = 0;

	// Field : SliderSteps
	SliderSteps = 0;

	// Field : SliderPedals
	SliderPedals = 0;

	// Field : MotoAccelerometerPedals
	MotoAccelerometerPedals_f = 0.0f;

	// Field : MotoAccelerometerStepSlider
	MotoAccelerometerStepSlider = 0;

	// Field : MotoAnalogPedals
	MotoAnalogPedals = 0;

	// Field : MotoAnalogStepSlider
	MotoAnalogStepSlider = 0;

	// Field : HelicopterJetpackVStickArrows
	HelicopterJetpackVStickArrows = 0;

	// Field : AirplaneVStickSlider
	AirplaneVStickSlider = 0;

	// Field : OnFoot
	OnFoot = 0;

	// Field : VTOLJetInHelicopterMode
	VTOLJetInHelicopterMode = 0;

	// Field : VTOLJetInPlaneMode
	VTOLJetInPlaneMode = 0;

	// Field : InGameMenu
	InGameMenu = 0;

	// Field : Stock
	Stock = 0;

	// Field : FriendProfileMenu
	FriendProfileMenu = 0;
	FriendProfileMenu_hash = 0;

	// Field : Leaderboards
	Leaderboards = 0;

	// Field : Social
	Social = 0;

	// Field : CallHelp
	CallHelp = 0;

	// Field : Abilities
	Abilities = 0;

	// Field : Map
	Map = 0;

	// Field : MapMission
	MapMission = 0;

	// Field : MapDistrict
	MapDistrict = 0;
	MapDistrict_hash = 0;

	// Field : MapProperty
	MapProperty = 0;

	// Field : PawnShop
	PawnShop = 0;

	// Field : BlackJack
	BlackJack = 0;

	// Field : SlotMachine
	SlotMachine = 0;

	// Field : VideoPoker
	VideoPoker = 0;

	// Field : TutorialShop
	TutorialShop = 0;

	// Field : TutorialSlotmachine
	TutorialSlotmachine = 0;

	// Field : TutorialBlackjack
	TutorialBlackjack = 0;

	// Field : TutorialVideopoker
	TutorialVideopoker = 0;

	// Field : TutorialSkills
	TutorialSkills = 0;

	// Field : TutorialGacha
	TutorialGacha = 0;

	// Field : TutorialRealEstate
	TutorialRealEstate = 0;

	// Field : TutorialPawnShop
	TutorialPawnShop = 0;

	// Field : SocialEvents
	SocialEvents = 0;

	// Field : VIPStatus
	VIPStatus = 0;

	// Field : GiftPreview
	GiftPreview = 0;

	// Field : City
	City = 0;

	// Field : Casino
	Casino = 0;

	// Field : Spartan
	Spartan = 0;

	// Field : Bank
	Bank = 0;

	// Field : NightClub
	NightClub = 0;

	// Field : StripClub
	StripClub = 0;
	StripClub_hash = 0;

	// Field : CornerStore
	CornerStore = 0;

	// Field : Diner
	Diner = 0;

	// Field : FightPit
	FightPit = 0;

	// Field : MMA
	MMA = 0;

	// Field : MotoCross1
	MotoCross1 = 0;

	// Field : MotoCross2
	MotoCross2 = 0;

	// Field : MotoCross3
	MotoCross3 = 0;

	// Field : MotoCross4
	MotoCross4 = 0;

	// Field : Vault
	Vault = 0;

	// Field : SecretBase00
	SecretBase00 = 0;

	// Field : SecretBase01
	SecretBase01 = 0;

	// Field : SecretBase02
	SecretBase02 = 0;

	// Field : VehicleThief
	VehicleThief = 0;

	// Field : Hospital
	Hospital = 0;

	// Field : Parking
	Parking = 0;

	// Field : SocialEvent
	SocialEvent = 0;

	// Field : CarShader
	CarShader = 0;

	// Field : PostEffects
	PostEffects_f = 0.0f;

	// Field : WaterEffects
	WaterEffects = 0;

	// Field : RoadEffects
	RoadEffects = 0;

	// Field : GlowEffects
	GlowEffects = 0;

	// Field : ShadowEffects
	ShadowEffects = 0;

	// Field : MultilightWithScaleOffset
	MultilightWithScaleOffset_f = 0.0f;

	// Field : CustomEffects
	CustomEffects = 0;

	// Field : Character
	Character = 0;

	// Field : SkyMaterial
	SkyMaterial = 0;

	// Field : FresnelAndPHBeckmann
	FresnelAndPHBeckmann = 0;

	// Field : SkinSpecularParameters
	SkinSpecularParameters = 0;

	// Field : ReflectionFalloffTexture
	ReflectionFalloffTexture = 0;
	ReflectionFalloffTexture_hash = 0;

	// Field : GlassReflectionFalloffTexture
	GlassReflectionFalloffTexture = 0;
	GlassReflectionFalloffTexture_hash = 0;

	// Field : FlakesTexture
	FlakesTexture = 0;
	FlakesTexture_hash = 0;

	// Field : WaterNormal
	WaterNormal = 0;

	// Field : WaterNormal1
	WaterNormal1 = 0;

	// Field : WaterNormal2
	WaterNormal2 = 0;

	// Field : DetailMap
	DetailMap = 0;

	// Field : LodBuildings0
	LodBuildings0 = 0;

	// Field : LodWeapons0
	LodWeapons0 = 0;

	// Field : LodBuildings1
	LodBuildings1 = 0;

	// Field : LodCar0
	LodCar0 = 0;

	// Field : LodDefault0
	LodDefault0 = 0;

	// Field : LodFavela0
	LodFavela0 = 0;

	// Field : LodNone
	LodNone = 0;

	// Field : LodProps0
	LodProps0 = 0;

	// Field : LodProps1
	LodProps1 = 0;

	// Field : LodProps2
	LodProps2 = 0;

	// Field : LodProps3
	LodProps3 = 0;

	// Field : LodGameObjects0
	LodGameObjects0 = 0;

	// Field : LodAdditive0
	LodAdditive0 = 0;

	// Field : LodTrees0
	LodTrees0 = 0;

	// Field : LodTrees1
	LodTrees1 = 0;

	// Field : Lodchar0
	Lodchar0 = 0;

	// Field : Lodvehicle0
	Lodvehicle0 = 0;

	// Field : Lodvehicle1
	Lodvehicle1 = 0;

	// Field : LodVFX0
	LodVFX0 = 0;
	LodVFX0_hash = 0;

	// Field : LodVFXAir
	LodVFXAir = 0;
	LodVFXAir_hash = 0;

	// Field : LodVFXVisualMarker
	LodVFXVisualMarker = 0;
	LodVFXVisualMarker_hash = 0;

	// Field : SpecialLevel
	SpecialLevel = 0;

	// Field : Off
	Off = 0;

	// Field : KillNPCMain
	KillNPCMain = 0;

	// Field : KillNPCSub
	KillNPCSub = 0;

	// Field : ProtectMain
	ProtectMain_f = 0.0f;

	// Field : ProtectSub
	ProtectSub_f = 0.0f;

	// Field : MoveMain
	MoveMain = 0;

	// Field : MoveSub
	MoveSub = 0;

	// Field : StealCar
	StealCar = 0;

	// Field : Waypoint
	Waypoint = 0;

	// Field : GetMain
	GetMain = 0;

	// Field : CopOnFoot
	CopOnFoot = 0;

	// Field : NPCFightMain
	NPCFightMain = 0;

	// Field : ParkingLot
	ParkingLot = 0;

	// Field : TargetName
	TargetName = 0;
	TargetName_hash = 0;

	// Field : TankTurret
	TankTurret = 0;

	// Field : HeliApacheTurret
	HeliApacheTurret = 0;

	// Field : JetTurret
	JetTurret = 0;

	// Field : HeliPoliceTurret
	HeliPoliceTurret = 0;

	// Field : BoatPoliceTurret
	BoatPoliceTurret = 0;

	// Field : HeliMissiles
	HeliMissiles = 0;

	// Field : VTOLMissiles
	VTOLMissiles = 0;

	// Field : BuggyTurret
	BuggyTurret = 0;

	// Field : RatRodTurret
	RatRodTurret = 0;

	// Field : TruckFlame
	TruckFlame = 0;

	// Field : LazerTurret
	LazerTurret = 0;

	// Field : HoverTankTurret
	HoverTankTurret = 0;

	// Field : DropShipTurret
	DropShipTurret = 0;

	// Field : ZombieBoatTurret
	ZombieBoatTurret = 0;

	// Field : ArmageddonPoliceTurret
	ArmageddonPoliceTurret = 0;

	// Field : MC4_car_Turret
	MC4_car_Turret = 0;

	// Field : ArrowWeapon
	ArrowWeapon = 0;

	// Field : BFG
	BFG = 0;

	// Field : WantedLevelZero
	WantedLevelZero = 0;

	// Field : WantedLevelOne
	WantedLevelOne = 0;

	// Field : WantedLevelTwo
	WantedLevelTwo = 0;

	// Field : WantedLevelThree
	WantedLevelThree = 0;

	// Field : WantedLevelFour
	WantedLevelFour = 0;

	// Field : WantedLevelFive
	WantedLevelFive = 0;

	// Field : JackedCivCar
	JackedCivCar = 0;

	// Field : JackedCopCar
	JackedCopCar = 0;

	// Field : HitCiv
	HitCiv = 0;

	// Field : HitCop
	HitCop = 0;

	// Field : HitCivCar
	HitCivCar = 0;

	// Field : HitCopCar
	HitCopCar = 0;

	// Field : DestroyedCivCar
	DestroyedCivCar = 0;
	DestroyedCivCar_hash = 0;

	// Field : DestroyedCopCar
	DestroyedCopCar = 0;
	DestroyedCopCar_hash = 0;

	// Field : AimedAtCiv
	AimedAtCiv = 0;

	// Field : AimedAtCop
	AimedAtCop = 0;

	// Field : KilledCiv
	KilledCiv = 0;

	// Field : KilledCop
	KilledCop = 0;

	// Field : FiredGun
	FiredGun = 0;

	// Field : StartedFire
	StartedFire = 0;

	// Field : ObstructedCop
	ObstructedCop = 0;
	ObstructedCop_hash = 0;

	// Field : Tresspassing
	Tresspassing = 0;

	// Field : FrontLeftCrouch
	FrontLeftCrouch = 0;

	// Field : FrontRightCrouch
	FrontRightCrouch = 0;

	// Field : BackLeftCrouch
	BackLeftCrouch = 0;

	// Field : BackRightCrouch
	BackRightCrouch = 0;

	// Field : FrontCrouch
	FrontCrouch = 0;

	// Field : BackCrouch
	BackCrouch = 0;

	// Field : TempName_StripClub
	TempName_StripClub = 0;
	TempName_StripClub_hash = 0;

	// Field : Eman
	Eman = 0;

	// Field : Boat
	Boat = 0;

	// Field : BikeSport
	BikeSport = 0;

	// Field : Race
	Race = 0;

	// Field : BikeSportRace
	BikeSportRace = 0;

	// Field : Airplane
	Airplane = 0;

	// Field : Helicopter
	Helicopter = 0;

	// Field : HelicopterScriptedApache
	HelicopterScriptedApache = 0;

	// Field : Jetpack
	Jetpack = 0;

	// Field : Vehicle
	Vehicle = 0;

	// Field : ParkedVehicle
	ParkedVehicle = 0;

	// Field : Interior
	Interior = 0;

	// Field : OnFootNPC
	OnFootNPC = 0;

	// Field : OnFootVehicle
	OnFootVehicle = 0;

	// Field : OnFootParkedVehicle
	OnFootParkedVehicle = 0;

	// Field : CopNPC
	CopNPC = 0;

	// Field : OnFootCopNPC
	OnFootCopNPC = 0;

	// Field : OnFootCopCar
	OnFootCopCar = 0;

	// Field : RoadBlock
	RoadBlock = 0;

	// Field : OnFootInterior
	OnFootInterior = 0;

	// Field : OnFootCopInterior
	OnFootCopInterior = 0;

	// Field : OnFootNightclub
	OnFootNightclub = 0;

	// Field : OnFootInteriorSmall
	OnFootInteriorSmall = 0;

	// Field : OnFootCopInteriorSmall
	OnFootCopInteriorSmall = 0;

	// Field : OnFootRoadBlock
	OnFootRoadBlock = 0;

	// Field : HighValueTarget
	HighValueTarget = 0;

	// Field : BearCat
	BearCat = 0;

	// Field : JetArmy
	JetArmy = 0;

	// Field : CarngGuy
	CarngGuy = 0;

	// Field : CarngGirl
	CarngGirl = 0;

	// Field : Normal
	Normal = 0;

	// Field : APLevel1
	APLevel1 = 0;

	// Field : APLevel2
	APLevel2 = 0;

	// Field : APLevel3
	APLevel3 = 0;

	// Field : APLevel4
	APLevel4 = 0;

	// Field : APLevel5
	APLevel5 = 0;

	// Field : APLevel6
	APLevel6 = 0;

	// Field : KillAlly
	KillAlly = 0;

	// Field : KillCivilian
	KillCivilian = 0;

	// Field : KillPolice
	KillPolice = 0;

	// Field : KillGangMember
	KillGangMember = 0;

	// Field : KillAlien
	KillAlien = 0;

	// Field : KillMIB
	KillMIB = 0;

	// Field : DestroyCar
	DestroyCar = 0;
	DestroyCar_hash = 0;

	// Field : DestroyMoto
	DestroyMoto = 0;
	DestroyMoto_hash = 0;

	// Field : DestroyBoat
	DestroyBoat = 0;
	DestroyBoat_hash = 0;

	// Field : DestroyHelicopter
	DestroyHelicopter = 0;
	DestroyHelicopter_hash = 0;

	// Field : DestroyAirplane
	DestroyAirplane = 0;
	DestroyAirplane_hash = 0;

	// Field : PurchaseClothing
	PurchaseClothing = 0;

	// Field : PurchaseWeapon
	PurchaseWeapon = 0;

	// Field : PurchaseVehicle
	PurchaseVehicle = 0;

	// Field : OrderVehicle
	OrderVehicle = 0;

	// Field : PurchaseConsumable
	PurchaseConsumable = 0;

	// Field : PurchaseSuitcase
	PurchaseSuitcase = 0;

	// Field : OpenSuitcase
	OpenSuitcase = 0;

	// Field : HijackCar
	HijackCar = 0;

	// Field : HijackMoto
	HijackMoto = 0;

	// Field : HijackBoat
	HijackBoat = 0;

	// Field : HijackHelicopter
	HijackHelicopter = 0;

	// Field : HijackAirplane
	HijackAirplane = 0;

	// Field : CarPowerslide
	CarPowerslide = 0;

	// Field : CarAirJump
	CarAirJump = 0;

	// Field : MotoWheelie
	MotoWheelie = 0;

	// Field : MotoStoppie
	MotoStoppie = 0;

	// Field : ParachuteOpen
	ParachuteOpen = 0;

	// Field : PropertyPurchased
	PropertyPurchased = 0;

	// Field : DistrictPurchased
	DistrictPurchased = 0;
	DistrictPurchased_hash = 0;

	// Field : Trophy1Completed
	Trophy1Completed = 0;

	// Field : Trophy2Completed
	Trophy2Completed = 0;

	// Field : Trophy3Completed
	Trophy3Completed = 0;

	// Field : Tattoo1Completed
	Tattoo1Completed = 0;

	// Field : Tattoo2Completed
	Tattoo2Completed = 0;

	// Field : Tattoo3Completed
	Tattoo3Completed = 0;

	// Field : DefaultRespawnPoint
	DefaultRespawnPoint = 0;

	// Field : Regular
	Regular = 0;

	// Field : Leasure
	Leasure = 0;

	// Field : Business
	Business = 0;

	// Field : OldTown
	OldTown = 0;

	// Field : WestDesert
	WestDesert = 0;

	// Field : EastDesert
	EastDesert = 0;

	// Field : Leisure_Sports
	Leisure_Sports = 0;

	// Field : Leisure_TaxFree
	Leisure_TaxFree = 0;

	// Field : Leisure_Slots
	Leisure_Slots = 0;

	// Field : Leisure_Escorts
	Leisure_Escorts = 0;

	// Field : Business_Drugs
	Business_Drugs = 0;

	// Field : Business_ChopShop
	Business_ChopShop = 0;

	// Field : Business_AdultFilms
	Business_AdultFilms = 0;

	// Field : Business_Alcohol
	Business_Alcohol = 0;

	// Field : OldTown_Counterfeits
	OldTown_Counterfeits = 0;

	// Field : OldTown_Candylab
	OldTown_Candylab = 0;

	// Field : OldTown_Weapons
	OldTown_Weapons = 0;

	// Field : OldTown_Storage
	OldTown_Storage = 0;

	// Field : WestDesert_Candylab
	WestDesert_Candylab = 0;

	// Field : WestDesert_Weapons
	WestDesert_Weapons = 0;

	// Field : WestDesert_DrugPlant
	WestDesert_DrugPlant = 0;

	// Field : WestDesert_AdultFilms
	WestDesert_AdultFilms = 0;

	// Field : EastDesert_ElectricPlants
	EastDesert_ElectricPlants = 0;

	// Field : EastDesert_AdultFilms
	EastDesert_AdultFilms = 0;

	// Field : EastDesert_Alcohol
	EastDesert_Alcohol = 0;

	// Field : EastDesert_Candylab
	EastDesert_Candylab = 0;

	// Field : Prize_1
	Prize_1 = 0;

	// Field : OldTown_diner
	OldTown_diner = 0;

	// Field : OldTown_store
	OldTown_store = 0;

	// Field : OldTown_mall
	OldTown_mall = 0;

	// Field : OldTown_warehouse
	OldTown_warehouse = 0;

	// Field : Leasure_stadium
	Leasure_stadium = 0;

	// Field : Leasure_airport
	Leasure_airport = 0;

	// Field : Leasure_northCasino
	Leasure_northCasino = 0;

	// Field : Leasure_southCasino
	Leasure_southCasino = 0;

	// Field : Business_hospital
	Business_hospital = 0;

	// Field : Business_shop
	Business_shop = 0;

	// Field : Business_villa
	Business_villa = 0;

	// Field : Business_gasStation
	Business_gasStation = 0;

	// Field : WestDesert_diner
	WestDesert_diner = 0;

	// Field : WestDesert_armyBase
	WestDesert_armyBase = 0;

	// Field : WestDesert_farm
	WestDesert_farm = 0;

	// Field : WestDesert_motel
	WestDesert_motel = 0;

	// Field : EastDesert_uberDam
	EastDesert_uberDam = 0;

	// Field : EastDesert_motel
	EastDesert_motel = 0;

	// Field : EastDesert_warehouse
	EastDesert_warehouse = 0;

	// Field : EastDesert_diner
	EastDesert_diner = 0;

	// Field : advert_01
	advert_01 = 0;

	// Field : radio_blaster_off
	radio_blaster_off = 0;

	// Field : radio_blaster_oldies
	radio_blaster_oldies = 0;

	// Field : radio_blaster_Rock
	radio_blaster_Rock = 0;

	// Field : radio_blaster_80s
	radio_blaster_80s = 0;

	// Field : radio_blaster_electro
	radio_blaster_electro = 0;

	// Field : radio_blaster_hiphop
	radio_blaster_hiphop = 0;

	// Field : Clothing
	Clothing = 0;

	// Field : Vehicles
	Vehicles = 0;

	// Field : Crates
	Crates = 0;

	// Field : Consumables
	Consumables = 0;

	// Field : Special
	Special = 0;

	// Field : MainPawnShop
	MainPawnShop = 0;

	// Field : StartingList
	StartingList = 0;

	// Field : UpdateList
	UpdateList = 0;

	// Field : DefaultParachute
	DefaultParachute = 0;

	// Field : Controls
	Controls = 0;

	// Field : Missions
	Missions = 0;

	// Field : CasinoGames
	CasinoGames = 0;

	// Field : Shop
	Shop = 0;

	// Field : Other
	Other = 0;

	// Field : ParentsInfo
	ParentsInfo = 0;

	// Field : ControlsHelp00
	ControlsHelp00 = 0;

	// Field : MissionsHelp00
	MissionsHelp00 = 0;

	// Field : CasinoGamesHelp00
	CasinoGamesHelp00 = 0;

	// Field : MapHelp00
	MapHelp00 = 0;

	// Field : ShopHelp00
	ShopHelp00 = 0;

	// Field : OtherHelp00
	OtherHelp00 = 0;

	// Field : ParentInfoHelp00
	ParentInfoHelp00 = 0;

	// Field : Constant_01
	Constant_01 = 0;

	// Field : Cst_01
	Cst_01 = 0;

	// Field : KarenFriend
	KarenFriend = 0;

	// Field : BoardsInfo
	BoardsInfo = 0;

	// Field : Key_01
	Key_01 = 0;

	// Field : FacebookReward
	FacebookReward = 0;

	// Field : Level_1
	Level_1 = 0;

	// Field : Level_2
	Level_2 = 0;

	// Field : Level_3
	Level_3 = 0;

	// Field : Level_4
	Level_4 = 0;

	// Field : Level_5
	Level_5 = 0;

	// Field : Level_6
	Level_6 = 0;

	// Field : Level_7
	Level_7 = 0;

	// Field : Level_8
	Level_8 = 0;

	// Field : Level_9
	Level_9 = 0;

	// Field : Level_10
	Level_10 = 0;

	// Field : Reward_0
	Reward_0 = 0;

	// Field : Reward_1
	Reward_1 = 0;

	// Field : Reward_2
	Reward_2 = 0;

	// Field : Reward_3
	Reward_3 = 0;

	// Field : Reward_4
	Reward_4 = 0;

	// Field : Reward_5
	Reward_5 = 0;

	// Field : Reward_6
	Reward_6 = 0;

	// Field : Reward_7
	Reward_7 = 0;

	// Field : Reward_8
	Reward_8 = 0;

	// Field : Reward_9
	Reward_9 = 0;

	// Field : Reward_10
	Reward_10 = 0;

	// Field : Reward_11
	Reward_11 = 0;

	// Field : Reward_12
	Reward_12 = 0;

	// Field : Reward_13
	Reward_13 = 0;

	// Field : Reward_14
	Reward_14 = 0;

	// Field : None
	None = 0;

	// Field : Jason
	Jason = 0;

	// Field : Vera
	Vera = 0;

	// Field : Karen
	Karen = 0;

	// Field : Frank
	Frank = 0;

	// Field : Warren
	Warren = 0;

	// Field : Benny
	Benny = 0;

	// Field : AviatorGirl
	AviatorGirl = 0;

	// Field : AsianRacer
	AsianRacer = 0;

	// Field : CasinoGirl
	CasinoGirl = 0;

	// Field : DJGirl
	DJGirl = 0;

	// Field : Eman_UFO
	Eman_UFO = 0;

	// Field : Devil_Stranger
	Devil_Stranger = 0;
	Devil_Stranger_hash = 0;

	// Field : Devil
	Devil = 0;

	// Field : CH1
	CH1 = 0;

	// Field : CH2
	CH2 = 0;

	// Field : CH3
	CH3 = 0;

	// Field : CH4
	CH4 = 0;

	// Field : CH5
	CH5 = 0;

	// Field : UPDATE3
	UPDATE3 = 0;

	// Field : AllVehicles
	AllVehicles = 0;

	// Field : OnlySeaVehicles
	OnlySeaVehicles = 0;

	// Field : OnlyPlaneVehicles
	OnlyPlaneVehicles = 0;

	// Field : OnlyHeliVehicles
	OnlyHeliVehicles = 0;

	// Field : OnlyLandVehicles
	OnlyLandVehicles = 0;

	// Field : OnlyTwoSeatLandVehicles
	OnlyTwoSeatLandVehicles = 0;

	// Field : OnlyMotoVehicles
	OnlyMotoVehicles = 0;

	// Field : AirAndLandVehicles
	AirAndLandVehicles = 0;

	// Field : OnlyCars_TwoSeat
	OnlyCars_TwoSeat = 0;

	// Field : OnlyCars_All
	OnlyCars_All = 0;

	// Field : AllWeapons
	AllWeapons = 0;

	// Field : OnlyMeleeWeapons
	OnlyMeleeWeapons = 0;

	// Field : OnlyConsumables
	OnlyConsumables = 0;

	// Field : All
	All = 0;

	// Field : OnlySniperWeapons
	OnlySniperWeapons = 0;

	// Field : TRADITIONAL
	TRADITIONAL = 0;

	// Field : ACTION
	ACTION = 0;

	// Field : VEHICLE
	VEHICLE = 0;

	// Field : ARENA
	ARENA = 0;

	// Field : Traditional
	Traditional = 0;

	// Field : UFO
	UFO = 0;

	// Field : UFOHeist
	UFOHeist = 0;

	// Field : Ram
	Ram = 0;

	// Field : Survival
	Survival = 0;

	// Field : Robbery
	Robbery = 0;

	// Field : Carnage
	Carnage = 0;

	// Field : FightClub
	FightClub = 0;

	// Field : Assault
	Assault = 0;

	// Field : Sniper
	Sniper = 0;

	// Field : TimeAttack
	TimeAttack_f = 0.0f;

	// Field : RingChallenge
	RingChallenge = 0;

	// Field : Freefall
	Freefall = 0;

	// Field : Racing
	Racing = 0;

	// Field : TRADITIONAL_QUICKTITLE
	TRADITIONAL_QUICKTITLE = 0;
	TRADITIONAL_QUICKTITLE_hash = 0;

	// Field : TRADITIONAL_KAREN
	TRADITIONAL_KAREN = 0;

	// Field : TRADITIONAL_VERA
	TRADITIONAL_VERA = 0;

	// Field : TRADITIONAL_EMAN
	TRADITIONAL_EMAN = 0;

	// Field : TRADITIONAL_FRANK
	TRADITIONAL_FRANK = 0;

	// Field : TRADITIONAL_BENNY
	TRADITIONAL_BENNY = 0;

	// Field : TRADITIONAL_WARREN
	TRADITIONAL_WARREN = 0;

	// Field : TRADITIONAL_LUCKY
	TRADITIONAL_LUCKY = 0;

	// Field : RAM
	RAM = 0;

	// Field : UFO_HEIST
	UFO_HEIST = 0;

	// Field : SURVIVAL
	SURVIVAL = 0;

	// Field : ROBBERY
	ROBBERY = 0;

	// Field : CARNAGE
	CARNAGE = 0;

	// Field : FIGHTCLUB
	FIGHTCLUB = 0;

	// Field : ASSAULT
	ASSAULT = 0;

	// Field : SNIPER
	SNIPER = 0;

	// Field : TIMEATTACK
	TIMEATTACK_f = 0.0f;

	// Field : RINGCHALLENGE
	RINGCHALLENGE = 0;

	// Field : RACING
	RACING = 0;

	// Field : DELIVERY
	DELIVERY = 0;

	// Field : FREEFALL
	FREEFALL = 0;

	// Field : NONE
	NONE = 0;

	// Field : CASINOGAME
	CASINOGAME = 0;

	// Field : Setting_01
	Setting_01 = 0;

	// Field : Seven
	Seven = 0;

	// Field : Bell
	Bell = 0;

	// Field : Crystal
	Crystal = 0;

	// Field : Bar
	Bar = 0;

	// Field : Orange
	Orange_f = 0.0f;

	// Field : Cherry
	Cherry = 0;

	// Field : RepeatOrange
	RepeatOrange_f = 0.0f;

	// Field : RepeatCherry
	RepeatCherry = 0;

	// Field : font_latin
	font_latin = 0;

	// Field : font_russian
	font_russian = 0;

	// Field : font_japanese
	font_japanese = 0;

	// Field : font_korean
	font_korean = 0;

	// Field : font_SChinese
	font_SChinese = 0;

	// Field : font_TChinese
	font_TChinese = 0;

	// Field : NotoSansThaiRegular
	NotoSansThaiRegular = 0;

	// Field : English
	English = 0;

	// Field : French
	French = 0;

	// Field : German
	German = 0;

	// Field : Spanish
	Spanish = 0;

	// Field : Italian
	Italian = 0;

	// Field : Japanese
	Japanese = 0;

	// Field : Korean
	Korean = 0;

	// Field : Chinese
	Chinese = 0;

	// Field : Portugese
	Portugese = 0;

	// Field : Russian
	Russian = 0;

	// Field : Turkish
	Turkish = 0;

	// Field : TradChinese
	TradChinese = 0;

	// Field : Arabic
	Arabic = 0;

	// Field : Thai
	Thai = 0;

	// Field : GachaBoy
	GachaBoy = 0;

	// Field : HudFeatures_01
	HudFeatures_01 = 0;

	// Field : MenuFeatures_01
	MenuFeatures_01 = 0;

	// Field : Cop
	Cop = 0;

	// Field : Kickboxer
	Kickboxer = 0;

	// Field : Brawler
	Brawler = 0;

	// Field : tile
	tile = 0;

	// Field : Road
	Road = 0;

	// Field : dirt
	dirt = 0;

	// Field : gravel
	gravel = 0;

	// Field : Cliff
	Cliff = 0;

	// Field : Less90Cards
	Less90Cards = 0;

	// Field : More90Cards
	More90Cards = 0;

	// Field : Crate1Tier
	Crate1Tier = 0;

	// Field : Crate2Tier
	Crate2Tier = 0;

	// Field : Crate3Tier
	Crate3Tier = 0;

	// Field : Consumables1
	Consumables1 = 0;

	// Field : Consumables2
	Consumables2 = 0;

	// Field : Item1
	Item1 = 0;

	// Field : Item2
	Item2 = 0;

	// Field : ExtraItem1
	ExtraItem1 = 0;

	// Field : Item3
	Item3 = 0;

	// Field : Item4
	Item4 = 0;

	// Field : Item5
	Item5 = 0;

	// Field : Item6
	Item6 = 0;

	// Field : Item7
	Item7 = 0;

	// Field : Item8
	Item8 = 0;

	// Field : Pedestrian
	Pedestrian = 0;
	Pedestrian_hash = 0;

	// Field : Crate
	Crate = 0;

	// Field : TutorialCrate
	TutorialCrate = 0;

	// Field : Melee
	Melee = 0;

	// Field : PawnShop_1
	PawnShop_1 = 0;

	// Field : PawnShop_2
	PawnShop_2 = 0;

	// Field : PawnShop_3
	PawnShop_3 = 0;

	// Field : NoTier
	NoTier = 0;

	// Field : Tier1
	Tier1 = 0;

	// Field : Tier2
	Tier2 = 0;

	// Field : Tier3
	Tier3 = 0;

	// Field : Menus
	Menus = 0;

	// Field : MenusFadeIn
	MenusFadeIn = 0;

	// Field : Script
	Script = 0;

	// Field : ScriptNoSound
	ScriptNoSound = 0;
	ScriptNoSound_hash = 0;

	// Field : HardcodedIn_GrapherChangeLocation
	HardcodedIn_GrapherChangeLocation = 0;

	// Field : HardcodedIn_MissionAbort
	HardcodedIn_MissionAbort = 0;

	// Field : CinematicAnimEvent
	CinematicAnimEvent = 0;
	CinematicAnimEvent_hash = 0;

	// Field : CinematicAnimEventMute
	CinematicAnimEventMute = 0;
	CinematicAnimEventMute_hash = 0;

	// Field : HardcodedIn_CinematicPlay
	HardcodedIn_CinematicPlay = 0;

	// Field : HardcodedIn_GrapherMissionUnload
	HardcodedIn_GrapherMissionUnload = 0;

	// Field : HardcodedIn_GameStartModuleRespawnPin
	HardcodedIn_GameStartModuleRespawnPin = 0;

	// Field : HardcodedIn_GameStartCinematicSkipPin
	HardcodedIn_GameStartCinematicSkipPin = 0;

	// Field : HardcodedIn_GameStartMission
	HardcodedIn_GameStartMission = 0;

	// Field : Set0
	Set0 = 0;

	// Field : Set1
	Set1 = 0;

	// Field : Set2
	Set2 = 0;

	// Field : Bullet
	Bullet = 0;

	// Field : BulletMediumBlood
	BulletMediumBlood = 0;

	// Field : BulletBigBlood
	BulletBigBlood = 0;

	// Field : Projectile
	Projectile = 0;

	// Field : Slashing
	Slashing = 0;

	// Field : Physical
	Physical = 0;

	// Field : Toxic
	Toxic = 0;

	// Field : Drowning
	Drowning = 0;

	// Field : Fall
	Fall = 0;

	// Field : Crushing
	Crushing = 0;

	// Field : VehicleImpact
	VehicleImpact = 0;

	// Field : Rotor
	Rotor_f = 0.0f;

	// Field : Mortal
	Mortal = 0;

	// Field : Percent
	Percent = 0;

	// Field : Tesla
	Tesla = 0;

	// Field : VehicleParts
	VehicleParts = 0;

	// Field : WeaponParts
	WeaponParts = 0;

	// Field : ClothingBasket
	ClothingBasket = 0;

	// Field : Brave
	Brave = 0;

	// Field : HighValuableTarget
	HighValuableTarget = 0;

	// Field : Enemy
	Enemy = 0;

	// Field : C1M01_Opponent
	C1M01_Opponent = 0;

	// Field : ApachePilot
	ApachePilot = 0;

	// Field : AmericanPsycho
	AmericanPsycho = 0;

	// Field : MartialArts
	MartialArts = 0;

	// Field : Fleeing
	Fleeing = 0;

	// Field : Weak
	Weak = 0;

	// Field : MC
	MC = 0;

	// Field : Helico
	Helico = 0;

	// Field : Hovercraft
	Hovercraft = 0;

	// Field : AirplaneArmy
	AirplaneArmy = 0;

	// Field : Level1
	Level1 = 0;

	// Field : Level2
	Level2 = 0;

	// Field : Level3
	Level3 = 0;

	// Field : LAND_VEHICLES
	LAND_VEHICLES = 0;

	// Field : AIR_VEHICLES
	AIR_VEHICLES = 0;

	// Field : SEA_VEHICLES
	SEA_VEHICLES = 0;

	// Field : MELEE
	MELEE = 0;

	// Field : HANDGUNS
	HANDGUNS = 0;

	// Field : SMG
	SMG = 0;

	// Field : SHOTGUNS
	SHOTGUNS = 0;

	// Field : RIFLES
	RIFLES = 0;

	// Field : HEAVY
	HEAVY = 0;

	// Field : THROWN
	THROWN = 0;

	// Field : HEALTH_ARMOR
	HEALTH_ARMOR = 0;

	// Field : MOVEMENT
	MOVEMENT = 0;

	// Field : POLICE
	POLICE = 0;

	// Field : LOOTING
	LOOTING = 0;

	// Field : RESISTANCES
	RESISTANCES = 0;

	// Field : Custom_Category_01
	Custom_Category_01 = 0;

	// Field : Vehicle_Category_01
	Vehicle_Category_01 = 0;

	// Field : DefaultGear
	DefaultGear = 0;

	// Field : Gear_SuitVest
	Gear_SuitVest = 0;

	// Field : Gear_Bare
	Gear_Bare = 0;

	// Field : Gear_Jeans
	Gear_Jeans = 0;

	// Field : Gear_MMA
	Gear_MMA = 0;

	// Field : Gear_Robbery
	Gear_Robbery = 0;

	// Field : Gear_Agent
	Gear_Agent = 0;

	// Field : Gear_Santa
	Gear_Santa = 0;

	// Field : Mercenary1
	Mercenary1 = 0;

	// Field : Mercenary2
	Mercenary2 = 0;

	// Field : Mercenary3
	Mercenary3 = 0;

	// Field : Mercenary4
	Mercenary4 = 0;

	// Field : Mercenary5
	Mercenary5 = 0;

	// Field : Mercenary6
	Mercenary6 = 0;

	// Field : Mercenary7
	Mercenary7 = 0;

	// Field : Mercenary8
	Mercenary8 = 0;

	// Field : Mercenary9
	Mercenary9 = 0;

	// Field : Mercenary10
	Mercenary10 = 0;

	// Field : Mercenary11
	Mercenary11 = 0;

	// Field : Mercenary12
	Mercenary12 = 0;

	// Field : Mercenary13
	Mercenary13 = 0;

	// Field : Mercenary14
	Mercenary14 = 0;

	// Field : Mercenary15
	Mercenary15 = 0;

	// Field : Mercenary16
	Mercenary16 = 0;

	// Field : Mercenary17
	Mercenary17 = 0;

	// Field : Mercenary18
	Mercenary18 = 0;

	// Field : Mercenary19
	Mercenary19 = 0;

	// Field : Mercenary20
	Mercenary20 = 0;

	// Field : Mercenary21
	Mercenary21 = 0;

	// Field : Mercenary22
	Mercenary22 = 0;

	// Field : Mercenary23
	Mercenary23 = 0;

	// Field : Mercenary24
	Mercenary24 = 0;

	// Field : Mercenary25
	Mercenary25 = 0;

	// Field : Civilian
	Civilian = 0;

	// Field : Bikers
	Bikers = 0;

	// Field : Latinos
	Latinos = 0;

	// Field : Mafia
	Mafia = 0;

	// Field : Thugs
	Thugs = 0;

	// Field : Neutral
	Neutral = 0;

	// Field : Aliens
	Aliens = 0;

	// Field : MIBs
	MIBs = 0;

	// Field : Level_01
	Level_01 = 0;

	// Field : Level_02
	Level_02 = 0;

	// Field : Level_03
	Level_03 = 0;

	// Field : Level_04
	Level_04 = 0;

	// Field : Level_05
	Level_05 = 0;

	// Field : Level_06
	Level_06 = 0;

	// Field : Level_07
	Level_07 = 0;

	// Field : Level_08
	Level_08 = 0;

	// Field : Level_09
	Level_09 = 0;

	// Field : Level_11
	Level_11 = 0;

	// Field : Level_12
	Level_12 = 0;

	// Field : Level_13
	Level_13 = 0;

	// Field : Level_14
	Level_14 = 0;

	// Field : Level_15
	Level_15 = 0;

	// Field : Level_16
	Level_16 = 0;

	// Field : Level_17
	Level_17 = 0;

	// Field : Level_18
	Level_18 = 0;

	// Field : Level_19
	Level_19 = 0;

	// Field : Level_20
	Level_20 = 0;

	// Field : Level_21
	Level_21 = 0;

	// Field : Level_22
	Level_22 = 0;

	// Field : Level_23
	Level_23 = 0;

	// Field : Level_24
	Level_24 = 0;

	// Field : Level_25
	Level_25 = 0;

	// Field : DefaultDialog
	DefaultDialog = 0;

	// Field : GameActionDialog
	GameActionDialog = 0;

	// Field : ObjectiveDialog
	ObjectiveDialog = 0;

	// Field : ObjectiveDialogTutorial
	ObjectiveDialogTutorial = 0;

	// Field : SubObjectiveDialog_0
	SubObjectiveDialog_0 = 0;

	// Field : SubObjectiveDialog_1
	SubObjectiveDialog_1 = 0;

	// Field : SubObjectiveDialog_Stars
	SubObjectiveDialog_Stars = 0;

	// Field : SubObjectiveDialog_Progress
	SubObjectiveDialog_Progress = 0;

	// Field : TimerDialog
	TimerDialog_f = 0.0f;

	// Field : TalkDialog
	TalkDialog = 0;

	// Field : CenteredDialog
	CenteredDialog = 0;

	// Field : AchievementDialog
	AchievementDialog = 0;

	// Field : TutorialDialog
	TutorialDialog = 0;

	// Field : MissionStartDialog
	MissionStartDialog = 0;

	// Field : MissionZoneEnterDialog
	MissionZoneEnterDialog = 0;

	// Field : SubtitleDialog
	SubtitleDialog = 0;
	SubtitleDialog_hash = 0;

	// Field : MissionIntroDialog
	MissionIntroDialog = 0;

	// Field : EndScreenDialog
	EndScreenDialog = 0;

	// Field : MoneyDialog
	MoneyDialog = 0;

	// Field : MissionEndDialog
	MissionEndDialog = 0;

	// Field : WarningDialog
	WarningDialog = 0;

	// Field : WaveCompleteDialog
	WaveCompleteDialog = 0;

	// Field : WastedUnskippableDialog
	WastedUnskippableDialog = 0;

	// Field : WastedSkippableDialog
	WastedSkippableDialog = 0;

	// Field : MissionFailedDialog
	MissionFailedDialog = 0;

	// Field : RewardDialog
	RewardDialog = 0;

	// Field : RacestartCountdownDialog
	RacestartCountdownDialog = 0;

	// Field : RealEstateDialog
	RealEstateDialog = 0;

	// Field : CreditsDialog
	CreditsDialog = 0;

	// Field : VehicleDialog
	VehicleDialog = 0;

	// Field : Dialog_01
	Dialog_01 = 0;

	// Field : Counters
	Counters = 0;

	// Field : bydefault
	bydefault = 0;

	// Field : other
	other = 0;

}

void xmldata_example_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : AllDefaults
	stream->ReadAs(AllDefaults);

	// Field : ChangeSomeValue
	stream->ReadAs(ChangeSomeValue);

	// Field : OIDExample
	stream->ReadAs(OIDExample);

	// Field : OIDExampleCopyOf
	stream->ReadAs(OIDExampleCopyOf);

	// Field : UsingLists
	stream->ReadAs(UsingLists);

	// Field : Default
	stream->ReadAs(Default);

	// Field : MotoGyro
	stream->ReadAs(MotoGyro);

	// Field : Moto
	stream->ReadAs(Moto);

	// Field : StandardCar
	stream->ReadAs(StandardCar);

	// Field : StandardBoat
	stream->ReadAs(StandardBoat);

	// Field : Tank
	stream->ReadAs(Tank);

	// Field : ArmyHummer
	stream->ReadAs(ArmyHummer);

	// Field : PoliceCar
	stream->ReadAs(PoliceCar);

	// Field : PoliceCar2
	stream->ReadAs(PoliceCar2);

	// Field : PoliceCar3
	stream->ReadAs(PoliceCar3);

	// Field : PoliceCar4
	stream->ReadAs(PoliceCar4);

	// Field : Bike
	stream->ReadAs(Bike);

	// Field : FourSeatsFourDoorsLow
	stream->ReadAs(FourSeatsFourDoorsLow);

	// Field : OneSeat
	stream->ReadAs(OneSeat);

	// Field : OneSeatOneDoor
	stream->ReadAs(OneSeatOneDoor);

	// Field : TwoSeats
	stream->ReadAs(TwoSeats);

	// Field : OneSeatTwoDoorsLow
	stream->ReadAs(OneSeatTwoDoorsLow);

	// Field : OneSeatTwoDoorsHigh
	stream->ReadAs(OneSeatTwoDoorsHigh);

	// Field : TwoSeatsTwoDoorsLow
	stream->ReadAs(TwoSeatsTwoDoorsLow);

	// Field : TwoSeatsTwoDoorsHigh
	stream->ReadAs(TwoSeatsTwoDoorsHigh);

	// Field : FourSeatsFourDoorsHigh
	stream->ReadAs(FourSeatsFourDoorsHigh);

	// Field : TwoSeatsTwoDoorsTank
	stream->ReadAs(TwoSeatsTwoDoorsTank);

	// Field : TwoSeatsTwoDoorsSeaplane
	stream->ReadAs(TwoSeatsTwoDoorsSeaplane);

	// Field : TwoSeatsTwoDoorsHelicopter
	stream->ReadAs(TwoSeatsTwoDoorsHelicopter);

	// Field : OneSeatOneDoorsBus
	stream->ReadAs(OneSeatOneDoorsBus);

	// Field : ThreeSeatsOneTurret
	stream->ReadAs(ThreeSeatsOneTurret);

	// Field : OneSeatOneDoorsJetplane
	stream->ReadAs(OneSeatOneDoorsJetplane);

	// Field : OneSeatTwoDoorsJetplane
	stream->ReadAs(OneSeatTwoDoorsJetplane);

	// Field : TwoSeatNoDoorsBuggy
	stream->ReadAs(TwoSeatNoDoorsBuggy);

	// Field : OneSeatNoDoors
	stream->ReadAs(OneSeatNoDoors);

	// Field : LightAnim
	stream->ReadString(LightAnim);
	LightAnim_hash = static_cast<uint32>(glitch::core::hashString(LightAnim));

	// Field : HeavyAnim
	stream->ReadString(HeavyAnim);
	HeavyAnim_hash = static_cast<uint32>(glitch::core::hashString(HeavyAnim));

	// Field : ExplosiveAnim
	stream->ReadString(ExplosiveAnim);
	ExplosiveAnim_hash = static_cast<uint32>(glitch::core::hashString(ExplosiveAnim));

	// Field : SniperAnim
	stream->ReadString(SniperAnim);
	SniperAnim_hash = static_cast<uint32>(glitch::core::hashString(SniperAnim));

	// Field : ShotgunAnim
	stream->ReadString(ShotgunAnim);
	ShotgunAnim_hash = static_cast<uint32>(glitch::core::hashString(ShotgunAnim));

	// Field : Ground00
	stream->ReadAs(Ground00);

	// Field : Ground01
	stream->ReadAs(Ground01);

	// Field : PlayerBrawling
	stream->ReadAs(PlayerBrawling);

	// Field : PlayerShooting
	stream->ReadAs(PlayerShooting);

	// Field : NPC
	stream->ReadAs(NPC);

	// Field : CertificateSection
	stream->ReadAs(CertificateSection);

	// Field : SpecialSection
	stream->ReadAs(SpecialSection);

	// Field : RecommendedSection
	stream->ReadAs(RecommendedSection);

	// Field : ClanLockSection
	stream->ReadAs(ClanLockSection);

	// Field : BundleSection
	stream->ReadAs(BundleSection);

	// Field : CrateSection
	stream->ReadAs(CrateSection);

	// Field : ConsumableSection
	stream->ReadAs(ConsumableSection);

	// Field : PoorCarSection
	stream->ReadAs(PoorCarSection);

	// Field : LuxuryCarSection
	stream->ReadAs(LuxuryCarSection);

	// Field : HeavyCarSection
	stream->ReadAs(HeavyCarSection);

	// Field : ShootingCarSection
	stream->ReadAs(ShootingCarSection);

	// Field : PoorMotoSection
	stream->ReadAs(PoorMotoSection);

	// Field : BoatSection
	stream->ReadAs(BoatSection);

	// Field : AirplaneSection
	stream->ReadAs(AirplaneSection);

	// Field : LuxuryMotoSection
	stream->ReadAs(LuxuryMotoSection);

	// Field : PoorCarOneSeatSection
	stream->ReadAs(PoorCarOneSeatSection);

	// Field : LuxuryCarOneSeatSection
	stream->ReadAs(LuxuryCarOneSeatSection);

	// Field : HeavyCarOneSeatSection
	stream->ReadAs(HeavyCarOneSeatSection);

	// Field : ShootingCarOneSeatSection
	stream->ReadAs(ShootingCarOneSeatSection);

	// Field : HelicopterSection
	stream->ReadAs(HelicopterSection);

	// Field : UnarmedSection
	stream->ReadAs(UnarmedSection);

	// Field : MeleeSection
	stream->ReadAs(MeleeSection);

	// Field : PistolSection
	stream->ReadAs(PistolSection);

	// Field : SMGSection
	stream->ReadAs(SMGSection);

	// Field : ShotgunSection
	stream->ReadAs(ShotgunSection);

	// Field : AssaultSection
	stream->ReadAs(AssaultSection);

	// Field : SniperSection
	stream->ReadAs(SniperSection);

	// Field : HeavySection
	stream->ReadAs(HeavySection);

	// Field : ThrowableSection
	stream->ReadAs(ThrowableSection);

	// Field : HeadSection
	stream->ReadAs(HeadSection);

	// Field : TorsoSection
	stream->ReadAs(TorsoSection);

	// Field : LegsSection
	stream->ReadAs(LegsSection);

	// Field : ExoskeletonSection
	stream->ReadAs(ExoskeletonSection);

	// Field : Miscellaneous
	stream->ReadAs(Miscellaneous);

	// Field : CashPacksSection
	stream->ReadAs(CashPacksSection);

	// Field : KeyPacksSection
	stream->ReadAs(KeyPacksSection);

	// Field : SkillPointPacksSection
	stream->ReadAs(SkillPointPacksSection);

	// Field : VipSection
	stream->ReadAs(VipSection);

	// Field : ClanLogoSection
	stream->ReadAs(ClanLogoSection);

	// Field : Bonus_01
	stream->ReadAs(Bonus_01);

	// Field : BundleItem_Starter
	stream->ReadAs(BundleItem_Starter);

	// Field : BundleItem_Apocalypse
	stream->ReadAs(BundleItem_Apocalypse);

	// Field : BundleItem_VipBronze
	stream->ReadAs(BundleItem_VipBronze);

	// Field : BundleItem_VipSilver
	stream->ReadAs(BundleItem_VipSilver);

	// Field : BundleItem_VipGold
	stream->ReadAs(BundleItem_VipGold);

	// Field : BundleItem_Sniper
	stream->ReadAs(BundleItem_Sniper);

	// Field : BundleItem_StuntMuffin
	stream->ReadAs(BundleItem_StuntMuffin);

	// Field : BundleItem_TightCuffed
	stream->ReadAs(BundleItem_TightCuffed);

	// Field : BundleItem_SecretIdentity
	stream->ReadAs(BundleItem_SecretIdentity);

	// Field : BundleItem_FireBreather
	stream->ReadAs(BundleItem_FireBreather);

	// Field : BundleItem_Commando
	stream->ReadAs(BundleItem_Commando);

	// Field : BundleItem_FutureWar
	stream->ReadAs(BundleItem_FutureWar);

	// Field : BundleItem_SummerTime
	stream->ReadAs(BundleItem_SummerTime_f);

	// Field : BundleItem_KarateKiddo
	stream->ReadAs(BundleItem_KarateKiddo);

	// Field : BundleItem_Tennis
	stream->ReadAs(BundleItem_Tennis);

	// Field : BundleItem_Football
	stream->ReadAs(BundleItem_Football);

	// Field : BundleItem_Hockey
	stream->ReadAs(BundleItem_Hockey);

	// Field : CopBeige1
	stream->ReadAs(CopBeige1);

	// Field : CopBeige2
	stream->ReadAs(CopBeige2);

	// Field : CopBlue1
	stream->ReadAs(CopBlue1);

	// Field : CopBlue2
	stream->ReadAs(CopBlue2);

	// Field : Military
	stream->ReadAs(Military);

	// Field : CopPilot
	stream->ReadAs(CopPilot);

	// Field : MilitaryPilot
	stream->ReadAs(MilitaryPilot);

	// Field : Generic_Man2
	stream->ReadAs(Generic_Man2);

	// Field : Swimmer_Female
	stream->ReadAs(Swimmer_Female);

	// Field : Biker_Female
	stream->ReadAs(Biker_Female);

	// Field : Biker_Fat
	stream->ReadAs(Biker_Fat);

	// Field : Biker
	stream->ReadAs(Biker);

	// Field : ThugLow_Spawngroup
	stream->ReadAs(ThugLow_Spawngroup);

	// Field : ThugHeavy_Spawngroup
	stream->ReadAs(ThugHeavy_Spawngroup);

	// Field : SecurityMid
	stream->ReadAs(SecurityMid);

	// Field : SecurityHeavy
	stream->ReadAs(SecurityHeavy);

	// Field : MafiaLow_Spawngroup
	stream->ReadAs(MafiaLow_Spawngroup);

	// Field : MafiaMid_Spawngroup
	stream->ReadAs(MafiaMid_Spawngroup);

	// Field : MafiaHeavy_Spawngroup
	stream->ReadAs(MafiaHeavy_Spawngroup);

	// Field : MafiaLeader_Spawngroup
	stream->ReadAs(MafiaLeader_Spawngroup);

	// Field : LatinoLow_Spawngroup
	stream->ReadAs(LatinoLow_Spawngroup);

	// Field : LatinoMid_Spawngroup
	stream->ReadAs(LatinoMid_Spawngroup);

	// Field : LatinoHeavy_Spawngroup
	stream->ReadAs(LatinoHeavy_Spawngroup);

	// Field : GenericFemale
	stream->ReadAs(GenericFemale);

	// Field : BusinessMan1
	stream->ReadAs(BusinessMan1);

	// Field : BusinessMan2
	stream->ReadAs(BusinessMan2);

	// Field : BusinessWoman1
	stream->ReadAs(BusinessWoman1);

	// Field : BusinessWoman2
	stream->ReadAs(BusinessWoman2);

	// Field : Generic_Man1
	stream->ReadAs(Generic_Man1);

	// Field : Tourist
	stream->ReadAs(Tourist);

	// Field : TouristWoman
	stream->ReadAs(TouristWoman);

	// Field : HighValuableTarget_Suitcase
	stream->ReadAs(HighValuableTarget_Suitcase);

	// Field : HighValuableTarget_Clothing
	stream->ReadAs(HighValuableTarget_Clothing);

	// Field : HighValuableTarget_Weapon
	stream->ReadAs(HighValuableTarget_Weapon);

	// Field : HighValuableTarget_Vehicle
	stream->ReadAs(HighValuableTarget_Vehicle);

	// Field : Bouncer
	stream->ReadAs(Bouncer);

	// Field : Casino_Woman_idle
	stream->ReadAs(Casino_Woman_idle);

	// Field : GenericFemale_idle
	stream->ReadAs(GenericFemale_idle);

	// Field : Generic_Man1_idle
	stream->ReadAs(Generic_Man1_idle);

	// Field : Generic_Man2_idle
	stream->ReadAs(Generic_Man2_idle);

	// Field : HighClass_Man1
	stream->ReadAs(HighClass_Man1);

	// Field : HighClass_Man2
	stream->ReadAs(HighClass_Man2);

	// Field : HighClass_Pedestrian1
	stream->ReadString(HighClass_Pedestrian1);
	HighClass_Pedestrian1_hash = static_cast<uint32>(glitch::core::hashString(HighClass_Pedestrian1));

	// Field : HighClass_Pedestrian2
	stream->ReadString(HighClass_Pedestrian2);
	HighClass_Pedestrian2_hash = static_cast<uint32>(glitch::core::hashString(HighClass_Pedestrian2));

	// Field : Dealer
	stream->ReadAs(Dealer);

	// Field : Casino_Woman
	stream->ReadAs(Casino_Woman);

	// Field : ConstructionWorker
	stream->ReadString(ConstructionWorker);
	ConstructionWorker_hash = static_cast<uint32>(glitch::core::hashString(ConstructionWorker));

	// Field : HighClass_Man1Nightclub
	stream->ReadAs(HighClass_Man1Nightclub);

	// Field : HighClass_Man2Nightclub
	stream->ReadAs(HighClass_Man2Nightclub);

	// Field : HighClass_Pedestrian1Nightclub
	stream->ReadString(HighClass_Pedestrian1Nightclub);
	HighClass_Pedestrian1Nightclub_hash = static_cast<uint32>(glitch::core::hashString(HighClass_Pedestrian1Nightclub));

	// Field : HighClass_Pedestrian2Nightclub
	stream->ReadString(HighClass_Pedestrian2Nightclub);
	HighClass_Pedestrian2Nightclub_hash = static_cast<uint32>(glitch::core::hashString(HighClass_Pedestrian2Nightclub));

	// Field : Casino_WomanNightclub
	stream->ReadAs(Casino_WomanNightclub);

	// Field : GenericFemaleNightclub
	stream->ReadAs(GenericFemaleNightclub);

	// Field : Generic_Man1Nightclub
	stream->ReadAs(Generic_Man1Nightclub);

	// Field : Generic_Man2Nightclub
	stream->ReadAs(Generic_Man2Nightclub);

	// Field : HookerDancer
	stream->ReadAs(HookerDancer);

	// Field : Generic_Man2Dancer
	stream->ReadAs(Generic_Man2Dancer);

	// Field : GenericFemaleDancer
	stream->ReadAs(GenericFemaleDancer);

	// Field : HighClass_Man1Dancer
	stream->ReadAs(HighClass_Man1Dancer);

	// Field : HighClass_Man2Dancer
	stream->ReadAs(HighClass_Man2Dancer);

	// Field : Hooker_idle
	stream->ReadAs(Hooker_idle);

	// Field : StriperStanding_01
	stream->ReadString(StriperStanding_01);
	StriperStanding_01_hash = static_cast<uint32>(glitch::core::hashString(StriperStanding_01));

	// Field : StriperStanding_02
	stream->ReadString(StriperStanding_02);
	StriperStanding_02_hash = static_cast<uint32>(glitch::core::hashString(StriperStanding_02));

	// Field : StriperStanding_03
	stream->ReadString(StriperStanding_03);
	StriperStanding_03_hash = static_cast<uint32>(glitch::core::hashString(StriperStanding_03));

	// Field : HighClass_Man1_idle
	stream->ReadAs(HighClass_Man1_idle);

	// Field : HighClass_Pedestrian1_idle
	stream->ReadAs(HighClass_Pedestrian1_idle);

	// Field : HighClass_Pedestrian2_idle
	stream->ReadAs(HighClass_Pedestrian2_idle);

	// Field : BusinessMan1_idle
	stream->ReadAs(BusinessMan1_idle);

	// Field : BusinessMan2_idle
	stream->ReadAs(BusinessMan2_idle);

	// Field : Hooker
	stream->ReadAs(Hooker);

	// Field : Swimmer_Male
	stream->ReadAs(Swimmer_Male);

	// Field : MafiaLow
	stream->ReadAs(MafiaLow);

	// Field : MafiaMid
	stream->ReadAs(MafiaMid);

	// Field : MafiaLow_NoLoot
	stream->ReadAs(MafiaLow_NoLoot);

	// Field : MafiaMid_NoLoot
	stream->ReadAs(MafiaMid_NoLoot);

	// Field : ConstructionLow
	stream->ReadString(ConstructionLow);
	ConstructionLow_hash = static_cast<uint32>(glitch::core::hashString(ConstructionLow));

	// Field : ConstructionMid
	stream->ReadAs(ConstructionMid);

	// Field : ThugLowWithGun
	stream->ReadAs(ThugLowWithGun);

	// Field : ThugMid
	stream->ReadAs(ThugMid);

	// Field : ThugHeavyWithGun
	stream->ReadAs(ThugHeavyWithGun);

	// Field : LatinoLow
	stream->ReadAs(LatinoLow);

	// Field : LatinoMid
	stream->ReadAs(LatinoMid);

	// Field : LatinoHeavy
	stream->ReadAs(LatinoHeavy);

	// Field : CopRiot
	stream->ReadAs(CopRiot);

	// Field : Survi_MafiaMid
	stream->ReadAs(Survi_MafiaMid);

	// Field : copSuv
	stream->ReadAs(copSuv);

	// Field : Survi_MafiaLow
	stream->ReadAs(Survi_MafiaLow);

	// Field : Survi_MafiaHeavy
	stream->ReadAs(Survi_MafiaHeavy);

	// Field : carng_target_Dealer
	stream->ReadAs(carng_target_Dealer);

	// Field : ThugLowWithGun_Crng
	stream->ReadAs(ThugLowWithGun_Crng);

	// Field : ThugHeavyWithGun_Crng
	stream->ReadAs(ThugHeavyWithGun_Crng);

	// Field : JapanModern_Carnage_thugs
	stream->ReadAs(JapanModern_Carnage_thugs);

	// Field : JapanPoor_Carnage_thugs
	stream->ReadAs(JapanPoor_Carnage_thugs);

	// Field : MafiaHeavy
	stream->ReadAs(MafiaHeavy);

	// Field : MafiaLowFists
	stream->ReadAs(MafiaLowFists);

	// Field : UsaSedan_Goon_Carnage
	stream->ReadAs(UsaSedan_Goon_Carnage);

	// Field : suv_goon_Carnage
	stream->ReadAs(suv_goon_Carnage);

	// Field : UsaPoor_latinos_Carnage
	stream->ReadAs(UsaPoor_latinos_Carnage);

	// Field : PickupTruck_latino_Carnage
	stream->ReadAs(PickupTruck_latino_Carnage);

	// Field : BikerLow
	stream->ReadAs(BikerLow);

	// Field : BikerMid
	stream->ReadAs(BikerMid);

	// Field : GermanSedan
	stream->ReadAs(GermanSedan);

	// Field : bikeCustom_bikers_Carnage
	stream->ReadAs(bikeCustom_bikers_Carnage);

	// Field : JapanCompact
	stream->ReadAs(JapanCompact);

	// Field : JapanPoor
	stream->ReadAs(JapanPoor);

	// Field : JapanModern
	stream->ReadAs(JapanModern);

	// Field : UsaPoor
	stream->ReadAs(UsaPoor);

	// Field : UsaSedan
	stream->ReadAs(UsaSedan);

	// Field : MuscleRio
	stream->ReadAs(MuscleRio);

	// Field : theBeast
	stream->ReadAs(theBeast);

	// Field : GermanSuper
	stream->ReadAs(GermanSuper);

	// Field : Italiansuper
	stream->ReadAs(Italiansuper);

	// Field : Usasuper
	stream->ReadAs(Usasuper);

	// Field : JapanSuper
	stream->ReadAs(JapanSuper);

	// Field : PickupTruck
	stream->ReadAs(PickupTruck);

	// Field : UsaPoor_latinos
	stream->ReadAs(UsaPoor_latinos);

	// Field : hummer
	stream->ReadAs(hummer);

	// Field : suv
	stream->ReadAs(suv);

	// Field : suv_goon
	stream->ReadAs(suv_goon);

	// Field : monster_truck
	stream->ReadAs(monster_truck);

	// Field : Taxi
	stream->ReadAs(Taxi);

	// Field : CopCar
	stream->ReadAs(CopCar);

	// Field : CopPoor
	stream->ReadAs(CopPoor);

	// Field : militarySuv
	stream->ReadAs(militarySuv);

	// Field : bearcat
	stream->ReadAs(bearcat);

	// Field : tank
	stream->ReadAs(tank);

	// Field : Van
	stream->ReadAs(Van);

	// Field : Ambulance
	stream->ReadAs(Ambulance);

	// Field : Delivery
	stream->ReadAs(Delivery);

	// Field : Advertising
	stream->ReadAs(Advertising);

	// Field : bikeDirt
	stream->ReadAs(bikeDirt);

	// Field : bikeScooter
	stream->ReadAs(bikeScooter);

	// Field : bikeCustom
	stream->ReadAs(bikeCustom);

	// Field : bikeCustom_bikers
	stream->ReadAs(bikeCustom_bikers);

	// Field : bikeSport
	stream->ReadAs(bikeSport);

	// Field : Bike_monster
	stream->ReadAs(Bike_monster);

	// Field : Limousine
	stream->ReadAs(Limousine);

	// Field : Limousine_HighValue
	stream->ReadAs(Limousine_HighValue);

	// Field : JapanPoor_thugs
	stream->ReadAs(JapanPoor_thugs);

	// Field : JapanModern_tiers2
	stream->ReadAs(JapanModern_tiers2);

	// Field : GermanSuper_tiers2
	stream->ReadAs(GermanSuper_tiers2);

	// Field : Usasuper_tiers2
	stream->ReadAs(Usasuper_tiers2);

	// Field : theBeast_tiers2
	stream->ReadAs(theBeast_tiers2);

	// Field : Seadoo
	stream->ReadAs(Seadoo);

	// Field : Speedboat_mini
	stream->ReadAs(Speedboat_mini_f);

	// Field : Speedboat_yacht
	stream->ReadAs(Speedboat_yacht_f);

	// Field : Speedboat_police
	stream->ReadAs(Speedboat_police_f);

	// Field : HelicopterNews
	stream->ReadAs(HelicopterNews);

	// Field : Seaplane
	stream->ReadAs(Seaplane);

	// Field : jetPrivate
	stream->ReadAs(jetPrivate);

	// Field : HelicopterApache
	stream->ReadAs(HelicopterApache);

	// Field : CopPoor_aggro
	stream->ReadAs(CopPoor_aggro);

	// Field : CopCar_aggro
	stream->ReadAs(CopCar_aggro);

	// Field : copSuv_aggro
	stream->ReadAs(copSuv_aggro);

	// Field : HelicopterPolice
	stream->ReadAs(HelicopterPolice);

	// Field : BikerHeavy
	stream->ReadAs(BikerHeavy);

	// Field : C3M05_MafiaLow_Spawngroup
	stream->ReadAs(C3M05_MafiaLow_Spawngroup);

	// Field : C3M05_MafiaMid_Spawngroup
	stream->ReadAs(C3M05_MafiaMid_Spawngroup);

	// Field : C3M05_MafiaHeavy_Spawngroup
	stream->ReadAs(C3M05_MafiaHeavy_Spawngroup);

	// Field : c3m05_Cop
	stream->ReadAs(c3m05_Cop);

	// Field : U3M07_Alien_Spawngroup
	stream->ReadAs(U3M07_Alien_Spawngroup);

	// Field : World_Alien_Spawngroup
	stream->ReadAs(World_Alien_Spawngroup);

	// Field : World_Alien_Spawngroup_Carnage
	stream->ReadAs(World_Alien_Spawngroup_Carnage);

	// Field : CopBlue1_Aggressive
	stream->ReadAs(CopBlue1_Aggressive);

	// Field : CopBlue2_Aggressive
	stream->ReadAs(CopBlue2_Aggressive);

	// Field : Tourist_Fleeing
	stream->ReadAs(Tourist_Fleeing);

	// Field : TouristWoman_Fleeing
	stream->ReadAs(TouristWoman_Fleeing);

	// Field : BusinessWoman1_Fleeing
	stream->ReadAs(BusinessWoman1_Fleeing);

	// Field : BusinessWoman2_Fleeing
	stream->ReadAs(BusinessWoman2_Fleeing);

	// Field : Hooker_Fleeing
	stream->ReadAs(Hooker_Fleeing);

	// Field : GenericFemale_Fleeing
	stream->ReadAs(GenericFemale_Fleeing);

	// Field : Generic_Man1_Fleeing
	stream->ReadAs(Generic_Man1_Fleeing);

	// Field : Generic_Man2_Fleeing
	stream->ReadAs(Generic_Man2_Fleeing);

	// Field : Devil_Henchman
	stream->ReadAs(Devil_Henchman);

	// Field : GangWarPlayer
	stream->ReadAs(GangWarPlayer);

	// Field : SkillHealth
	stream->ReadAs(SkillHealth);

	// Field : SkillStrength
	stream->ReadString(SkillStrength);
	SkillStrength_hash = static_cast<uint32>(glitch::core::hashString(SkillStrength));

	// Field : SkillDriving
	stream->ReadAs(SkillDriving);

	// Field : SkillShooting
	stream->ReadAs(SkillShooting);

	// Field : WaterBuffer
	stream->ReadAs(WaterBuffer);

	// Field : ColorTargetA
	stream->ReadAs(ColorTargetA);

	// Field : ColorTargetB
	stream->ReadAs(ColorTargetB);

	// Field : DepthTarget_l1
	stream->ReadAs(DepthTarget_l1);

	// Field : DepthTargetA_l234
	stream->ReadAs(DepthTargetA_l234);

	// Field : DepthTargetB_l234
	stream->ReadAs(DepthTargetB_l234);

	// Field : bloorX_l12
	stream->ReadAs(bloorX_l12);

	// Field : bloorY_l12
	stream->ReadAs(bloorY_l12);

	// Field : bloorX_l34
	stream->ReadAs(bloorX_l34);

	// Field : bloorY_l34
	stream->ReadAs(bloorY_l34);

	// Field : ShadowMap
	stream->ReadAs(ShadowMap);

	// Field : FramebufferA
	stream->ReadAs(FramebufferA);

	// Field : FramebufferB
	stream->ReadAs(FramebufferB);

	// Field : BloorX_l12
	stream->ReadAs(BloorX_l12);

	// Field : BloorY_l12
	stream->ReadAs(BloorY_l12);

	// Field : BloorX_l34
	stream->ReadAs(BloorX_l34);

	// Field : BloorY_l34
	stream->ReadAs(BloorY_l34);

	// Field : ShadowBuffer
	stream->ReadAs(ShadowBuffer);

	// Field : level1
	stream->ReadAs(level1);

	// Field : level2
	stream->ReadAs(level2);

	// Field : level3
	stream->ReadAs(level3);

	// Field : OutsideDefault
	stream->ReadAs(OutsideDefault);

	// Field : InteriorDefault
	stream->ReadAs(InteriorDefault);

	// Field : InteriorCasino
	stream->ReadAs(InteriorCasino);

	// Field : InteriorBank
	stream->ReadAs(InteriorBank);

	// Field : InteriorNightClub
	stream->ReadAs(InteriorNightClub);

	// Field : InteriorCornerStore
	stream->ReadAs(InteriorCornerStore);

	// Field : InteriorDiner
	stream->ReadAs(InteriorDiner);

	// Field : InteriorVault
	stream->ReadAs(InteriorVault);

	// Field : InteriorSecret
	stream->ReadAs(InteriorSecret);

	// Field : InteriorMMA
	stream->ReadAs(InteriorMMA);

	// Field : InteriorFightPit
	stream->ReadAs(InteriorFightPit);

	// Field : MenuDefault
	stream->ReadAs(MenuDefault);

	// Field : MenuVehicle
	stream->ReadAs(MenuVehicle);

	// Field : Menu_pawnshop
	stream->ReadAs(Menu_pawnshop);

	// Field : Race_TimeTrial_Land
	stream->ReadAs(Race_TimeTrial_Land_f);

	// Field : Race_TimeAttack_Land
	stream->ReadAs(Race_TimeAttack_Land_f);

	// Field : Race_TimeAttack_Arena
	stream->ReadAs(Race_TimeAttack_Arena_f);

	// Field : Race_TimeAttack_Air
	stream->ReadAs(Race_TimeAttack_Air_f);

	// Field : Race_TimeAttack_C2M13
	stream->ReadAs(Race_TimeAttack_C2M13_f);

	// Field : PhysicsWorldSetting_01
	stream->ReadAs(PhysicsWorldSetting_01);

	// Field : i
	stream->ReadAs(i);

	// Field : b
	stream->ReadAs(b);

	// Field : g
	stream->ReadAs(g);

	// Field : v
	stream->ReadAs(v);

	// Field : airport_phys
	stream->ReadAs(airport_phys);

	// Field : downtown_phys
	stream->ReadAs(downtown_phys);

	// Field : ocean_phys
	stream->ReadAs(ocean_phys);

	// Field : interior_dlc_secretbase_00_phys
	stream->ReadAs(interior_dlc_secretbase_00_phys);

	// Field : poor_residential_phys
	stream->ReadAs(poor_residential_phys);

	// Field : rich_residential_phys
	stream->ReadAs(rich_residential_phys);

	// Field : strip00_phys
	stream->ReadString(strip00_phys);
	strip00_phys_hash = static_cast<uint32>(glitch::core::hashString(strip00_phys));

	// Field : strip01_phys
	stream->ReadString(strip01_phys);
	strip01_phys_hash = static_cast<uint32>(glitch::core::hashString(strip01_phys));

	// Field : strip02_phys
	stream->ReadString(strip02_phys);
	strip02_phys_hash = static_cast<uint32>(glitch::core::hashString(strip02_phys));

	// Field : strip03_phys
	stream->ReadString(strip03_phys);
	strip03_phys_hash = static_cast<uint32>(glitch::core::hashString(strip03_phys));

	// Field : interior_bank_phys
	stream->ReadAs(interior_bank_phys);

	// Field : interior_casino_phys
	stream->ReadAs(interior_casino_phys);

	// Field : interior_stripclub_phys
	stream->ReadString(interior_stripclub_phys);
	interior_stripclub_phys_hash = static_cast<uint32>(glitch::core::hashString(interior_stripclub_phys));

	// Field : interior_diner_phys
	stream->ReadAs(interior_diner_phys);

	// Field : interior_underground_fightpit_phys
	stream->ReadAs(interior_underground_fightpit_phys);

	// Field : interior_cornerstore_phys
	stream->ReadAs(interior_cornerstore_phys);

	// Field : interior_vault01_phys
	stream->ReadAs(interior_vault01_phys);

	// Field : High
	stream->ReadAs(High);

	// Field : Medium
	stream->ReadAs(Medium);

	// Field : Low
	stream->ReadAs(Low);

	// Field : BareHandsParam
	stream->ReadAs(BareHandsParam);

	// Field : ParachuteParam
	stream->ReadAs(ParachuteParam);

	// Field : SkydivingParam
	stream->ReadAs(SkydivingParam);

	// Field : FistsParam
	stream->ReadAs(FistsParam);

	// Field : OneHandedParam
	stream->ReadAs(OneHandedParam);

	// Field : DualParam
	stream->ReadAs(DualParam);

	// Field : TwoHandedParam
	stream->ReadAs(TwoHandedParam);

	// Field : MotoParam
	stream->ReadAs(MotoParam);

	// Field : MotoRacerParam
	stream->ReadAs(MotoRacerParam);

	// Field : MotoChopperParam
	stream->ReadAs(MotoChopperParam);

	// Field : MotoScooterParam
	stream->ReadAs(MotoScooterParam);

	// Field : MotoATVParam
	stream->ReadAs(MotoATVParam);

	// Field : MotoSeadooParam
	stream->ReadAs(MotoSeadooParam);

	// Field : MotoDirtParam
	stream->ReadAs(MotoDirtParam);

	// Field : JetpackParam
	stream->ReadAs(JetpackParam);

	// Field : CarParam
	stream->ReadAs(CarParam);

	// Field : CarIndyParam
	stream->ReadAs(CarIndyParam);

	// Field : MeleeWeaponParam
	stream->ReadAs(MeleeWeaponParam);

	// Field : MotoJetParam
	stream->ReadAs(MotoJetParam);

	// Field : NewYearHat
	stream->ReadAs(NewYearHat);

	// Field : MenuMapTweaker
	stream->ReadAs(MenuMapTweaker);

	// Field : MinimapTweaker
	stream->ReadAs(MinimapTweaker);

	// Field : HudTweaker_01
	stream->ReadAs(HudTweaker_01);

	// Field : Tweaker01
	stream->ReadAs(Tweaker01);

	// Field : Default_Settings
	stream->ReadAs(Default_Settings);

	// Field : Clothing_Settings
	stream->ReadAs(Clothing_Settings);

	// Field : Weapon_Settings
	stream->ReadAs(Weapon_Settings);

	// Field : Vehicle_Settings
	stream->ReadAs(Vehicle_Settings);

	// Field : Ability_Settings
	stream->ReadAs(Ability_Settings);

	// Field : Crate_Settings
	stream->ReadAs(Crate_Settings);

	// Field : Consumable_Settings
	stream->ReadAs(Consumable_Settings);

	// Field : Special_Settings
	stream->ReadAs(Special_Settings);

	// Field : Pawnshop_Settings
	stream->ReadAs(Pawnshop_Settings);

	// Field : AccelerometerPedals
	stream->ReadAs(AccelerometerPedals_f);

	// Field : AccelerometerStepSlider
	stream->ReadAs(AccelerometerStepSlider);

	// Field : ArrowsPedals
	stream->ReadAs(ArrowsPedals);

	// Field : ArrowsSteps
	stream->ReadAs(ArrowsSteps);

	// Field : SliderSteps
	stream->ReadAs(SliderSteps);

	// Field : SliderPedals
	stream->ReadAs(SliderPedals);

	// Field : MotoAccelerometerPedals
	stream->ReadAs(MotoAccelerometerPedals_f);

	// Field : MotoAccelerometerStepSlider
	stream->ReadAs(MotoAccelerometerStepSlider);

	// Field : MotoAnalogPedals
	stream->ReadAs(MotoAnalogPedals);

	// Field : MotoAnalogStepSlider
	stream->ReadAs(MotoAnalogStepSlider);

	// Field : HelicopterJetpackVStickArrows
	stream->ReadAs(HelicopterJetpackVStickArrows);

	// Field : AirplaneVStickSlider
	stream->ReadAs(AirplaneVStickSlider);

	// Field : OnFoot
	stream->ReadAs(OnFoot);

	// Field : VTOLJetInHelicopterMode
	stream->ReadAs(VTOLJetInHelicopterMode);

	// Field : VTOLJetInPlaneMode
	stream->ReadAs(VTOLJetInPlaneMode);

	// Field : InGameMenu
	stream->ReadAs(InGameMenu);

	// Field : Stock
	stream->ReadAs(Stock);

	// Field : FriendProfileMenu
	stream->ReadString(FriendProfileMenu);
	FriendProfileMenu_hash = static_cast<uint32>(glitch::core::hashString(FriendProfileMenu));

	// Field : Leaderboards
	stream->ReadAs(Leaderboards);

	// Field : Social
	stream->ReadAs(Social);

	// Field : CallHelp
	stream->ReadAs(CallHelp);

	// Field : Abilities
	stream->ReadAs(Abilities);

	// Field : Map
	stream->ReadAs(Map);

	// Field : MapMission
	stream->ReadAs(MapMission);

	// Field : MapDistrict
	stream->ReadString(MapDistrict);
	MapDistrict_hash = static_cast<uint32>(glitch::core::hashString(MapDistrict));

	// Field : MapProperty
	stream->ReadAs(MapProperty);

	// Field : PawnShop
	stream->ReadAs(PawnShop);

	// Field : BlackJack
	stream->ReadAs(BlackJack);

	// Field : SlotMachine
	stream->ReadAs(SlotMachine);

	// Field : VideoPoker
	stream->ReadAs(VideoPoker);

	// Field : TutorialShop
	stream->ReadAs(TutorialShop);

	// Field : TutorialSlotmachine
	stream->ReadAs(TutorialSlotmachine);

	// Field : TutorialBlackjack
	stream->ReadAs(TutorialBlackjack);

	// Field : TutorialVideopoker
	stream->ReadAs(TutorialVideopoker);

	// Field : TutorialSkills
	stream->ReadAs(TutorialSkills);

	// Field : TutorialGacha
	stream->ReadAs(TutorialGacha);

	// Field : TutorialRealEstate
	stream->ReadAs(TutorialRealEstate);

	// Field : TutorialPawnShop
	stream->ReadAs(TutorialPawnShop);

	// Field : SocialEvents
	stream->ReadAs(SocialEvents);

	// Field : VIPStatus
	stream->ReadAs(VIPStatus);

	// Field : GiftPreview
	stream->ReadAs(GiftPreview);

	// Field : City
	stream->ReadAs(City);

	// Field : Casino
	stream->ReadAs(Casino);

	// Field : Spartan
	stream->ReadAs(Spartan);

	// Field : Bank
	stream->ReadAs(Bank);

	// Field : NightClub
	stream->ReadAs(NightClub);

	// Field : StripClub
	stream->ReadString(StripClub);
	StripClub_hash = static_cast<uint32>(glitch::core::hashString(StripClub));

	// Field : CornerStore
	stream->ReadAs(CornerStore);

	// Field : Diner
	stream->ReadAs(Diner);

	// Field : FightPit
	stream->ReadAs(FightPit);

	// Field : MMA
	stream->ReadAs(MMA);

	// Field : MotoCross1
	stream->ReadAs(MotoCross1);

	// Field : MotoCross2
	stream->ReadAs(MotoCross2);

	// Field : MotoCross3
	stream->ReadAs(MotoCross3);

	// Field : MotoCross4
	stream->ReadAs(MotoCross4);

	// Field : Vault
	stream->ReadAs(Vault);

	// Field : SecretBase00
	stream->ReadAs(SecretBase00);

	// Field : SecretBase01
	stream->ReadAs(SecretBase01);

	// Field : SecretBase02
	stream->ReadAs(SecretBase02);

	// Field : VehicleThief
	stream->ReadAs(VehicleThief);

	// Field : Hospital
	stream->ReadAs(Hospital);

	// Field : Parking
	stream->ReadAs(Parking);

	// Field : SocialEvent
	stream->ReadAs(SocialEvent);

	// Field : CarShader
	stream->ReadAs(CarShader);

	// Field : PostEffects
	stream->ReadAs(PostEffects_f);

	// Field : WaterEffects
	stream->ReadAs(WaterEffects);

	// Field : RoadEffects
	stream->ReadAs(RoadEffects);

	// Field : GlowEffects
	stream->ReadAs(GlowEffects);

	// Field : ShadowEffects
	stream->ReadAs(ShadowEffects);

	// Field : MultilightWithScaleOffset
	stream->ReadAs(MultilightWithScaleOffset_f);

	// Field : CustomEffects
	stream->ReadAs(CustomEffects);

	// Field : Character
	stream->ReadAs(Character);

	// Field : SkyMaterial
	stream->ReadAs(SkyMaterial);

	// Field : FresnelAndPHBeckmann
	stream->ReadAs(FresnelAndPHBeckmann);

	// Field : SkinSpecularParameters
	stream->ReadAs(SkinSpecularParameters);

	// Field : ReflectionFalloffTexture
	stream->ReadString(ReflectionFalloffTexture);
	ReflectionFalloffTexture_hash = static_cast<uint32>(glitch::core::hashString(ReflectionFalloffTexture));

	// Field : GlassReflectionFalloffTexture
	stream->ReadString(GlassReflectionFalloffTexture);
	GlassReflectionFalloffTexture_hash = static_cast<uint32>(glitch::core::hashString(GlassReflectionFalloffTexture));

	// Field : FlakesTexture
	stream->ReadString(FlakesTexture);
	FlakesTexture_hash = static_cast<uint32>(glitch::core::hashString(FlakesTexture));

	// Field : WaterNormal
	stream->ReadAs(WaterNormal);

	// Field : WaterNormal1
	stream->ReadAs(WaterNormal1);

	// Field : WaterNormal2
	stream->ReadAs(WaterNormal2);

	// Field : DetailMap
	stream->ReadAs(DetailMap);

	// Field : LodBuildings0
	stream->ReadAs(LodBuildings0);

	// Field : LodWeapons0
	stream->ReadAs(LodWeapons0);

	// Field : LodBuildings1
	stream->ReadAs(LodBuildings1);

	// Field : LodCar0
	stream->ReadAs(LodCar0);

	// Field : LodDefault0
	stream->ReadAs(LodDefault0);

	// Field : LodFavela0
	stream->ReadAs(LodFavela0);

	// Field : LodNone
	stream->ReadAs(LodNone);

	// Field : LodProps0
	stream->ReadAs(LodProps0);

	// Field : LodProps1
	stream->ReadAs(LodProps1);

	// Field : LodProps2
	stream->ReadAs(LodProps2);

	// Field : LodProps3
	stream->ReadAs(LodProps3);

	// Field : LodGameObjects0
	stream->ReadAs(LodGameObjects0);

	// Field : LodAdditive0
	stream->ReadAs(LodAdditive0);

	// Field : LodTrees0
	stream->ReadAs(LodTrees0);

	// Field : LodTrees1
	stream->ReadAs(LodTrees1);

	// Field : Lodchar0
	stream->ReadAs(Lodchar0);

	// Field : Lodvehicle0
	stream->ReadAs(Lodvehicle0);

	// Field : Lodvehicle1
	stream->ReadAs(Lodvehicle1);

	// Field : LodVFX0
	stream->ReadString(LodVFX0);
	LodVFX0_hash = static_cast<uint32>(glitch::core::hashString(LodVFX0));

	// Field : LodVFXAir
	stream->ReadString(LodVFXAir);
	LodVFXAir_hash = static_cast<uint32>(glitch::core::hashString(LodVFXAir));

	// Field : LodVFXVisualMarker
	stream->ReadString(LodVFXVisualMarker);
	LodVFXVisualMarker_hash = static_cast<uint32>(glitch::core::hashString(LodVFXVisualMarker));

	// Field : SpecialLevel
	stream->ReadAs(SpecialLevel);

	// Field : Off
	stream->ReadAs(Off);

	// Field : KillNPCMain
	stream->ReadAs(KillNPCMain);

	// Field : KillNPCSub
	stream->ReadAs(KillNPCSub);

	// Field : ProtectMain
	stream->ReadAs(ProtectMain_f);

	// Field : ProtectSub
	stream->ReadAs(ProtectSub_f);

	// Field : MoveMain
	stream->ReadAs(MoveMain);

	// Field : MoveSub
	stream->ReadAs(MoveSub);

	// Field : StealCar
	stream->ReadAs(StealCar);

	// Field : Waypoint
	stream->ReadAs(Waypoint);

	// Field : GetMain
	stream->ReadAs(GetMain);

	// Field : CopOnFoot
	stream->ReadAs(CopOnFoot);

	// Field : NPCFightMain
	stream->ReadAs(NPCFightMain);

	// Field : ParkingLot
	stream->ReadAs(ParkingLot);

	// Field : TargetName
	stream->ReadString(TargetName);
	TargetName_hash = static_cast<uint32>(glitch::core::hashString(TargetName));

	// Field : TankTurret
	stream->ReadAs(TankTurret);

	// Field : HeliApacheTurret
	stream->ReadAs(HeliApacheTurret);

	// Field : JetTurret
	stream->ReadAs(JetTurret);

	// Field : HeliPoliceTurret
	stream->ReadAs(HeliPoliceTurret);

	// Field : BoatPoliceTurret
	stream->ReadAs(BoatPoliceTurret);

	// Field : HeliMissiles
	stream->ReadAs(HeliMissiles);

	// Field : VTOLMissiles
	stream->ReadAs(VTOLMissiles);

	// Field : BuggyTurret
	stream->ReadAs(BuggyTurret);

	// Field : RatRodTurret
	stream->ReadAs(RatRodTurret);

	// Field : TruckFlame
	stream->ReadAs(TruckFlame);

	// Field : LazerTurret
	stream->ReadAs(LazerTurret);

	// Field : HoverTankTurret
	stream->ReadAs(HoverTankTurret);

	// Field : DropShipTurret
	stream->ReadAs(DropShipTurret);

	// Field : ZombieBoatTurret
	stream->ReadAs(ZombieBoatTurret);

	// Field : ArmageddonPoliceTurret
	stream->ReadAs(ArmageddonPoliceTurret);

	// Field : MC4_car_Turret
	stream->ReadAs(MC4_car_Turret);

	// Field : ArrowWeapon
	stream->ReadAs(ArrowWeapon);

	// Field : BFG
	stream->ReadAs(BFG);

	// Field : WantedLevelZero
	stream->ReadAs(WantedLevelZero);

	// Field : WantedLevelOne
	stream->ReadAs(WantedLevelOne);

	// Field : WantedLevelTwo
	stream->ReadAs(WantedLevelTwo);

	// Field : WantedLevelThree
	stream->ReadAs(WantedLevelThree);

	// Field : WantedLevelFour
	stream->ReadAs(WantedLevelFour);

	// Field : WantedLevelFive
	stream->ReadAs(WantedLevelFive);

	// Field : JackedCivCar
	stream->ReadAs(JackedCivCar);

	// Field : JackedCopCar
	stream->ReadAs(JackedCopCar);

	// Field : HitCiv
	stream->ReadAs(HitCiv);

	// Field : HitCop
	stream->ReadAs(HitCop);

	// Field : HitCivCar
	stream->ReadAs(HitCivCar);

	// Field : HitCopCar
	stream->ReadAs(HitCopCar);

	// Field : DestroyedCivCar
	stream->ReadString(DestroyedCivCar);
	DestroyedCivCar_hash = static_cast<uint32>(glitch::core::hashString(DestroyedCivCar));

	// Field : DestroyedCopCar
	stream->ReadString(DestroyedCopCar);
	DestroyedCopCar_hash = static_cast<uint32>(glitch::core::hashString(DestroyedCopCar));

	// Field : AimedAtCiv
	stream->ReadAs(AimedAtCiv);

	// Field : AimedAtCop
	stream->ReadAs(AimedAtCop);

	// Field : KilledCiv
	stream->ReadAs(KilledCiv);

	// Field : KilledCop
	stream->ReadAs(KilledCop);

	// Field : FiredGun
	stream->ReadAs(FiredGun);

	// Field : StartedFire
	stream->ReadAs(StartedFire);

	// Field : ObstructedCop
	stream->ReadString(ObstructedCop);
	ObstructedCop_hash = static_cast<uint32>(glitch::core::hashString(ObstructedCop));

	// Field : Tresspassing
	stream->ReadAs(Tresspassing);

	// Field : FrontLeftCrouch
	stream->ReadAs(FrontLeftCrouch);

	// Field : FrontRightCrouch
	stream->ReadAs(FrontRightCrouch);

	// Field : BackLeftCrouch
	stream->ReadAs(BackLeftCrouch);

	// Field : BackRightCrouch
	stream->ReadAs(BackRightCrouch);

	// Field : FrontCrouch
	stream->ReadAs(FrontCrouch);

	// Field : BackCrouch
	stream->ReadAs(BackCrouch);

	// Field : TempName_StripClub
	stream->ReadString(TempName_StripClub);
	TempName_StripClub_hash = static_cast<uint32>(glitch::core::hashString(TempName_StripClub));

	// Field : Eman
	stream->ReadAs(Eman);

	// Field : Boat
	stream->ReadAs(Boat);

	// Field : BikeSport
	stream->ReadAs(BikeSport);

	// Field : Race
	stream->ReadAs(Race);

	// Field : BikeSportRace
	stream->ReadAs(BikeSportRace);

	// Field : Airplane
	stream->ReadAs(Airplane);

	// Field : Helicopter
	stream->ReadAs(Helicopter);

	// Field : HelicopterScriptedApache
	stream->ReadAs(HelicopterScriptedApache);

	// Field : Jetpack
	stream->ReadAs(Jetpack);

	// Field : Vehicle
	stream->ReadAs(Vehicle);

	// Field : ParkedVehicle
	stream->ReadAs(ParkedVehicle);

	// Field : Interior
	stream->ReadAs(Interior);

	// Field : OnFootNPC
	stream->ReadAs(OnFootNPC);

	// Field : OnFootVehicle
	stream->ReadAs(OnFootVehicle);

	// Field : OnFootParkedVehicle
	stream->ReadAs(OnFootParkedVehicle);

	// Field : CopNPC
	stream->ReadAs(CopNPC);

	// Field : OnFootCopNPC
	stream->ReadAs(OnFootCopNPC);

	// Field : OnFootCopCar
	stream->ReadAs(OnFootCopCar);

	// Field : RoadBlock
	stream->ReadAs(RoadBlock);

	// Field : OnFootInterior
	stream->ReadAs(OnFootInterior);

	// Field : OnFootCopInterior
	stream->ReadAs(OnFootCopInterior);

	// Field : OnFootNightclub
	stream->ReadAs(OnFootNightclub);

	// Field : OnFootInteriorSmall
	stream->ReadAs(OnFootInteriorSmall);

	// Field : OnFootCopInteriorSmall
	stream->ReadAs(OnFootCopInteriorSmall);

	// Field : OnFootRoadBlock
	stream->ReadAs(OnFootRoadBlock);

	// Field : HighValueTarget
	stream->ReadAs(HighValueTarget);

	// Field : BearCat
	stream->ReadAs(BearCat);

	// Field : JetArmy
	stream->ReadAs(JetArmy);

	// Field : CarngGuy
	stream->ReadAs(CarngGuy);

	// Field : CarngGirl
	stream->ReadAs(CarngGirl);

	// Field : Normal
	stream->ReadAs(Normal);

	// Field : APLevel1
	stream->ReadAs(APLevel1);

	// Field : APLevel2
	stream->ReadAs(APLevel2);

	// Field : APLevel3
	stream->ReadAs(APLevel3);

	// Field : APLevel4
	stream->ReadAs(APLevel4);

	// Field : APLevel5
	stream->ReadAs(APLevel5);

	// Field : APLevel6
	stream->ReadAs(APLevel6);

	// Field : KillAlly
	stream->ReadAs(KillAlly);

	// Field : KillCivilian
	stream->ReadAs(KillCivilian);

	// Field : KillPolice
	stream->ReadAs(KillPolice);

	// Field : KillGangMember
	stream->ReadAs(KillGangMember);

	// Field : KillAlien
	stream->ReadAs(KillAlien);

	// Field : KillMIB
	stream->ReadAs(KillMIB);

	// Field : DestroyCar
	stream->ReadString(DestroyCar);
	DestroyCar_hash = static_cast<uint32>(glitch::core::hashString(DestroyCar));

	// Field : DestroyMoto
	stream->ReadString(DestroyMoto);
	DestroyMoto_hash = static_cast<uint32>(glitch::core::hashString(DestroyMoto));

	// Field : DestroyBoat
	stream->ReadString(DestroyBoat);
	DestroyBoat_hash = static_cast<uint32>(glitch::core::hashString(DestroyBoat));

	// Field : DestroyHelicopter
	stream->ReadString(DestroyHelicopter);
	DestroyHelicopter_hash = static_cast<uint32>(glitch::core::hashString(DestroyHelicopter));

	// Field : DestroyAirplane
	stream->ReadString(DestroyAirplane);
	DestroyAirplane_hash = static_cast<uint32>(glitch::core::hashString(DestroyAirplane));

	// Field : PurchaseClothing
	stream->ReadAs(PurchaseClothing);

	// Field : PurchaseWeapon
	stream->ReadAs(PurchaseWeapon);

	// Field : PurchaseVehicle
	stream->ReadAs(PurchaseVehicle);

	// Field : OrderVehicle
	stream->ReadAs(OrderVehicle);

	// Field : PurchaseConsumable
	stream->ReadAs(PurchaseConsumable);

	// Field : PurchaseSuitcase
	stream->ReadAs(PurchaseSuitcase);

	// Field : OpenSuitcase
	stream->ReadAs(OpenSuitcase);

	// Field : HijackCar
	stream->ReadAs(HijackCar);

	// Field : HijackMoto
	stream->ReadAs(HijackMoto);

	// Field : HijackBoat
	stream->ReadAs(HijackBoat);

	// Field : HijackHelicopter
	stream->ReadAs(HijackHelicopter);

	// Field : HijackAirplane
	stream->ReadAs(HijackAirplane);

	// Field : CarPowerslide
	stream->ReadAs(CarPowerslide);

	// Field : CarAirJump
	stream->ReadAs(CarAirJump);

	// Field : MotoWheelie
	stream->ReadAs(MotoWheelie);

	// Field : MotoStoppie
	stream->ReadAs(MotoStoppie);

	// Field : ParachuteOpen
	stream->ReadAs(ParachuteOpen);

	// Field : PropertyPurchased
	stream->ReadAs(PropertyPurchased);

	// Field : DistrictPurchased
	stream->ReadString(DistrictPurchased);
	DistrictPurchased_hash = static_cast<uint32>(glitch::core::hashString(DistrictPurchased));

	// Field : Trophy1Completed
	stream->ReadAs(Trophy1Completed);

	// Field : Trophy2Completed
	stream->ReadAs(Trophy2Completed);

	// Field : Trophy3Completed
	stream->ReadAs(Trophy3Completed);

	// Field : Tattoo1Completed
	stream->ReadAs(Tattoo1Completed);

	// Field : Tattoo2Completed
	stream->ReadAs(Tattoo2Completed);

	// Field : Tattoo3Completed
	stream->ReadAs(Tattoo3Completed);

	// Field : DefaultRespawnPoint
	stream->ReadAs(DefaultRespawnPoint);

	// Field : Regular
	stream->ReadAs(Regular);

	// Field : Leasure
	stream->ReadAs(Leasure);

	// Field : Business
	stream->ReadAs(Business);

	// Field : OldTown
	stream->ReadAs(OldTown);

	// Field : WestDesert
	stream->ReadAs(WestDesert);

	// Field : EastDesert
	stream->ReadAs(EastDesert);

	// Field : Leisure_Sports
	stream->ReadAs(Leisure_Sports);

	// Field : Leisure_TaxFree
	stream->ReadAs(Leisure_TaxFree);

	// Field : Leisure_Slots
	stream->ReadAs(Leisure_Slots);

	// Field : Leisure_Escorts
	stream->ReadAs(Leisure_Escorts);

	// Field : Business_Drugs
	stream->ReadAs(Business_Drugs);

	// Field : Business_ChopShop
	stream->ReadAs(Business_ChopShop);

	// Field : Business_AdultFilms
	stream->ReadAs(Business_AdultFilms);

	// Field : Business_Alcohol
	stream->ReadAs(Business_Alcohol);

	// Field : OldTown_Counterfeits
	stream->ReadAs(OldTown_Counterfeits);

	// Field : OldTown_Candylab
	stream->ReadAs(OldTown_Candylab);

	// Field : OldTown_Weapons
	stream->ReadAs(OldTown_Weapons);

	// Field : OldTown_Storage
	stream->ReadAs(OldTown_Storage);

	// Field : WestDesert_Candylab
	stream->ReadAs(WestDesert_Candylab);

	// Field : WestDesert_Weapons
	stream->ReadAs(WestDesert_Weapons);

	// Field : WestDesert_DrugPlant
	stream->ReadAs(WestDesert_DrugPlant);

	// Field : WestDesert_AdultFilms
	stream->ReadAs(WestDesert_AdultFilms);

	// Field : EastDesert_ElectricPlants
	stream->ReadAs(EastDesert_ElectricPlants);

	// Field : EastDesert_AdultFilms
	stream->ReadAs(EastDesert_AdultFilms);

	// Field : EastDesert_Alcohol
	stream->ReadAs(EastDesert_Alcohol);

	// Field : EastDesert_Candylab
	stream->ReadAs(EastDesert_Candylab);

	// Field : Prize_1
	stream->ReadAs(Prize_1);

	// Field : OldTown_diner
	stream->ReadAs(OldTown_diner);

	// Field : OldTown_store
	stream->ReadAs(OldTown_store);

	// Field : OldTown_mall
	stream->ReadAs(OldTown_mall);

	// Field : OldTown_warehouse
	stream->ReadAs(OldTown_warehouse);

	// Field : Leasure_stadium
	stream->ReadAs(Leasure_stadium);

	// Field : Leasure_airport
	stream->ReadAs(Leasure_airport);

	// Field : Leasure_northCasino
	stream->ReadAs(Leasure_northCasino);

	// Field : Leasure_southCasino
	stream->ReadAs(Leasure_southCasino);

	// Field : Business_hospital
	stream->ReadAs(Business_hospital);

	// Field : Business_shop
	stream->ReadAs(Business_shop);

	// Field : Business_villa
	stream->ReadAs(Business_villa);

	// Field : Business_gasStation
	stream->ReadAs(Business_gasStation);

	// Field : WestDesert_diner
	stream->ReadAs(WestDesert_diner);

	// Field : WestDesert_armyBase
	stream->ReadAs(WestDesert_armyBase);

	// Field : WestDesert_farm
	stream->ReadAs(WestDesert_farm);

	// Field : WestDesert_motel
	stream->ReadAs(WestDesert_motel);

	// Field : EastDesert_uberDam
	stream->ReadAs(EastDesert_uberDam);

	// Field : EastDesert_motel
	stream->ReadAs(EastDesert_motel);

	// Field : EastDesert_warehouse
	stream->ReadAs(EastDesert_warehouse);

	// Field : EastDesert_diner
	stream->ReadAs(EastDesert_diner);

	// Field : advert_01
	stream->ReadAs(advert_01);

	// Field : radio_blaster_off
	stream->ReadAs(radio_blaster_off);

	// Field : radio_blaster_oldies
	stream->ReadAs(radio_blaster_oldies);

	// Field : radio_blaster_Rock
	stream->ReadAs(radio_blaster_Rock);

	// Field : radio_blaster_80s
	stream->ReadAs(radio_blaster_80s);

	// Field : radio_blaster_electro
	stream->ReadAs(radio_blaster_electro);

	// Field : radio_blaster_hiphop
	stream->ReadAs(radio_blaster_hiphop);

	// Field : Clothing
	stream->ReadAs(Clothing);

	// Field : Vehicles
	stream->ReadAs(Vehicles);

	// Field : Crates
	stream->ReadAs(Crates);

	// Field : Consumables
	stream->ReadAs(Consumables);

	// Field : Special
	stream->ReadAs(Special);

	// Field : MainPawnShop
	stream->ReadAs(MainPawnShop);

	// Field : StartingList
	stream->ReadAs(StartingList);

	// Field : UpdateList
	stream->ReadAs(UpdateList);

	// Field : DefaultParachute
	stream->ReadAs(DefaultParachute);

	// Field : Controls
	stream->ReadAs(Controls);

	// Field : Missions
	stream->ReadAs(Missions);

	// Field : CasinoGames
	stream->ReadAs(CasinoGames);

	// Field : Shop
	stream->ReadAs(Shop);

	// Field : Other
	stream->ReadAs(Other);

	// Field : ParentsInfo
	stream->ReadAs(ParentsInfo);

	// Field : ControlsHelp00
	stream->ReadAs(ControlsHelp00);

	// Field : MissionsHelp00
	stream->ReadAs(MissionsHelp00);

	// Field : CasinoGamesHelp00
	stream->ReadAs(CasinoGamesHelp00);

	// Field : MapHelp00
	stream->ReadAs(MapHelp00);

	// Field : ShopHelp00
	stream->ReadAs(ShopHelp00);

	// Field : OtherHelp00
	stream->ReadAs(OtherHelp00);

	// Field : ParentInfoHelp00
	stream->ReadAs(ParentInfoHelp00);

	// Field : Constant_01
	stream->ReadAs(Constant_01);

	// Field : Cst_01
	stream->ReadAs(Cst_01);

	// Field : KarenFriend
	stream->ReadAs(KarenFriend);

	// Field : BoardsInfo
	stream->ReadAs(BoardsInfo);

	// Field : Key_01
	stream->ReadAs(Key_01);

	// Field : FacebookReward
	stream->ReadAs(FacebookReward);

	// Field : Level_1
	stream->ReadAs(Level_1);

	// Field : Level_2
	stream->ReadAs(Level_2);

	// Field : Level_3
	stream->ReadAs(Level_3);

	// Field : Level_4
	stream->ReadAs(Level_4);

	// Field : Level_5
	stream->ReadAs(Level_5);

	// Field : Level_6
	stream->ReadAs(Level_6);

	// Field : Level_7
	stream->ReadAs(Level_7);

	// Field : Level_8
	stream->ReadAs(Level_8);

	// Field : Level_9
	stream->ReadAs(Level_9);

	// Field : Level_10
	stream->ReadAs(Level_10);

	// Field : Reward_0
	stream->ReadAs(Reward_0);

	// Field : Reward_1
	stream->ReadAs(Reward_1);

	// Field : Reward_2
	stream->ReadAs(Reward_2);

	// Field : Reward_3
	stream->ReadAs(Reward_3);

	// Field : Reward_4
	stream->ReadAs(Reward_4);

	// Field : Reward_5
	stream->ReadAs(Reward_5);

	// Field : Reward_6
	stream->ReadAs(Reward_6);

	// Field : Reward_7
	stream->ReadAs(Reward_7);

	// Field : Reward_8
	stream->ReadAs(Reward_8);

	// Field : Reward_9
	stream->ReadAs(Reward_9);

	// Field : Reward_10
	stream->ReadAs(Reward_10);

	// Field : Reward_11
	stream->ReadAs(Reward_11);

	// Field : Reward_12
	stream->ReadAs(Reward_12);

	// Field : Reward_13
	stream->ReadAs(Reward_13);

	// Field : Reward_14
	stream->ReadAs(Reward_14);

	// Field : None
	stream->ReadAs(None);

	// Field : Jason
	stream->ReadAs(Jason);

	// Field : Vera
	stream->ReadAs(Vera);

	// Field : Karen
	stream->ReadAs(Karen);

	// Field : Frank
	stream->ReadAs(Frank);

	// Field : Warren
	stream->ReadAs(Warren);

	// Field : Benny
	stream->ReadAs(Benny);

	// Field : AviatorGirl
	stream->ReadAs(AviatorGirl);

	// Field : AsianRacer
	stream->ReadAs(AsianRacer);

	// Field : CasinoGirl
	stream->ReadAs(CasinoGirl);

	// Field : DJGirl
	stream->ReadAs(DJGirl);

	// Field : Eman_UFO
	stream->ReadAs(Eman_UFO);

	// Field : Devil_Stranger
	stream->ReadString(Devil_Stranger);
	Devil_Stranger_hash = static_cast<uint32>(glitch::core::hashString(Devil_Stranger));

	// Field : Devil
	stream->ReadAs(Devil);

	// Field : CH1
	stream->ReadAs(CH1);

	// Field : CH2
	stream->ReadAs(CH2);

	// Field : CH3
	stream->ReadAs(CH3);

	// Field : CH4
	stream->ReadAs(CH4);

	// Field : CH5
	stream->ReadAs(CH5);

	// Field : UPDATE3
	stream->ReadAs(UPDATE3);

	// Field : AllVehicles
	stream->ReadAs(AllVehicles);

	// Field : OnlySeaVehicles
	stream->ReadAs(OnlySeaVehicles);

	// Field : OnlyPlaneVehicles
	stream->ReadAs(OnlyPlaneVehicles);

	// Field : OnlyHeliVehicles
	stream->ReadAs(OnlyHeliVehicles);

	// Field : OnlyLandVehicles
	stream->ReadAs(OnlyLandVehicles);

	// Field : OnlyTwoSeatLandVehicles
	stream->ReadAs(OnlyTwoSeatLandVehicles);

	// Field : OnlyMotoVehicles
	stream->ReadAs(OnlyMotoVehicles);

	// Field : AirAndLandVehicles
	stream->ReadAs(AirAndLandVehicles);

	// Field : OnlyCars_TwoSeat
	stream->ReadAs(OnlyCars_TwoSeat);

	// Field : OnlyCars_All
	stream->ReadAs(OnlyCars_All);

	// Field : AllWeapons
	stream->ReadAs(AllWeapons);

	// Field : OnlyMeleeWeapons
	stream->ReadAs(OnlyMeleeWeapons);

	// Field : OnlyConsumables
	stream->ReadAs(OnlyConsumables);

	// Field : All
	stream->ReadAs(All);

	// Field : OnlySniperWeapons
	stream->ReadAs(OnlySniperWeapons);

	// Field : TRADITIONAL
	stream->ReadAs(TRADITIONAL);

	// Field : ACTION
	stream->ReadAs(ACTION);

	// Field : VEHICLE
	stream->ReadAs(VEHICLE);

	// Field : ARENA
	stream->ReadAs(ARENA);

	// Field : Traditional
	stream->ReadAs(Traditional);

	// Field : UFO
	stream->ReadAs(UFO);

	// Field : UFOHeist
	stream->ReadAs(UFOHeist);

	// Field : Ram
	stream->ReadAs(Ram);

	// Field : Survival
	stream->ReadAs(Survival);

	// Field : Robbery
	stream->ReadAs(Robbery);

	// Field : Carnage
	stream->ReadAs(Carnage);

	// Field : FightClub
	stream->ReadAs(FightClub);

	// Field : Assault
	stream->ReadAs(Assault);

	// Field : Sniper
	stream->ReadAs(Sniper);

	// Field : TimeAttack
	stream->ReadAs(TimeAttack_f);

	// Field : RingChallenge
	stream->ReadAs(RingChallenge);

	// Field : Freefall
	stream->ReadAs(Freefall);

	// Field : Racing
	stream->ReadAs(Racing);

	// Field : TRADITIONAL_QUICKTITLE
	stream->ReadString(TRADITIONAL_QUICKTITLE);
	TRADITIONAL_QUICKTITLE_hash = static_cast<uint32>(glitch::core::hashString(TRADITIONAL_QUICKTITLE));

	// Field : TRADITIONAL_KAREN
	stream->ReadAs(TRADITIONAL_KAREN);

	// Field : TRADITIONAL_VERA
	stream->ReadAs(TRADITIONAL_VERA);

	// Field : TRADITIONAL_EMAN
	stream->ReadAs(TRADITIONAL_EMAN);

	// Field : TRADITIONAL_FRANK
	stream->ReadAs(TRADITIONAL_FRANK);

	// Field : TRADITIONAL_BENNY
	stream->ReadAs(TRADITIONAL_BENNY);

	// Field : TRADITIONAL_WARREN
	stream->ReadAs(TRADITIONAL_WARREN);

	// Field : TRADITIONAL_LUCKY
	stream->ReadAs(TRADITIONAL_LUCKY);

	// Field : RAM
	stream->ReadAs(RAM);

	// Field : UFO_HEIST
	stream->ReadAs(UFO_HEIST);

	// Field : SURVIVAL
	stream->ReadAs(SURVIVAL);

	// Field : ROBBERY
	stream->ReadAs(ROBBERY);

	// Field : CARNAGE
	stream->ReadAs(CARNAGE);

	// Field : FIGHTCLUB
	stream->ReadAs(FIGHTCLUB);

	// Field : ASSAULT
	stream->ReadAs(ASSAULT);

	// Field : SNIPER
	stream->ReadAs(SNIPER);

	// Field : TIMEATTACK
	stream->ReadAs(TIMEATTACK_f);

	// Field : RINGCHALLENGE
	stream->ReadAs(RINGCHALLENGE);

	// Field : RACING
	stream->ReadAs(RACING);

	// Field : DELIVERY
	stream->ReadAs(DELIVERY);

	// Field : FREEFALL
	stream->ReadAs(FREEFALL);

	// Field : NONE
	stream->ReadAs(NONE);

	// Field : CASINOGAME
	stream->ReadAs(CASINOGAME);

	// Field : Setting_01
	stream->ReadAs(Setting_01);

	// Field : Seven
	stream->ReadAs(Seven);

	// Field : Bell
	stream->ReadAs(Bell);

	// Field : Crystal
	stream->ReadAs(Crystal);

	// Field : Bar
	stream->ReadAs(Bar);

	// Field : Orange
	stream->ReadAs(Orange_f);

	// Field : Cherry
	stream->ReadAs(Cherry);

	// Field : RepeatOrange
	stream->ReadAs(RepeatOrange_f);

	// Field : RepeatCherry
	stream->ReadAs(RepeatCherry);

	// Field : font_latin
	stream->ReadAs(font_latin);

	// Field : font_russian
	stream->ReadAs(font_russian);

	// Field : font_japanese
	stream->ReadAs(font_japanese);

	// Field : font_korean
	stream->ReadAs(font_korean);

	// Field : font_SChinese
	stream->ReadAs(font_SChinese);

	// Field : font_TChinese
	stream->ReadAs(font_TChinese);

	// Field : NotoSansThaiRegular
	stream->ReadAs(NotoSansThaiRegular);

	// Field : English
	stream->ReadAs(English);

	// Field : French
	stream->ReadAs(French);

	// Field : German
	stream->ReadAs(German);

	// Field : Spanish
	stream->ReadAs(Spanish);

	// Field : Italian
	stream->ReadAs(Italian);

	// Field : Japanese
	stream->ReadAs(Japanese);

	// Field : Korean
	stream->ReadAs(Korean);

	// Field : Chinese
	stream->ReadAs(Chinese);

	// Field : Portugese
	stream->ReadAs(Portugese);

	// Field : Russian
	stream->ReadAs(Russian);

	// Field : Turkish
	stream->ReadAs(Turkish);

	// Field : TradChinese
	stream->ReadAs(TradChinese);

	// Field : Arabic
	stream->ReadAs(Arabic);

	// Field : Thai
	stream->ReadAs(Thai);

	// Field : GachaBoy
	stream->ReadAs(GachaBoy);

	// Field : HudFeatures_01
	stream->ReadAs(HudFeatures_01);

	// Field : MenuFeatures_01
	stream->ReadAs(MenuFeatures_01);

	// Field : Cop
	stream->ReadAs(Cop);

	// Field : Kickboxer
	stream->ReadAs(Kickboxer);

	// Field : Brawler
	stream->ReadAs(Brawler);

	// Field : tile
	stream->ReadAs(tile);

	// Field : Road
	stream->ReadAs(Road);

	// Field : dirt
	stream->ReadAs(dirt);

	// Field : gravel
	stream->ReadAs(gravel);

	// Field : Cliff
	stream->ReadAs(Cliff);

	// Field : Less90Cards
	stream->ReadAs(Less90Cards);

	// Field : More90Cards
	stream->ReadAs(More90Cards);

	// Field : Crate1Tier
	stream->ReadAs(Crate1Tier);

	// Field : Crate2Tier
	stream->ReadAs(Crate2Tier);

	// Field : Crate3Tier
	stream->ReadAs(Crate3Tier);

	// Field : Consumables1
	stream->ReadAs(Consumables1);

	// Field : Consumables2
	stream->ReadAs(Consumables2);

	// Field : Item1
	stream->ReadAs(Item1);

	// Field : Item2
	stream->ReadAs(Item2);

	// Field : ExtraItem1
	stream->ReadAs(ExtraItem1);

	// Field : Item3
	stream->ReadAs(Item3);

	// Field : Item4
	stream->ReadAs(Item4);

	// Field : Item5
	stream->ReadAs(Item5);

	// Field : Item6
	stream->ReadAs(Item6);

	// Field : Item7
	stream->ReadAs(Item7);

	// Field : Item8
	stream->ReadAs(Item8);

	// Field : Pedestrian
	stream->ReadString(Pedestrian);
	Pedestrian_hash = static_cast<uint32>(glitch::core::hashString(Pedestrian));

	// Field : Crate
	stream->ReadAs(Crate);

	// Field : TutorialCrate
	stream->ReadAs(TutorialCrate);

	// Field : Melee
	stream->ReadAs(Melee);

	// Field : PawnShop_1
	stream->ReadAs(PawnShop_1);

	// Field : PawnShop_2
	stream->ReadAs(PawnShop_2);

	// Field : PawnShop_3
	stream->ReadAs(PawnShop_3);

	// Field : NoTier
	stream->ReadAs(NoTier);

	// Field : Tier1
	stream->ReadAs(Tier1);

	// Field : Tier2
	stream->ReadAs(Tier2);

	// Field : Tier3
	stream->ReadAs(Tier3);

	// Field : Menus
	stream->ReadAs(Menus);

	// Field : MenusFadeIn
	stream->ReadAs(MenusFadeIn);

	// Field : Script
	stream->ReadAs(Script);

	// Field : ScriptNoSound
	stream->ReadString(ScriptNoSound);
	ScriptNoSound_hash = static_cast<uint32>(glitch::core::hashString(ScriptNoSound));

	// Field : HardcodedIn_GrapherChangeLocation
	stream->ReadAs(HardcodedIn_GrapherChangeLocation);

	// Field : HardcodedIn_MissionAbort
	stream->ReadAs(HardcodedIn_MissionAbort);

	// Field : CinematicAnimEvent
	stream->ReadString(CinematicAnimEvent);
	CinematicAnimEvent_hash = static_cast<uint32>(glitch::core::hashString(CinematicAnimEvent));

	// Field : CinematicAnimEventMute
	stream->ReadString(CinematicAnimEventMute);
	CinematicAnimEventMute_hash = static_cast<uint32>(glitch::core::hashString(CinematicAnimEventMute));

	// Field : HardcodedIn_CinematicPlay
	stream->ReadAs(HardcodedIn_CinematicPlay);

	// Field : HardcodedIn_GrapherMissionUnload
	stream->ReadAs(HardcodedIn_GrapherMissionUnload);

	// Field : HardcodedIn_GameStartModuleRespawnPin
	stream->ReadAs(HardcodedIn_GameStartModuleRespawnPin);

	// Field : HardcodedIn_GameStartCinematicSkipPin
	stream->ReadAs(HardcodedIn_GameStartCinematicSkipPin);

	// Field : HardcodedIn_GameStartMission
	stream->ReadAs(HardcodedIn_GameStartMission);

	// Field : Set0
	stream->ReadAs(Set0);

	// Field : Set1
	stream->ReadAs(Set1);

	// Field : Set2
	stream->ReadAs(Set2);

	// Field : Bullet
	stream->ReadAs(Bullet);

	// Field : BulletMediumBlood
	stream->ReadAs(BulletMediumBlood);

	// Field : BulletBigBlood
	stream->ReadAs(BulletBigBlood);

	// Field : Projectile
	stream->ReadAs(Projectile);

	// Field : Slashing
	stream->ReadAs(Slashing);

	// Field : Physical
	stream->ReadAs(Physical);

	// Field : Toxic
	stream->ReadAs(Toxic);

	// Field : Drowning
	stream->ReadAs(Drowning);

	// Field : Fall
	stream->ReadAs(Fall);

	// Field : Crushing
	stream->ReadAs(Crushing);

	// Field : VehicleImpact
	stream->ReadAs(VehicleImpact);

	// Field : Rotor
	stream->ReadAs(Rotor_f);

	// Field : Mortal
	stream->ReadAs(Mortal);

	// Field : Percent
	stream->ReadAs(Percent);

	// Field : Tesla
	stream->ReadAs(Tesla);

	// Field : VehicleParts
	stream->ReadAs(VehicleParts);

	// Field : WeaponParts
	stream->ReadAs(WeaponParts);

	// Field : ClothingBasket
	stream->ReadAs(ClothingBasket);

	// Field : Brave
	stream->ReadAs(Brave);

	// Field : HighValuableTarget
	stream->ReadAs(HighValuableTarget);

	// Field : Enemy
	stream->ReadAs(Enemy);

	// Field : C1M01_Opponent
	stream->ReadAs(C1M01_Opponent);

	// Field : ApachePilot
	stream->ReadAs(ApachePilot);

	// Field : AmericanPsycho
	stream->ReadAs(AmericanPsycho);

	// Field : MartialArts
	stream->ReadAs(MartialArts);

	// Field : Fleeing
	stream->ReadAs(Fleeing);

	// Field : Weak
	stream->ReadAs(Weak);

	// Field : MC
	stream->ReadAs(MC);

	// Field : Helico
	stream->ReadAs(Helico);

	// Field : Hovercraft
	stream->ReadAs(Hovercraft);

	// Field : AirplaneArmy
	stream->ReadAs(AirplaneArmy);

	// Field : Level1
	stream->ReadAs(Level1);

	// Field : Level2
	stream->ReadAs(Level2);

	// Field : Level3
	stream->ReadAs(Level3);

	// Field : LAND_VEHICLES
	stream->ReadAs(LAND_VEHICLES);

	// Field : AIR_VEHICLES
	stream->ReadAs(AIR_VEHICLES);

	// Field : SEA_VEHICLES
	stream->ReadAs(SEA_VEHICLES);

	// Field : MELEE
	stream->ReadAs(MELEE);

	// Field : HANDGUNS
	stream->ReadAs(HANDGUNS);

	// Field : SMG
	stream->ReadAs(SMG);

	// Field : SHOTGUNS
	stream->ReadAs(SHOTGUNS);

	// Field : RIFLES
	stream->ReadAs(RIFLES);

	// Field : HEAVY
	stream->ReadAs(HEAVY);

	// Field : THROWN
	stream->ReadAs(THROWN);

	// Field : HEALTH_ARMOR
	stream->ReadAs(HEALTH_ARMOR);

	// Field : MOVEMENT
	stream->ReadAs(MOVEMENT);

	// Field : POLICE
	stream->ReadAs(POLICE);

	// Field : LOOTING
	stream->ReadAs(LOOTING);

	// Field : RESISTANCES
	stream->ReadAs(RESISTANCES);

	// Field : Custom_Category_01
	stream->ReadAs(Custom_Category_01);

	// Field : Vehicle_Category_01
	stream->ReadAs(Vehicle_Category_01);

	// Field : DefaultGear
	stream->ReadAs(DefaultGear);

	// Field : Gear_SuitVest
	stream->ReadAs(Gear_SuitVest);

	// Field : Gear_Bare
	stream->ReadAs(Gear_Bare);

	// Field : Gear_Jeans
	stream->ReadAs(Gear_Jeans);

	// Field : Gear_MMA
	stream->ReadAs(Gear_MMA);

	// Field : Gear_Robbery
	stream->ReadAs(Gear_Robbery);

	// Field : Gear_Agent
	stream->ReadAs(Gear_Agent);

	// Field : Gear_Santa
	stream->ReadAs(Gear_Santa);

	// Field : Mercenary1
	stream->ReadAs(Mercenary1);

	// Field : Mercenary2
	stream->ReadAs(Mercenary2);

	// Field : Mercenary3
	stream->ReadAs(Mercenary3);

	// Field : Mercenary4
	stream->ReadAs(Mercenary4);

	// Field : Mercenary5
	stream->ReadAs(Mercenary5);

	// Field : Mercenary6
	stream->ReadAs(Mercenary6);

	// Field : Mercenary7
	stream->ReadAs(Mercenary7);

	// Field : Mercenary8
	stream->ReadAs(Mercenary8);

	// Field : Mercenary9
	stream->ReadAs(Mercenary9);

	// Field : Mercenary10
	stream->ReadAs(Mercenary10);

	// Field : Mercenary11
	stream->ReadAs(Mercenary11);

	// Field : Mercenary12
	stream->ReadAs(Mercenary12);

	// Field : Mercenary13
	stream->ReadAs(Mercenary13);

	// Field : Mercenary14
	stream->ReadAs(Mercenary14);

	// Field : Mercenary15
	stream->ReadAs(Mercenary15);

	// Field : Mercenary16
	stream->ReadAs(Mercenary16);

	// Field : Mercenary17
	stream->ReadAs(Mercenary17);

	// Field : Mercenary18
	stream->ReadAs(Mercenary18);

	// Field : Mercenary19
	stream->ReadAs(Mercenary19);

	// Field : Mercenary20
	stream->ReadAs(Mercenary20);

	// Field : Mercenary21
	stream->ReadAs(Mercenary21);

	// Field : Mercenary22
	stream->ReadAs(Mercenary22);

	// Field : Mercenary23
	stream->ReadAs(Mercenary23);

	// Field : Mercenary24
	stream->ReadAs(Mercenary24);

	// Field : Mercenary25
	stream->ReadAs(Mercenary25);

	// Field : Civilian
	stream->ReadAs(Civilian);

	// Field : Bikers
	stream->ReadAs(Bikers);

	// Field : Latinos
	stream->ReadAs(Latinos);

	// Field : Mafia
	stream->ReadAs(Mafia);

	// Field : Thugs
	stream->ReadAs(Thugs);

	// Field : Neutral
	stream->ReadAs(Neutral);

	// Field : Aliens
	stream->ReadAs(Aliens);

	// Field : MIBs
	stream->ReadAs(MIBs);

	// Field : Level_01
	stream->ReadAs(Level_01);

	// Field : Level_02
	stream->ReadAs(Level_02);

	// Field : Level_03
	stream->ReadAs(Level_03);

	// Field : Level_04
	stream->ReadAs(Level_04);

	// Field : Level_05
	stream->ReadAs(Level_05);

	// Field : Level_06
	stream->ReadAs(Level_06);

	// Field : Level_07
	stream->ReadAs(Level_07);

	// Field : Level_08
	stream->ReadAs(Level_08);

	// Field : Level_09
	stream->ReadAs(Level_09);

	// Field : Level_11
	stream->ReadAs(Level_11);

	// Field : Level_12
	stream->ReadAs(Level_12);

	// Field : Level_13
	stream->ReadAs(Level_13);

	// Field : Level_14
	stream->ReadAs(Level_14);

	// Field : Level_15
	stream->ReadAs(Level_15);

	// Field : Level_16
	stream->ReadAs(Level_16);

	// Field : Level_17
	stream->ReadAs(Level_17);

	// Field : Level_18
	stream->ReadAs(Level_18);

	// Field : Level_19
	stream->ReadAs(Level_19);

	// Field : Level_20
	stream->ReadAs(Level_20);

	// Field : Level_21
	stream->ReadAs(Level_21);

	// Field : Level_22
	stream->ReadAs(Level_22);

	// Field : Level_23
	stream->ReadAs(Level_23);

	// Field : Level_24
	stream->ReadAs(Level_24);

	// Field : Level_25
	stream->ReadAs(Level_25);

	// Field : DefaultDialog
	stream->ReadAs(DefaultDialog);

	// Field : GameActionDialog
	stream->ReadAs(GameActionDialog);

	// Field : ObjectiveDialog
	stream->ReadAs(ObjectiveDialog);

	// Field : ObjectiveDialogTutorial
	stream->ReadAs(ObjectiveDialogTutorial);

	// Field : SubObjectiveDialog_0
	stream->ReadAs(SubObjectiveDialog_0);

	// Field : SubObjectiveDialog_1
	stream->ReadAs(SubObjectiveDialog_1);

	// Field : SubObjectiveDialog_Stars
	stream->ReadAs(SubObjectiveDialog_Stars);

	// Field : SubObjectiveDialog_Progress
	stream->ReadAs(SubObjectiveDialog_Progress);

	// Field : TimerDialog
	stream->ReadAs(TimerDialog_f);

	// Field : TalkDialog
	stream->ReadAs(TalkDialog);

	// Field : CenteredDialog
	stream->ReadAs(CenteredDialog);

	// Field : AchievementDialog
	stream->ReadAs(AchievementDialog);

	// Field : TutorialDialog
	stream->ReadAs(TutorialDialog);

	// Field : MissionStartDialog
	stream->ReadAs(MissionStartDialog);

	// Field : MissionZoneEnterDialog
	stream->ReadAs(MissionZoneEnterDialog);

	// Field : SubtitleDialog
	stream->ReadString(SubtitleDialog);
	SubtitleDialog_hash = static_cast<uint32>(glitch::core::hashString(SubtitleDialog));

	// Field : MissionIntroDialog
	stream->ReadAs(MissionIntroDialog);

	// Field : EndScreenDialog
	stream->ReadAs(EndScreenDialog);

	// Field : MoneyDialog
	stream->ReadAs(MoneyDialog);

	// Field : MissionEndDialog
	stream->ReadAs(MissionEndDialog);

	// Field : WarningDialog
	stream->ReadAs(WarningDialog);

	// Field : WaveCompleteDialog
	stream->ReadAs(WaveCompleteDialog);

	// Field : WastedUnskippableDialog
	stream->ReadAs(WastedUnskippableDialog);

	// Field : WastedSkippableDialog
	stream->ReadAs(WastedSkippableDialog);

	// Field : MissionFailedDialog
	stream->ReadAs(MissionFailedDialog);

	// Field : RewardDialog
	stream->ReadAs(RewardDialog);

	// Field : RacestartCountdownDialog
	stream->ReadAs(RacestartCountdownDialog);

	// Field : RealEstateDialog
	stream->ReadAs(RealEstateDialog);

	// Field : CreditsDialog
	stream->ReadAs(CreditsDialog);

	// Field : VehicleDialog
	stream->ReadAs(VehicleDialog);

	// Field : Dialog_01
	stream->ReadAs(Dialog_01);

	// Field : Counters
	stream->ReadAs(Counters);

	// Field : bydefault
	stream->ReadAs(bydefault);

	// Field : other
	stream->ReadAs(other);

}

void xmldata_example_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : LightAnim
	if (LightAnim && LightAnim[0] != '\0') gll_delete[] LightAnim;
	LightAnim = 0;

	// Field : HeavyAnim
	if (HeavyAnim && HeavyAnim[0] != '\0') gll_delete[] HeavyAnim;
	HeavyAnim = 0;

	// Field : ExplosiveAnim
	if (ExplosiveAnim && ExplosiveAnim[0] != '\0') gll_delete[] ExplosiveAnim;
	ExplosiveAnim = 0;

	// Field : SniperAnim
	if (SniperAnim && SniperAnim[0] != '\0') gll_delete[] SniperAnim;
	SniperAnim = 0;

	// Field : ShotgunAnim
	if (ShotgunAnim && ShotgunAnim[0] != '\0') gll_delete[] ShotgunAnim;
	ShotgunAnim = 0;

	// Field : HighClass_Pedestrian1
	if (HighClass_Pedestrian1 && HighClass_Pedestrian1[0] != '\0') gll_delete[] HighClass_Pedestrian1;
	HighClass_Pedestrian1 = 0;

	// Field : HighClass_Pedestrian2
	if (HighClass_Pedestrian2 && HighClass_Pedestrian2[0] != '\0') gll_delete[] HighClass_Pedestrian2;
	HighClass_Pedestrian2 = 0;

	// Field : ConstructionWorker
	if (ConstructionWorker && ConstructionWorker[0] != '\0') gll_delete[] ConstructionWorker;
	ConstructionWorker = 0;

	// Field : HighClass_Pedestrian1Nightclub
	if (HighClass_Pedestrian1Nightclub && HighClass_Pedestrian1Nightclub[0] != '\0') gll_delete[] HighClass_Pedestrian1Nightclub;
	HighClass_Pedestrian1Nightclub = 0;

	// Field : HighClass_Pedestrian2Nightclub
	if (HighClass_Pedestrian2Nightclub && HighClass_Pedestrian2Nightclub[0] != '\0') gll_delete[] HighClass_Pedestrian2Nightclub;
	HighClass_Pedestrian2Nightclub = 0;

	// Field : StriperStanding_01
	if (StriperStanding_01 && StriperStanding_01[0] != '\0') gll_delete[] StriperStanding_01;
	StriperStanding_01 = 0;

	// Field : StriperStanding_02
	if (StriperStanding_02 && StriperStanding_02[0] != '\0') gll_delete[] StriperStanding_02;
	StriperStanding_02 = 0;

	// Field : StriperStanding_03
	if (StriperStanding_03 && StriperStanding_03[0] != '\0') gll_delete[] StriperStanding_03;
	StriperStanding_03 = 0;

	// Field : ConstructionLow
	if (ConstructionLow && ConstructionLow[0] != '\0') gll_delete[] ConstructionLow;
	ConstructionLow = 0;

	// Field : SkillStrength
	if (SkillStrength && SkillStrength[0] != '\0') gll_delete[] SkillStrength;
	SkillStrength = 0;

	// Field : strip00_phys
	if (strip00_phys && strip00_phys[0] != '\0') gll_delete[] strip00_phys;
	strip00_phys = 0;

	// Field : strip01_phys
	if (strip01_phys && strip01_phys[0] != '\0') gll_delete[] strip01_phys;
	strip01_phys = 0;

	// Field : strip02_phys
	if (strip02_phys && strip02_phys[0] != '\0') gll_delete[] strip02_phys;
	strip02_phys = 0;

	// Field : strip03_phys
	if (strip03_phys && strip03_phys[0] != '\0') gll_delete[] strip03_phys;
	strip03_phys = 0;

	// Field : interior_stripclub_phys
	if (interior_stripclub_phys && interior_stripclub_phys[0] != '\0') gll_delete[] interior_stripclub_phys;
	interior_stripclub_phys = 0;

	// Field : FriendProfileMenu
	if (FriendProfileMenu && FriendProfileMenu[0] != '\0') gll_delete[] FriendProfileMenu;
	FriendProfileMenu = 0;

	// Field : MapDistrict
	if (MapDistrict && MapDistrict[0] != '\0') gll_delete[] MapDistrict;
	MapDistrict = 0;

	// Field : StripClub
	if (StripClub && StripClub[0] != '\0') gll_delete[] StripClub;
	StripClub = 0;

	// Field : ReflectionFalloffTexture
	if (ReflectionFalloffTexture && ReflectionFalloffTexture[0] != '\0') gll_delete[] ReflectionFalloffTexture;
	ReflectionFalloffTexture = 0;

	// Field : GlassReflectionFalloffTexture
	if (GlassReflectionFalloffTexture && GlassReflectionFalloffTexture[0] != '\0') gll_delete[] GlassReflectionFalloffTexture;
	GlassReflectionFalloffTexture = 0;

	// Field : FlakesTexture
	if (FlakesTexture && FlakesTexture[0] != '\0') gll_delete[] FlakesTexture;
	FlakesTexture = 0;

	// Field : LodVFX0
	if (LodVFX0 && LodVFX0[0] != '\0') gll_delete[] LodVFX0;
	LodVFX0 = 0;

	// Field : LodVFXAir
	if (LodVFXAir && LodVFXAir[0] != '\0') gll_delete[] LodVFXAir;
	LodVFXAir = 0;

	// Field : LodVFXVisualMarker
	if (LodVFXVisualMarker && LodVFXVisualMarker[0] != '\0') gll_delete[] LodVFXVisualMarker;
	LodVFXVisualMarker = 0;

	// Field : TargetName
	if (TargetName && TargetName[0] != '\0') gll_delete[] TargetName;
	TargetName = 0;

	// Field : DestroyedCivCar
	if (DestroyedCivCar && DestroyedCivCar[0] != '\0') gll_delete[] DestroyedCivCar;
	DestroyedCivCar = 0;

	// Field : DestroyedCopCar
	if (DestroyedCopCar && DestroyedCopCar[0] != '\0') gll_delete[] DestroyedCopCar;
	DestroyedCopCar = 0;

	// Field : ObstructedCop
	if (ObstructedCop && ObstructedCop[0] != '\0') gll_delete[] ObstructedCop;
	ObstructedCop = 0;

	// Field : TempName_StripClub
	if (TempName_StripClub && TempName_StripClub[0] != '\0') gll_delete[] TempName_StripClub;
	TempName_StripClub = 0;

	// Field : DestroyCar
	if (DestroyCar && DestroyCar[0] != '\0') gll_delete[] DestroyCar;
	DestroyCar = 0;

	// Field : DestroyMoto
	if (DestroyMoto && DestroyMoto[0] != '\0') gll_delete[] DestroyMoto;
	DestroyMoto = 0;

	// Field : DestroyBoat
	if (DestroyBoat && DestroyBoat[0] != '\0') gll_delete[] DestroyBoat;
	DestroyBoat = 0;

	// Field : DestroyHelicopter
	if (DestroyHelicopter && DestroyHelicopter[0] != '\0') gll_delete[] DestroyHelicopter;
	DestroyHelicopter = 0;

	// Field : DestroyAirplane
	if (DestroyAirplane && DestroyAirplane[0] != '\0') gll_delete[] DestroyAirplane;
	DestroyAirplane = 0;

	// Field : DistrictPurchased
	if (DistrictPurchased && DistrictPurchased[0] != '\0') gll_delete[] DistrictPurchased;
	DistrictPurchased = 0;

	// Field : Devil_Stranger
	if (Devil_Stranger && Devil_Stranger[0] != '\0') gll_delete[] Devil_Stranger;
	Devil_Stranger = 0;

	// Field : TRADITIONAL_QUICKTITLE
	if (TRADITIONAL_QUICKTITLE && TRADITIONAL_QUICKTITLE[0] != '\0') gll_delete[] TRADITIONAL_QUICKTITLE;
	TRADITIONAL_QUICKTITLE = 0;

	// Field : Pedestrian
	if (Pedestrian && Pedestrian[0] != '\0') gll_delete[] Pedestrian;
	Pedestrian = 0;

	// Field : ScriptNoSound
	if (ScriptNoSound && ScriptNoSound[0] != '\0') gll_delete[] ScriptNoSound;
	ScriptNoSound = 0;

	// Field : CinematicAnimEvent
	if (CinematicAnimEvent && CinematicAnimEvent[0] != '\0') gll_delete[] CinematicAnimEvent;
	CinematicAnimEvent = 0;

	// Field : CinematicAnimEventMute
	if (CinematicAnimEventMute && CinematicAnimEventMute[0] != '\0') gll_delete[] CinematicAnimEventMute;
	CinematicAnimEventMute = 0;

	// Field : SubtitleDialog
	if (SubtitleDialog && SubtitleDialog[0] != '\0') gll_delete[] SubtitleDialog;
	SubtitleDialog = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : xmldata_example
size_t xmldata_example::size = 0;
xmldata_example::struct_type* xmldata_example::entries = 0;

void xmldata_example::Load(StreamBase* stream)
{
	if(entries != 0)
		Unload();

	uint32 sz;
	stream->ReadAs(sz);

	if(sz > 0)
	{
		entries = gll_new struct_type[sz];
		size = sz;

		for(size_t i = 0; i < size; ++i)
		{
			entries[i].Init();
			entries[i].Load(stream);
		}
	}
}

void xmldata_example::Unload()
{
	if(entries)
	{
		for(size_t i = 0; i < size; ++i)
		{
			entries[i].Unload();
		}

		gll_delete[] entries;
		entries = 0;
		size = 0;
	}
}

}; // namespace arrays
}; // namespace xmldata


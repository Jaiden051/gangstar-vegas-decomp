#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/stock_items.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : stock_items_struct
void stock_items_struct::Init()
{
	base_struct::Init();

	// Field : Subtype
	Subtype = 0;

	// Field : AmmoDescription
	AmmoDescription = 0;
	AmmoDescription_hash = 0;

	// Field : Armor
	Armor = 0;

	// Field : ArmorDescription
	ArmorDescription = 0;
	ArmorDescription_hash = 0;

	// Field : Look
	Look = 0;

	// Field : LookDescription
	LookDescription = 0;
	LookDescription_hash = 0;

	// Field : Luck
	Luck = 0;

	// Field : LuckDescription
	LuckDescription = 0;
	LuckDescription_hash = 0;

	// Field : BundleId
	BundleId = 0;

	// Field : StockSectionID
	StockSectionID = 0;

	// Field : IconName
	IconName = 0;
	IconName_hash = 0;

	// Field : Price
	Price = 0;

	// Field : isForDiamonds
	isForDiamonds = 0;

	// Field : AmmoPrice
	AmmoPrice = 0;

	// Field : ClipNum
	ClipNum = 0;

	// Field : ClipNumOnPurchase
	ClipNumOnPurchase = 0;

	// Field : ProjectileType
	ProjectileType = 0;

	// Field : AmmoName
	AmmoName = 0;
	AmmoName_hash = 0;

	// Field : TrackingAmmoEventId
	TrackingAmmoEventId = 0;

	// Field : TrackingEventCategoryId
	TrackingEventCategoryId = 0;

	// Field : OrderPrice
	OrderPrice = 0;

	// Field : GearSet
	GearSet = 0;

	// Field : Module
	Module = 0;

	// Field : CameraDistanceTweaker
	CameraDistanceTweaker_f = 0.0f;

	// Field : CameraDistanceTweakerPawnShop
	CameraDistanceTweakerPawnShop_f = 0.0f;

	// Field : ShopSpawnPointType
	ShopSpawnPointType = 0;

	// Field : Rarity
	Rarity = 0;

	// Field : LootPrimitive
	LootPrimitive = 0;

	// Field : CraftQuantity
	CraftQuantity = 0;

	// Field : CraftItem
	CraftItem = 0;

	// Field : CraftFine
	CraftFine = 0;

	// Field : CrateLoot
	CrateLoot = 0;

	// Field : PaletteLoot
	PaletteLoot = 0;

	// Field : TextColorLoot
	TextColorLoot = 0;
	TextColorLoot_hash = 0;

	// Field : IsInTutorial
	IsInTutorial = 0;

	// Field : IsEquippable
	IsEquippable = 0;

	// Field : NumOwnedOnNewGame
	NumOwnedOnNewGame = 0;

	// Field : MinVipValue
	MinVipValue = 0;

	// Field : IsFromBundleOnly
	IsFromBundleOnly = 0;

	// Field : IsAlwaysAvailable
	IsAlwaysAvailable = 0;

	// Field : HasMultipleLevel
	HasMultipleLevel_f = 0.0f;

	// Field : TheftValue
	TheftValue = 0;

	// Field : MaxQuantity
	MaxQuantity = 0;

	// Field : RA_Order
	RA_Order = 0;

	// Field : StatCounter_OwnNew
	StatCounter_OwnNew = 0;

	// Field : StatCounter_OwnAll
	StatCounter_OwnAll = 0;

	// Field : WeaponOption
	WeaponOption = 0;

	// Field : IsLoot
	IsLoot = 0;

	// Field : IsAvailableOffline
	IsAvailableOffline = 0;

	// Field : OnlyAvailableOnPromo
	OnlyAvailableOnPromo = 0;

	// Field : HealthLeavePercentage
	HealthLeavePercentage = 0;
	HealthLeavePercentage_hash = 0;

	// Field : OutsideVehicleZOffsetEnabled
	OutsideVehicleZOffsetEnabled = 0;

	// Field : InsideVehicleZOffsetEnabled
	InsideVehicleZOffsetEnabled = 0;

	// Field : VehicleEnableRoofCulling
	VehicleEnableRoofCulling = 0;

	// Field : OutsideVehicleZOffset
	OutsideVehicleZOffset = 0;

	// Field : InsideVehicleZOffset
	InsideVehicleZOffset = 0;

	// Field : IsInStartOfSection
	IsInStartOfSection = 0;

	// Field : MinRequiredClanLevel
	MinRequiredClanLevel = 0;

	// Field : MinRequiredPlayerClanScore
	MinRequiredPlayerClanScore = 0;

	// Field : CertificateType
	CertificateType = 0;

	// Field : SoftCurrencyAmount
	SoftCurrencyAmount = 0;

	// Field : IsDeluxeItem
	IsDeluxeItem = 0;

	// Field : OrderInSection
	OrderInSection = 0;

	// Field : ItemTier
	ItemTier = 0;

	// Field : CrateOpenCostKeys
	CrateOpenCostKeys = 0;

	// Field : ClanMemberLimitBoost
	ClanMemberLimitBoost = 0;

	// Field : Title
	Title = 0;
	Title_hash = 0;

	// Field : Comment
	Comment = 0;

	// Field : Picture
	Picture = 0;

	// Field : VipType
	VipType = 0;

	// Field : SubSectionIDs
	SubSectionIDs = 0;

	// Field : MaxMeleeDamage
	MaxMeleeDamage_f = 0.0f;

	// Field : MaxMeleeFierceDamage
	MaxMeleeFierceDamage_f = 0.0f;

	// Field : MaxExplosionDamage
	MaxExplosionDamage_f = 0.0f;

	// Field : MaxExplosionRadius
	MaxExplosionRadius_f = 0.0f;

	// Field : MaxDamage
	MaxDamage_f = 0.0f;

	// Field : MaxClipSize
	MaxClipSize = 0;

	// Field : MaxRateFire
	MaxRateFire = 0;

	// Field : StatCounter_KillWeapon
	StatCounter_KillWeapon = 0;

	// Field : MaxTopSpeed
	MaxTopSpeed_f = 0.0f;

	// Field : MaxAcceleration
	MaxAcceleration_f = 0.0f;

	// Field : MaxHealth
	MaxHealth = 0;

	// Field : StockSettingsID
	StockSettingsID = 0;

	// Field : Hidden
	Hidden = 0;

	// Field : TutorialStep
	TutorialStep = 0;

	// Field : MoneyStats
	MoneyStats = 0;

	// Field : ParrentSectionID
	ParrentSectionID = 0;

	// Field : StockSectionId
	StockSectionId = 0;

}

void stock_items_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Subtype
	stream->ReadAs(Subtype);

	// Field : AmmoDescription
	stream->ReadString(AmmoDescription);
	AmmoDescription_hash = static_cast<uint32>(glitch::core::hashString(AmmoDescription));

	// Field : Armor
	stream->ReadAs(Armor);

	// Field : ArmorDescription
	stream->ReadString(ArmorDescription);
	ArmorDescription_hash = static_cast<uint32>(glitch::core::hashString(ArmorDescription));

	// Field : Look
	stream->ReadAs(Look);

	// Field : LookDescription
	stream->ReadString(LookDescription);
	LookDescription_hash = static_cast<uint32>(glitch::core::hashString(LookDescription));

	// Field : Luck
	stream->ReadAs(Luck);

	// Field : LuckDescription
	stream->ReadString(LuckDescription);
	LuckDescription_hash = static_cast<uint32>(glitch::core::hashString(LuckDescription));

	// Field : BundleId
	stream->ReadAs(BundleId);

	// Field : StockSectionID
	stream->ReadAs(StockSectionID);

	// Field : IconName
	stream->ReadString(IconName);
	IconName_hash = static_cast<uint32>(glitch::core::hashString(IconName));

	// Field : Price
	stream->ReadAs(Price);

	// Field : isForDiamonds
	stream->ReadAs(isForDiamonds);

	// Field : AmmoPrice
	stream->ReadAs(AmmoPrice);

	// Field : ClipNum
	stream->ReadAs(ClipNum);

	// Field : ClipNumOnPurchase
	stream->ReadAs(ClipNumOnPurchase);

	// Field : ProjectileType
	stream->ReadAs(ProjectileType);

	// Field : AmmoName
	stream->ReadString(AmmoName);
	AmmoName_hash = static_cast<uint32>(glitch::core::hashString(AmmoName));

	// Field : TrackingAmmoEventId
	stream->ReadAs(TrackingAmmoEventId);

	// Field : TrackingEventCategoryId
	stream->ReadAs(TrackingEventCategoryId);

	// Field : OrderPrice
	stream->ReadAs(OrderPrice);

	// Field : GearSet
	stream->ReadAs(GearSet);

	// Field : Module
	stream->ReadAs(Module);

	// Field : CameraDistanceTweaker
	stream->ReadAs(CameraDistanceTweaker_f);

	// Field : CameraDistanceTweakerPawnShop
	stream->ReadAs(CameraDistanceTweakerPawnShop_f);

	// Field : ShopSpawnPointType
	stream->ReadAs(ShopSpawnPointType);

	// Field : Rarity
	stream->ReadAs(Rarity);

	// Field : LootPrimitive
	stream->ReadAs(LootPrimitive);

	// Field : CraftQuantity
	stream->ReadAs(CraftQuantity);

	// Field : CraftItem
	stream->ReadAs(CraftItem);

	// Field : CraftFine
	stream->ReadAs(CraftFine);

	// Field : CrateLoot
	stream->ReadAs(CrateLoot);

	// Field : PaletteLoot
	stream->ReadAs(PaletteLoot);

	// Field : TextColorLoot
	stream->ReadString(TextColorLoot);
	TextColorLoot_hash = static_cast<uint32>(glitch::core::hashString(TextColorLoot));

	// Field : IsInTutorial
	stream->ReadAs(IsInTutorial);

	// Field : IsEquippable
	stream->ReadAs(IsEquippable);

	// Field : NumOwnedOnNewGame
	stream->ReadAs(NumOwnedOnNewGame);

	// Field : MinVipValue
	stream->ReadAs(MinVipValue);

	// Field : IsFromBundleOnly
	stream->ReadAs(IsFromBundleOnly);

	// Field : IsAlwaysAvailable
	stream->ReadAs(IsAlwaysAvailable);

	// Field : HasMultipleLevel
	stream->ReadAs(HasMultipleLevel_f);

	// Field : TheftValue
	stream->ReadAs(TheftValue);

	// Field : MaxQuantity
	stream->ReadAs(MaxQuantity);

	// Field : RA_Order
	stream->ReadAs(RA_Order);

	// Field : StatCounter_OwnNew
	stream->ReadAs(StatCounter_OwnNew);

	// Field : StatCounter_OwnAll
	stream->ReadAs(StatCounter_OwnAll);

	// Field : WeaponOption
	stream->ReadAs(WeaponOption);

	// Field : IsLoot
	stream->ReadAs(IsLoot);

	// Field : IsAvailableOffline
	stream->ReadAs(IsAvailableOffline);

	// Field : OnlyAvailableOnPromo
	stream->ReadAs(OnlyAvailableOnPromo);

	// Field : HealthLeavePercentage
	stream->ReadString(HealthLeavePercentage);
	HealthLeavePercentage_hash = static_cast<uint32>(glitch::core::hashString(HealthLeavePercentage));

	// Field : OutsideVehicleZOffsetEnabled
	stream->ReadAs(OutsideVehicleZOffsetEnabled);

	// Field : InsideVehicleZOffsetEnabled
	stream->ReadAs(InsideVehicleZOffsetEnabled);

	// Field : VehicleEnableRoofCulling
	stream->ReadAs(VehicleEnableRoofCulling);

	// Field : OutsideVehicleZOffset
	stream->ReadAs(OutsideVehicleZOffset);

	// Field : InsideVehicleZOffset
	stream->ReadAs(InsideVehicleZOffset);

	// Field : IsInStartOfSection
	stream->ReadAs(IsInStartOfSection);

	// Field : MinRequiredClanLevel
	stream->ReadAs(MinRequiredClanLevel);

	// Field : MinRequiredPlayerClanScore
	stream->ReadAs(MinRequiredPlayerClanScore);

	// Field : CertificateType
	stream->ReadAs(CertificateType);

	// Field : SoftCurrencyAmount
	stream->ReadAs(SoftCurrencyAmount);

	// Field : IsDeluxeItem
	stream->ReadAs(IsDeluxeItem);

	// Field : OrderInSection
	stream->ReadAs(OrderInSection);

	// Field : ItemTier
	stream->ReadAs(ItemTier);

	// Field : CrateOpenCostKeys
	stream->ReadAs(CrateOpenCostKeys);

	// Field : ClanMemberLimitBoost
	stream->ReadAs(ClanMemberLimitBoost);

	// Field : Title
	stream->ReadString(Title);
	Title_hash = static_cast<uint32>(glitch::core::hashString(Title));

	// Field : Comment
	stream->ReadAs(Comment);

	// Field : Picture
	stream->ReadAs(Picture);

	// Field : VipType
	stream->ReadAs(VipType);

	// Field : SubSectionIDs
	stream->ReadAs(SubSectionIDs);

	// Field : MaxMeleeDamage
	stream->ReadAs(MaxMeleeDamage_f);

	// Field : MaxMeleeFierceDamage
	stream->ReadAs(MaxMeleeFierceDamage_f);

	// Field : MaxExplosionDamage
	stream->ReadAs(MaxExplosionDamage_f);

	// Field : MaxExplosionRadius
	stream->ReadAs(MaxExplosionRadius_f);

	// Field : MaxDamage
	stream->ReadAs(MaxDamage_f);

	// Field : MaxClipSize
	stream->ReadAs(MaxClipSize);

	// Field : MaxRateFire
	stream->ReadAs(MaxRateFire);

	// Field : StatCounter_KillWeapon
	stream->ReadAs(StatCounter_KillWeapon);

	// Field : MaxTopSpeed
	stream->ReadAs(MaxTopSpeed_f);

	// Field : MaxAcceleration
	stream->ReadAs(MaxAcceleration_f);

	// Field : MaxHealth
	stream->ReadAs(MaxHealth);

	// Field : StockSettingsID
	stream->ReadAs(StockSettingsID);

	// Field : Hidden
	stream->ReadAs(Hidden);

	// Field : TutorialStep
	stream->ReadAs(TutorialStep);

	// Field : MoneyStats
	stream->ReadAs(MoneyStats);

	// Field : ParrentSectionID
	stream->ReadAs(ParrentSectionID);

	// Field : StockSectionId
	stream->ReadAs(StockSectionId);

}

void stock_items_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : AmmoDescription
	if (AmmoDescription && AmmoDescription[0] != '\0') gll_delete[] AmmoDescription;
	AmmoDescription = 0;

	// Field : ArmorDescription
	if (ArmorDescription && ArmorDescription[0] != '\0') gll_delete[] ArmorDescription;
	ArmorDescription = 0;

	// Field : LookDescription
	if (LookDescription && LookDescription[0] != '\0') gll_delete[] LookDescription;
	LookDescription = 0;

	// Field : LuckDescription
	if (LuckDescription && LuckDescription[0] != '\0') gll_delete[] LuckDescription;
	LuckDescription = 0;

	// Field : IconName
	if (IconName && IconName[0] != '\0') gll_delete[] IconName;
	IconName = 0;

	// Field : AmmoName
	if (AmmoName && AmmoName[0] != '\0') gll_delete[] AmmoName;
	AmmoName = 0;

	// Field : TextColorLoot
	if (TextColorLoot && TextColorLoot[0] != '\0') gll_delete[] TextColorLoot;
	TextColorLoot = 0;

	// Field : HealthLeavePercentage
	if (HealthLeavePercentage && HealthLeavePercentage[0] != '\0') gll_delete[] HealthLeavePercentage;
	HealthLeavePercentage = 0;

	// Field : Title
	if (Title && Title[0] != '\0') gll_delete[] Title;
	Title = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : stock_items
size_t stock_items::size = 0;
stock_items::struct_type* stock_items::entries = 0;

void stock_items::Load(StreamBase* stream)
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

void stock_items::Unload()
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

// ============================================================================
// Schema Descriptor Registration Helper (0xaa9100) in libGangstar4.so
// ============================================================================
int sub_AA9100(int a1, char *s)
{
  glf::IOStream::Self *v2; // esi
  size_t v4; // eax
  int v5; // ebp
  int v6; // [esp+1Ch] [ebp-30h]
  int v7; // [esp+2Bh] [ebp-21h]
  uint32_t v8[4]; // [esp+2Ch] [ebp-20h]

  if ( (*(uint32_t *)unk_1CA3DC4) == 0 )
  {
    sub_193A910((int)(uintptr_t)(v8), "gamedata/XmlData/bins/", (int)(uintptr_t)(&v7));
    GLFUtils::ToLowerCase(v8, 0, -1);
    v4 = strlen(s);
    sub_1939E60((int)(uintptr_t)(v8), s, v4);
    v5 = v8[0];
    v2 = (glf::IOStream::Self *)sub_4EBBF0(0x34u, 1);
    glf::FileStreamImpl::Construct(v2, v5, 1);
    *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_2048D28);
    sub_1938B70(v8);
    if ( (*(uint8_t (**)(glf::IOStream::Self *))(*(uint32_t *)v2 + 48))(v2) == 0 )
      goto LABEL_3;
LABEL_6:
    v6 = sub_4EBBF0(0xCu, 1);
    sub_A46990(v6, v2, 1, 0);
    return v6;
  }
  v2 = (glf::IOStream::Self *)sub_4EBBF0(0x34u, 1);
  glf::FileStreamImpl::Construct(v2, (int)(uintptr_t)(s), 129);
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_2048D28);
  if ( (uint8_t)glf::Stream::IsOpened(v2) != 0 )
    goto LABEL_6;
LABEL_3:
  (*(void (**)(glf::IOStream::Self *))(*(uint32_t *)v2 + 4))(v2);
  return 0;
}

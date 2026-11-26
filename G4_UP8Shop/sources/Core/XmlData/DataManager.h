#pragma once
// ============================================================================
// Core/XmlData/DataManager.h
// Reconstructed from 0xa9fdc0..0xaf0fc0 in lib/x86/libGangstar4.so
// ============================================================================

#include "Core/Utils/StreamBase.h"
#include "Core/XmlData/animation_sets.xml.hpp"
#include "Core/XmlData/animationdescriptors.xml.hpp"
#include "Core/XmlData/batch_generator.xml.hpp"
#include "Core/XmlData/camera_presets.xml.hpp"
#include "Core/XmlData/camera_presets_groups.xml.hpp"
#include "Core/XmlData/character_sfx.xml.hpp"
#include "Core/XmlData/cheat_scripts.xml.hpp"
#include "Core/XmlData/cheat_settings.xml.hpp"
#include "Core/XmlData/classesanim_id.xml.hpp"
#include "Core/XmlData/dialog_sounds.xml.hpp"
#include "Core/XmlData/dialogs_.xml.hpp"
#include "Core/XmlData/factions_.xml.hpp"
#include "Core/XmlData/gang_battles.xml.hpp"
#include "Core/XmlData/gear_.xml.hpp"
#include "Core/XmlData/giv_abilities.xml.hpp"
#include "Core/XmlData/giv_abilities_definitions.xml.hpp"
#include "Core/XmlData/giv_abilities_models.xml.hpp"
#include "Core/XmlData/giv_ai_properties.xml.hpp"
#include "Core/XmlData/giv_collectible.xml.hpp"
#include "Core/XmlData/giv_daily_gifts.xml.hpp"
#include "Core/XmlData/giv_damageinfo.xml.hpp"
#include "Core/XmlData/giv_daytime.xml.hpp"
#include "Core/XmlData/giv_fadeinfos.xml.hpp"
#include "Core/XmlData/giv_interaction_properties.xml.hpp"
#include "Core/XmlData/giv_loot.xml.hpp"
#include "Core/XmlData/giv_loot_crate.xml.hpp"
#include "Core/XmlData/giv_loyalty_prizes.xml.hpp"
#include "Core/XmlData/giv_material.xml.hpp"
#include "Core/XmlData/giv_melee_strikes.xml.hpp"
#include "Core/XmlData/giv_menu_features_enability.xml.hpp"
#include "Core/XmlData/giv_menu_models.xml.hpp"
#include "Core/XmlData/giv_menu_options.xml.hpp"
#include "Core/XmlData/giv_minigames_settings.xml.hpp"
#include "Core/XmlData/giv_mission_constants.xml.hpp"
#include "Core/XmlData/giv_missions.xml.hpp"
#include "Core/XmlData/giv_old_user_gifts.xml.hpp"
#include "Core/XmlData/giv_online_federation.xml.hpp"
#include "Core/XmlData/giv_online_iap.xml.hpp"
#include "Core/XmlData/giv_options_help.xml.hpp"
#include "Core/XmlData/giv_parachute.xml.hpp"
#include "Core/XmlData/giv_pawn_shop.xml.hpp"
#include "Core/XmlData/giv_player_status.xml.hpp"
#include "Core/XmlData/giv_radio_blaster_station.xml.hpp"
#include "Core/XmlData/giv_real_estate.xml.hpp"
#include "Core/XmlData/giv_real_estate_definitions.xml.hpp"
#include "Core/XmlData/giv_respect.xml.hpp"
#include "Core/XmlData/giv_shaders.xml.hpp"
#include "Core/XmlData/giv_spawn_manager.xml.hpp"
#include "Core/XmlData/giv_stat_counters.xml.hpp"
#include "Core/XmlData/giv_steering_behaviors.xml.hpp"
#include "Core/XmlData/giv_tattoos_trophies.xml.hpp"
#include "Core/XmlData/giv_teleportzones.xml.hpp"
#include "Core/XmlData/giv_vehicle_cover.xml.hpp"
#include "Core/XmlData/giv_vfx.xml.hpp"
#include "Core/XmlData/giv_wanted_level.xml.hpp"
#include "Core/XmlData/giv_weapon_constants.xml.hpp"
#include "Core/XmlData/giv_weapon_mounted.xml.hpp"
#include "Core/XmlData/giv_weapon_presets.xml.hpp"
#include "Core/XmlData/giv_weapon_projectile.xml.hpp"
#include "Core/XmlData/highlights_array.xml.hpp"
#include "Core/XmlData/levels_.xml.hpp"
#include "Core/XmlData/locations_.xml.hpp"
#include "Core/XmlData/lods_.xml.hpp"
#include "Core/XmlData/materials_preload_effects.xml.hpp"
#include "Core/XmlData/menu_constants.xml.hpp"
#include "Core/XmlData/menu_hudelementgroup.xml.hpp"
#include "Core/XmlData/menu_settings.xml.hpp"
#include "Core/XmlData/menu_tweakers.xml.hpp"
#include "Core/XmlData/new_year_decorations.xml.hpp"
#include "Core/XmlData/palettes.xml.hpp"
#include "Core/XmlData/parametric_controllers.xml.hpp"
#include "Core/XmlData/phone_performance_profiles.xml.hpp"
#include "Core/XmlData/physics.xml.hpp"
#include "Core/XmlData/physics_export.xml.hpp"
#include "Core/XmlData/physics_settings.xml.hpp"
#include "Core/XmlData/races.xml.hpp"
#include "Core/XmlData/render_lightzones.xml.hpp"
#include "Core/XmlData/render_rt_settings.xml.hpp"
#include "Core/XmlData/skills_.xml.hpp"
#include "Core/XmlData/spawn_groups.xml.hpp"
#include "Core/XmlData/stock_items.xml.hpp"
#include "Core/XmlData/stocks.xml.hpp"
#include "Core/XmlData/targeting_.xml.hpp"
#include "Core/XmlData/texture_bias.xml.hpp"
#include "Core/XmlData/types_info.xml.hpp"
#include "Core/XmlData/vehicle_doors_and_seats.xml.hpp"
#include "Core/XmlData/vehicle_soundsets.xml.hpp"
#include "Core/XmlData/vehicle_steering_settings.xml.hpp"
#include "Core/XmlData/xmldata_example.xml.hpp"

namespace xmldata {

namespace DataManager
{
    int Unload(uint32_t *a1);
    int GenerateHeaderFile(int a1, int a2, char *a3);
    int GenerateCppFile(int a1, int a2, uint32_t *a3);
    int GenerateDataManagerFiles(int a1, int a2, uint32_t *a3);
    int * GetInstance();
    int LogError(char *format, ...);
    template <typename... Args>
    inline int LogError(const char *fmt, Args... args) {
        int (*real)(char *, ...) = &LogError;
        return real(const_cast<char *>(fmt), args...);
    }
#ifndef G4_XMLDATA_DATAMANAGER_LOAD_DECLARED
#define G4_XMLDATA_DATAMANAGER_LOAD_DECLARED
    int Load(int *a1, const char *path = nullptr, int flags = 0);
    template <typename A1, typename... Rest, typename std::enable_if<!g4_can_pass<A1, int *>::value, int>::type = 0>
    inline int Load(A1 a1, Rest...) { return Load(g4_arg_cast<int *>(a1)); }
#endif
} // namespace DataManager

} // namespace xmldata

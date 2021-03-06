/**
 * @file
 * @brief Dungeon related wizard functions.
**/

#pragma once

#include <string>

// Define this constant to put the builder into a debug mode where on a veto
// triggered by a wizmode travel command or level reload, instead of retrying
// it immediately exits the builder so that you can see what happened.
//#define DEBUG_VETO_RESUME

#include "player.h"

bool wizard_create_feature(const coord_def& pos = you.pos());
void wizard_list_branches();
void wizard_map_level();
void wizard_place_stairs(bool down);
void wizard_level_travel(bool down);
void wizard_interlevel_travel();
void wizard_list_levels();
void wizard_recreate_level();
void wizard_clear_used_vaults();
bool debug_make_trap(const coord_def& pos = you.pos());
bool debug_make_shop(const coord_def& pos = you.pos());
void debug_place_map(bool primary);
void wizard_primary_vault();
void debug_test_explore();
void wizard_abyss_speed();

bool is_wizard_travel_target(const level_id l);

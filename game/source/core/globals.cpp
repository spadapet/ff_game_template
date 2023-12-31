#include "pch.h"
#include "source/core/globals.h"

const std::string_view game::strings::ID_GAME_OPTIONS = "game_options";

const size_t game::input_events::ID_UP = ff::stable_hash_func("up"sv);
const size_t game::input_events::ID_DOWN = ff::stable_hash_func("down"sv);
const size_t game::input_events::ID_LEFT = ff::stable_hash_func("left"sv);
const size_t game::input_events::ID_RIGHT = ff::stable_hash_func("right"sv);
const size_t game::input_events::ID_SHOOT_UP = ff::stable_hash_func("shoot_up"sv);
const size_t game::input_events::ID_SHOOT_DOWN = ff::stable_hash_func("shoot_down"sv);
const size_t game::input_events::ID_SHOOT_LEFT = ff::stable_hash_func("shoot_left"sv);
const size_t game::input_events::ID_SHOOT_RIGHT = ff::stable_hash_func("shoot_right"sv);
const size_t game::input_events::ID_ACTION = ff::stable_hash_func("action"sv);
const size_t game::input_events::ID_CANCEL = ff::stable_hash_func("cancel"sv);
const size_t game::input_events::ID_PAUSE = ff::stable_hash_func("pause"sv);
const size_t game::input_events::ID_START = ff::stable_hash_func("start"sv);

const size_t game::input_events::ID_DEBUG_RENDER_TOGGLE = ff::stable_hash_func("debug_render_toggle"sv);
const size_t game::input_events::ID_DEBUG_INVINCIBLE_TOGGLE = ff::stable_hash_func("invincible_toggle"sv);
const size_t game::input_events::ID_DEBUG_COMPLETE_LEVEL = ff::stable_hash_func("complete_level"sv);

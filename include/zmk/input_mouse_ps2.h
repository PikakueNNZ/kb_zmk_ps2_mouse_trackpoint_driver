/*
 * Copyright (c) 2021 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <stdbool.h>

int zmk_mouse_ps2_settings_log();
int zmk_mouse_ps2_settings_reset();

int zmk_mouse_ps2_tp_press_to_select_change(bool enabled);
int zmk_mouse_ps2_tp_sensitivity_change(int amount);
int zmk_mouse_ps2_tp_neg_inertia_change(int amount);
int zmk_mouse_ps2_tp_value6_upper_plateau_speed_change(int amount);
int zmk_mouse_ps2_tp_pts_threshold_change(int amount);
int zmk_mouse_ps2_tp_drag_hysteresis_change(int amount);

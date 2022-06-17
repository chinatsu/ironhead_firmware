// Copyright 2022 chinatsu (@chinatsu)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define I2C_DRIVER I2CD2
#define I2C1_SDA_PIN GP0
#define I2C1_SCL_PIN GP1

#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { GP7, GP6, GP5, GP4 }
#define MATRIX_COL_PINS { GP29, GP28, GP27, GP26, GP2, GP3 }

#define MATRIX_ROW_PINS_RIGHT { GP26, GP27, GP28, GP29 }
#define MATRIX_COL_PINS_RIGHT { GP3, GP4, GP5, GP6, GP7, GP2 }

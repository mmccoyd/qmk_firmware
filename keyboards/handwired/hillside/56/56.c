// Copyright 2022 Michael McCoyd (@mmccoyd)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "56.h"

// Keymatrix spots to ignore, as one signals handedness (and other has no key)
const matrix_row_t matrix_mask[] = {
//c:543210  column id's
  0b111111,
  0b111111,
  0b111111,
  0b011111,
  0b111110,
  
//c:543210  
  0b111111,
  0b111111,
  0b111111,
  0b011111,
  0b111110
};

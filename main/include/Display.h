/*
 *
 *    Copyright (c) 2018 Nest Labs, Inc.
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#ifndef DISPLAY_H
#define DISPLAY_H

#include "esp_system.h"

#if CONFIG_DEVICE_TYPE_M5STACK

#define CONFIG_HAVE_DISPLAY 1
#define CONFIG_EXAMPLE_DISPLAY_TYPE 3

#else // !CONFIG_DEVICE_TYPE_M5STACK

#define CONFIG_HAVE_DISPLAY 0

#endif // !CONFIG_DEVICE_TYPE_M5STACK

#if CONFIG_HAVE_DISPLAY

extern "C" {
#include "tftspi.h"
#include "tft.h"
} // extern "C"

extern uint16_t DisplayHeight;
extern uint16_t DisplayWidth;

extern esp_err_t InitDisplay();
extern void ClearDisplay();
extern void DisplayMessageCentered(const char *msg, uint16_t vpos);

#endif // #if CONFIG_HAVE_DISPLAY

#endif // DISPLAY_H

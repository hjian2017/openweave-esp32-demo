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

#ifndef STATUS_INDICATOR_WIDGET_H
#define STATUS_INDICATOR_WIDGET_H

#include "Display.h"

#if CONFIG_HAVE_DISPLAY

class StatusIndicatorWidget
{
public:
    enum
    {
        kMaxIndicators = 5
    };

    color_t Color;
    uint16_t Size;
    uint16_t VPos;
    uint16_t HMargin;
    char Char[kMaxIndicators];
    bool State[kMaxIndicators];

    void Init(uint8_t numIndicators);
    void Display();
    void Update();

protected:
    uint8_t mNumIndicators;

private:
    char mLastChar[kMaxIndicators];
    bool mLastState[kMaxIndicators];

    void DrawIndicator(char indicatorChar, bool state, uint8_t indicatorPos) const;
};

#endif // CONFIG_HAVE_DISPLAY

#endif // STATUS_INDICATOR_WIDGET_H

#ifndef COLOR_UTILS_H
#define COLOR_UTILS_H

#include "ColorPair.h"

namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}

#endif

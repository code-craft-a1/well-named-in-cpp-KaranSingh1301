#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

#include <string>
#include "ColorMap.h"

namespace TelCoColorCoder
{
    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        ColorPair(MajorColor major, MinorColor minor);
        MajorColor getMajor();
        MinorColor getMinor();
        std::string ToString();
    };
}

#endif

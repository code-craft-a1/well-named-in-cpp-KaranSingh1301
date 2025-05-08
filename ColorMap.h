#ifndef COLOR_MAP_H
#define COLOR_MAP_H

namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];

    const int numberOfMajorColors = 5;
    const int numberOfMinorColors = 5;
}

#endif

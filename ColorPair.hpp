#ifndef COLORPAIR_H
#define COLORPAIR_H

#include <iostream>

namespace Color
{
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[];
extern const int numberOfMajorColors;
extern const char* MinorColorNames[];
extern const int numberOfMinorColors;
class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
            MajorColor getMajor() {
                return majorColor;
            }
            MinorColor getMinor() {
                return minorColor;
            }
            std::string ToString()
            {
                std::string colorPairStr = MajorColorNames[majorColor];
                colorPairStr += " ";
                colorPairStr += MinorColorNames[minorColor];
                return colorPairStr;
            }
    };
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern int GetPairNumberFromColor(MajorColor major, MinorColor minor);
extern void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor);
extern void testPairToNumber(MajorColor major_color, MinorColor minor_color, int expectedPairNumber);
}
#endif

#include "ColorPair.hpp"

namespace Color
{
const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet" };
const int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate"};
const int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

ColorPair GetColorFromPairNumber(int pairNumber) 
{
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
}
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) 
{
        return major * numberOfMinorColors + minor + 1;
}
}

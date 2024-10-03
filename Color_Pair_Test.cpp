#include "ColorPair.hpp"
#include <assert.h>

namespace Color
{
void testNumberToPair(int pairNumber,
    MajorColor expectedMajor,
    MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    MajorColor major_color,
    MinorColor minor_color,
    int expectedPairNumber)
{
    int pairNumber = GetPairNumberFromColor(major_color, minor_color);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}
}

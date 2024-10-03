#include "ColorPair.hpp"
#include <iomanip>
#include <string>


namespace Color
{
void printColorCodingManual() {
    int pairNumber = 1;  // Start numbering from 1

    std::cout << "Color Code Reference Manual:\n";
    std::cout << std::setw(5) << "Pair" << std::setw(15) << "Major Color" << std::setw(15) << "Minor Color" << "\n";
    std::cout << "-------------------------------------------\n";

    // Iterate through all combinations of major and minor colors
    for (int majorIndex = 0; majorIndex < numberOfMajorColors; ++majorIndex) {
        for (int minorIndex = 0; minorIndex < numberOfMinorColors; ++minorIndex) {
            // Create a ColorPair object
            ColorPair colorPair(static_cast<MajorColor>(majorIndex), static_cast<MinorColor>(minorIndex));

            // Print the pair number and the color pair
            std::cout << std::setw(5) << pairNumber << std::setw(15)
                      << MajorColorNames[majorIndex] << std::setw(15)
                      << MinorColorNames[minorIndex] << "\n";
            pairNumber++;
        }
    }
}

}
int main()
{
    Color::printColorCodingManual();
    
    Color::testNumberToPair(4, Color::WHITE, Color::BROWN);
    Color::testNumberToPair(5, Color::WHITE, Color::SLATE);

    Color::testPairToNumber(Color::BLACK, Color::ORANGE, 12);
    Color::testPairToNumber(Color::VIOLET, Color::SLATE, 25);

    return 0;
}

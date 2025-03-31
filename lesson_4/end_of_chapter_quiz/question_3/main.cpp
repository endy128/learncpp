#include <iostream>

#define GRAVITY 9.8

int getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    int height{};
    std::cin >> height;
    return height;
}

double getBallHeight(int height)
{
    return GRAVITY * (static_cast<double>(height) * static_cast<double>(height)) / 2.0;
}

// Prints ball height above ground
void printBallHeight(double ballHeight, int seconds)
{
	if (ballHeight > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

int main()
{
    double towerHeight{static_cast<double>(getTowerHeight())};
    for (int i = 0; i <= 5; ++i) {
        printBallHeight(towerHeight - getBallHeight(i), i);
    }
}

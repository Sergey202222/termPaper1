#include "Eagle.hpp"

vehicle::Eagle::Eagle()
{
	name = "���";
	speed = 8;
}

double vehicle::Eagle::Time(double distance)
{
	return 0.94 * distance / speed;
}
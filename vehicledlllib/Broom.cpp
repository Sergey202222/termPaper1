#include "Broom.hpp"

vehicle::Broom::Broom()
{
	name = "Метла";
	speed = 20;
}

double vehicle::Broom::Time(double distance)
{
	int distanceReductionCoefficient = distance / 1000;
	return distance * (1 - static_cast<double>(distanceReductionCoefficient) / 100) / speed;
}
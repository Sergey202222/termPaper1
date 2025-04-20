#include "FlyingCarpet.hpp"

vehicle::FlyingCarpet::FlyingCarpet()
{
	name = "Ковёр-самолёт";
	speed = 10;
}

double vehicle::FlyingCarpet::Time(double distance)
{
	if (distance >= 1000 && distance < 5000) distance *= 0.97;
	else if (distance < 10000) distance *= 0.9;
	else if (distance >= 10000) distance *= 0.95;

	return distance / speed;
}
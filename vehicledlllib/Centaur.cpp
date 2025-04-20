#include "Centaur.hpp"

vehicle::Centaur::Centaur()
{
	name = "Кентавр";
	speed = 15;
	travelTimeBeforeRest = 8;
	allSubsequentTimes = 2;
}

double vehicle::Centaur::Time(double distance)
{
	double time{ static_cast<double>(distance / speed)};
	double time1{ time };
	int iteration{};
	while (iteration + travelTimeBeforeRest < time1)
	{
		time += allSubsequentTimes;
		iteration += travelTimeBeforeRest;
	}
	return time;
}
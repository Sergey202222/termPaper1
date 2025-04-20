#include "TheFastMovingCamel.hpp"

vehicle::TheFastMovingCamel::TheFastMovingCamel()
{
	name = "Верблюд-быстроход";
	speed = 40;
	travelTimeBeforeRest = 10;
	firstVacation = 5;
	secondVacation = 6.5;
	allSubsequentTimes = 8;
}

double vehicle::TheFastMovingCamel::Time(double distance)
{
	double time{ static_cast<double>(distance / speed) };
	double time1 = time;
	time += firstVacation;
	time += secondVacation;
	int iteration{2 * travelTimeBeforeRest};
	while (iteration + travelTimeBeforeRest < time1)
	{
		time += allSubsequentTimes;
		iteration += travelTimeBeforeRest;
	}
	return time;
}
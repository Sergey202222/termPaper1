#include "Camel.hpp"

vehicle::Camel::Camel()
{
	name = "Верблюд";
	speed = 10;
	travelTimeBeforeRest = 30;
	firstVacation = 5;
	allSubsequentTimes = 8;
}

double vehicle::Camel::Time(double distance)
{
	double time{static_cast<double>(distance / speed)};
	double time1{time};
	time += firstVacation;
	int iteration{travelTimeBeforeRest};
	while (iteration + travelTimeBeforeRest < time1)
	{
		time += allSubsequentTimes;
		iteration += travelTimeBeforeRest;
	}
	return time;
}
#include "Entity.hpp"

vehicle::Entity::Entity()
{
	name = "Ентити";
	speed = 0;
	travelTimeBeforeRest = 0;
	firstVacation = 0;
	secondVacation = 0;
	allSubsequentTimes = 0;
}

double vehicle::Entity::Time(double distance)
{
	return 0;
}

std::string vehicle::Entity::get_name()
{
	return name;
}
#include "Transport.hpp"

vehicle::Transport::Transport()
{
	name = "";
}

std::string vehicle::Transport::get_name()
{
	return name;
}

double vehicle::Transport::Time(double)
{
	return 0;
}
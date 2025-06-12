#pragma once
#include "Transport.hpp"
#include <iostream>

namespace vehicle
{
    class VEHICLEDLLLIB_API GroundTransport : public Transport
	{
	protected:
		int speed;
		int travelTimeBeforeRest;
		double firstVacation;
		double secondVacation;
		double allSubsequentTimes;
	public:
		GroundTransport();
	};
}
#pragma once
#include "AirTransport.hpp"

namespace vehicle
{
	class VEHICLEDLLLIB_API Broom : public AirTransport
	{
	public:
		Broom();
		double Time(double);
	};
}
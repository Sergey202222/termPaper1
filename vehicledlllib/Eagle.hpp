#pragma once
#include "AirTransport.hpp"

namespace vehicle
{
	class VEHICLEDLLLIB_API Eagle : public AirTransport
	{
	public:
		Eagle();
		double Time(double);
	};
}
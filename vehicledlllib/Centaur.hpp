#pragma once
#include "GroundTransport.hpp"

namespace vehicle
{
	class VEHICLEDLLLIB_API Centaur : public GroundTransport
	{
	public:
		Centaur();
		double Time(double) override;
	};
}
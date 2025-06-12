#pragma once
#include "GroundTransport.hpp"

namespace vehicle
{
	class VEHICLEDLLLIB_API Camel : public GroundTransport
	{
	public:
		Camel();
		double Time(double) override;
	};
}
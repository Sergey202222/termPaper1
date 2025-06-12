#pragma once
#include "GroundTransport.hpp"

namespace vehicle
{
	class VEHICLEDLLLIB_API TheFastMovingCamel : public GroundTransport
	{
	public:
		TheFastMovingCamel();
		double Time(double) override;
	};
}
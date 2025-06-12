#pragma once
#include "AirTransport.hpp"

namespace vehicle
{
	class VEHICLEDLLLIB_API FlyingCarpet : public AirTransport
	{
	public:
		FlyingCarpet();
		double Time(double) override;
	};
}
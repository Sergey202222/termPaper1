#pragma once
#include "Transport.hpp"

namespace vehicle
{
	class VEHICLEDLLLIB_API AirTransport : public Transport
	{
	protected:
		int speed;
	public:
		AirTransport();
	};
}
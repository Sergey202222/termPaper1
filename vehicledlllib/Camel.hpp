#pragma once
#include "Entity.hpp"

namespace vehicle
{
	class VEHICLEDLLLIB_API Camel : public Entity
	{
	public:
		Camel();
		double Time(double) override;
	};
}
#pragma once
#include "Entity.hpp"

namespace vehicle
{
	class VEHICLEDLLLIB_API Broom : public Entity
	{
	public:
		Broom();
		double Time(double);
	};
}
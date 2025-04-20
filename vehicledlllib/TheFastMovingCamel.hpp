#pragma once
#include "Entity.hpp"

namespace vehicle
{
	class VEHICLEDLLLIB_API TheFastMovingCamel : public Entity
	{
	public:
		TheFastMovingCamel();
		double Time(double) override;
	};
}
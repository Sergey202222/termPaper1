#pragma once
#include "Entity.hpp"

namespace vehicle
{
	class VEHICLEDLLLIB_API Centaur : public Entity
	{
	public:
		Centaur();
		double Time(double) override;
	};
}
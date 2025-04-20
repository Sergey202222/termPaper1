#pragma once
#include "Entity.hpp"

namespace vehicle
{
	class VEHICLEDLLLIB_API Eagle : public Entity
	{
	public:
		Eagle();
		double Time(double);
	};
}
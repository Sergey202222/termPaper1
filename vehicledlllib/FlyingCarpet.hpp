#pragma once
#include "Entity.hpp"

namespace vehicle
{
	class VEHICLEDLLLIB_API FlyingCarpet : public Entity
	{
	public:
		FlyingCarpet();
		double Time(double) override;
	};
}
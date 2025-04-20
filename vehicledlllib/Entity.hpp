#pragma once
#ifdef VEHICLEDLLLIB_EXPORTS
#define VEHICLEDLLLIB_API __declspec(dllexport)
#else
#define VEHICLEDLLLIB_API __declspec(dllimport)
#endif
#include <iostream>

namespace vehicle
{
    class VEHICLEDLLLIB_API Entity
	{
	protected:
		std::string name;
		int speed;
		int travelTimeBeforeRest;
		double firstVacation;
		double secondVacation;
		double allSubsequentTimes;
	public:
		Entity();
		virtual double Time(double);
		std::string get_name();
	};
}
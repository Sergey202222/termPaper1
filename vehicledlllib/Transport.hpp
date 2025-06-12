#pragma once
#ifdef VEHICLEDLLLIB_EXPORTS
#define VEHICLEDLLLIB_API __declspec(dllexport)
#else
#define VEHICLEDLLLIB_API __declspec(dllimport)
#endif

#include <string>

namespace vehicle
{
	class VEHICLEDLLLIB_API Transport
	{
	protected:
		std::string name;
	public:
		Transport();
		std::string get_name();
		virtual double Time(double);
	};
}
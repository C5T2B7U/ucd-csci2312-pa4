
#include "Game.h"
#include "Resource.h"
#include "Advantage.h"


namespace Gaming
{


	const char Advantage::ADVANTAGE_ID = 'D';
	const double Advantage::ADVANTAGE_MULT_FACTOR = 2.0;


	Gaming::Advantage::Advantage(const Game &g, const Position &p, double capacity) : Resource(g, p, capacity)
	{

	}


	Gaming::Advantage::~Advantage()
	{

	}


	void Gaming::Advantage::print(std::ostream &os) const
	{
		std::string buffer;
		buffer += ADVANTAGE_ID;
		buffer += Advantage::__id;
		os << buffer;
	}


	double Gaming::Advantage::getCapacity() const
	{
		return __capacity * ADVANTAGE_MULT_FACTOR;
	}


	double Gaming::Advantage::consume()
	{
		return Resource::consume();
	}


//	void Advantage::age()
//	{
//		Advantage::Resource::__capacity /= RESOURCE_SPOIL_FACTOR;
//	}


}
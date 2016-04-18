
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

	}


	double Gaming::Advantage::getCapacity() const
	{
		return Resource::getCapacity();
	}


	double Gaming::Advantage::consume()
	{
		return Resource::consume();
	}


}
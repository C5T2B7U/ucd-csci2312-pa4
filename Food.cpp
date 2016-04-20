
#include "Game.h"
#include "Food.h"


namespace Gaming
{

	const char Food::FOOD_ID = 'F';

	Gaming::Food::Food(const Game &g, const Position &p, double capacity) : Resource(g, p, capacity)
	{

	}


	Gaming::Food::~Food()
	{

	}


	void Gaming::Food::print(std::ostream &os) const
	{
		std::string buffer;
		buffer += FOOD_ID;
		buffer += Food::__id;
		os << buffer;
	}


}
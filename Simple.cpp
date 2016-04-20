//#include <adomd.h>
#include "Game.h"
#include "Gaming.h"
#include "Simple.h"


namespace Gaming
{


	const char Simple::SIMPLE_ID = 'S';



	Gaming::Simple::Simple(const Game &g, const Position &p, double energy) : Agent(g, p, energy)
	{

	}


	Gaming::Simple::~Simple()
	{

	}


	void Gaming::Simple::print(std::ostream &os) const
	{
		std::string buffer;
		buffer += SIMPLE_ID;
		buffer += Simple::__id;
		os << buffer;
	}


	Gaming::ActionType Gaming::Simple::takeTurn(const Gaming::Surroundings &s) const
	{
		return S;
	}


}
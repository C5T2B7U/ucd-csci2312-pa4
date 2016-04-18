//#include <adomd.h>
#include "Game.h"
#include "Gaming.h"
#include "Strategic.h"


namespace Gaming
{


	const char Strategic::STRATEGIC_ID = 'T';



	Gaming::Strategic::Strategic(const Game &g, const Position &p, double energy, Strategy *s) : Agent(g, p, energy), __strategy(s)
	{

	}


	Gaming::Strategic::~Strategic()
	{

	}


	void Gaming::Strategic::print(std::ostream &os) const
	{

	}


	Gaming::ActionType Gaming::Strategic::takeTurn(const Gaming::Surroundings &s) const
	{
		return S;
	}


}
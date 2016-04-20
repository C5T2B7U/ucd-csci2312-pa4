//#include <adomd.h>
//#include <resapi.h>
#include "Game.h"
#include "Piece.h"
#include "Agent.h"


namespace Gaming
{

	const double Agent::AGENT_FATIGUE_RATE = 0.3;


	Gaming::Agent::Agent(const Game &g, const Position &p, double energy) :  Piece(g, p), __energy(energy)
	{
	}

	Gaming::Agent::~Agent()
	{

	}

	void Gaming::Agent::age()
	{
		__energy -= AGENT_FATIGUE_RATE;
	}

	Piece &Gaming::Agent::interact(Agent *arg)
	{
		// Piece temp;
		return *this;
	}

	Piece &Gaming::Agent::interact(Resource *arg)
	{
		// Piece temp;
		return *this;
	}

	Piece &Agent::operator*(Piece &other)
	{
		return other;
	}


	std::ostream &operator<<(std::ostream &os, const Piece &piece)
	{
		return os;
	}


}
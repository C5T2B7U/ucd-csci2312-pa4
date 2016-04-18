#include "Gaming.h"
#include "AggressiveAgentStrategy.h"
#include "Game.h"

namespace Gaming
{

	const double AggressiveAgentStrategy::DEFAULT_AGGRESSION_THRESHOLD = Game::STARTING_AGENT_ENERGY * 0.75;


	Gaming::AggressiveAgentStrategy::AggressiveAgentStrategy(double agentEnergy)
	{

	}


	Gaming::AggressiveAgentStrategy::~AggressiveAgentStrategy()
	{

	}


	Gaming::ActionType Gaming::AggressiveAgentStrategy::operator()(const Surroundings &s) const
	{
		return S;
	}


}
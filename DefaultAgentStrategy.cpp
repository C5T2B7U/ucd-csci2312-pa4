#include "Gaming.h"
#include "DefaultAgentStrategy.h"


namespace Gaming
{


	Gaming::DefaultAgentStrategy::DefaultAgentStrategy()
	{

	}


	Gaming::DefaultAgentStrategy::~DefaultAgentStrategy()
	{

	}


	Gaming::ActionType Gaming::DefaultAgentStrategy::operator()(const Surroundings &s) const
	{
		return S;
	}


}
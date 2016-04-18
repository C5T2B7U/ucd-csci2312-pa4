#include "Game.h"
#include "Gaming.h"
#include "Resource.h"


namespace Gaming
{


	const double Resource::RESOURCE_SPOIL_FACTOR = 1.2;


	Gaming::Resource::Resource(const Game &g, const Position &p, double capacity) : Piece(g, p), __capacity(capacity)
	{

	}


	Gaming::Resource::~Resource()
	{

	}


	double Gaming::Resource::consume()
	{
		return 0.0;
	}


	void Gaming::Resource::age()
	{

	}


	Gaming::ActionType Gaming::Resource::takeTurn(const Gaming::Surroundings &s) const
	{
		return S;
	}


	Gaming::Piece &Gaming::Resource::operator*(Gaming::Piece &other)
	{
		return *this;
	}


	Gaming::Piece &Gaming::Resource::interact(Gaming::Agent *arg)
	{
		return *this;
	}


	Gaming::Piece &Gaming::Resource::interact(Resource *arg)
	{
		return *this;
	}


}
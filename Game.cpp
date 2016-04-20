#include "Game.h"


namespace Gaming
{



	const unsigned int Game::NUM_INIT_AGENT_FACTOR = 4;
	const unsigned int Game::NUM_INIT_RESOURCE_FACTOR = 2;
	const unsigned Game::MIN_WIDTH = 3;
	const unsigned Game::MIN_HEIGHT = 3;
	const double Game::STARTING_AGENT_ENERGY = 20;
	const double Game::STARTING_RESOURCE_CAPACITY = 10;






	PositionRandomizer Game::__posRandomizer = PositionRandomizer();



	void Gaming::Game::populate()
	{

	}


	Gaming::Game::Game()
	{
		__round = 0;
		__numInitAgents = (__width * __height) / NUM_INIT_AGENT_FACTOR;
		__numInitResources = (__width * __height) / NUM_INIT_RESOURCE_FACTOR;
	}


	Gaming::Game::Game(unsigned width, unsigned height, bool manual) : __width(width), __height(height)
	{
		__round = 0;
		__numInitAgents = (__width * __height) / NUM_INIT_AGENT_FACTOR;
		__numInitResources = (__width * __height) / NUM_INIT_RESOURCE_FACTOR;


//		unsigned int numStrategic = __numInitAgents / 2;
//		unsigned int numSimple = __numInitAgents - numStrategic;
//		unsigned int numAdvantages = __numInitResources / 4;
//		unsigned int numFoods = __numInitResources - numAdvantages;
	}


//	Gaming::Game::Game(const Game &another)
//	{
//
//	}

	Gaming::Game::~Game()
	{

	}

	unsigned int Gaming::Game::getNumPieces() const
	{
		return 0;
	}

	unsigned int Gaming::Game::getNumAgents() const
	{
		return 0;
	}

	unsigned int Gaming::Game::getNumSimple() const
	{
		return 0;
	}

	unsigned int Gaming::Game::getNumStrategic() const
	{
		return 0;
	}

	unsigned int Gaming::Game::getNumResources() const
	{
		return 0;
	}

	const Piece *Gaming::Game::getPiece(unsigned int x, unsigned int y) const
	{
		return nullptr;
	}

	void Gaming::Game::addSimple(const Position &position)
	{

	}

	void Gaming::Game::addSimple(const Position &position, double energy)
	{

	}

	void Gaming::Game::addSimple(unsigned x, unsigned y)
	{

	}

	void Gaming::Game::addSimple(unsigned x, unsigned y, double energy)
	{

	}

	void Gaming::Game::addStrategic(const Position &position, Gaming::Strategy *s)
	{

	}

	void Gaming::Game::addStrategic(unsigned x, unsigned y, Gaming::Strategy *s)
	{

	}

	void Gaming::Game::addFood(const Position &position)
	{

	}

	void Gaming::Game::addFood(unsigned x, unsigned y)
	{

	}

	void Gaming::Game::addAdvantage(const Position &position)
	{

	}

	void Gaming::Game::addAdvantage(unsigned x, unsigned y)
	{

	}

	const Surroundings Gaming::Game::getSurroundings(const Position &pos) const
	{
		return Gaming::Surroundings();
	}

	const ActionType Gaming::Game::reachSurroundings(const Position &from, const Position &to)
	{
		return S;
	}

	bool Gaming::Game::isLegal(const ActionType &ac, const Position &pos) const
	{
		return true;
	}

	const Position Gaming::Game::move(const Position &pos, const ActionType &ac) const
	{
		return Gaming::Position();
	}

	void Gaming::Game::round()
	{

	}

	void Gaming::Game::play(bool verbose)
	{

	}

	std::ostream &operator<<(std::ostream &os, const Game &game)
	{
		os << "Round: " << game.getRound() << "\n" << "[]";
		return os;
	}


}
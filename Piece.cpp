#include "Piece.h"


namespace Gaming
{

	unsigned int Piece::__idGen = 0;


	Gaming::Piece::Piece(const Game &g, const Position &p) : __game(g), __position(p)
	{
		__id = ++__idGen;
	}

	Gaming::Piece::~Piece()
	{

	}


}
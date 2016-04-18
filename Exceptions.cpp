#include <iosfwd>
#include "Exceptions.h"


namespace Gaming
{


	void Gaming::GamingException::setName(std::string name)
	{

	}


	Gaming::DimensionEx::DimensionEx(unsigned expWidth, unsigned expHeight, unsigned width, unsigned height) :
			__exp_width(expWidth), __exp_height(expHeight), __width(width), __height(height)
	{

	}


	unsigned Gaming::DimensionEx::getExpWidth() const
	{
		return 0;
	}


	unsigned Gaming::DimensionEx::getExpHeight() const
	{
		return 0;
	}


	unsigned Gaming::DimensionEx::getWidth() const
	{
		return 0;
	}


	unsigned Gaming::DimensionEx::getHeight() const
	{
		return 0;
	}


	void Gaming::InsufficientDimensionsEx::__print_args(std::ostream &os) const
	{

	}


	Gaming::InsufficientDimensionsEx::InsufficientDimensionsEx(unsigned minWidth, unsigned minHeight, unsigned width,
															   unsigned height) :
			DimensionEx(minWidth, minHeight, width, height)
	{

	}


	void Gaming::OutOfBoundsEx::__print_args(std::ostream &os) const
	{

	}


	Gaming::OutOfBoundsEx::OutOfBoundsEx(unsigned maxWidth, unsigned maxHeight, unsigned width, unsigned height) :
			DimensionEx(maxWidth, maxHeight, width, height)
	{

	}


	void Gaming::PositionEx::__print_args(std::ostream &os) const
	{

	}


	Gaming::PositionEx::PositionEx(unsigned x, unsigned y) : __x(x), __y(y)
	{

	}


	Gaming::PositionNonemptyEx::PositionNonemptyEx(unsigned x, unsigned y) : PositionEx(x, y)
	{

	}


	Gaming::PositionEmptyEx::PositionEmptyEx(unsigned x, unsigned y) : PositionEx(x, y)
	{

	}


	void Gaming::PosVectorEmptyEx::__print_args(std::ostream &os) const
	{

	}


	Gaming::PosVectorEmptyEx::PosVectorEmptyEx()
	{

	}


	std::ostream &operator<<(std::ostream &os, const GamingException &ex)
	{
		return os;
	}


}
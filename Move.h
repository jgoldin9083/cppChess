#ifndef _MOVE
#define _MOVE

#include "Square.h"

class Move{
	public:
		Move(Square s1, Square s2);
		Square from,to;
		int hashCode();
		Move clone();
};

#endif

#include "Move.h"

Move::Move(Square s1,Square s2){
	from = s1;
	to = s2;
}

int Move::hashCode(){
	return from.hashCode()+64*to.hashCode();
}

Move Move::clone(){
	return *(new Move(from,to));
}

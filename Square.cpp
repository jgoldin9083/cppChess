#include "Square.h"

Square::Square(){};

Square::Square(int c,int r){
		col = c;
		row = r;
}

Square::hashCode(){
	return col*8+row;
}

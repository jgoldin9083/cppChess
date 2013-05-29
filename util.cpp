#include "Piece.h"
#include "Color.h"

COLOR opposite(COLOR c) {
		if(c == WHITE){return BLACK;}
		else{return WHITE;}
};

COLOR color(PIECE p){
switch(p){
	case WHITEPAWN:
	case WHITEROOK:
	case WHITEKNIGHT:
	case WHITEBISHOP:
	case WHITEQUEEN:
	case WHITEKING:
		return WHITE;
	break;
	case BLACKPAWN:
	case BLACKROOK:
	case BLACKKNIGHT:
	case BLACKBISHOP:
	case BLACKQUEEN:
	case BLACKKING:
		return BLACK;
	break;
	default: //printf("emptyColor");
		return WHITE;
	break;
}
};

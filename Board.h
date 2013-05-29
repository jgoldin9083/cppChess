#ifndef _BOARD
#define _BOARD

#include "Piece.h"
#include "Square.h"
#include "Color.h"
#include "util.h"

class Board{
	public:
		Board();
		PIECE board[8][8];
//		Move lastMove;
//		BoardState bs;
		Square WKing,BKing;
//		varsizeArray turns;
		bool WQCastle,WKCastle,BQCastle,BKCastle;
		COLOR turn;
//		setBoardState(BoardState bs);
		PIECE PieceAt(Square s);
		PIECE PieceAt(int col,int row);
//		void Move(Move m);
		void setBoard(Board b);
		bool canCastle(COLOR c, PIECE side);
		void display();
		Square King(COLOR c);
		void putPiece(PIECE p,Square s);
		Board clone();
		bool checkForRepeat();
		bool equals(Board b);
};
#endif

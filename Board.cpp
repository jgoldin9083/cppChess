#include <fstream>
#include <iostream>
#include "Board.h"

Board::Board(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			board[i][j]= EMPTY;
		}
	}
	WKing = *(new Square(0,0));
	BKing = *(new Square(0,0));

	WQCastle = true;
	WKCastle = true;
	BQCastle = true;
	BKCastle = true;
	
}
PIECE Board::PieceAt(Square s){
	return board[s.col][s.row];
}
PIECE Board::PieceAt(int col,int row){
	return board[col][row];
}
void Board::setBoard(Board b){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			board[i][j]= b.board[i][j];
		}
	}
	WKing = b.WKing;
	BKing = b.BKing;
	WQCastle = b.WQCastle;
	WKCastle = b.WKCastle;
	BQCastle = b.BQCastle;
	BKCastle = b.BKCastle;
	turn = b.turn;	
}
bool Board::canCastle(COLOR c,PIECE side){
	if(c == WHITE){
		if(side == BLACKQUEEN){return WQCastle;}
		else{return WKCastle;}
	}
	else{
		if(side == BLACKQUEEN){return BQCastle;}
		else{return BKCastle;}
	}
}
void Board::display(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			std::cout << board[i][j];
		}
		printf("\n");
	}
}
Square Board::King(COLOR c){
	if(c == WHITE){return WKing;}
	else{return BKing;}
}
void Board::putPiece(PIECE p,Square s){
	board[s.col][s.row] = p;
}
Board Board::clone(){
	return *(new Board());
}
bool Board::checkForRepeat(){
	return false;
}
bool Board::equals(Board b){
	return false;
}
void Board::setBoardState(BoardState bs){
	this->bs = bs;
}

int main(int argc, char* argv[]){
	Board board = *(new Board());
	board.display();
	return 0;
}

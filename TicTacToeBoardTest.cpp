/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, unitTestName)
{
	ASSERT_TRUE(true);
}
*/

TEST(TicTacToeBoardTest, toggleTurnX)
{
	TicTacToeBoard obj;
	Piece outcome = obj.toggleTurn();
	outcome = obj.toggleTurn();
	ASSERT_EQ(outcome, X);	
}

TEST(TicTacToeBoardTest, toggleTurnO)
{
	TicTacToeBoard obj;
	Piece outcome = obj.toggleTurn();
	ASSERT_EQ(outcome, O);	
}


TEST(TicTacToeBoardTest, placePieceBlank)
{
	TicTacToeBoard obj;
	Piece outcome = obj.placePiece(0,0);
	ASSERT_EQ(outcome, X);	
}

TEST(TicTacToeBoardTest, placePieceNotBlankX)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	obj.toggleTurn();
	Piece outcome = obj.placePiece(0,0);
	ASSERT_EQ(outcome, X);	
}

TEST(TicTacToeBoardTest, placePieceNotBlankO)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	obj.toggleTurn();
	Piece outcome = obj.placePiece(1,0);
	ASSERT_EQ(outcome, O);	
}

TEST(TicTacToeBoardTest, placePieceOOB)
{
	TicTacToeBoard obj;
	Piece outcome = obj.placePiece(5,0);
	ASSERT_EQ(outcome, Invalid);	
}



TEST(TicTacToeBoardTest, getPieceX)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	Piece outcome = obj.getPiece(0,0);
	ASSERT_EQ(outcome, X);	
}

TEST(TicTacToeBoardTest, getPieceO)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	obj.toggleTurn();
	obj.placePiece(1,0);
	Piece outcome = obj.getPiece(1,0);
	ASSERT_EQ(outcome, O);	
}

TEST(TicTacToeBoardTest, getPieceOOB)
{
	TicTacToeBoard obj;
	Piece outcome = obj.getPiece(5,0);
	ASSERT_EQ(outcome, Invalid);	
}

TEST(TicTacToeBoardTest, getPieceBlank)
{
	TicTacToeBoard obj;
	Piece outcome = obj.getPiece(0,0);
	ASSERT_EQ(outcome, Blank);	
}




TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	Piece outcome = obj.getWinner();
	ASSERT_EQ(outcome, Invalid);	
}
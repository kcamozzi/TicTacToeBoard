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

TEST(TicTacToeBoardTest, toggleTurn)
{
	TicTacToeBoard obj;
	Piece outcome = obj.toggleTurn();
	ASSERT_EQ(outcome, Invalid);	
}

TEST(TicTacToeBoardTest, placePiece)
{
	TicTacToeBoard obj;
	Piece outcome = obj.placePiece(0,0);
	ASSERT_EQ(outcome, Invalid);	
}

TEST(TicTacToeBoardTest, getPiece)
{
	TicTacToeBoard obj;
	Piece outcome = obj.getPiece(0,0);
	ASSERT_EQ(outcome, Invalid);	
}

TEST(TicTacToeBoardTest, getWinner)
{
	TicTacToeBoard obj;
	Piece outcome = obj.getWinner();
	ASSERT_EQ(outcome, Invalid);	
}
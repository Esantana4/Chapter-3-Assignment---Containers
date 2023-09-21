#pragma once
#include <iostream>
#include <stack>
#include <chrono>
#include <cmath>
#include <iomanip>
#include <vector>
#include <map>
#include <string>

using namespace std;

int inputInteger(string prompt, int start, bool greater);
char inputChar(string prompt, string options);
char inputChar(string prompt, char yes, char no);

class test
{
private:
	char playAgain;
	int ringsNumber;
	int moves, discsTotalNumber = 64;
	//using vector STL for my all 3 pegs of the disc
	vector<int> pegA, pegB, pegC;
	char choicePeg1, choicePeg2;
	//going to use map STL to keep track of each moves and how fast they go, and total moves, and the game counts as well
	map<int, int> fastTime, slowTime, gameCount, movesEachGameFast, movesEachGameSlow;

public:

	void printPegs(const vector<int>& pegA, const vector<int>& pegB, const vector<int>& pegC);
	void towerOfHanoi();
};


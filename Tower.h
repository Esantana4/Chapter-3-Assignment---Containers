#pragma once
#include <iostream>
#include <chrono>
#include <iomanip>
#include <vector>
#include <map>
#include <string>

using namespace std;

int inputInteger(string prompt, int start, bool greater);
char inputChar(string prompt, string options);
char inputChar(string prompt, char yes, char no);

class Tower
{
private:
	char option;

	int rings;
	int moves;
	int max_discs = 64;

	vector<int> A_Peg;
	vector<int> B_Peg;
	vector<int> C_Peg;


	char Peg1_choice;
	char Peg2_choice;

	// Maps to keep track of the game stats
	map<int, int> fast_time;
	map<int, int> slow_time;
	map<int, int> total_games;
	map<int, int> fastest_moves_each_game;
	map<int, int> slowest_moves_each_game;

public:

	void tower();
	void updatePegs(const vector<int>& A_Peg, const vector<int>& B_Peg, const vector<int>& C_Peg);
};


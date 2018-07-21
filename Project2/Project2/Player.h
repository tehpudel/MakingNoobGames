#pragma once
#include <string>

using namespace std;

class Player
{
public:
	Player(string name);

	string setName(string name);
	void printName();
private:
	string _name;
	int _appearance;
	int _health;
};


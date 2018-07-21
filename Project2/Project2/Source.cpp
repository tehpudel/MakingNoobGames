#include <iostream>
#include <string>

#include "Player.h"

using namespace std;

int main()
{
	string name;

	Player player1("noname");

	player1.setName(name);

	player1.printName();

	system("PAUSE");
	return 0;
}
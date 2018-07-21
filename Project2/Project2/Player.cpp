#include "Player.h"
#include <iostream>



Player::Player(string name)
{
	_name = name;
}


void Player::printName()
{
	cout << _name << endl;
}

string Player::setName(string name)
{
	string name;
	cout << "What is your name?\n\n";
	cin >> name;
	return name;
}
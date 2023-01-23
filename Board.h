#pragma once
#include<SFML\Graphics.hpp>
#include<vector>

using namespace std;

class Board
{
public:
	Board();
	void draw(sf::RenderWindow& window);

private:
	sf::Sprite board;
};



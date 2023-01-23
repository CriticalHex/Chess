#include "Board.h"
#include<iostream>

Board::Board() {
	sf::RenderTexture boardTex;
	boardTex.create(1080, 1080);
	boardTex.clear(sf::Color::Black);
	sf::RectangleShape white(sf::Vector2f(135, 135));
	sf::RectangleShape black(sf::Vector2f(135, 135));
	white.setFillColor(sf::Color::White);
	black.setFillColor(sf::Color::Black);
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (j % 2 == 0) {
				cout << j*135 << endl;
				white.setPosition(sf::Vector2f((j * 135), i * 135));
				boardTex.draw(white);
			}
		}
	}
	boardTex.display();
	board.setTexture(boardTex.getTexture());
	board.setPosition(420, 0);
}

void Board::draw(sf::RenderWindow& window) {
	window.draw(board);
}
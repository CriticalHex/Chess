#include<SFML/Graphics.hpp>
#include"Board.h"

using namespace std;

int main() {
	Board board;

	sf::RenderWindow window(sf::VideoMode(1920,1080), "Chess", sf::Style::Fullscreen);
	window.setFramerateLimit(60);

	sf::Event event;

	while (window.isOpen()) {

		while (window.pollEvent(event)) {

			if (event.type == sf::Event::Closed) {
				window.close();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::LControl)) {
				window.close();
			}

		}

		window.clear((sf::Color::Yellow));

		board.draw(window);

		window.display();
	}
}

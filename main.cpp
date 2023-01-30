#include "turtle.h"

#include <SFML/Graphics.hpp>

#include <iostream>
#include <string>

int main()
{
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    sf::RenderWindow window(sf::VideoMode(1024, 768,
        desktop.bitsPerPixel),
        "Turtle");

    while (window.isOpen()) {
        window.clear();

        sf::RectangleShape line(sf::Vector2f(100, 3));
        line.setPosition(sf::Vector2f(200, 100));
        line.rotate(45);
        window.draw(line);
        window.display();
    }

    return 0;
}

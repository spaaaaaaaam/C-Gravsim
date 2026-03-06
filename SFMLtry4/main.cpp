#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <optional>



int main() {
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML3 Test");

    while (window.isOpen()) {

        while (auto event = window.pollEvent()) {

            // Close only when the close event happens
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.display();
    }

    return 0;
}
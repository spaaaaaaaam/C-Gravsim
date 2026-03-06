#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <optional>

class grav_object {
public:
    
};


int main() {
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML3 Test");

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen()) {

        while (auto event = window.pollEvent()) {

            // Close only when the close event happens
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
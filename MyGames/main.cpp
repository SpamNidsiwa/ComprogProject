#include <SFML/Graphics.hpp>
#include "James.h"
#include "NestZ.h"
#include "Pound.h"
#include "Billy.h"
#include "Titi.h"
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(200, 200), "SFML works!");
    CircleShape shape(100.f);
    shape.setFillColor(Color::Green);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}

#include <SFML/Graphics.hpp>
#include <string>
#include "header/James.h"
#include "header/NestZ.h"
#include "header/Pound.h"
#include "header/Billy.h"
#include "header/Titi.h"
using namespace sf;
using namespace std;

const string GameName = "MyGame";
int windowWidth = 1200;
int windowHeight = 800;

int main()
{
    RenderWindow window(VideoMode(windowWidth, windowHeight), GameName);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }

    return 0;
}

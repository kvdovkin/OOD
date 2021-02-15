#include "DrawShapes.h"
using namespace sf;

void DrawShapes::DrawShape(forReadShapes shapes)
{
	RenderWindow window(sf::VideoMode({ 600, 600 }), "title");
	window.clear();

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        for (int i = 0; i < shapes.size(); ++i)
        {
            shapes[i]->Draw(window);
        }

        window.display();
    }
};
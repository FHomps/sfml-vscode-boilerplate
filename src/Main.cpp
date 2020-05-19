#include "Platform/Platform.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode(640, 480), "Main window");
	window.setFramerateLimit(60);

	sf::Event haps;

	while (window.isOpen())
	{
		while (window.pollEvent(haps))
		{
			if (haps.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color(20, 20, 30));
		window.display();
	}

	return 0;
}

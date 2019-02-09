/*
** EPITECH PROJECT, 2019
** my_main.cpp
** File description:
** my_main.cpp
*/

#include "Objects/map.hpp"
#include "Objects/tower.hpp"

using namespace std;

int displayer(Map *map)
{
    vector<sf::VideoMode> modes = sf::VideoMode::getFullscreenModes();
    sf::RenderWindow window(modes[0], "CPP_Defender");
    sf::Event event;
    while (window.isOpen())
    {
        window.setFramerateLimit(60);
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();
        }
        window.clear();
        map->upgrade();
        window.draw(map->background);
        map->player.money += 0.01;
        map->player.text.setString("money: " + to_string((int)(map->player.money)));
        window.draw(map->player.text);
        for (int i = 0; i < map->lgt; i++) {
            if (map->tower[i].type != 0) {
                map->tower[i].defense.setTexture(map->tower[i].texture);
                window.draw(map->tower[i].defense);
                map->tower[i].hitbox.setPosition((sf::Vector2f){map->tower[i].coord.x, map->tower[i].coord.y + 25});
            }
        }
        window.display();
    }
    return (0);
}

int main(int ag, char **av) {
    Map *map = NULL;
    map = new Map;

    if (!map->choose(ag, av))
        return (84);
    map->fill();
    displayer(map);
    return (0);
}
/*
** EPITECH PROJECT, 2019
** tower.cpp
** File description:
** tower.cpp
*/

#include "tower.hpp"

using namespace std;

Tower Tower::filler(sf::Vector2f pos) {
    Tower node;

    node.type = 0;
    node.level = 0;
    sf::CircleShape circle(75.f);
    node.coord = pos;
    node.hitbox = circle;
    node.hitbox.setPosition((sf::Vector2f){pos.x, pos.y + 100});
    node.defense.setPosition(pos);
    return (node);
}

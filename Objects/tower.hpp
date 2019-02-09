/*
** EPITECH PROJECT, 2019
** tower.hpp
** File description:
** tower.hpp
*/

#include <iostream>
#include <cstdio>
#include <SFML/Graphics.hpp>
#include <string>

#ifndef MY_TOWER_
    #define MY_TOWER_

class Tower
{
private:
    

public:

    int type;
    int level;
    sf::Sprite defense;
    sf::Texture texture;
    sf::CircleShape hitbox;
    sf::Vector2f coord;
    Tower filler(sf::Vector2f);
};

#endif
/*
** EPITECH PROJECT, 2019
** map.hpp
** File description:
** map.hpp
*/

#include "tower.hpp"
#include "player.hpp"
#include "sound.hpp"
#include <iostream>
#include <cstdio>
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>

#ifndef MY_MAP_
    #define MY_MAP_

typedef enum type_t
{
    MAP1,
    MAP2,
    MAP3,
    MAP4,
    MAP5,
    MAP6,
    MAP7,
    MAP8,
}type_t;

class Map
{
private:

    type_t level;

public:

    int lgt;
    sf::Sprite background;
    sf::Texture fond;
    std::vector<Tower> tower;
    Player player;
    Sound sound;
    Music music;
    int choose(int, char **);
    int fill(void);
    int upgrade(void);
};

#endif
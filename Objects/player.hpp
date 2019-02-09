/*
** EPITECH PROJECT, 2019
** player.hpp
** File description:
** player.hpp
*/

#include <iostream>
#include <cstdio>
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>

#ifndef MY_PLAYER_
    #define MY_PLAYER_

class Player
{
private:

public:

    float money;
    int vie;
    sf::Font font;
    sf::Text text;
    void initials(void);
};

#endif

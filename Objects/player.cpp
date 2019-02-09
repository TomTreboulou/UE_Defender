/*
** EPITECH PROJECT, 2019
** player.cpp
** File description:
** player.cpp
*/

#include "player.hpp"

using namespace std;

void Player::initials(void)
{
    this->money = 0;
    this->vie = 10;
    this->font.loadFromFile("Image/Signatra.ttf");
    this->text.setFont(this->font);
    this->text.setCharacterSize(50);
    this->text.setPosition((sf::Vector2f){1700, 0});
}
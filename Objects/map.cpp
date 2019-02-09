/*
** EPITECH PROJECT, 2019
** map.cpp
** File description:
** map.cpp
*/

#include "map.hpp"

using namespace std;

int Map::upgrade(void)
{
    sf::Vector2i local = sf::Mouse::getPosition();
    sf::FloatRect box;
    string str;
    bool click = (sf::Mouse::isButtonPressed(sf::Mouse::Left)) ? true : false;
    for (int i = 0; i < this->lgt && click == true; i++) {
        box = this->tower[i].hitbox.getGlobalBounds();
        if ((local.x > box.left && local.x < box.left + box.width) && (local.y > box.top && local.y < box.top + box.height) && this->tower[i].level < 6 && this->player.money >= 100) {
            this->player.money -= 100;
            this->tower[i].type = 1;
            this->tower[i].level += 1;
            str = "Image/Batiment/Tour/" + to_string(6 + this->tower[i].level) + ".png";
            this->tower[i].texture.loadFromFile(str);
        }
    }
    while(sf::Mouse::isButtonPressed(sf::Mouse::Left));
    return (0);
}

int Map::fill(void)
{
    switch (this->level)
    {
        case MAP1:
            this->tower.push_back(Tower());
            this->tower[0] = this->tower[0].filler((sf::Vector2f){90, 860});
            this->tower.push_back(Tower());
            this->tower[1] = this->tower[1].filler((sf::Vector2f){490, 860});
            this->tower.push_back(Tower());
            this->tower[2] = this->tower[2].filler((sf::Vector2f){750, 535});
            this->tower.push_back(Tower());
            this->tower[3] = this->tower[3].filler((sf::Vector2f){970, 310});
            this->tower.push_back(Tower());
            this->tower[4] = this->tower[4].filler((sf::Vector2f){1130, 570});
            this->tower.push_back(Tower());
            this->tower[5] = this->tower[5].filler((sf::Vector2f){1240, 860});
            this->tower.push_back(Tower());
            this->tower[6] = this->tower[6].filler((sf::Vector2f){1350, 260});
            this->tower.push_back(Tower());
            this->tower[7] = this->tower[7].filler((sf::Vector2f){1675, 340});
            this->tower.push_back(Tower());
            this->tower[8] = this->tower[8].filler((sf::Vector2f){1620, 860});
            break;
        case MAP2:
            this->tower.push_back(Tower());
            this->tower[0] = this->tower[0].filler((sf::Vector2f){220, 890});
            this->tower.push_back(Tower());
            this->tower[1] = this->tower[1].filler((sf::Vector2f){280, 575});
            this->tower.push_back(Tower());
            this->tower[2] = this->tower[2].filler((sf::Vector2f){210, 260});
            this->tower.push_back(Tower());
            this->tower[3] = this->tower[3].filler((sf::Vector2f){715, 210});
            this->tower.push_back(Tower());
            this->tower[4] = this->tower[4].filler((sf::Vector2f){1180, 165});
            this->tower.push_back(Tower());
            this->tower[5] = this->tower[5].filler((sf::Vector2f){1190, 500});
            this->tower.push_back(Tower());
            this->tower[6] = this->tower[6].filler((sf::Vector2f){1370, 810});
            this->tower.push_back(Tower());
            this->tower[7] = this->tower[7].filler((sf::Vector2f){1560, 500});
            break;
        case MAP3:
            this->tower.push_back(Tower());
            this->tower[0] = this->tower[0].filler((sf::Vector2f){800, 850});
            this->tower.push_back(Tower());
            this->tower[1] = this->tower[1].filler((sf::Vector2f){640, 520});
            this->tower.push_back(Tower());
            this->tower[2] = this->tower[2].filler((sf::Vector2f){940, 510});
            this->tower.push_back(Tower());
            this->tower[3] = this->tower[3].filler((sf::Vector2f){1370, 510});
            this->tower.push_back(Tower());
            this->tower[4] = this->tower[4].filler((sf::Vector2f){800, 170});
            this->tower.push_back(Tower());
            this->tower[5] = this->tower[5].filler((sf::Vector2f){1100, 170});
            this->tower.push_back(Tower());
            this->tower[6] = this->tower[6].filler((sf::Vector2f){1400, 170});
            this->tower.push_back(Tower());
            break;
        case MAP4:
            this->tower.push_back(Tower());
            this->tower[0] = this->tower[0].filler((sf::Vector2f){155, 660});
            this->tower.push_back(Tower());
            this->tower[1] = this->tower[1].filler((sf::Vector2f){470, 850});
            this->tower.push_back(Tower());
            this->tower[2] = this->tower[2].filler((sf::Vector2f){370, 460});
            this->tower.push_back(Tower());
            this->tower[3] = this->tower[3].filler((sf::Vector2f){690, 670});
            this->tower.push_back(Tower());
            this->tower[4] = this->tower[4].filler((sf::Vector2f){1235, 600});
            this->tower.push_back(Tower());
            this->tower[5] = this->tower[5].filler((sf::Vector2f){1050, 30});
            this->tower.push_back(Tower());
            this->tower[6] = this->tower[6].filler((sf::Vector2f){1445, 160});
            this->tower.push_back(Tower());
            this->tower[7] = this->tower[7].filler((sf::Vector2f){435, 125});
            break;
        case MAP5:
            this->tower.push_back(Tower());
            this->tower[0] = this->tower[0].filler((sf::Vector2f){465, 150});
            this->tower.push_back(Tower());
            this->tower[1] = this->tower[1].filler((sf::Vector2f){785, 150});
            this->tower.push_back(Tower());
            this->tower[2] = this->tower[2].filler((sf::Vector2f){1180, 180});
            this->tower.push_back(Tower());
            this->tower[3] = this->tower[3].filler((sf::Vector2f){980, 515});
            this->tower.push_back(Tower());
            this->tower[4] = this->tower[4].filler((sf::Vector2f){445, 600});
            this->tower.push_back(Tower());
            this->tower[5] = this->tower[5].filler((sf::Vector2f){620, 845});
            this->tower.push_back(Tower());
            this->tower[6] = this->tower[6].filler((sf::Vector2f){960, 850});
            this->tower.push_back(Tower());
            break;
        case MAP6:
            this->tower.push_back(Tower());
            this->tower[0] = this->tower[0].filler((sf::Vector2f){255, 565});
            this->tower.push_back(Tower());
            this->tower[1] = this->tower[1].filler((sf::Vector2f){610, 845});
            this->tower.push_back(Tower());
            this->tower[2] = this->tower[2].filler((sf::Vector2f){1200, 770});
            this->tower.push_back(Tower());
            this->tower[3] = this->tower[3].filler((sf::Vector2f){1400, 455});
            this->tower.push_back(Tower());
            this->tower[4] = this->tower[4].filler((sf::Vector2f){1440, 140});
            this->tower.push_back(Tower());
            this->tower[5] = this->tower[5].filler((sf::Vector2f){1095, 115});
            this->tower.push_back(Tower());
            this->tower[6] = this->tower[6].filler((sf::Vector2f){695, 145});
            this->tower.push_back(Tower());
            this->tower[7] = this->tower[7].filler((sf::Vector2f){930, 455});
            this->tower.push_back(Tower());
            this->tower[8] = this->tower[8].filler((sf::Vector2f){85, 70});
            break;
        case MAP7:
            this->tower.push_back(Tower());
            this->tower[0] = this->tower[0].filler((sf::Vector2f){60, 530});
            this->tower.push_back(Tower());
            this->tower[1] = this->tower[1].filler((sf::Vector2f){455, 500});
            this->tower.push_back(Tower());
            this->tower[2] = this->tower[2].filler((sf::Vector2f){805, 155});
            this->tower.push_back(Tower());
            this->tower[3] = this->tower[3].filler((sf::Vector2f){1495, 165});
            this->tower.push_back(Tower());
            this->tower[4] = this->tower[4].filler((sf::Vector2f){1160, 450});
            this->tower.push_back(Tower());
            this->tower[5] = this->tower[5].filler((sf::Vector2f){1560, 500});
            this->tower.push_back(Tower());
            this->tower[6] = this->tower[6].filler((sf::Vector2f){1500, 830});
            this->tower.push_back(Tower());
            break;
        case MAP8:
            this->tower.push_back(Tower());
            this->tower[0] = this->tower[0].filler((sf::Vector2f){470, 830});
            this->tower.push_back(Tower());
            this->tower[1] = this->tower[1].filler((sf::Vector2f){680, 570});
            this->tower.push_back(Tower());
            this->tower[2] = this->tower[2].filler((sf::Vector2f){800, 255});
            this->tower.push_back(Tower());
            this->tower[3] = this->tower[3].filler((sf::Vector2f){1210, 255});
            this->tower.push_back(Tower());
            this->tower[4] = this->tower[4].filler((sf::Vector2f){1610, 255});
            this->tower.push_back(Tower());
            this->tower[5] = this->tower[5].filler((sf::Vector2f){1120, 580});
            this->tower.push_back(Tower());
            this->tower[6] = this->tower[6].filler((sf::Vector2f){1545, 580});
            this->tower.push_back(Tower());
            break;
        default:
            break;
    }
    return (0);
}

int Map::choose(int ag, char **av)
{
    if (ag == 1) {
        this->level = MAP1;
        this->fond.loadFromFile("Image/Background/game_background_1/game_background_1.png");
        this->lgt = 9;
    } else if (ag == 2 && av[1][0] > 48 && av[1][0] < 57 && av[1][1] == '\0') {
        switch (atoi(av[1]))
        {
            case 1:
                this->level = MAP1;
                this->fond.loadFromFile("Image/Background/game_background_1/game_background_1.png");
                this->lgt = 9;
                break;
            case 2:
                this->level = MAP2;
                this->fond.loadFromFile("Image/Background/game_background_2/game_background_2.png");
                this->lgt = 8;
                break;
            case 3:
                this->level = MAP3;
                this->fond.loadFromFile("Image/Background/game_background_3/game_background_3.png");
                this->lgt = 7;
                break;
            case 4:
                this->level = MAP4;
                this->fond.loadFromFile("Image/Background/game_background_4/game_background_4.png");
                this->lgt = 8;
                break;
            case 5:
                this->level = MAP5;
                this->fond.loadFromFile("Image/Background/game_background_5/game_background_5.png");
                this->lgt = 8;
                break;
            case 6:
                this->level = MAP6;
                this->fond.loadFromFile("Image/Background/game_background_6/game_background_6.png");
                this->lgt = 9;
                break;
            case 7:
                this->level = MAP7;
                this->fond.loadFromFile("Image/Background/game_background_7/game_background_7.png");
                this->lgt = 7;
                break;
            case 8:
                this->level = MAP8;
                this->fond.loadFromFile("Image/Background/game_background_8/game_background_8.png");
                this->lgt = 7;
                break;
            default:
                break;
        }
    } else {
        cout << "Select a valid map (1-8)" << endl;
        return (0);
    }
    this->background.setTexture(this->fond);
    this->player.initials();
    return (1);
}

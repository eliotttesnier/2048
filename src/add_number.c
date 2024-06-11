/*
** EPITECH PROJECT, 2024
** 2048
** File description:
** add_number
*/

#include "header.h"

void add_number(gamedata_t *game)
{
    int x = my_random(0, TAB_SIZE - 1);
    int y = my_random(0, TAB_SIZE - 1);

    while (game->map[x][y] != 0) {
        x = my_random(0, TAB_SIZE - 1);
        y = my_random(0, TAB_SIZE - 1);
    }
    game->map[x][y] = (my_random(0, 9) < 9) ? 2 : 4;
}

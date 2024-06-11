/*
** EPITECH PROJECT, 2024
** 2048
** File description:
** merge
*/

#include "header.h"

bool merge_right(gamedata_t *game)
{
    bool merged = false;

    for (int i = 0; i < TAB_SIZE; i++) {
        for (int j = TAB_SIZE - 1; j > 0; j--) {
            if (game->map[i][j] == game->map[i][j - 1]) {
                game->map[i][j] *= 2;
                game->map[i][j - 1] = 0;
                merged = true;
            }
        }
    }
    return (merged);
}

bool merge_left(gamedata_t *game)
{
    bool merged = false;

    for (int i = 0; i < TAB_SIZE; i++) {
        for (int j = 0; j < TAB_SIZE - 1; j++) {
            if (game->map[i][j] == game->map[i][j + 1]) {
                game->map[i][j] *= 2;
                game->map[i][j + 1] = 0;
                merged = true;
            }
        }
    }
    return (merged);
}

bool merge_down(gamedata_t *game)
{
    bool merged = false;

    for (int i = TAB_SIZE - 1; i > 0; i--) {
        for (int j = 0; j < TAB_SIZE; j++) {
            if (game->map[i][j] == game->map[i - 1][j]) {
                game->map[i][j] *= 2;
                game->map[i - 1][j] = 0;
                merged = true;
            }
        }
    }
    return (merged);
}

bool merge_up(gamedata_t *game)
{
    bool merged = false;

    for (int i = 0; i < TAB_SIZE; i++) {
        for (int j = 0; j < TAB_SIZE - 1; j++) {
            if (game->map[j][i] == game->map[j + 1][i]) {
                game->map[j][i] *= 2;
                game->map[j + 1][i] = 0;
                merged = true;
            }
        }
    }
    return (merged);
}

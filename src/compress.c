/*
** EPITECH PROJECT, 2024
** 2048
** File description:
** compress
*/

#include "header.h"

bool compress_right(gamedata_t *game)
{
    bool moved = false;

    for (int i = 0; i < TAB_SIZE; i++) {
        for (int j = TAB_SIZE - 1; j > 0; j--) {
            if (game->map[i][j] == 0) {
                for (int k = j - 1; k >= 0; k--) {
                    if (game->map[i][k] != 0) {
                        game->map[i][j] = game->map[i][k];
                        game->map[i][k] = 0;
                        moved = true;
                        break;
                    }
                }
            }
        }
    }
    return (moved);
}

bool compress_left(gamedata_t *game)
{
    bool moved = false;

    for (int i = 0; i < TAB_SIZE; i++) {
        for (int j = 0; j < TAB_SIZE - 1; j++) {
            if (game->map[i][j] == 0) {
                for (int k = j + 1; k < TAB_SIZE; k++) {
                    if (game->map[i][k] != 0) {
                        game->map[i][j] = game->map[i][k];
                        game->map[i][k] = 0;
                        moved = true;
                        break;
                    }
                }
            }
        }
    }
    return (moved);
}

bool compress_down(gamedata_t *game)
{
    bool moved = false;

    for (int i = 0; i < TAB_SIZE; i++) {
        for (int j = TAB_SIZE - 1; j > 0; j--) {
            if (game->map[j][i] == 0) {
                for (int k = j - 1; k >= 0; k--) {
                    if (game->map[k][i] != 0) {
                        game->map[j][i] = game->map[k][i];
                        game->map[k][i] = 0;
                        moved = true;
                        break;
                    }
                }
            }
        }
    }
    return (moved);
}

bool compress_up(gamedata_t *game)
{
    bool moved = false;

    for (int i = 0; i < TAB_SIZE; i++) {
        for (int j = 0; j < TAB_SIZE - 1; j++) {
            if (game->map[j][i] == 0) {
                for (int k = j + 1; k < TAB_SIZE; k++) {
                    if (game->map[k][i] != 0) {
                        game->map[j][i] = game->map[k][i];
                        game->map[k][i] = 0;
                        moved = true;
                        break;
                    }
                }
            }
        }
    }
    return (moved);
}

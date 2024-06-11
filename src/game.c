/*
** EPITECH PROJECT, 2024
** DinoGame
** File description:
** dinoGame
*/

#include "header.h"

gamedata_t *create_game(void)
{
    gamedata_t *game = malloc(sizeof(gamedata_t));

    game->map = malloc(sizeof(int *) * TAB_SIZE);
    for (int i = 0; i < TAB_SIZE; i++) {
        game->map[i] = malloc(sizeof(int) * TAB_SIZE);
        for (int j = 0; j < TAB_SIZE; j++)
            game->map[i][j] = 0;
    }
    game->maxNumber = 0;
    return (game);
}

int get_max_number(gamedata_t *game)
{
    int max = 0;

    for (int i = 0; i < TAB_SIZE; i++) {
        for (int j = 0; j < TAB_SIZE; j++) {
            if (game->map[i][j] > max)
                max = game->map[i][j];
        }
    }
    return (max);
}

bool game_finished(gamedata_t *game)
{
    for (int i = 0; i < TAB_SIZE; i++) {
        for (int j = 0; j < TAB_SIZE; j++) {
            if (game->map[i][j] == 0)
                return (false);
            if (i < TAB_SIZE - 1 && game->map[i][j] == game->map[i + 1][j])
                return (false);
            if (j < TAB_SIZE - 1 && game->map[i][j] == game->map[i][j + 1])
                return (false);
        }
    }
    return (true);
}

int game(void)
{
    gamedata_t *game = create_game();

    add_number(game);
    while (true) {
        game->maxNumber = get_max_number(game);
        if (game_finished(game))
            break;
        display(game);
        event(game);
    };
    return 0;
}

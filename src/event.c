/*
** EPITECH PROJECT, 2024
** 2048
** File description:
** event
*/

#include "header.h"

void right(gamedata_t *game)
{
    bool compressed = compress_right(game);
    bool merged = merge_right(game);

    if (!compressed && !merged)
        return;
    compress_right(game);
    add_number(game);
}

void left(gamedata_t *game)
{
    bool compressed = compress_left(game);
    bool merged = merge_left(game);

    if (!compressed && !merged)
        return;
    compress_left(game);
    add_number(game);
}

void down(gamedata_t *game)
{
    bool compressed = compress_down(game);
    bool merged = merge_down(game);

    if (!compressed && !merged)
        return;
    compress_down(game);
    add_number(game);
}

void up(gamedata_t *game)
{
    bool compressed = compress_up(game);
    bool merged = merge_up(game);

    if (!compressed && !merged)
        return;
    compress_up(game);
    add_number(game);
}

void event(gamedata_t *game)
{
    char *input = NULL;
    size_t size = 0;

    getline(&input, &size, stdin);
    if (strcmp("z\n", input) == 0)
        up(game);
    if (strcmp("s\n", input) == 0)
        down(game);
    if (strcmp("q\n", input) == 0)
        left(game);
    if (strcmp("d\n", input) == 0)
        right(game);
}

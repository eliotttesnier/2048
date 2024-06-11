/*
** EPITECH PROJECT, 2024
** 2048
** File description:
** display
*/

#include "header.h"

void print_line(void)
{
    for (int i = 0; i < (TAB_SIZE * 16) + 1; i++)
        printf("-");
    printf("\n");
}

void chose_color(int nb)
{
    switch (nb) {
    case 0:
        printf(ANSI_COLOR_RESET);
        break;
    case 2:
        printf(ANSI_COLOR_RED);
        break;
    case 4:
        printf(ANSI_COLOR_GREEN);
        break;
    case 8:
        printf(ANSI_COLOR_YELLOW);
        break;
    case 16:
        printf(ANSI_COLOR_BLUE);
        break;
    case 32:
        printf(ANSI_COLOR_MAGENTA);
        break;
    case 64:
        printf(ANSI_COLOR_CYAN);
        break;
    case 128:
        printf(ANSI_COLOR_WHITE);
        break;
    case 256:
        printf(ANSI_COLOR_BRIGHT_RED);
        break;
    case 512:
        printf(ANSI_COLOR_BRIGHT_GREEN);
        break;
    case 1024:
        printf(ANSI_COLOR_BRIGHT_YELLOW);
        break;
    case 2048:
        printf(ANSI_COLOR_BRIGHT_BLUE);
        break;
    default:
        printf(ANSI_COLOR_BRIGHT_MAGENTA);
        break;
    }
}

void display(gamedata_t *game)
{
    system("clear");
    printf("\n\n\n");
    printf("        Max number: %d\n\n", game->maxNumber);
    print_line();
    printf("\n\n\n");
    for (int i = 0; i < TAB_SIZE; i++) {
        printf("|");
        for (int j = 0; j < TAB_SIZE; j++) {
            chose_color(game->map[i][j]);
            printf("%8d%-8c", game->map[i][j], ' ');
            printf(ANSI_COLOR_RESET);
        }
        printf("|");
        printf("\n\n\n");
    }
    print_line();
}

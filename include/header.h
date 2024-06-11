/*
** EPITECH PROJECT, 2024
** rpg
** File description:
** rpg_header
*/

#pragma once

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

#include <SFML/Audio.h>
#include "math.h"
#include "ncurses.h"

#include "debug_header.h"
#include "macro.h"
#include "struct.h"

#define TAB_SIZE 4

//Game
int game(void);

//events
void event(gamedata_t *game);

//displays
void display(gamedata_t *game);

//process
void add_number(gamedata_t *game);
bool compress_right(gamedata_t *game);
bool compress_left(gamedata_t *game);
bool compress_down(gamedata_t *game);
bool compress_up(gamedata_t *game);
bool merge_right(gamedata_t *game);
bool merge_left(gamedata_t *game);
bool merge_down(gamedata_t *game);
bool merge_up(gamedata_t *game);

//animations

//Functions
char *my_itoa(int nbr);
int my_nbrlen(int nbr);
int my_random(int min, int max);
char **str_to_array(char *line, char *ban);

//save
void save(gamedata_t *game);

//load

//free

//SFX

/*
** EPITECH PROJECT, 2024
** RPG
** File description:
** struct_header
*/

#pragma once

#include "header.h"

typedef struct animation_s {
    sfClock *clock;
} animation_t;

#define NB_SFX 1

typedef enum sfx_e {
    SFX = 0,
} sfx_enum_t;

typedef struct sfx_s {
    sfMusic *sounds[NB_SFX];
} sfx_t;

typedef struct gamedata_s {
    struct sfx_s *sfx;
    int **map;
    int maxNumber;
} gamedata_t;

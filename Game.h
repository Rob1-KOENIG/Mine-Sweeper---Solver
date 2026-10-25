#include "stdio.h"
#include "stdlib.h"

typedef struct Map {
    int size;
    int **grid;
} Map;

typedef struct Game {
    int score;
    int level;
    bool mode;
    char playerName[50];
} Game;


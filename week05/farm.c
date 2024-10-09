// Farmer's Farm
// part1_farm.c
//
// This program was written by Pat Chambers (z5264081)
// on 9/10/24
//
// This program is a simple game that allows the user to build a farm.
// The user can place barns, trees, and coops in the farm.

#include <stdio.h>

#define SIZE 5
#define DEFAULT_POINTS -10

enum entity_type {
    COOP,
    BARN,
    TREE,
    FARMER,
    EMPTY,
};

struct farm_entity {
    enum entity_type entity;
    int points;
};

void print_farm(struct farm_entity farm[SIZE][SIZE]);
void initialise_farm(struct farm_entity farm[SIZE][SIZE]);

int main(void) {
    struct farm_entity farm[SIZE][SIZE];


    // TODO: Initialise the farm
    initialise_farm(farm);

    // TODO: Place the barns (b [row] [col] [points]) and trees (t [row] [col]) 
    // in the farm until 'q' is entered
    printf("Enter barns and trees:\n");
    char input;
    scanf(" %c", &input);
    while (input != 'q') {
        if (input == 'b') {
            int row;
            int col;
            int points;
            scanf("%d %d %d", &row, &col, &points);
            farm[row][col].entity = BARN;
            farm[row][col].points = points;
        } else if (input == 't') {
            int row;
            int col;
            scanf("%d %d", &row, &col);
            farm[row][col].entity = TREE;
        }
        scanf(" %c", &input);
    }

    // TODO: Place the farmer in the farm ([row] [col])
    printf("Enter the starting position of the farmer: ");
    int start_row;
    int start_col;
    scanf("%d %d", &start_row, &start_col);
    farm[start_row][start_col].entity = FARMER;

    // TODO: Place the coops in the farm ([row] [col] [points]) until 'ctrl-d' 
    // is pressed
    printf("Enter the position and points of the coop(s):\n");
    int coop_row;
    int coop_col;
    int coop_points;
    while (scanf("%d %d %d", &coop_row, &coop_col, &coop_points) == 3) {
        farm[coop_row][coop_col].entity = COOP;
        farm[coop_row][coop_col].points = coop_points;
    }

    // TODO: Print the farm
    print_farm(farm);

    return 0;
}

// Function prints the map of the farm
//
// Parameters:
// - farm: the 2D array representing the farm
//
// returns: nothing
void print_farm(struct farm_entity farm[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (farm[i][j].entity == FARMER) {
                printf(" X ");
            } else if (farm[i][j].entity == EMPTY) {
                printf("   ");
            } else if (farm[i][j].entity == COOP) {
                printf(" o ");
            } else if (farm[i][j].entity == BARN) {
                printf(" # ");
            } else if (farm[i][j].entity == TREE) {
                printf(" T ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}

// Initialise each struct farm_entity in `farm` to default values - entity is 
// initialised to EMPTY and points to DEFAULT_POINTS
// Returns nothing
void initialise_farm(struct farm_entity farm[SIZE][SIZE]) {
    
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            farm[row][col].entity = EMPTY;
            farm[row][col].points = DEFAULT_POINTS;
        }
    }
}